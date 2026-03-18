/*
 * XREFs of DivFD6 @ 0x14013ED98
 * Callers:
 *     HT_Get8BPPMaskPalette @ 0x1401267A0 (HT_Get8BPPMaskPalette.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x140127DF4 (HT_CreateDeviceHalftoneInfo.c)
 *     CreateStandardMonoPattern @ 0x1401299CC (CreateStandardMonoPattern.c)
 *     pDCIAdjClr @ 0x14013CA6C (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x14013DA50 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x14013DE44 (ComputeRGBLUTAA.c)
 *     RaisePower @ 0x14013E960 (RaisePower.c)
 *     ComputeColorSpaceXForm @ 0x14013F51C (ComputeColorSpaceXForm.c)
 *     BuildExpandAAInfo @ 0x1401400A0 (BuildExpandAAInfo.c)
 *     ComputeInverseMatrix3x3 @ 0x140140C0C (ComputeInverseMatrix3x3.c)
 *     HT_Get8BPPFormatPalette @ 0x140213FD0 (HT_Get8BPPFormatPalette.c)
 *     HT_ComputeRGBGammaTable @ 0x1402F30F0 (HT_ComputeRGBGammaTable.c)
 *     CacheRGBToXYZ @ 0x1402F3824 (CacheRGBToXYZ.c)
 *     ComputeBGRMappingTable @ 0x1402F3914 (ComputeBGRMappingTable.c)
 *     ScaleRGB @ 0x1402F46D4 (ScaleRGB.c)
 * Callees:
 *     U64DivU32RoundUp @ 0x14013EE58 (U64DivU32RoundUp.c)
 */

__int64 __fastcall DivFD6(int a1, int a2)
{
  unsigned int v2; // r10d
  int v3; // ebx
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  unsigned int v6; // eax
  bool v7; // cf
  unsigned int v8; // ecx
  __int64 result; // rax

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (a1 >> 31) + 0x80000000;
  }
  else
  {
    v3 = 0;
  }
  if ( v2 == 1000000 )
  {
    result = (unsigned int)-a1;
    if ( !v3 )
      return (unsigned int)a1;
  }
  else
  {
    if ( a1 <= 0 )
    {
      a1 = -a1;
      if ( !a1 )
        return 0LL;
      v3 ^= 1u;
    }
    if ( a1 == v2 )
    {
      return v3 != 0 ? -1000000 : 1000000;
    }
    else
    {
      v4 = 62500 * (unsigned __int16)a1;
      v5 = v4 - 198967296 * HIWORD(a1);
      v6 = (unsigned int)(62500 * HIWORD(a1)) >> 16;
      v7 = v4 >= 198967296 * HIWORD(a1);
      v8 = v6 + 1;
      if ( !v7 )
        v8 = v6;
      result = U64DivU32RoundUp((v5 >> 28) | (16 * v8), 16 * v5, v2);
      if ( v3 )
        return (unsigned int)-(int)result;
    }
  }
  return result;
}
