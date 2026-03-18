/*
 * XREFs of Control_WdfEvtRequestCancel @ 0x14004C610
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEsmEvent @ 0x140012218 (ESM_AddEsmEvent.c)
 *     TR_QueueDpcForTransferCompletion @ 0x140020D34 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDi @ 0x1400370AC (WPP_RECORDER_SF_DDi.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Control_WdfEvtRequestCancel(__int64 a1)
{
  char v2; // si
  char v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rcx
  KIRQL v7; // al
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]

  v2 = 0;
  v3 = 0;
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006AE88);
  v5 = *(_QWORD *)(v4 + 56);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = *(_QWORD *)(v5 + 56);
    v10 = *(_DWORD *)(v6 + 144);
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL);
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(v6 + 80),
      4u,
      *(unsigned __int8 *)(*(_QWORD *)(v5 + 48) + 135LL),
      0x2Au,
      (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
      v9,
      v10,
      a1);
  }
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  *(_BYTE *)(v5 + 104) = v7;
  if ( *(_DWORD *)(v4 + 112) == 1 )
  {
    if ( (*(_DWORD *)(v5 + 368) & 8) != 0 )
      v2 = 1;
    else
      v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), v7);
  if ( v3 )
  {
    v8 = *(_QWORD *)(v5 + 56);
    _m_prefetchw((const void *)(v8 + 32));
    if ( (_InterlockedOr((volatile signed __int32 *)(v8 + 32), 1u) & 1) == 0 )
      ESM_AddEsmEvent(v8);
  }
  *(_BYTE *)(v5 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v5 + 96));
  if ( *(_DWORD *)(v4 + 112) == 2 && (!v3 || (*(_DWORD *)(v5 + 368) & 0xA) != 0) )
    v2 = 1;
  *(_DWORD *)(v4 + 112) = 3;
  KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 96), *(_BYTE *)(v5 + 104));
  if ( v2 )
    TR_QueueDpcForTransferCompletion((_QWORD *)v5);
}
