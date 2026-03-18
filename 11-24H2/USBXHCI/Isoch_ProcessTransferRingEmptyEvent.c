/*
 * XREFs of Isoch_ProcessTransferRingEmptyEvent @ 0x1400129F4
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x140011E20 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     ESM_AddEsmEvent @ 0x140005BC0 (ESM_AddEsmEvent.c)
 *     Isoch_MapTransfers @ 0x14000DF10 (Isoch_MapTransfers.c)
 *     Controller_GetFrameNumber @ 0x140012BF0 (Controller_GetFrameNumber.c)
 *     WPP_RECORDER_SF_DDDL @ 0x140013A1C (WPP_RECORDER_SF_DDDL.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
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
  int v12; // edx
  __int64 v13; // rcx

  v4 = 0;
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 1LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL),
      *(unsigned __int8 *)(a2 + 11),
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL));
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
      v12 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
        v12,
        14,
        39,
        (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL));
      v10 = *(_BYTE *)(a1 + 104);
    }
    v4 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
  if ( v4 )
  {
    v13 = *(_QWORD *)(a1 + 56);
    _m_prefetchw((const void *)(v13 + 32));
    result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(v13 + 32), 1u);
    if ( (result & 1) == 0 )
      return ESM_AddEsmEvent(v13);
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
