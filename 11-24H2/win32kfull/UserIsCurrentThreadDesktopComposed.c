/*
 * XREFs of UserIsCurrentThreadDesktopComposed @ 0x140178BF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x14026E814 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall UserIsCurrentThreadDesktopComposed(__int64 a1, __int64 a2)
{
  __int64 *CurrentThreadNonPaged; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1, a2);
  result = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  else
    v4 = 0LL;
  v5 = *(_QWORD *)(v4 + 496);
  if ( v5 )
    return *(_DWORD *)(**(_QWORD **)(v5 + 8) + 64LL) & 1;
  return result;
}
