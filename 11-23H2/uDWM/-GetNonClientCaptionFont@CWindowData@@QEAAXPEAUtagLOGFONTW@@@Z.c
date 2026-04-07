/*
 * XREFs of ?GetNonClientCaptionFont@CWindowData@@QEAAXPEAUtagLOGFONTW@@@Z @ 0x18001C650
 * Callers:
 *     ?UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z @ 0x18003B168 (-UpdateText@CTopLevelWindow@@AEAAJPEAUWindowFrame@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowData::GetNonClientCaptionFont(CWindowData *this, struct tagLOGFONTW *a2)
{
  double v3; // xmm6_8
  double v4; // xmm6_8
  double v5; // xmm0_8

  *a2 = *(struct tagLOGFONTW *)((char *)CDesktopManager::s_pDesktopManagerInstance + 296);
  v3 = (double)*((int *)this + 87);
  v4 = v3 / (double)(int)GetDpiForSystem();
  v5 = (double)a2->lfWidth * v4;
  a2->lfHeight = (int)((double)a2->lfHeight * v4);
  a2->lfWidth = (int)v5;
}
