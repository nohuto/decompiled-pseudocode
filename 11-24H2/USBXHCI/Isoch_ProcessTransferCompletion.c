/*
 * XREFs of Isoch_ProcessTransferCompletion @ 0x14004C3B0
 * Callers:
 *     Isoch_WdfEvtDpcForTransferCompletion @ 0x14004C580 (Isoch_WdfEvtDpcForTransferCompletion.c)
 *     Isoch_WdfEvtWorkItemForTransferCompletion @ 0x14004C820 (Isoch_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     TR_TransfersReclaimed @ 0x140005B10 (TR_TransfersReclaimed.c)
 *     WPP_RECORDER_SF_dD @ 0x14001BF58 (WPP_RECORDER_SF_dD.c)
 *     Isoch_CompleteTransfers @ 0x140022988 (Isoch_CompleteTransfers.c)
 *     Isoch_DoesDriverOwnRequests @ 0x14003CBB0 (Isoch_DoesDriverOwnRequests.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 */

void __fastcall Isoch_ProcessTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // al
  KIRQL v6; // r8
  int v7; // edx
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h] BYREF
  __int64 *v12; // [rsp+48h] [rbp-10h]

  v1 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         a1,
         off_14006B1F0);
  v12 = &v11;
  v11 = (__int64)&v11;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
  *(_BYTE *)(v2 + 104) = v3;
  if ( *(_BYTE *)(v2 + 340) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
  }
  else
  {
    *(_BYTE *)(v2 + 340) = 1;
    v4 = v2 + 424;
    do
    {
      if ( *(_QWORD *)v4 != v4 )
      {
        *v12 = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v12;
        **(_QWORD **)(v2 + 432) = &v11;
        v12 = *(__int64 **)(v2 + 432);
        *(_QWORD *)(v2 + 432) = v2 + 424;
        *(_QWORD *)v4 = v4;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
      Isoch_CompleteTransfers(v2, &v11);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 104) = v5;
      v6 = v5;
    }
    while ( *(_QWORD *)v4 != v4 );
    if ( (*(_DWORD *)(v2 + 336) & 8) != 0 && !Isoch_DoesDriverOwnRequests((_QWORD *)v2) )
    {
      v1 = 1;
      *(_DWORD *)(v2 + 336) = v7 & 0xFFFFFFF7;
    }
    *(_BYTE *)(v2 + 340) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v6);
    if ( v1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v8 = *(_QWORD *)(v2 + 56);
          v10 = *(_DWORD *)(v8 + 152);
          v9 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + 143LL);
          WPP_RECORDER_SF_dD(
            *(_QWORD *)(v8 + 80),
            5u,
            0xEu,
            0x2Bu,
            (__int64)&WPP_a544ec2031ab38ea754da1bebf3d0b4a_Traceguids,
            v9,
            v10);
        }
      }
      TR_TransfersReclaimed(v2);
    }
  }
}
