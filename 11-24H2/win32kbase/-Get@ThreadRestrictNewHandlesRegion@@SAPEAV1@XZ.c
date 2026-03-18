/*
 * XREFs of ?Get@ThreadRestrictNewHandlesRegion@@SAPEAV1@XZ @ 0x1400BF8A8
 * Callers:
 *     GrepThreadCallout @ 0x1400BF560 (GrepThreadCallout.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

struct ThreadRestrictNewHandlesRegion *__fastcall ThreadRestrictNewHandlesRegion::Get(__int64 a1)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx

  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(a1);
  v2 = 0LL;
  if ( CurrentThreadNonPaged )
    v3 = *CurrentThreadNonPaged;
  else
    v3 = 0LL;
  v4 = v3 + 8;
  v5 = -v3;
  if ( (v4 & -(__int64)(v5 != 0)) != 0 )
    return *(struct ThreadRestrictNewHandlesRegion **)((v4 & -(__int64)(v5 != 0)) + 0x150);
  return (struct ThreadRestrictNewHandlesRegion *)v2;
}
