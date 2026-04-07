/*
 * XREFs of DwmpCalculateColorizationColor @ 0x180071CB4
 * Callers:
 *     ?ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z @ 0x180071BEC (-ApplyColorizationParameters@CDesktopManager@@QEAA_NPEAVCGlassColorizationParameters@@@Z.c)
 * Callees:
 *     floorf @ 0x18009C474 (floorf.c)
 */

__int64 __fastcall DwmpCalculateColorizationColor(int *a1, int *a2)
{
  float v4; // xmm6_4
  float v5; // xmm12_4
  float v6; // xmm9_4
  float v7; // xmm0_4
  float v8; // xmm11_4
  float v9; // xmm10_4
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx

  v4 = (float)a1[3] / 100.0;
  v5 = (float)a1[2] / 100.0;
  v6 = (float)*((unsigned __int8 *)a1 + 1) / 255.0;
  v7 = (float)*((unsigned __int8 *)a1 + 2) / 255.0;
  v8 = (float)*(unsigned __int8 *)a1 / 255.0;
  v9 = (float)((float)((float)((float)(v6 * 0.71520001) + (float)(v7 * 0.21259999)) + (float)(v8 * 0.0722)) * v4) * v5;
  v10 = (unsigned __int8)(int)fminf(
                                floorf(
                                  (float)((float)((float)((float)((float)*((unsigned __int8 *)a1 + 6) / 255.0) * v9)
                                                + (float)(v7 * v5))
                                        * 255.0)
                                + 0.5),
                                255.0);
  v11 = (((unsigned __int8)(int)fminf(
                                  floorf((float)(fmaxf((float)(1.0 - v4) - (float)((float)a1[4] / 100.0), 0.0) * 255.0) + 0.5),
                                  255.0) << 8) | v10) << 8;
  v12 = ((unsigned __int8)(int)fminf(
                                 floorf(
                                   (float)((float)((float)((float)((float)*((unsigned __int8 *)a1 + 5) / 255.0) * v9)
                                                 + (float)(v6 * v5))
                                         * 255.0)
                                 + 0.5),
                                 255.0) | v11) << 8;
  *a2 = (unsigned __int8)(int)fminf(
                                floorf(
                                  (float)((float)((float)((float)((float)*((unsigned __int8 *)a1 + 4) / 255.0) * v9)
                                                + (float)(v8 * v5))
                                        * 255.0)
                                + 0.5),
                                255.0) | v12;
  return 0LL;
}
