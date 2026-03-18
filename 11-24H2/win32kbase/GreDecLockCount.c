/*
 * XREFs of GreDecLockCount @ 0x1400BF120
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x140037E58 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall GreDecLockCount(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  v2 = 0LL;
  if ( CurrentThreadNonPaged )
    v2 = *CurrentThreadNonPaged;
  result = v2 + 8;
  v4 = -v2;
  if ( (result & -(__int64)(v4 != 0)) != 0 )
    --*(_DWORD *)((result & -(__int64)(v4 != 0)) + 0x15C);
  return result;
}
