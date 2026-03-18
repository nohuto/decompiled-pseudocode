/*
 * XREFs of VfReportIssueWithOptions @ 0x140612434
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140B84A18 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B84B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B84BC0 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B84C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140B84CE8 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140B84D80 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B84E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B84EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B84F40 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B84FC0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140B85AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B85DB0 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B86140 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B86230 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140B86BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B86F30 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B87310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B874C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B87690 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140B880B8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140B88474 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140B88624 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140B888B0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140B889E0 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140B88E98 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140B88FD8 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140B890EC (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140B89650 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B89A1C (ViReleaseDmaAdapter.c)
 *     ViDeadlockAddResource @ 0x140B98880 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140B98BE4 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140B99DFC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140B99F9C (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140BA75AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BA83C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     DbgPrompt @ 0x1405E7670 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14061029C (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     VfErrorReleaseTriageInformation @ 0x140B934B0 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140B935E0 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(
        ULONG a1,
        ULONG_PTR a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        ULONG_PTR a5,
        _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v7; // esi
  int v8; // ebp
  int v10; // r14d
  int v11; // r10d
  int v12; // eax

  v6 = Response;
  v7 = a4;
  v8 = a3;
  v10 = a2;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (((v11 & 8) == 0) & !_bittest(&VfOptionFlags, 9u)) != 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
            DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
            if ( (_BYTE)Response != 66 )
            {
              switch ( (_BYTE)Response )
              {
                case 'I':
                  return;
                case 'R':
                  goto LABEL_17;
                case 'W':
                  goto LABEL_14;
              }
              if ( (_BYTE)Response != 98 )
                break;
            }
            v12 = VfErrorStoreTriageInformation(a1, v10, v8, v7, a5);
            __debugbreak();
            if ( v12 )
              VfErrorReleaseTriageInformation();
          }
          if ( (_BYTE)Response == 105 )
            return;
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_17:
        *v6 = 0;
      }
    }
    else
    {
      CarReportRuleViolationFromNt(a1, a2, a3, a4, a5, 5, 0LL);
    }
  }
}
