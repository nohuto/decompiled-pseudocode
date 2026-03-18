/*
 * XREFs of EtwTraceFlipManagerPresentProcessed @ 0x14012E0A0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qxxxxxi_EtwWriteTransfer @ 0x14012E2A4 (McTemplateK0qxxxxxi_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceFlipManagerPresentProcessed(
        int a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  char v6; // r10
  int v9; // r10d
  double v10; // xmm1_8
  double v11; // xmm1_8
  double LowPart; // xmm1_8
  double v13; // xmm0_8
  double v14; // xmm0_8
  int v15; // r8d
  double v16; // xmm0_8
  double v17; // xmm0_8
  char v18; // dl
  double v19; // xmm0_8
  double v20; // xmm0_8
  unsigned __int64 v21; // rax

  v6 = 0;
  if ( a6 )
  {
    v9 = a6 - a4;
    if ( (__int64)(a6 - a4) < 0 )
    {
      v21 = v9 & 1 | ((a6 - a4) >> 1);
      v10 = (double)(int)v21 + (double)(int)v21;
    }
    else
    {
      v10 = (double)v9;
    }
    v11 = v10 / (double)(int)gliQpcFreq.LowPart * 10000000.0;
    if ( v11 >= 9.223372036854776e18 )
      v11 = v11 - 9.223372036854776e18;
    v6 = (int)v11;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    LowPart = (double)(int)gliQpcFreq.LowPart;
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v13 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v13 = (double)(int)a5;
    v14 = v13 / LowPart * 10000000.0;
    if ( v14 >= 9.223372036854776e18 )
      v14 = v14 - 9.223372036854776e18;
    v15 = (int)v14;
    if ( a4 < 0 )
      v16 = (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1)) + (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1));
    else
      v16 = (double)(int)a4;
    v17 = v16 / LowPart * 10000000.0;
    if ( v17 >= 9.223372036854776e18 )
      v17 = v17 - 9.223372036854776e18;
    v18 = (int)v17;
    if ( (a6 & 0x8000000000000000uLL) != 0LL )
      v19 = (double)(int)(a6 & 1 | (a6 >> 1)) + (double)(int)(a6 & 1 | (a6 >> 1));
    else
      v19 = (double)(int)a6;
    v20 = v19 / LowPart * 10000000.0;
    if ( v20 >= 9.223372036854776e18 )
      v20 = v20 - 9.223372036854776e18;
    McTemplateK0qxxxxxi_EtwWriteTransfer(
      0,
      (unsigned int)&FlipManagerPresentProcessed,
      v15,
      a1,
      a2,
      a3,
      (int)v20,
      v18,
      v15,
      v6);
  }
}
