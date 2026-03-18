/*
 * XREFs of RIMIDECreatePseudoHIDDevice @ 0x1C01950C8
 * Callers:
 *     RIMIDE_CreateGenericHidDevice @ 0x1C0198D40 (RIMIDE_CreateGenericHidDevice.c)
 *     RIMIDE_InitializeDeviceInjection @ 0x1C0198E70 (RIMIDE_InitializeDeviceInjection.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C0198FA0 (RIMIDE_InitializePointerDeviceInjection.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C0005754 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1C0006104 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMIDECreateDeviceInstancePath @ 0x1C000612C (RIMIDECreateDeviceInstancePath.c)
 *     rimFindReferencedRimObj @ 0x1C0006280 (rimFindReferencedRimObj.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00063E0 (RIMAddInjectionDeviceOfType.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C0078710 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D69C0 (memset.c)
 *     McTemplateK0_EtwWriteTransfer @ 0x1C00DF238 (McTemplateK0_EtwWriteTransfer.c)
 */

__int64 __fastcall RIMIDECreatePseudoHIDDevice(
        __int16 a1,
        __int16 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        _OWORD *a6,
        char a7,
        char a8,
        unsigned int a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v14; // rcx
  int ReferencedRimObj; // edi
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // edx
  int v20; // r8d
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v26; // dl
  PDEVICE_OBJECT v27; // rcx
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v32; // [rsp+68h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-88h]
  _OWORD v34[9]; // [rsp+80h] [rbp-80h] BYREF
  char v35; // [rsp+110h] [rbp+10h] BYREF

  v33 = a10;
  Handle = 0LL;
  v32.Buffer = (PWSTR)&v35;
  *(_QWORD *)&v32.Length = 0x1000000LL;
  memset(v34, 0, sizeof(v34));
  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    McTemplateK0_EtwWriteTransfer(v14, &PseudoDevCreationStart, &W32kControlGuid);
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(2, a1, a2, &v32);
  if ( ReferencedRimObj >= 0 )
  {
    Object = 0LL;
    v16 = rimInputTypeFromDeviceTypeAndUsages(2, a1, a2);
    ReferencedRimObj = rimFindReferencedRimObj(v16, v17, v18, &Object);
    if ( ReferencedRimObj < 0 )
    {
      v27 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v19) = 0;
      }
      if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v19,
          v20,
          (_DWORD)gRimLog,
          2,
          1,
          19,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
      }
    }
    else
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        if ( a5 )
          HIDWORD(v34[0]) |= 1u;
        v21 = a6[1];
        v34[1] = *a6;
        v22 = a6[2];
        v34[2] = v21;
        v23 = a6[3];
        v34[3] = v22;
        v34[4] = v23;
        *(_QWORD *)&v34[5] = a5;
        DWORD2(v34[5]) = a3;
        v24 = *((_QWORD *)gptiCurrent + 53);
        *(_QWORD *)((char *)&v34[7] + 4) = *(_QWORD *)(v24 + 896);
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
        if ( CurrentProcessWin32Process )
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        HIDWORD(v34[7]) = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80000000;
        *(_QWORD *)&v34[8] = __PAIR64__(a9, a4);
        HIDWORD(v34[0]) = HIDWORD(v34[0]) & 0xFFFFFFF9 | (2 * (a7 & 1 | (2 * (a8 & 1))));
        *((_QWORD *)&v34[8] + 1) = v33;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((__int64)Handle, (ULONG64)&v32, 2u, v34, 0, a11);
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (v26 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          v26 = 0;
        }
        if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qd(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v26,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (__int64)gRimLog,
            4u,
            1u,
            0x12u,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
            *a11,
            ReferencedRimObj);
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer((__int64)v27, &PseudoDevCreationStop, &W32kControlGuid);
  }
  return (unsigned int)ReferencedRimObj;
}
