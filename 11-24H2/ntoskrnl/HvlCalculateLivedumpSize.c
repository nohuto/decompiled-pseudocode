/*
 * XREFs of HvlCalculateLivedumpSize @ 0x1405873D0
 * Callers:
 *     IopLiveDumpEstimateMemoryPages @ 0x140597940 (IopLiveDumpEstimateMemoryPages.c)
 * Callees:
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14058AB8C (VslLiveDumpQuerySecondaryDataSize.c)
 */

__int64 __fastcall HvlCalculateLivedumpSize(__int64 a1, unsigned __int64 *a2, _QWORD *a3, unsigned __int64 *a4)
{
  unsigned int v6; // r11d
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax

  v6 = -1073741637;
  if ( (HvlpRootFlags & 2) != 0 && Address && HvlpHypervisorStatsPage )
  {
    v7 = *(_QWORD *)(HvlpHypervisorStatsPage + 24);
    if ( (a1 & 2) == 0 )
    {
      v8 = *(_QWORD *)(HvlpHypervisorStatsPage + 88);
      if ( v7 <= v8 )
        return 3221225473LL;
      v7 -= v8;
    }
    v6 = 0;
    v10 = (v7
         + ((v7 + 767) >> 9)
         + ((((((v7 + 767) >> 9) + 511) >> 9) + 511) >> 9)
         + ((((v7 + 767) >> 9) + 511) >> 9)
         + 257) << 12;
  }
  else
  {
    v10 = 0LL;
  }
  *a2 = v10;
  if ( VslVsmEnabled )
  {
    return (unsigned int)VslLiveDumpQuerySecondaryDataSize(a1, a3, a4);
  }
  else
  {
    v11 = (unsigned __int64)(unsigned int)dword_140F8E1B8 << 12;
    *a3 = 0LL;
    *a4 = v11;
  }
  return v6;
}
