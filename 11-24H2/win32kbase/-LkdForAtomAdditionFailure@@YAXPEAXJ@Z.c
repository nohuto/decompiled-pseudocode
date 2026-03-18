/*
 * XREFs of ?LkdForAtomAdditionFailure@@YAXPEAXJ@Z @ 0x1401BE3F0
 * Callers:
 *     UserAddAtomEx @ 0x1400D8E10 (UserAddAtomEx.c)
 *     UserAddAtomToAtomTableEx @ 0x1400DE2A0 (UserAddAtomToAtomTableEx.c)
 *     UserAddAtomToAtomTable @ 0x14019B030 (UserAddAtomToAtomTable.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall LkdForAtomAdditionFailure(void *a1, int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 UserSessionState; // rbx

  if ( a1 == *(void **)(W32GetUserSessionState(a1) + 41440) )
  {
    v4 = *((_QWORD *)PtiCurrent(v3) + 65);
    *(_QWORD *)(v4 + 224) |= 0x800uLL;
    UserSessionState = W32GetUserSessionState(v4);
    if ( !*(_BYTE *)(UserSessionState + 42304) )
    {
      DbgkWerCaptureLiveKernelDump(L"win32kbase.sys", 400LL, 21LL, a2, 0LL, KeGetCurrentThread(), 0LL, 0LL, 0);
      *(_BYTE *)(UserSessionState + 42304) = 1;
    }
  }
}
