/*
 * XREFs of HvpMappedViewConvertLockedPagesToCOWByPolicy @ 0x14096CBB0
 * Callers:
 *     HvpViewMapConvertLockedPagesToCOWByPolicy @ 0x14096CB60 (HvpViewMapConvertLockedPagesToCOWByPolicy.c)
 * Callees:
 *     HvpMappedViewConvertRegionFromLockedToCOWByPolicy @ 0x14096CC58 (HvpMappedViewConvertRegionFromLockedToCOWByPolicy.c)
 */

__int64 __fastcall HvpMappedViewConvertLockedPagesToCOWByPolicy(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 i; // rdi
  __int64 result; // rax

  if ( !a2[8] )
    return 0LL;
  v4 = a2[5];
  v5 = v4;
  for ( i = v4; i < a2[6]; i += 4096LL )
  {
    if ( !a2[8] )
      return 0LL;
    if ( (*((_BYTE *)a2 + ((unsigned __int64)(i - a2[3]) >> 12) + 72) & 0x10) == 0 )
    {
      if ( v4 != v5 )
      {
        result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2);
        if ( (int)result < 0 )
          return result;
      }
      v4 = i + 4096;
      v5 = i;
    }
    v5 += 4096LL;
  }
  if ( v4 == v5 )
    return 0LL;
  result = HvpMappedViewConvertRegionFromLockedToCOWByPolicy(a1, a2);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
