/*
 * XREFs of ValidateHbwndOwnedByCallingThread @ 0x1401A9390
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ValidateHbwnd @ 0x14011F5D0 (ValidateHbwnd.c)
 */

__int64 __fastcall ValidateHbwndOwnedByCallingThread(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rdi
  struct tagTHREADINFO *v4; // rbx

  v1 = ValidateHbwnd(a1);
  v3 = v1;
  if ( v1 )
  {
    v4 = *(struct tagTHREADINFO **)(v1 + 16);
    if ( v4 != PtiCurrent(v2) )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return v3;
}
