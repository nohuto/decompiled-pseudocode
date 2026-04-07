/*
 * XREFs of ?GetDisplayRect@CDesktopManager@@QEAAJPEAUHMONITOR__@@AEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800B4800
 * Callers:
 *     ?_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800D3A84 (-_AddProjectionBorderForDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@AEBUDWM_CAPTURE_T.c)
 *     ?_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D49D0 (-_SendBoundsToCaptureControllerFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCC.c)
 *     ?_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEAVCCaptureControllerProxy@@@Z @ 0x1800D524C (-_UpdateCaptureControllerTransformFromDisplay@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@PEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D520 (memset_0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z @ 0x1800B4380 (-FindDxgiOutputDescriptor@CDWMDXGIEnumeration@@QEAAJPEAUHMONITOR__@@PEAUDXGIOutputInfo@@@Z.c)
 */

__int64 __fastcall CDesktopManager::GetDisplayRect(__int64 a1, HMONITOR a2, _DWORD *a3)
{
  int DxgiOutputDescriptor; // eax
  unsigned int v7; // edi
  int v9; // ecx
  int v10; // edx
  int v11; // r8d
  _BYTE v12[204]; // [rsp+20h] [rbp-158h] BYREF
  int v13; // [rsp+ECh] [rbp-8Ch]
  int v14; // [rsp+F0h] [rbp-88h]
  int v15; // [rsp+F4h] [rbp-84h]
  int v16; // [rsp+F8h] [rbp-80h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+0h]

  a3[3] = 0;
  a3[2] = 0;
  a3[1] = 0;
  *a3 = 0;
  if ( a2 )
  {
    memset_0(v12, 0, 0x130uLL);
    DxgiOutputDescriptor = CDWMDXGIEnumeration::FindDxgiOutputDescriptor(
                             *(CDWMDXGIEnumeration **)(a1 + 136),
                             a2,
                             (struct DXGIOutputInfo *)v12);
    v7 = DxgiOutputDescriptor;
    if ( DxgiOutputDescriptor < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE6E,
        (__int64)"clientcore\\windows\\dwm\\udwm\\desktopmanager.cpp",
        (const char *)(unsigned int)DxgiOutputDescriptor);
      return v7;
    }
    v9 = v14;
    v10 = v15;
    v11 = v16;
    *a3 = v13;
    a3[1] = v9;
    a3[2] = v10;
    a3[3] = v11;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(a1 + 144) + 16LL);
  }
  return 0LL;
}
