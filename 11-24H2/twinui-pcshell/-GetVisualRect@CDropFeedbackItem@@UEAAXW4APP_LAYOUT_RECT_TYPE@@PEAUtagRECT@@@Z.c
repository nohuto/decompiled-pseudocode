/*
 * XREFs of ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180547D90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1805405A8 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180542914 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 *     ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1805492AC (-_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z.c)
 */

void __fastcall CDropFeedbackItem::GetVisualRect(__int64 a1, int a2, struct tagRECT *a3)
{
  int v6; // eax
  float v7; // xmm0_4
  float v8; // xmm1_4
  double v9; // xmm0_8
  float v10[2]; // [rsp+20h] [rbp-40h] BYREF
  int v11[4]; // [rsp+28h] [rbp-38h] BYREF
  struct tagPOINT Points[2]; // [rsp+38h] [rbp-28h] BYREF
  RECT rcSrc2; // [rsp+48h] [rbp-18h] BYREF

  *(_OWORD *)&Points[0].x = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 1LL, Points);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, Points, 2u);
  if ( a2 )
    *a3 = *(struct tagRECT *)MapRelativeRect(v11, (int *)(a1 + 108), (_OWORD *)(a1 + 92), (int *)Points);
  else
    CopyRect(a3, (const RECT *)Points);
  rcSrc2 = 0LL;
  CDropFeedbackItem::_ZoomRect(a1, 0LL, &rcSrc2);
  MapWindowPoints(*(HWND *)(a1 + 192), 0LL, (LPPOINT)&rcSrc2, 2u);
  IntersectRect(a3, a3, &rcSrc2);
  v6 = *(_DWORD *)(a1 + 212) - *(_DWORD *)(a1 + 204);
  v7 = (float)*(int *)(a1 + 204);
  v10[0] = (float)((float)(*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200)) * 0.5) + (float)*(int *)(a1 + 200);
  v11[0] = a3->left;
  v11[1] = a3->top;
  v11[2] = a3->right;
  v11[3] = a3->bottom;
  v8 = (float)((float)v6 * 0.5) + v7;
  v9 = *(double *)(a1 + 176) * 100.0;
  v10[1] = v8;
  ZoomRect((const struct Geometry::CRect *)v11, (const struct Geometry::CPointFloat *)v10, (int)v9, a3);
}
