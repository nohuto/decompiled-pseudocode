/*
 * XREFs of ?MulDiv@CRect@Geometry@@SA?AU12@AEBUtagRECT@@HH@Z @ 0x18053F690
 * Callers:
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1805405A8 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180542914 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     s_OnDrawItemHelper @ 0x1806857A0 (s_OnDrawItemHelper.c)
 * Callees:
 *     <none>
 */

int *__fastcall Geometry::CRect::MulDiv(int *a1, int *a2, int a3, int a4)
{
  int v8; // esi
  int v9; // edi
  int v10; // ebx
  int *result; // rax

  v8 = MulDiv(a2[3], a3, a4);
  v9 = MulDiv(a2[2], a3, a4);
  v10 = MulDiv(a2[1], a3, a4);
  *a1 = MulDiv(*a2, a3, a4);
  result = a1;
  a1[1] = v10;
  a1[2] = v9;
  a1[3] = v8;
  return result;
}
