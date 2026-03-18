/*
 * XREFs of Bulk_FindStage @ 0x140016194
 * Callers:
 *     Bulk_ProcessStreamOnEndpointStopOrHalt @ 0x140015FFC (Bulk_ProcessStreamOnEndpointStopOrHalt.c)
 *     Bulk_ProcessTransferEventWithED0 @ 0x140017A48 (Bulk_ProcessTransferEventWithED0.c)
 *     Bulk_ProcessTransferEventWithED1 @ 0x140019A00 (Bulk_ProcessTransferEventWithED1.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x140001D34 (WPP_RECORDER_SF_ddL.c)
 *     Bulk_DoesStageContainDequeuePointer @ 0x1400163C0 (Bulk_DoesStageContainDequeuePointer.c)
 *     StageQueue_ForwardScanGetNextStage @ 0x1400164C0 (StageQueue_ForwardScanGetNextStage.c)
 *     WPP_RECORDER_SF_DDDqq @ 0x140023030 (WPP_RECORDER_SF_DDDqq.c)
 */

char __fastcall Bulk_FindStage(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  char v5; // di
  int v7; // r15d
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 *v11; // r14
  __int64 NextStage; // rax
  int v13; // r8d
  int v14; // edx

  v5 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + 16LL * *(unsigned int *)(a1 + 192);
  if ( a2 )
  {
    if ( a2 == v9 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ddL(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          4u,
          0xEu,
          0x31u,
          (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64));
      v7 = *(_DWORD *)(a1 + 356);
LABEL_6:
      v5 = 1;
      goto LABEL_7;
    }
    v11 = *(__int64 **)(a1 + 376);
LABEL_9:
    if ( (__int64 *)(a1 + 376) != v11 )
    {
      *((_BYTE *)v11 + 133) = *((_BYTE *)v11 + 132);
      *((_BYTE *)v11 + 134) = *((_BYTE *)v11 + 130);
      while ( 1 )
      {
        NextStage = StageQueue_ForwardScanGetNextStage(v11 + 16);
        v8 = NextStage;
        if ( !NextStage )
        {
          v11 = (__int64 *)*v11;
          goto LABEL_9;
        }
        if ( (unsigned __int8)Bulk_DoesStageContainDequeuePointer(NextStage, a2) )
          break;
        ++v7;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v14) = 5;
        WPP_RECORDER_SF_DDDqq(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL), v14, v13, 50);
      }
      goto LABEL_6;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      4u,
      0xEu,
      0x30u,
      (__int64)&WPP_af203940883a35574f6554fa7269ecc3_Traceguids,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
      *(_DWORD *)(a1 + 64));
  }
LABEL_7:
  *a3 = v8 & -(__int64)(v5 != 0);
  *a4 = v5 != 0 ? v7 : 0;
  return v5;
}
