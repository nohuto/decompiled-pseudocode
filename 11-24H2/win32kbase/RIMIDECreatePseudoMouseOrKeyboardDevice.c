/*
 * XREFs of RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1401E5C18
 * Callers:
 *     NtUserInjectKeyboardInput @ 0x14016E210 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x14016EBE0 (NtUserInjectMouseInput.c)
 * Callees:
 *     RIMIDECreateDeviceInstancePath @ 0x14014B610 (RIMIDECreateDeviceInstancePath.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimFindReferencedRimObj @ 0x1401D3D60 (rimFindReferencedRimObj.c)
 *     rimInputTypeFromDeviceTypeAndUsages @ 0x1401D3EE0 (rimInputTypeFromDeviceTypeAndUsages.c)
 *     RIMAddInjectionDeviceOfType @ 0x1401D5450 (RIMAddInjectionDeviceOfType.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1401E3540 (RawInputManagerObjectCreateKernelHandle.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memset @ 0x14023F500 (memset.c)
 */

__int64 __fastcall RIMIDECreatePseudoMouseOrKeyboardDevice(unsigned int a1, __int64 *a2)
{
  int ReferencedRimObj; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING v14; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[18]; // [rsp+60h] [rbp-A0h] BYREF
  char v16; // [rsp+F0h] [rbp-10h] BYREF

  if ( a1 >= 2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 901);
  *(_QWORD *)&v14.Length = 0x1000000LL;
  v14.Buffer = (PWSTR)&v16;
  Handle = (HANDLE)-1LL;
  v13 = -1LL;
  memset(v15, 0, sizeof(v15));
  Object = 0LL;
  ReferencedRimObj = RIMIDECreateDeviceInstancePath(a1, 0, 0, &v14);
  if ( ReferencedRimObj >= 0 )
  {
    v5 = rimInputTypeFromDeviceTypeAndUsages(a1, 0, 0);
    if ( v5 - 1 > 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 915);
    ReferencedRimObj = rimFindReferencedRimObj(v5, 0, 0, &Object);
    if ( ReferencedRimObj >= 0 )
    {
      ReferencedRimObj = RawInputManagerObjectCreateKernelHandle(Object, 3u, 0, 0, &Handle);
      if ( ReferencedRimObj >= 0 )
      {
        LODWORD(v15[2]) &= ~1u;
        v15[11] = 0LL;
        LODWORD(v15[12]) = 0;
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
        if ( CurrentProcessWin32Process )
        {
          v8 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        *(_QWORD *)((char *)&v15[12] + 4) = *(_QWORD *)(CurrentProcessWin32Process + 872);
        HIDWORD(v15[13]) = *(_DWORD *)(CurrentProcessWin32Process + 880);
        v9 = PsGetCurrentProcessWin32Process(v8);
        if ( v9 )
          v9 &= -(__int64)(*(_QWORD *)v9 != 0LL);
        LODWORD(v15[14]) = *(_DWORD *)(v9 + 12) & 0x80000000;
        ReferencedRimObj = RIMAddInjectionDeviceOfType((char *)Handle, &v14, a1, (__int64)v15, 0, &v13);
        if ( ReferencedRimObj >= 0 )
          *a2 = v13;
        ZwClose(Handle);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)ReferencedRimObj;
}
