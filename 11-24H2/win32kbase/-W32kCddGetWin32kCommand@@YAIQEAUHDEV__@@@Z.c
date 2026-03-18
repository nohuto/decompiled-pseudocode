/*
 * XREFs of ?W32kCddGetWin32kCommand@@YAIQEAUHDEV__@@@Z @ 0x14012C240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32kCddGetWin32kCommand(_DWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  result = (unsigned int)a1[652];
  if ( *(_DWORD *)(v2 + 1132) )
    return a1[652] | 0x40000000u;
  return result;
}
