/*
 * XREFs of ?GetCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@CAMPEAVCWindowData@@@Z @ 0x1800E5934
 * Callers:
 *     ?ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z @ 0x1800109C0 (-ApplyCorrectionScaleForUniformSpaceWindow@CTopLevelWindow@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CTopLevelWindow@@AEAAXXZ @ 0x180019BB4 (-UpdateWindowScale@CTopLevelWindow@@AEAAXXZ.c)
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800E53A0 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall CTopLevelWindow::GetCorrectionScaleForUniformSpaceWindow(struct CWindowData *a1)
{
  int v1; // eax
  int v2; // edx
  float result; // xmm0_4

  v1 = *((_DWORD *)a1 + 86);
  v2 = *((_DWORD *)a1 + 87);
  result = FLOAT_1_0;
  if ( v1 != v2 )
    return (float)v1 / (float)v2;
  return result;
}
