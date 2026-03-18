/*
 * XREFs of _CloseDesktop @ 0x14028628C
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x140163C44 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxCreateDesktopEx @ 0x14016470C (xxxCreateDesktopEx.c)
 *     EditionCloseDesktopEntryPoint @ 0x1401BBEF0 (EditionCloseDesktopEntryPoint.c)
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x1400B4A08 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     CloseProtectedHandle @ 0x1401AABAC (CloseProtectedHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026C310 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 UserGdiSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID v13; // rdi
  __int64 i; // rcx
  NTSTATUS v15; // ebx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  v5 = (_QWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = (_QWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    UserGdiSessionState = W32GetUserGdiSessionState(v7);
    v13 = Object;
    if ( *v5 != *(_QWORD *)(UserGdiSessionState + 40) )
    {
      for ( i = v5[41]; i; i = *(_QWORD *)(i + 704) )
      {
        if ( ((*(_QWORD *)(i + 632) ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170);
          ObfDereferenceObject(Object);
          return 2147483665LL;
        }
      }
      if ( Object == (PVOID)v5[43] && ((v5[48] ^ Handle) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        DeferrableUnlockObjectAssignment<tagDESKTOP>(v5 + 43, v11, v12);
        v5[48] = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    v15 = CloseProtectedHandle((HANDLE)Handle, a2);
    ObfDereferenceObject(v13);
    if ( !gbIgnoreStressedOutStuff && v15 < 0 )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5655);
    }
    return 0LL;
  }
  else
  {
    SetLastNtError(v6);
    return v8;
  }
}
