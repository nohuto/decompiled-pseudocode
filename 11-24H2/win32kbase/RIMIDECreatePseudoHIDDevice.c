/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1401E5870
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x14019A904 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1401E8520 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1401E864C (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x140092790 (McTemplateK0_EtwWriteTransfer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1401366D8 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     RIMIDECreateDeviceInstancePath @ 0x14014B610 (RIMIDECreateDeviceInstancePath.c)
 *     rimFindReferencedRimObj @ 0x1401D3D60 (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1401D3EE0 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E3540 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        __int16 a2,
        int a3,
        int a4,
        __int64 a5,
        PHIDP_DEVICE_DESC DeviceDescription,
        int a7,
        char a8,
        int a9,
        __int64 a10,
        __int64 *a11)
{
  __int64 v14; // rcx
  int ReferencedRimObj; // esi
  unsigned int v16; // eax
  __int16 v17; // dx
  __int16 v18; // r8
  bool v19; // bl
  __int64 v20; // rcx
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v27; // r15
  char v28; // r12
  __int64 v29; // rbx
  __int64 v30; // rax
  CTouchProcessor *v31; // rcx
  bool v32; // r14
  __int64 UserSessionState; // rax
  int v34; // r8d
  int v35; // edx
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[18]; // [rsp+80h] [rbp-80h] BYREF
  char v43; // [rsp+110h] [rbp+10h] BYREF

  v41 = a10;
  Handle = 0LL;
  v40.Buffer = (PWSTR)&v43;
  *(_QWORD *)&v40.Length = 0x1000000LL;
  memset(v42, 0, sizeof(v42));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v14, &PseudoDevCreationStart, &W32kControlGuid);
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(2LL, a1, a2, &v40);
  if ( ReferencedRimObj < 0 )
  {
    HidP_FreeCollectionDescription(DeviceDescription);
  }
  else
  {
    Object = 0LL;
    v16 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    v19 = 0;
    ReferencedRimObj = rimFindReferencedRimObj(v16, v17, v18, &Object);
    if ( ReferencedRimObj < 0 )
    {
      HidP_FreeCollectionDescription(DeviceDescription);
      v31 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 )
      {
        v19 = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
      }
      v32 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
        LOBYTE(v34) = v32;
        LOBYTE(v35) = v19;
        WPP_RECORDER_AND_TRACE_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v35,
          v34,
          *(_QWORD *)(UserSessionState + 19392),
          2,
          1,
          20,
          (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids);
      }
    }
    else
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        v21 = *(_OWORD *)&DeviceDescription->ReportIDs;
        *(_OWORD *)&v42[3] = *(_OWORD *)&DeviceDescription->CollectionDesc;
        v42[11] = a5;
        v22 = *(_OWORD *)&DeviceDescription->Dbg.ErrorCode;
        *(_OWORD *)&v42[5] = v21;
        LODWORD(v42[12]) = a3;
        v23 = *(_OWORD *)&DeviceDescription->Dbg.Args[3];
        *(_OWORD *)&v42[7] = v22;
        *(_OWORD *)&v42[9] = v23;
        v24 = *((_QWORD *)PtiCurrent(v20) + 58);
        *(_QWORD *)((char *)&v42[12] + 4) = *(_QWORD *)(v24 + 872);
        HIDWORD(v42[13]) = *(_DWORD *)(v24 + 880);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        LODWORD(v42[14]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        HIDWORD(v42[14]) = a4;
        HIDWORD(v42[1]) = a7;
        LODWORD(v42[15]) = 0;
        LODWORD(v42[17]) = 1;
        LODWORD(v42[2]) = a8 & 1 | v42[2] & 0xFFFFFFFE;
        v42[16] = v41;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v40, 2, (__int64)v42, 0, a11);
        if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
          || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
          || (v27 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
        {
          v27 = 0;
        }
        v28 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v29 = *a11;
          v30 = W32GetUserSessionState(WPP_GLOBAL_Control);
          WPP_RECORDER_AND_TRACE_SF_qd(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v27,
            v28,
            *(_QWORD *)(v30 + 19392),
            4u,
            1u,
            0x13u,
            (__int64)&WPP_a924233173b9385c264afbc4034b0533_Traceguids,
            v29,
            ReferencedRimObj);
        }
        if ( LODWORD(v42[17]) == 1 )
          HidP_FreeCollectionDescription(DeviceDescription);
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v31, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return (unsigned int)ReferencedRimObj;
}
