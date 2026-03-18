/*
 * XREFs of ?MouseSpeedHitTest@CMouseProcessor@@CA?AUtagINPUTDEST@@PEAUtagPOINT@@PEBU_SUBPIXELS@@GG_KKPEAXW4DIT_HITTESTATTRIBUTES@@KKPEAHPEAU_InputHitTestResult@@@Z @ 0x14018CE80
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@1@W4MouseHitTestOptions@@PEAI@Z @ 0x14005EDC8 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@AEBVCMouseEvent@.c)
 * Callees:
 *     DCompHitTest @ 0x14005FA00 (DCompHitTest.c)
 *     ApiSetEditionPostDwmSpeedHitTest @ 0x1400C3EAC (ApiSetEditionPostDwmSpeedHitTest.c)
 *     CanHitTestInDwm @ 0x1400C5050 (CanHitTestInDwm.c)
 *     ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1400E097C (-GetInputSpaceId@Mouse@InputConfig@@SA-AU_LUID@@XZ.c)
 *     MouseButtonToPointerFlags @ 0x1400E2010 (MouseButtonToPointerFlags.c)
 *     ?GetExecutionEnvironment@CBaseProcessor@@SA?AW4_ProcessorExecutionEnvironment@@XZ @ 0x140104354 (-GetExecutionEnvironment@CBaseProcessor@@SA-AW4_ProcessorExecutionEnvironment@@XZ.c)
 *     INPUTDEST_FROM_PWND @ 0x140107EA4 (INPUTDEST_FROM_PWND.c)
 *     ApiSetEditionMouseCaptureHitTest @ 0x140192808 (ApiSetEditionMouseCaptureHitTest.c)
 *     ApiSetEditionNonDwmSpeedHitTest @ 0x1401928CC (ApiSetEditionNonDwmSpeedHitTest.c)
 *     ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint @ 0x140192A68 (ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline @ 0x14021F3D4 (Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall CMouseProcessor::MouseSpeedHitTest(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int16 a4,
        __int16 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10,
        int a11,
        _DWORD *a12,
        __int64 a13)
{
  int v17; // esi
  __int64 v18; // rcx
  __int64 UserSessionState; // rax
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int128 v30; // xmm3
  __int128 v31; // xmm4
  __int128 v32; // xmm5
  __int128 v33; // xmm6
  __int64 v34; // rax
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int128 v38; // xmm3
  __int128 v39; // xmm4
  __int128 v40; // xmm5
  __int128 v41; // xmm6
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm5
  __int128 v48; // xmm6
  _QWORD v50[11]; // [rsp+38h] [rbp-D0h] BYREF
  _OWORD v51[8]; // [rsp+98h] [rbp-70h] BYREF

  v17 = 0;
  if ( *(_QWORD *)(W32GetUserSessionState(a1) + 16264) )
  {
    if ( (unsigned int)Feature_FixMoveSizeNoFullDragDpiChangeBug3__private_IsEnabledDeviceUsageNoInline() )
    {
      UserSessionState = W32GetUserSessionState(v18);
      v20 = INPUTDEST_FROM_PWND(v51, *(_QWORD *)(UserSessionState + 16264));
      *(_OWORD *)a1 = *v20;
      *(_OWORD *)(a1 + 16) = v20[1];
      *(_OWORD *)(a1 + 32) = v20[2];
      *(_OWORD *)(a1 + 48) = v20[3];
      *(_OWORD *)(a1 + 64) = v20[4];
      *(_OWORD *)(a1 + 80) = v20[5];
      *(_OWORD *)(a1 + 96) = v20[6];
      ApiSetEditionPhysicalToLogicalDPIPointWithInputDestHint(a2, *a2, a3, a1);
    }
    else
    {
      if ( (unsigned int)CBaseProcessor::GetExecutionEnvironment(v18) != 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 6454LL);
      v22 = W32GetUserSessionState(v21);
      ApiSetEditionMouseCaptureHitTest(*(_QWORD *)(v22 + 16264), a2, a3);
      *a12 = 1;
      v24 = W32GetUserSessionState(v23);
      INPUTDEST_FROM_PWND((_DWORD *)a1, *(_QWORD *)(v24 + 16264));
    }
  }
  else
  {
    memset((void *)a1, 0, 0x70uLL);
    memset(v50, 0, sizeof(v50));
    *(_QWORD *)((char *)&v50[2] + 4) = *a2;
    v50[6] = a6;
    LODWORD(v50[5]) = a7;
    v50[4] = a8;
    LODWORD(v50[0]) = 4;
    HIDWORD(v50[1]) = 0;
    HIDWORD(v50[0]) = MouseButtonToPointerFlags(a4);
    LOWORD(v50[1]) = a5;
    LODWORD(v50[7]) = 1;
    if ( CanHitTestInDwm(v25) )
    {
      v50[8] = __PAIR64__(a10, a9);
      v50[9] = InputConfig::Mouse::GetInputSpaceId(v26);
      LODWORD(v50[10]) = a11;
      v27 = DCompHitTest(v51);
      v28 = v27[1];
      v29 = v27[2];
      v30 = v27[3];
      v31 = v27[4];
      v32 = v27[5];
      v33 = v27[6];
      *(_OWORD *)a1 = *v27;
      *(_OWORD *)(a1 + 16) = v28;
      *(_OWORD *)(a1 + 32) = v29;
      *(_OWORD *)(a1 + 48) = v30;
      *(_OWORD *)(a1 + 64) = v31;
      *(_OWORD *)(a1 + 80) = v32;
      *(_OWORD *)(a1 + 96) = v33;
      LOBYTE(v17) = *(_DWORD *)a1 != 0;
      *a12 = v17;
      ApiSetEditionPostDwmSpeedHitTest(a1, (__int64)a2, a3, 0, a13, (__int64)a12);
    }
    else if ( a10 )
    {
      v34 = W32GetUserSessionState(v26);
      v35 = INPUTDEST_FROM_PWND(v51, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 19200) + 8LL) + 24LL));
      v36 = v35[1];
      v37 = v35[2];
      v38 = v35[3];
      v39 = v35[4];
      v40 = v35[5];
      v41 = v35[6];
      *(_OWORD *)a1 = *v35;
      *(_OWORD *)(a1 + 16) = v36;
      *(_OWORD *)(a1 + 32) = v37;
      *(_OWORD *)(a1 + 48) = v38;
      *(_OWORD *)(a1 + 64) = v39;
      *(_OWORD *)(a1 + 80) = v40;
      *(_OWORD *)(a1 + 96) = v41;
      *a12 = 0;
    }
    else
    {
      v42 = (_OWORD *)ApiSetEditionNonDwmSpeedHitTest(v51, a2, a3, a12);
      v43 = v42[1];
      v44 = v42[2];
      v45 = v42[3];
      v46 = v42[4];
      v47 = v42[5];
      v48 = v42[6];
      *(_OWORD *)a1 = *v42;
      *(_OWORD *)(a1 + 16) = v43;
      *(_OWORD *)(a1 + 32) = v44;
      *(_OWORD *)(a1 + 48) = v45;
      *(_OWORD *)(a1 + 64) = v46;
      *(_OWORD *)(a1 + 80) = v47;
      *(_OWORD *)(a1 + 96) = v48;
    }
  }
  return a1;
}
