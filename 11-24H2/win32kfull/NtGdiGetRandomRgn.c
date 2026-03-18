/*
 * XREFs of NtGdiGetRandomRgn @ 0x140038F20
 * Callers:
 *     <none>
 * Callees:
 *     GreGetRandomRgn @ 0x140038FA0 (GreGetRandomRgn.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, __int64 a2, int a3)
{
  int v4; // edi
  unsigned int RandomRgn; // ebx

  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
  {
    v4 = 1;
    UserEnterUserCritSecShared();
  }
  else
  {
    v4 = 0;
  }
  RandomRgn = GreGetRandomRgn(a1);
  if ( v4 )
    UserLeaveUserCritSec();
  return RandomRgn;
}
