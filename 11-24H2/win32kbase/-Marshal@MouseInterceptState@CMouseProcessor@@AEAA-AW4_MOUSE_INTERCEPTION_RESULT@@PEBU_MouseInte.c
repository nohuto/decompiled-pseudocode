/*
 * XREFs of ?Marshal@MouseInterceptState@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021D9E8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021BF64 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B060 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14006B0F4 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ @ 0x1400EC1E4 (-IsCurrentInputDesktopInterceptable@MouseInterceptState@CMouseProcessor@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetInputThreadKernelThread @ 0x1402127A4 (GetInputThreadKernelThread.c)
 *     ?PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z @ 0x14021E4A0 (-PrepareForMarshaling@MouseInterceptState@CMouseProcessor@@AEAA_NPEBU_MouseInterceptorData@@@Z.c)
 *     ?WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z @ 0x14021EEF8 (-WaitForCallout@MarshalSync@MouseInterceptState@CMouseProcessor@@QEAA_NPEAU_KTHREAD@@@Z.c)
 *     ApiSetEditionExtensibility_WakeMITForInterceptCallout @ 0x140221BF0 (ApiSetEditionExtensibility_WakeMITForInterceptCallout.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::Marshal(
        __int64 a1,
        const struct _MouseInterceptorData *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  struct _KTHREAD *InputThreadKernelThread; // rbx
  bool v7; // bl
  _BYTE v9[20]; // [rsp+20h] [rbp-28h] BYREF

  if ( CMouseProcessor::MouseInterceptState::PrepareForMarshaling((CMouseProcessor::MouseInterceptState *)a1, a2)
    && (unsigned int)ApiSetEditionExtensibility_WakeMITForInterceptCallout() )
  {
    InputThreadKernelThread = (struct _KTHREAD *)GetInputThreadKernelThread(v5);
    if ( !InputThreadKernelThread )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8646);
    W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0LL);
    v7 = CMouseProcessor::MouseInterceptState::MarshalSync::WaitForCallout(
           (CMouseProcessor::MouseInterceptState::MarshalSync *)(a1 + 104),
           InputThreadKernelThread);
    W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)a1, 0);
    if ( !v7
      || !CMouseProcessor::MouseInterceptState::IsCurrentInputDesktopInterceptable((CMouseProcessor::MouseInterceptState *)a1) )
    {
      memset(v9, 0, sizeof(v9));
      *(_OWORD *)(a1 + 80) = *(_OWORD *)v9;
      *(_QWORD *)(a1 + 96) = 0LL;
    }
  }
  *(_OWORD *)a3 = *(_OWORD *)(a1 + 80);
  a3[2] = *(_QWORD *)(a1 + 96);
  return *(unsigned int *)a3;
}
