/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x140015CC8
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x140016760 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dD @ 0x14000D338 (WPP_RECORDER_SF_dD.c)
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     Controller_GetFrameNumber @ 0x140015B50 (Controller_GetFrameNumber.c)
 *     Isoch_MapTransfers @ 0x14001CB10 (Isoch_MapTransfers.c)
 *     WPP_RECORDER_SF_DDDL @ 0x1400301FC (WPP_RECORDER_SF_DDDL.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Isoch_ProcessTransferRingEmptyEvent(__int64 a1, __int64 a2)
{
  char v4; // bp
  int FrameNumber; // esi
  KIRQL v6; // al
  int v7; // ecx
  unsigned int v8; // ecx
  int v9; // r9d
  KIRQL v10; // dl
  __int64 result; // rax
  __int64 v12; // rcx

  v4 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(unsigned __int8 *)(a2 + 11),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL));
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 336);
  ++*(_DWORD *)(a1 + 276);
  v8 = v7 & 0xFFFFFFEF;
  v9 = *(_DWORD *)(a1 + 384);
  *(_BYTE *)(a1 + 104) = v6;
  *(_DWORD *)(a1 + 336) = v8;
  if ( !v9 )
  {
    v8 &= ~0x20u;
    *(_DWORD *)(a1 + 336) = v8;
  }
  v10 = v6;
  if ( _bittest64((const signed __int64 *)(*(_QWORD *)(a1 + 40) + 736LL), 0x2Au)
    && v9
    && (v8 & 0x20) != 0
    && FrameNumber - *(_DWORD *)(a1 + 372) >= 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        4u,
        0xEu,
        0x27u,
        (__int64)&WPP_dd4fc339be0d3de3d8d0a5a4ecea6bb9_Traceguids,
        *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      v10 = *(_BYTE *)(a1 + 104);
    }
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  if ( v4 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v12 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v12 + 32), 1u);
    if ( (result & 1) == 0 )
      return ESM_AddEsmEvent(v12);
  }
  else
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 356), 1);
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 108), 3, 4);
    if ( (_DWORD)result == 4 )
    {
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01033 + 2560))(
        WdfDriverGlobals,
        *(_QWORD *)(a1 + 328),
        0LL);
      return Isoch_MapTransfers(a1);
    }
  }
  return result;
}
