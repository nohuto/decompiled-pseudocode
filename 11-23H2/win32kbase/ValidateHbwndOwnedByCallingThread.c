/*
 * XREFs of ValidateHbwndOwnedByCallingThread @ 0x1C012FED0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ValidateHbwnd @ 0x1C012FD70 (ValidateHbwnd.c)
 */

__int64 __fastcall ValidateHbwndOwnedByCallingThread(int a1)
{
  __int64 v1; // rax
  __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rbx

  v1 = ValidateHbwnd(a1);
  v2 = v1;
  if ( v1 )
  {
    v3 = *(struct tagTHREADINFO **)(v1 + 16);
    if ( v3 != PtiCurrentShared() )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  else
  {
    UserSetLastError(1400);
  }
  return v2;
}
