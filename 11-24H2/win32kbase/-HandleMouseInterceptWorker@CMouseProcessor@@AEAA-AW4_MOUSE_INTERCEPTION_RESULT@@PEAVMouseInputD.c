/*
 * XREFs of ?HandleMouseInterceptWorker@CMouseProcessor@@AEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEAVMouseInputDataEx@1@@Z @ 0x140051F28
 * Callers:
 *     ?SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z @ 0x140050448 (-SynthesizeMouse@CMouseProcessor@@QEAAXPEAVMouseInputDataEx@1@PEAUPTPMouseInputData@@@Z.c)
 *     ?ProcessInput@CMouseProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_DATA@@K_N@Z @ 0x14018D338 (-ProcessInput@CMouseProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_MOUSE_INPUT_D.c)
 * Callees:
 *     ?TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@@@Z @ 0x140051ED8 (-TestProcessingOption@MouseInputDataEx@CMouseProcessor@@QEBA_NW4MouseInputDataProcessingOptions@.c)
 *     ?CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z @ 0x14021BF10 (-CallInterceptor@Mouse@InputTraceLogging@@SAX_K@Z.c)
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x14021BF64 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 *     ?HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProcessorData@@@Z @ 0x14021D5DC (-HandleInterception@Mouse@InputTraceLogging@@SAX_KW4_MOUSE_INTERCEPTION_RESULT@@AEBU_MouseProces.c)
 *     ?Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@Z @ 0x14021D708 (-Interceptor_UpdateInputReport@MouseInputDataEx@CMouseProcessor@@QEAAXAEBU_MouseProcessorData@@@.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x14021E2F0 (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 *     ApiSetEdtionGetInputDesktopId @ 0x140222234 (ApiSetEdtionGetInputDesktopId.c)
 */

__int64 __fastcall CMouseProcessor::HandleMouseInterceptWorker(CMouseProcessor *a1, unsigned __int64 *a2)
{
  char *v3; // rbx
  int v5; // esi
  char v6; // di
  __int64 v8; // rbx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  _OWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF

  v3 = (char *)a1 + 3912;
  LOBYTE(v5) = 0;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  if ( v3[8] && *((_QWORD *)v3 + 2) == ApiSetEdtionGetInputDesktopId() )
  {
    v5 = *((_DWORD *)v3 + 3);
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( !v6 )
    return 0LL;
  if ( CMouseProcessor::MouseInputDataEx::TestProcessingOption((__int64)a2, 8) )
    LOBYTE(v5) = -2;
  memset(v11, 0, sizeof(v11));
  CMouseProcessor::PrepareDataForIntercept(
    a1,
    (const struct CMouseProcessor::MouseInputDataEx *)a2,
    v5 & 1,
    (struct _MouseInterceptorData *)v11);
  InputTraceLogging::Mouse::CallInterceptor(a2[7]);
  v10 = 0LL;
  v9 = 0LL;
  v8 = (unsigned int)CMouseProcessor::MouseInterceptState::CallInterceptor(v3, v11, &v9);
  InputTraceLogging::Mouse::HandleInterception(a2[7], v8, &v9);
  if ( (_DWORD)v8 == 2 )
  {
    HIDWORD(v10) = BYTE4(v10) & 0x76;
    CMouseProcessor::MouseInputDataEx::Interceptor_UpdateInputReport(
      (CMouseProcessor::MouseInputDataEx *)a2,
      (const struct _MouseProcessorData *)&v9);
  }
  return (unsigned int)v8;
}
