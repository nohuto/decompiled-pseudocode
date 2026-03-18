/*
 * XREFs of xxxSetTrayWindow @ 0x1C00A4F7C
 * Callers:
 *     xxxCheckFullScreen @ 0x1C00621AC (xxxCheckFullScreen.c)
 *     xxxAddFullScreen @ 0x1C0062640 (xxxAddFullScreen.c)
 *     ?xxxUpdateTray@@YAXPEAUtagWND@@@Z @ 0x1C00A6428 (-xxxUpdateTray@@YAXPEAUtagWND@@@Z.c)
 *     xxxRemoveFullScreen @ 0x1C00F4314 (xxxRemoveFullScreen.c)
 *     xxxEndDeferWindowPosEx @ 0x1C01236C0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00B29B8 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     PostShellHookMessagesEx @ 0x1C00B2C00 (PostShellHookMessagesEx.c)
 */

__int64 __fastcall xxxSetTrayWindow(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  __int64 result; // rax
  unsigned __int64 *v6; // rdi
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0LL;
  if ( a2 == (unsigned __int64 *)1 )
  {
    v6 = *(unsigned __int64 **)(a1 + 96);
    if ( v6 )
      v4 = *v6;
    else
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
    if ( a2 )
      v4 = *a2;
    v7[1] = a2;
    v7[0] = a1 + 96;
    HMAssignmentLock(v7, 0LL);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 192LL) )
    PostShellHookMessagesEx(*(_WORD *)(gpDispInfo + 160LL) != 0 ? 32772 : 4, v4, 0LL);
  result = *(_QWORD *)(gptiCurrent + 464LL);
  if ( ((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(*(_QWORD *)result + 16LL)) & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_WORD *)(gpDispInfo + 160LL) != 0;
    return xxxCallHook(4, v4, v2, 10);
  }
  return result;
}
