/*
 * XREFs of NtUserInvalidateRect @ 0x1C004DF80
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C004E1B4 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 *     ??B?$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ @ 0x1C01389C0 (--B-$SGDCRITTYPEgpresUser@PEAU_ERESOURCE@@@@QEAAAEAPEAU_ERESOURCE@@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserInvalidateRect(__int64 a1, ULONG64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  PERESOURCE *v7; // rax
  __int64 v8; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r15
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct tagWND *v19; // r14
  int v20; // esi
  __int128 *v21; // rsi
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v27; // [rsp+24h] [rbp-84h]
  __int128 v29; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+60h] [rbp-48h]
  __int128 v31; // [rsp+68h] [rbp-40h] BYREF

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = (PERESOURCE *)SGDCRITTYPEgpresUser<_ERESOURCE *>::operator _ERESOURCE * &(v4, v3, v5, v6);
  if ( !ExIsResourceAcquiredSharedLite(*v7) )
  {
    v27 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 151LL);
  }
  v8 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v8 = *ThreadWin32Thread;
  v13 = 0;
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    v27 = *(_DWORD *)(v8 + 1548);
    *(_DWORD *)(v8 + 1548) = 0;
    v13 = 1;
  }
  if ( a1 )
  {
    v19 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v19 )
    {
      v20 = 0;
      goto LABEL_17;
    }
  }
  else
  {
    v19 = 0LL;
  }
  v21 = (__int128 *)a2;
  if ( a2 )
  {
    if ( a2 >= MmUserProbeAddress )
      v21 = (__int128 *)MmUserProbeAddress;
    v31 = *v21;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress);
    if ( (unsigned __int8)ShouldVirtualizeWindowRect(v19, CurrentThreadDpiAwarenessContext) )
      TransformRectBetweenCoordinateSpaces(&v31, &v31, 0LL, v19);
  }
  ThreadLock(v19, &v29);
  v20 = xxxRedrawWindow(v19);
  ThreadUnlock1(v24, v23, v25);
LABEL_17:
  if ( v13 )
  {
    v16 = v27;
    *(_DWORD *)(v8 + 1548) = v27;
  }
  UserSessionSwitchLeaveCrit(v16, v15, v17, v18);
  return v20;
}
