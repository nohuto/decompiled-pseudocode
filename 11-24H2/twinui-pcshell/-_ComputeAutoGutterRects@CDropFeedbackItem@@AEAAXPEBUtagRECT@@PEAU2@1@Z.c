/*
 * XREFs of ?_ComputeAutoGutterRects@CDropFeedbackItem@@AEAAXPEBUtagRECT@@PEAU2@1@Z @ 0x180548A28
 * Callers:
 *     ?_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z @ 0x180549214 (-_UpdateAutoGutters@CDropFeedbackItem@@AEAAXPEBUtagRECT@@W4DCompThumbnailAnimation@@@Z.c)
 * Callees:
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18067EEB4 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z.c)
 */

void __fastcall CDropFeedbackItem::_ComputeAutoGutterRects(
        CDropFeedbackItem *this,
        const struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagRECT *a4)
{
  int v7; // ebx
  ImmersiveApplicationLayout *v8; // [rsp+40h] [rbp+8h]

  LODWORD(v8) = *((_DWORD *)this + 52) - *((_DWORD *)this + 50);
  HIDWORD(v8) = *((_DWORD *)this + 53) - *((_DWORD *)this + 51);
  v7 = ImmersiveApplicationLayout::ComputeGutterWidth(
         v8,
         (struct tagSIZE)*((unsigned int *)this + 54),
         (enum DEVICE_SCALE_FACTOR)a3);
  SetRect(a3, a2->left - v7, a2->top, a2->left, a2->bottom);
  SetRect(a4, a2->right, a2->top, a2->right + v7, a2->bottom);
}
