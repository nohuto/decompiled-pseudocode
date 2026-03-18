/*
 * XREFs of ?IsForegroundShellFrameQueueAccessible@@YAHPEBUtagTHREADINFO@@@Z @ 0x14017017C
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x1400812C0 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsForegroundShellFrameQueueAccessible(const struct tagTHREADINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  v4 = 0;
  if ( !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)a1 + 58)) )
    return 0LL;
  v5 = *(_QWORD *)(W32GetUserSessionState(v3, v2) + 18944);
  v7 = *((_QWORD *)a1 + 59);
  if ( v5 != v7 )
    return 0LL;
  if ( (*(_DWORD *)(v7 + 436) & 0x2000000) == 0 )
    return 0LL;
  v9 = *(_QWORD *)(W32GetUserSessionState(v6, v5) + 18944);
  if ( !*(_QWORD *)(v9 + 120) )
    return 0LL;
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 18944) + 120LL) + 16LL);
  if ( !v10 )
    return 0LL;
  LOBYTE(v4) = *(_QWORD *)(v10 + 464) == *((_QWORD *)a1 + 58);
  return v4;
}
