/*
 * XREFs of ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8
 * Callers:
 *     ?ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z @ 0x14005E1E8 (-ProcessMouseMove@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x14018E920 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x140048CB0 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x140093E48 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ @ 0x140094F38 (-GetWindowHandle@CInputDest@@QEBAPEAUHWND__@@XZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1400C4820 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ?GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ @ 0x1400F0D54 (-GetNextInputStreamToken@CInputStreamTokenGenerator@CSpatialProcessor@@SAKXZ.c)
 *     ?GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ @ 0x1400F0E44 (-GetHitTestContext@CMouseEvent@CMouseProcessor@@QEBAKXZ.c)
 *     ?UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z @ 0x1400F1F70 (-UpdateTargetForCapture@Mouse@InputTraceLogging@@SAX_KPEAUHWND__@@@Z.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1400F4710 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80 (-MouseSpeedHitTest@CMouseProcessor@@CA-AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x140192A68 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 *     memset @ 0x14023F500 (memset.c)
 */

struct CInputDest *__fastcall CMouseProcessor::MouseHitTest(
        __int64 a1,
        struct CInputDest *a2,
        struct tagPOINT *a3,
        __int64 a4,
        CMouseProcessor::CMouseEvent *a5,
        int a6,
        unsigned int *a7)
{
  unsigned int v8; // r13d
  struct tagPOINT v9; // rax
  char v13; // si
  unsigned int HitTestContext; // eax
  struct tagPOINT *v15; // r8
  HWND WindowHandle; // rax
  int v18; // eax
  unsigned int v19; // r12d
  int v20; // eax
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rsi
  int v24; // r14d
  __int64 v25; // r15
  __int16 v26; // di
  unsigned __int16 v27; // ax
  struct tagPOINT *v28; // rdi
  _OWORD *v29; // rax
  struct CInputDest *v30; // rbx
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  unsigned int *v37; // rcx
  __int16 v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h]
  CMouseProcessor::CMouseEvent *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  struct tagPOINT *v44; // [rsp+90h] [rbp-70h]
  struct CInputDest *v45; // [rsp+98h] [rbp-68h]
  unsigned int *v46; // [rsp+A0h] [rbp-60h]
  struct tagPOINT v47; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v48[7]; // [rsp+B0h] [rbp-50h] BYREF
  char v49[112]; // [rsp+120h] [rbp+20h] BYREF
  _DWORD v50[28]; // [rsp+190h] [rbp+90h] BYREF

  v8 = 0;
  v9 = *a3;
  v43 = a4;
  v44 = a3;
  v45 = a2;
  v42 = a5;
  v46 = a7;
  v47 = v9;
  if ( a7 )
    *a7 = 0;
  v13 = 1;
  if ( (a6 & 1) != 0 )
  {
    HitTestContext = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    CSpatialProcessor::CheckAndSendPointerPositionEffectsUpdate(
      (CSpatialProcessor *)a1,
      4,
      *v15,
      *(_QWORD *)(*((_QWORD *)a5 + 1) + 96LL),
      0,
      HitTestContext);
    CInputDest::CInputDest(a2, (const struct CInputDest *)(a1 + 3784));
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6562LL);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint)(
      a3,
      *a3,
      a4,
      a2);
    WindowHandle = CInputDest::GetWindowHandle(a2);
    InputTraceLogging::Mouse::UpdateTargetForCapture(*(_QWORD *)(*((_QWORD *)a5 + 1) + 96LL), WindowHandle);
    return a2;
  }
  else
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(*((_QWORD *)a5 + 1) + 96LL);
    *(_QWORD *)(a1 + 24) = 4LL;
    if ( a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6580LL);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3904), 1, 1) )
    {
      v39 = 512;
    }
    else
    {
      v13 = 0;
      v39 = 0;
    }
    if ( *((_DWORD *)a5 + 4) == 3 )
    {
      *(_DWORD *)(a1 + 3660) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    else if ( !v13 )
    {
      *(_DWORD *)(a1 + 3656) = CSpatialProcessor::CInputStreamTokenGenerator::GetNextInputStreamToken();
    }
    v40 = 0;
    memset(v50, 0, sizeof(v50));
    if ( *((_DWORD *)a5 + 4) == 3 )
      v18 = *(_DWORD *)(a1 + 3660);
    else
      v18 = *(_DWORD *)(a1 + 3656);
    v41 = v18;
    v19 = CMouseProcessor::CMouseEvent::GetHitTestContext(a5);
    v20 = (*(__int64 (__fastcall **)(CMouseProcessor::CMouseEvent *))(*(_QWORD *)a5 + 16LL))(a5);
    v21 = *((_QWORD *)a5 + 1);
    v22 = v20;
    v23 = *(_QWORD *)(v21 + 8);
    v24 = *(_DWORD *)(v21 + 88);
    v25 = *(_QWORD *)(v21 + 96);
    v26 = (*(__int64 (__fastcall **)(CMouseProcessor::CMouseEvent *))(*(_QWORD *)a5 + 8LL))(a5);
    v27 = (**(__int64 (__fastcall ***)(CMouseProcessor::CMouseEvent *))v42)(v42);
    v38 = v26;
    v28 = v44;
    v29 = (_OWORD *)CMouseProcessor::MouseSpeedHitTest(
                      v49,
                      v44,
                      v43,
                      v27,
                      v38,
                      v25,
                      v24,
                      v23,
                      v22 | (unsigned int)v39,
                      v19,
                      v41,
                      &v40,
                      v50);
    v30 = v45;
    v31 = v29[1];
    v48[0] = *v29;
    v32 = v29[2];
    v48[1] = v31;
    v33 = v29[3];
    v48[2] = v32;
    v34 = v29[4];
    v48[3] = v33;
    v35 = v29[5];
    v48[4] = v34;
    v36 = v29[6];
    v48[5] = v35;
    v48[6] = v36;
    CInputDest::CInputDest(v45, (const struct tagINPUTDEST *)v48);
    v37 = v46;
    if ( v46 )
      *v46 = v50[20];
    if ( v37 )
      v8 = *v37;
    InputTraceLogging::Mouse::SpeedHitTest(*(_QWORD *)(*((_QWORD *)v42 + 1) + 96LL), &v47, v28, v30, v8, v40 != 0);
    return v30;
  }
}
