/*
 * XREFs of Log @ 0x1C0157474
 * Callers:
 *     RaisePower @ 0x1C01576DA (RaisePower.c)
 *     AdjustSrcDevGamma @ 0x1C0252B64 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1C0253E84 (ComputeRGBLUTAA.c)
 *     pDCIAdjClr @ 0x1C0254E08 (pDCIAdjClr.c)
 * Callees:
 *     FD6DivL @ 0x1C0157430 (FD6DivL.c)
 *     FractionToMantissa @ 0x1C02523F8 (FractionToMantissa.c)
 */

__int64 __fastcall Log(int a1)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edx
  int v5; // edi
  __int64 v6; // rcx

  if ( a1 < 10000 )
  {
    if ( a1 < 100 )
    {
      if ( a1 < 10 )
      {
        if ( a1 <= 0 )
          return 4288967296LL;
        v2 = -6000000;
        a1 *= 100000000;
      }
      else
      {
        v2 = -5000000;
        a1 *= 10000000;
      }
    }
    else
    {
      v2 = -3000000;
      if ( a1 < 1000 )
        v2 = -4000000;
      v3 = 100000;
      if ( a1 < 1000 )
        v3 = 1000000;
      a1 *= v3;
    }
  }
  else if ( a1 < 1000000 )
  {
    if ( a1 < 100000 )
    {
      v2 = -2000000;
      a1 *= 10000;
    }
    else
    {
      v2 = -1000000;
      a1 *= 1000;
    }
  }
  else if ( a1 < 10000000 )
  {
    v2 = 0;
    a1 *= 100;
  }
  else if ( a1 < 100000000 )
  {
    v2 = 1000000;
    a1 *= 10;
  }
  else if ( a1 < 1000000000 )
  {
    v2 = 2000000;
  }
  else
  {
    if ( a1 >= 2147483642 )
      return 3331930LL;
    v2 = 3000000;
    a1 = FD6DivL(a1, 10);
  }
  v4 = a1 / 1000000;
  v5 = dword_1C03244C0[a1 / 1000000];
  v6 = (unsigned int)(a1 % 1000000);
  if ( (_DWORD)v6 )
    v5 += FractionToMantissa(v6, (unsigned int)dword_1C03252E0[v4]);
  return (unsigned int)(v5 + v2);
}
