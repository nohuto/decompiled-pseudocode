/*
 * XREFs of VfReportIssueWithOptions @ 0x1406109F4
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140B86A18 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140B86B24 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140B86BC0 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140B86C54 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140B86CE8 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140B86D80 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140B86E20 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140B86EB4 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140B86F40 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140B86FC0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140B87AB0 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140B87DB0 (VfBuildScatterGatherListEx.c)
 *     VfCreateCommonBufferFromMdl @ 0x140B88140 (VfCreateCommonBufferFromMdl.c)
 *     VfFlushAdapterBuffers @ 0x140B88230 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x140B88BE0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140B88F30 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140B89310 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140B894C0 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x140B89690 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x140B8A0B8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140B8A474 (ViCheckPadding.c)
 *     ViCheckTag @ 0x140B8A624 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140B8A8B0 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x140B8A9E0 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140B8AE98 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140B8AFD8 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaAdapter @ 0x140B8B0EC (ViGetRealDmaAdapter.c)
 *     ViMapDoubleBuffer @ 0x140B8B650 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x140B8BA1C (ViReleaseDmaAdapter.c)
 *     ViDeadlockAddResource @ 0x140B9A880 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140B9ABE4 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140B9BDFC (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140B9BF9C (ViDeadlockRemoveThread.c)
 *     VfDeadlockReleaseResource @ 0x140BA95AC (VfDeadlockReleaseResource.c)
 *     VfDeadlockAcquireResource @ 0x140BAA3C4 (VfDeadlockAcquireResource.c)
 * Callees:
 *     DbgPrompt @ 0x1405E4C60 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14060E85C (VfUtilDbgPrint.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     VfErrorReleaseTriageInformation @ 0x140B954B0 (VfErrorReleaseTriageInformation.c)
 *     VfErrorStoreTriageInformation @ 0x140B955E0 (VfErrorStoreTriageInformation.c)
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
