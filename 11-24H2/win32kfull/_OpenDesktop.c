/*
 * XREFs of _OpenDesktop @ 0x1401CE108
 * Callers:
 *     NtUserOpenDesktop @ 0x1401CE070 (NtUserOpenDesktop.c)
 *     xxxResolveDesktop @ 0x14023C550 (xxxResolveDesktop.c)
 *     xxxResolveDesktopForWOW @ 0x140286E50 (xxxResolveDesktopForWOW.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400A428C (W32GetCurrentWin32kSessionId.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     OpenDesktopCompletion @ 0x140195558 (OpenDesktopCompletion.c)
 *     CloseProtectedHandle @ 0x1401AABAC (CloseProtectedHandle.c)
 *     ?ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@AEAU_SECURITY_QUALITY_OF_SERVICE@@AEAPEAXAEAU_UNICODE_STRING@@AEAPEAG@Z @ 0x14028A568 (-ProbeAndDeepCaptureWinStaDesktopObjectAttributes@@YAJHPEAU_OBJECT_ATTRIBUTES@@AEAY0BAA@GAEAU1@A.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall OpenDesktop(struct _OBJECT_ATTRIBUTES *a1, __int64 a2, __int64 a3, int a4, HANDLE *a5)
{
  char v5; // r15
  KPROCESSOR_MODE v6; // di
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  int v11; // eax
  int CurrentWin32kSessionId; // eax
  PVOID v13; // rsi
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  void *v17; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+58h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES v19; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v20; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int16 v21[256]; // [rsp+B0h] [rbp-50h] BYREF

  Handle = 0LL;
  v5 = a3;
  v6 = 1;
  LOBYTE(a3) = 1;
  v9 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, a4 | 0x81u, 0LL, &Handle);
  if ( v9 < 0 )
  {
    if ( !(unsigned int)IsCurrentProcessDwm(v8) )
      goto LABEL_7;
    v17 = 0LL;
    Object = 0LL;
    *(_QWORD *)&v20.Length = 0LL;
    *(_DWORD *)&v20.ContextTrackingMode = 0;
    memset(&v19, 0, sizeof(v19));
    v18 = 0LL;
    v9 = ProbeAndDeepCaptureWinStaDesktopObjectAttributes(
           0,
           a1,
           (unsigned __int16 (*)[256])v21,
           &v19,
           &v20,
           &v17,
           &v18,
           (unsigned __int16 **)&Object);
    if ( v9 < 0 )
      goto LABEL_7;
    v9 = ObOpenObjectByName(&v19, ExDesktopObjectType, 0LL, 0LL, 193, 0LL, &Handle);
    if ( v17 )
    {
      LOBYTE(v10) = 1;
      SeReleaseSecurityDescriptor(v17, v10, 0LL);
      v17 = 0LL;
    }
    Win32FreePool(Object);
    v6 = 0;
    if ( v9 < 0 )
    {
LABEL_7:
      SetLastNtError(v9);
      return (unsigned int)v9;
    }
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, v6, &Object, 0LL);
  v9 = v11;
  if ( v11 < 0 )
  {
    SetLastNtError(v11);
LABEL_12:
    CloseProtectedHandle(Handle, v6);
    return (unsigned int)v9;
  }
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v13 = Object;
  if ( *(_DWORD *)Object != CurrentWin32kSessionId )
  {
    v9 = -1073741816;
    SetLastNtError(-1073741816);
    ObfDereferenceObject(v13);
    goto LABEL_12;
  }
  v9 = OpenDesktopCompletion((__int64)Object, (__int64)Handle, v5);
  if ( v9 < 0 )
  {
    CloseProtectedHandle(Handle, v6);
    Handle = 0LL;
  }
  ObfDereferenceObject(v13);
  if ( v9 >= 0 )
  {
    if ( (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v9 = 0;
      *a5 = Handle;
    }
    else
    {
      CloseProtectedHandle(Handle, v6);
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v9;
}
