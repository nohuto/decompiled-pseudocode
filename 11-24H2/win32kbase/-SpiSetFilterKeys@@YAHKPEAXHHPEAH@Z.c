/*
 * XREFs of ?SpiSetFilterKeys@@YAHKPEAXHHPEAH@Z @ 0x1400A3A84
 * Callers:
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?SetAccessEnabledFlag@@YAXXZ @ 0x1400A24D0 (-SetAccessEnabledFlag@@YAXXZ.c)
 *     ApiSetEditionCallAccessibilityHook @ 0x1400A2624 (ApiSetEditionCallAccessibilityHook.c)
 *     ApiSetEditionPostShellHookMessages @ 0x1400A2694 (ApiSetEditionPostShellHookMessages.c)
 *     ?SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z @ 0x1401BE270 (-SetFilterKeys@@YAHPEAUtagFILTERKEYS@@@Z.c)
 *     ?StopFilterKeysTimers@@YAXXZ @ 0x1401F54F0 (-StopFilterKeysTimers@@YAXXZ.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

__int64 __fastcall SpiSetFilterKeys(__int64 a1, struct tagFILTERKEYS *a2, int a3, int a4, int *a5)
{
  int v8; // ebp
  __int64 v9; // rdi
  __int64 v10; // rcx
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax
  size_t v14; // r8
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int128 v21; // [rsp+20h] [rbp-38h] BYREF
  __int64 v22; // [rsp+30h] [rbp-28h]

  v8 = a1;
  v9 = W32GetUserSessionState(a1) + 20520;
  if ( v8 && v8 != 24 )
    return 0LL;
  if ( !a2 || *(_DWORD *)a2 != 24 || *((_DWORD *)a2 + 2) && *((_DWORD *)a2 + 5) )
    return 0LL;
  v10 = *((unsigned int *)a2 + 1);
  if ( (*((_DWORD *)a2 + 1) & 0x7F) != (_DWORD)v10 )
    return 0LL;
  v11 = *(_DWORD *)(W32GetUserSessionState(v10) + 20524);
  v12 = *((_DWORD *)a2 + 1) | 2;
  if ( (v11 & 2) == 0 )
    v12 = *((_DWORD *)a2 + 1) & 0xFFFFFFFD;
  *((_DWORD *)a2 + 1) = v12;
  if ( *((_DWORD *)a2 + 2) > 0x4E20u
    || *((_DWORD *)a2 + 3) > 0x4E20u
    || *((_DWORD *)a2 + 4) > 0x4E20u
    || *((_DWORD *)a2 + 5) > 0x4E20u )
  {
    return 0LL;
  }
  if ( a3 )
  {
    v13 = SetFilterKeys(a2);
    *a5 = v13;
    a4 = v13;
    if ( !v13 )
      SetFilterKeys((struct tagFILTERKEYS *)v9);
  }
  if ( !a4 )
    return 0LL;
  v14 = *(unsigned int *)a2;
  v15 = *(_QWORD *)(v9 + 16);
  v21 = *(_OWORD *)v9;
  v22 = v15;
  memmove((void *)v9, a2, v14);
  *(_DWORD *)v9 = 24;
  v17 = *(unsigned int *)(W32GetUserSessionState(v16) + 20524);
  if ( (v17 & 1) == 0 )
    StopFilterKeysTimers();
  SetAccessEnabledFlag(v17);
  ApiSetEditionCallAccessibilityHook(2LL, v18);
  ApiSetEditionPostShellHookMessages(v19, 2LL, (__int64)&v21, v9);
  return 1LL;
}
