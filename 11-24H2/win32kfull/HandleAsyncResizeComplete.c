/*
 * XREFs of HandleAsyncResizeComplete @ 0x14022515C
 * Callers:
 *     NtUserLayoutCompleted @ 0x1400874F0 (NtUserLayoutCompleted.c)
 * Callees:
 *     FindTimer @ 0x14005FED0 (FindTimer.c)
 */

__int64 __fastcall HandleAsyncResizeComplete(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  result = *(_QWORD *)(a1 + 16);
  v2 = *(_QWORD *)(result + 712);
  if ( v2 && *(_QWORD *)(v2 + 16) == a1 )
  {
    FindTimer(a1, 65522LL, 2u, 1, 0LL);
    result = *(_DWORD *)(v2 + 200) & 0x2008000;
    if ( (_DWORD)result == 33587200 )
    {
      *(_DWORD *)(v2 + 200) &= ~0x2000000u;
      return GenerateMouseMove(0LL);
    }
  }
  return result;
}
