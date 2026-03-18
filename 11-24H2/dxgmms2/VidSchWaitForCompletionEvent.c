/*
 * XREFs of VidSchWaitForCompletionEvent @ 0x1400B5584
 * Callers:
 *     VidSchiCompletePendingCommandInNodeHwQueue @ 0x1400190D4 (VidSchiCompletePendingCommandInNodeHwQueue.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x14001F968 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     VidSchiWaitFlushCompletion @ 0x1400B510C (VidSchiWaitFlushCompletion.c)
 *     VidSchFlushDevice @ 0x1400B5320 (VidSchFlushDevice.c)
 *     VidSchiAllocateDmaPacket @ 0x1400B67D0 (VidSchiAllocateDmaPacket.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400B6C90 (VidSchiSubmitRenderVirtualCommand.c)
 *     WaitDmaBufferNotBusy @ 0x1400B7760 (WaitDmaBufferNotBusy.c)
 *     VidSchSubmitCommand @ 0x1400D2850 (VidSchSubmitCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1400E2E98 (VidSchSubmitPagingCommand.c)
 *     VidSchiAllocateQueuePacket @ 0x1400E4AC0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E4CE0 (VidSchiAllocateHwQueuePacket.c)
 *     VidSchWaitForQueuedPresentLimit @ 0x1400F0C50 (VidSchWaitForQueuedPresentLimit.c)
 *     VidSchBlockUntilNoUnorderedWaitsInDevice @ 0x140101A40 (VidSchBlockUntilNoUnorderedWaitsInDevice.c)
 *     VidSchiWaitForDrainFlipQueue @ 0x140103778 (VidSchiWaitForDrainFlipQueue.c)
 *     ?WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z @ 0x1401040E4 (-WaitOnAllocationPresentQueue@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MULTI_ALLOC@@I@Z.c)
 *     VidSchiWaitForCompletePreemption @ 0x140105610 (VidSchiWaitForCompletePreemption.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x140111638 (VidSchiWaitForEmptyHwQueue.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x140008038 (McTemplateK0q_EtwWriteTransfer.c)
 *     VidSchIsTDRPending @ 0x140034DF0 (VidSchIsTDRPending.c)
 *     VidSchiCheckTimeoutForced @ 0x140034E10 (VidSchiCheckTimeoutForced.c)
 *     VidSchiReportHwHang @ 0x140044F38 (VidSchiReportHwHang.c)
 *     VidSchWaitForEvents @ 0x140048CFC (VidSchWaitForEvents.c)
 *     VidSchiPrepareToResetEngine @ 0x1400A67D4 (VidSchiPrepareToResetEngine.c)
 *     VidSchiResetEngines @ 0x1400A690C (VidSchiResetEngines.c)
 */

__int64 __fastcall VidSchWaitForCompletionEvent(__int64 a1, __int64 a2, int a3)
{
  int v5; // ecx
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // eax
  int v9; // ebx
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 *v13; // rbp
  __int64 v14; // r13
  int v15; // r14d
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+30h] [rbp-48h]
  __int64 v22; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp+20h] BYREF

  v22 = 0LL;
  if ( bTracingEnabled && a3 != -1 && (byte_140081241 & 1) != 0 )
    McTemplateK0q_EtwWriteTransfer();
  v5 = *(_DWORD *)(a2 + 32);
  v6 = 0LL;
  if ( (v5 & 0x40) != 0 )
  {
    v12 = *(unsigned int *)(a2 + 48);
    v13 = *(__int64 **)(a1 + 688);
    if ( (unsigned int)v12 < *(_DWORD *)(a1 + 760) )
      v13 += v12;
    v6 = *v13;
  }
  else if ( (v5 & 2) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 96LL);
  }
  else if ( (v5 & 4) != 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)(a2 + 24) + 16LL);
  }
  if ( !*(_DWORD *)(a2 + 136) )
  {
    if ( (v5 & 0x20) != 0 )
    {
      v7 = a2 + 96;
    }
    else
    {
      v18 = *(_QWORD *)(a2 + 24);
      v19 = *(int *)(a2 + 16);
      if ( v18 )
      {
        v20 = 56 * v19 + 320;
      }
      else
      {
        v18 = 56 * v19;
        if ( (v5 & 1) != 0 )
        {
          v7 = v6 + v18 + 240;
          goto LABEL_12;
        }
        v20 = a1 + 1672;
      }
      v7 = v18 + v20;
    }
LABEL_12:
    *(_QWORD *)(a2 + 72) = v7;
    *(_DWORD *)(a2 + 64) = 1;
    *(_QWORD *)(a2 + 144) = MEMORY[0xFFFFF78000000320];
    goto LABEL_13;
  }
  while ( 1 )
  {
LABEL_13:
    v8 = *(_DWORD *)(a2 + 136);
    v9 = 0;
    if ( v8 != -1 )
      *(_DWORD *)(a2 + 136) = v8 + 1;
    if ( *(_DWORD *)(a2 + 20) == 1
      && (v22 = -10000000LL * g_TdrConfig[1], *(_QWORD *)(a2 + 56) = &v22, VidSchiCheckTimeoutForced(a1)) )
    {
      v9 = 1;
      v10 = 258;
    }
    else
    {
      v10 = VidSchWaitForEvents(
              a1,
              *(_DWORD *)(a2 + 64),
              (PVOID *)(a2 + 72),
              *(union _LARGE_INTEGER **)(a2 + 56),
              *(_BYTE *)(a2 + 152));
    }
    if ( (*(_DWORD *)(a2 + 20) != 1 || v10 != 258)
      && (KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 176)
       || !v6
       || !*(_DWORD *)(v6 + 2148) && !*(_DWORD *)(v6 + 2152)) )
    {
      return v10;
    }
    v14 = 0LL;
    if ( v9 )
    {
      v15 = 1;
    }
    else if ( *(_DWORD *)(a2 + 16) == 3 )
    {
      v15 = 3;
    }
    else
    {
      v15 = 2;
      v14 = v6;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 444LL) & 0x200) != 0 )
    {
      v16 = __rdtsc();
      v17 = __readmsr(0x400000F6u);
      v21 = 10 * (v16 - v17) / *((unsigned int *)KeGetCurrentPrcb() + 17);
      WdLogSingleEntry3(8LL, v17, v16, v21);
      WdLogGlobalForLineNumber = 4741;
      if ( v17 > v16 || v21 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
        continue;
    }
    if ( VidSchIsTDRPending(a1) || v15 != 2 || !*(_BYTE *)(a1 + 44) )
    {
      if ( !v6 )
        goto LABEL_32;
      if ( v15 != 2 )
        goto LABEL_62;
      goto LABEL_60;
    }
    if ( !v6 )
      goto LABEL_32;
    if ( *(_DWORD *)(v6 + 2152) )
    {
LABEL_60:
      if ( *(_DWORD *)(v6 + 2152) )
        v15 = (*(_BYTE *)(v6 + 2145) != 0) + 10;
LABEL_62:
      *(_BYTE *)(v6 + 2145) = 0;
      *(_DWORD *)(v6 + 2148) = 0;
      *(_BYTE *)(v6 + 2146) = 0;
      *(_DWORD *)(v6 + 2152) = 0;
LABEL_32:
      if ( VidSchIsTDRPending(a1) || (unsigned int)VidSchiReportHwHang(a1, *(_QWORD *)(a2 + 144), v15, v14) )
        return v10;
    }
    else
    {
      v23 = 0LL;
      if ( !VidSchiPrepareToResetEngine(v6, (__int64 *)&v23) || !VidSchiResetEngines(v6, v23) )
      {
        v15 = 9;
        *(_DWORD *)(v6 + 2148) = 0;
        *(_BYTE *)(v6 + 2146) = 0;
        goto LABEL_32;
      }
      *(_DWORD *)(v6 + 2148) = 0;
      *(_BYTE *)(v6 + 2146) = 0;
    }
  }
}
