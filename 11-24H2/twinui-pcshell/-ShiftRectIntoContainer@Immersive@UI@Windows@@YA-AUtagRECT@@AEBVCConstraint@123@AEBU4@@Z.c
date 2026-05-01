/*
 * XREFs of ?ShiftRectIntoContainer@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x18013E2F4
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013D0B8 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013DD30 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

struct tagRECT *__fastcall Windows::UI::Immersive::ShiftRectIntoContainer(
        struct tagRECT *this,
        struct tagRECT *__return_ptr retstr,
        struct tagRECT *a3,
        const struct tagRECT *a4)
{
  struct tagRECT v4; // xmm0
  LONG left; // edx
  LONG right; // edx
  LONG top; // rcx^4
  int v10; // edx
  int v11; // r8d
  LONG v12; // r8d
  LONG bottom; // r8d
  struct tagRECT v15; // xmm0
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // edx
  struct tagRECT rc; // [rsp+20h] [rbp-10h] BYREF

  v4 = *a3;
  left = retstr->left;
  *this = *a3;
  if ( this->left < left )
  {
    top = v4.top;
    v10 = left - v4.left;
  }
  else
  {
    right = retstr->right;
    if ( this->right <= right )
      goto LABEL_5;
    top = v4.top;
    v10 = this->left + right - this->right - v4.left;
  }
  v11 = this->top - top;
  rc = v4;
  OffsetRect(&rc, v10, v11);
  *this = rc;
LABEL_5:
  v12 = retstr->top;
  if ( this->top < v12 )
  {
    v15 = *this;
    v16 = *(_QWORD *)&this->left;
    v17 = v12 - HIDWORD(*(_QWORD *)&this->left);
LABEL_10:
    v18 = this->left - v16;
    rc = v15;
    OffsetRect(&rc, v18, v17);
    *this = rc;
    return this;
  }
  bottom = retstr->bottom;
  if ( this->bottom > bottom )
  {
    v15 = *this;
    v16 = *(_QWORD *)&this->left;
    v17 = this->top + bottom - HIDWORD(*(_QWORD *)&this->left) - this->bottom;
    goto LABEL_10;
  }
  return this;
}
