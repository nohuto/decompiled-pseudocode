/*
 * XREFs of Bulk_ProcessTransferCompletion @ 0x140011A88
 * Callers:
 *     Bulk_WdfEvtDpcForTransferCompletion @ 0x140011A50 (Bulk_WdfEvtDpcForTransferCompletion.c)
 *     Bulk_WdfEvtWorkItemForTransferCompletion @ 0x14004DC50 (Bulk_WdfEvtWorkItemForTransferCompletion.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Bulk_CompleteTransfers @ 0x140011C6C (Bulk_CompleteTransfers.c)
 *     TR_TransfersReclaimed @ 0x140012104 (TR_TransfersReclaimed.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

void __fastcall Bulk_ProcessTransferCompletion(__int64 a1)
{
  char v1; // bp
  __int64 v2; // rbx
  KIRQL v3; // al
  __int64 v4; // rdi
  KIRQL v5; // al
  int v6; // edx
  __int64 v7; // rcx
  int v8; // [rsp+28h] [rbp-30h]
  int v9; // [rsp+30h] [rbp-28h]
  int v10; // [rsp+38h] [rbp-20h]
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
  if ( *(_BYTE *)(v2 + 336) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v3);
  }
  else
  {
    *(_BYTE *)(v2 + 336) = 1;
    v4 = v2 + 408;
    do
    {
      if ( *(_QWORD *)v4 != v4 )
      {
        *v12 = *(_QWORD *)v4;
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v12;
        **(_QWORD **)(v2 + 416) = &v11;
        v12 = *(__int64 **)(v2 + 416);
        *(_QWORD *)(v2 + 416) = v2 + 408;
        *(_QWORD *)v4 = v4;
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), *(_BYTE *)(v2 + 104));
      Bulk_CompleteTransfers(v2, &v11);
      v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_BYTE *)(v2 + 104) = v5;
    }
    while ( *(_QWORD *)v4 != v4 );
    v6 = *(_DWORD *)(v2 + 332);
    if ( (v6 & 0x40) != 0 && *(_QWORD *)(v2 + 376) == v2 + 376 && *(_QWORD *)(v2 + 392) == v2 + 392 )
    {
      v1 = 1;
      *(_DWORD *)(v2 + 332) = v6 & 0xFFFFFFBF;
    }
    *(_BYTE *)(v2 + 336) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
    if ( v1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v7 = *(_QWORD *)(v2 + 56);
          v10 = *(_DWORD *)(v2 + 64);
          v9 = *(_DWORD *)(v7 + 144);
          v8 = *(unsigned __int8 *)(*(_QWORD *)(v2 + 48) + 135LL);
          WPP_RECORDER_SF_ddL(
            *(_QWORD *)(v7 + 80),
            5u,
            0xEu,
            0x10u,
            (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
            v8,
            v9,
            v10);
        }
      }
      TR_TransfersReclaimed(v2);
    }
  }
}
