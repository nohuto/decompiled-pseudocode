/*
 * XREFs of HvpProtectBinPartial @ 0x140A2C4E4
 * Callers:
 *     HvpMapHiveImage @ 0x1407E0050 (HvpMapHiveImage.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvpSetRangeProtection @ 0x140887154 (HvpSetRangeProtection.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14096A820 (HvpRemapAndEnlistHiveBins.c)
 * Callees:
 *     CmpProtectPoolEx @ 0x140485EC4 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1404D0140 (MmSetPageProtection.c)
 */

__int64 __fastcall HvpProtectBinPartial(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // ebx

  v6 = a2 + a4;
  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    MmSetPageProtection(v6, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v7 = 0;
    if ( a6 )
    {
      if ( !(unsigned int)CmpProtectPoolEx(a2, v6, a5, 4u) )
        return (unsigned int)-1073741670;
    }
    else
    {
      CmpProtectPoolEx(a2, v6, a5, 2u);
    }
  }
  return v7;
}
