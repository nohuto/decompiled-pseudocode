/*
 * XREFs of _GetKeyState @ 0x1400C5D20
 * Callers:
 *     NtUserGetKeyState @ 0x14016CDE0 (NtUserGetKeyState.c)
 * Callees:
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int16 __fastcall GetKeyState(__int64 a1)
{
  unsigned __int8 v1; // bl
  __int64 *CurrentThreadNonPaged; // rax
  __int16 v3; // r9
  __int64 v4; // rax
  int v5; // r8d
  __int16 result; // ax

  v1 = a1;
  if ( (unsigned int)a1 >= 0x100 )
  {
    UserSetLastError(87);
    return 0;
  }
  else
  {
    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
    HIBYTE(v3) = 0;
    if ( CurrentThreadNonPaged )
      v4 = *CurrentThreadNonPaged;
    else
      v4 = 0LL;
    v5 = *(unsigned __int8 *)(((unsigned __int64)v1 >> 2) + *(_QWORD *)(v4 + 472) + 280);
    LOBYTE(v3) = _bittest(&v5, (unsigned __int8)(2 * (v1 & 3) + 1));
    result = (unsigned __int8)v3 | 0xFF80;
    if ( !_bittest(&v5, 2 * (v1 & 3)) )
      return v3;
  }
  return result;
}
