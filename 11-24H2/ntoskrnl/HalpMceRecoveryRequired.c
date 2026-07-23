/*
 * XREFs of HalpMceRecoveryRequired @ 0x14055287C
 * Callers:
 *     HalpMceRecovery @ 0x1405522D0 (HalpMceRecovery.c)
 * Callees:
 *     HalpMcaAMDIsMemoryError @ 0x1405410B8 (HalpMcaAMDIsMemoryError.c)
 *     HalpMceRecoveryMemoryError @ 0x140552500 (HalpMceRecoveryMemoryError.c)
 */

__int64 __fastcall HalpMceRecoveryRequired(__int64 a1)
{
  __int64 v1; // r10
  unsigned int v2; // r11d
  __int16 v3; // cx
  __int64 v4; // rcx

  v1 = a1;
  v2 = -1073741637;
  v3 = *(_WORD *)(a1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 2 )
  {
    if ( HalpMcaAMDIsMemoryError(v1, v3) )
      return (unsigned int)HalpMceRecoveryMemoryError(v1);
  }
  else
  {
    if ( (v3 & 0xEF00) == 0x100 )
      return (unsigned int)HalpMceRecoveryMemoryError(v1);
    if ( (v3 & 0xE800) == 0x800 )
    {
      v4 = *(_QWORD *)(v1 + 40);
      if ( (v4 & 0x1000) != 0
        || (((unsigned __int16)v4 >> 9) & 3) != 3
        || (unsigned __int8)v4 >> 4
        || (((unsigned __int8)v4 >> 2) & 3) != 2
        || (v4 & 3) != 3
        || (v4 & 0x800000000000000LL) != 0 )
      {
        if ( *(_DWORD *)v1 >= 3u )
          *(_DWORD *)(v1 + 272) |= 1u;
      }
      else if ( *(_DWORD *)v1 >= 3u )
      {
        *(_DWORD *)(v1 + 272) |= 0x20u;
      }
    }
  }
  return v2;
}
