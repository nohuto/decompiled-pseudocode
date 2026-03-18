/*
 * XREFs of ValidateHwndStrict @ 0x1401A93F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     ValidateHwndEx @ 0x1400B7530 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwndStrict(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = ValidateHwndEx(a1, 1, 0);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    if ( *(char *)(v2 + 20) < 0 || *(char *)(v2 + 19) < 0 )
    {
      UserSetLastError(1400);
      return 0LL;
    }
  }
  return result;
}
