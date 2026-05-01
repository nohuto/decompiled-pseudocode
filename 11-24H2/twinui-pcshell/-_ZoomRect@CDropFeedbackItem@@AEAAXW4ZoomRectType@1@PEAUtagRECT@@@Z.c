/*
 * XREFs of ?_ZoomRect@CDropFeedbackItem@@AEAAXW4ZoomRectType@1@PEAUtagRECT@@@Z @ 0x1805492AC
 * Callers:
 *     ?GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z @ 0x180547D90 (-GetVisualRect@CDropFeedbackItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEAUtagRECT@@@Z.c)
 *     ?_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180548C98 (-_Update@CDropFeedbackItem@@AEAAJW4DCompThumbnailAnimation@@PEAUIDCompBatchAnimationCallback@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z @ 0x1805405A8 (-ZoomRect@@YAXAEBUCRect@Geometry@@AEBUCPointFloat@2@HPEAUtagRECT@@@Z.c)
 *     ?MapRelativeRect@@YA?AUCRect@Geometry@@AEBU12@00@Z @ 0x180542914 (-MapRelativeRect@@YA-AUCRect@Geometry@@AEBU12@00@Z.c)
 */

void __fastcall CDropFeedbackItem::_ZoomRect(__int64 a1, int a2, struct tagRECT *a3)
{
  HWND v5; // rdx
  HWND v7; // rdx
  int v8; // ecx
  int v9; // ebx
  __int64 i; // rax
  int v11; // r9d
  int v12; // r8d
  int v13; // ecx
  int v14; // r9d
  int v15; // ecx
  int v16; // r9d
  int v17; // r8d
  int v18; // r9d
  struct tagRECT v19; // xmm0
  struct tagRECT v20; // [rsp+20h] [rbp-50h] BYREF
  int v21[4]; // [rsp+30h] [rbp-40h] BYREF
  struct tagPOINT Points[2]; // [rsp+40h] [rbp-30h] BYREF
  struct tagPOINT v23[2]; // [rsp+50h] [rbp-20h] BYREF

  v5 = *(HWND *)(a1 + 192);
  *(_OWORD *)&Points[0].x = *(_OWORD *)(a1 + 76);
  MapWindowPoints(0LL, v5, Points, 2u);
  v7 = *(HWND *)(a1 + 192);
  *(_OWORD *)&v23[0].x = *(_OWORD *)(a1 + 124);
  MapWindowPoints(0LL, v7, v23, 2u);
  v8 = *(_DWORD *)(a1 + 72);
  v9 = 100;
  if ( (v8 & 0x860C02) != 0 )
  {
    for ( i = 0LL; (unsigned int)i < 6; i = (unsigned int)(i + 1) )
    {
      if ( (v8 & dword_1807B2B88[2 * i]) != 0 )
      {
        v9 = dword_1807B2B88[2 * i + 1];
        if ( v9 == 100 )
          break;
        v11 = *(_DWORD *)(a1 + 212);
        if ( (v8 & 0x20000) != 0 )
        {
          v20 = *(struct tagRECT *)&Points[0].x;
          v12 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 12));
          v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 4));
          v14 = v11 - (v12 - v13) / 2 - *(_DWORD *)(a1 + 204) - v13;
          Points[1].y = v14 + v12;
          Points[0].y = v14 + v13;
        }
        else
        {
          if ( (v8 & 0x40000) == 0 )
            break;
          v15 = _mm_cvtsi128_si32(*(__m128i *)&Points[0].x);
          v16 = (*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 200)) / 2;
          v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)&Points[0].x, 8));
          v20 = *(struct tagRECT *)&Points[0].x;
          v18 = v16 - (v17 - v15) / 2 - v15;
          Points[0].x = v18 + v15;
          Points[1].x = v18 + v17;
        }
        *(_OWORD *)&v23[0].x = *(_OWORD *)MapRelativeRect(v21, &v20.left, v23, (int *)Points);
        break;
      }
    }
  }
  v19 = 0LL;
  v20 = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_17;
    v19 = *(struct tagRECT *)&v23[0].x;
  }
  else
  {
    v19 = *(struct tagRECT *)&Points[0].x;
  }
  v20 = v19;
LABEL_17:
  if ( v9 == 100 )
  {
    *a3 = v19;
  }
  else
  {
    *(float *)v21 = (float)((float)(Points[1].x - Points[0].x) * 0.5) + (float)Points[0].x;
    *(float *)&v21[1] = (float)((float)(Points[1].y - Points[0].y) * 0.5) + (float)Points[0].y;
    ZoomRect((const struct Geometry::CRect *)&v20, (const struct Geometry::CPointFloat *)v21, v9, a3);
    if ( (*(_DWORD *)(a1 + 72) & 0x40000) != 0 )
      OffsetRect(a3, 0, -a3->top);
  }
}
