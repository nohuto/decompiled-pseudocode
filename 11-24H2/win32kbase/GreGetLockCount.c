/*
 * XREFs of GreGetLockCount @ 0x1400BB850
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GreGetLockCount(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  v2 = 0LL;
  if ( CurrentThreadNonPaged )
    v2 = *CurrentThreadNonPaged;
  v3 = v2 + 8;
  v4 = -v2;
  if ( (v3 & -(__int64)(v4 != 0)) != 0 )
    return *(unsigned int *)((v3 & -(__int64)(v4 != 0)) + 0x15C);
  else
    return 0LL;
}
