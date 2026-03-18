/*
 * XREFs of _OpenDesktop @ 0x1C0028374
 * Callers:
 *     NtUserOpenDesktop @ 0x1C0027F70 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x1C0028660 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x1C01BE458 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     OpenDesktopCompletion @ 0x1C002A624 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1C002B684 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x1C013AC18 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  unsigned int v5; // r15d
  KPROCESSOR_MODE v6; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // ebx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  ULONG v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  ULONG v17; // eax
  _DWORD *v18; // rax
  PVOID v19; // rsi
  ULONG v20; // eax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v24; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v26; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v27; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v28[256]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v10 < 0 )
  {
    CurrentProcess = PsGetCurrentProcess(v9, v8, v11);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
      goto LABEL_7;
    v24 = 0LL;
    Object = 0LL;
    *(_QWORD *)&v27.Length = 0LL;
    *(_DWORD *)&v27.ContextTrackingMode = 0;
    memset(&v26, 0, sizeof(v26));
    v25 = 0LL;
    v10 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
            0,
            a1,
            (unsigned __int16 (*)[256])v28,
            &v26,
            &v27,
            &v24,
            &v25,
            (unsigned __int16 **)&Object);
    if ( v10 < 0 )
      goto LABEL_7;
    v10 = ObOpenObjectByName(&v26, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    if ( v24 )
    {
      LOBYTE(v13) = 1;
      SeReleaseSecurityDescriptor(v24, v13, 0LL);
      v24 = 0LL;
    }
    Win32FreePool(Object);
    v6 = 0;
    if ( v10 < 0 )
    {
LABEL_7:
      v14 = RtlNtStatusToDosError(v10);
      UserSetLastError(v14);
      return (unsigned int)v10;
    }
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v10 = v15;
  if ( v15 < 0 )
  {
    v17 = RtlNtStatusToDosError(v15);
    UserSetLastError(v17);
LABEL_12:
    CloseProtectedHandle(Handle);
    return (unsigned int)v10;
  }
  v18 = (_DWORD *)SGDGetUserSessionState(v16);
  v19 = Object;
  if ( *(_DWORD *)Object != *v18 )
  {
    v10 = -1073741816;
    v20 = RtlNtStatusToDosError(-1073741816);
    UserSetLastError(v20);
    ObfDereferenceObject(v19);
    goto LABEL_12;
  }
  v10 = OpenDesktopCompletion(Object, Handle, v5);
  if ( v10 < 0 )
  {
    CloseProtectedHandle(Handle);
    Handle = 0LL;
  }
  ObfDereferenceObject(v19);
  if ( v10 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v10 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v10;
}
