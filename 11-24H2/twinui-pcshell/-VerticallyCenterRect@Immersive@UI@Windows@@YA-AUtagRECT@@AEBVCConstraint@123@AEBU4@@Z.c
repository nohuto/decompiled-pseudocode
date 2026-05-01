/*
 * XREFs of ?VerticallyCenterRect@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@@Z @ 0x1806845C0
 * Callers:
 *     ?PositionRelativeOnSide@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_PLACEMENT@@0@Z @ 0x18013D0B8 (-PositionRelativeOnSide@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBU4@W4FLYOUT_P.c)
 *     ?QueryRelativePosition@Immersive@UI@Windows@@YA?AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU4@W4FLYOUT_PLACEMENT@@PEAW47@@Z @ 0x18013DD30 (-QueryRelativePosition@Immersive@UI@Windows@@YA-AUtagRECT@@AEBVCConstraint@123@AEBUtagSIZE@@AEBU.c)
 * Callees:
 *     <none>
 */

LPRECT __fastcall Windows::UI::Immersive::VerticallyCenterRect(
        LPRECT lprc,
        struct tagRECT *__return_ptr retstr,
        const struct Windows::UI::Immersive::CConstraint *a3,
        const struct tagRECT *a4)
{
  __int64 v5; // kr00_8

  v5 = retstr->top + retstr->bottom - *((_DWORD *)a3 + 3) - *((_DWORD *)a3 + 1);
  *lprc = *(LPRECT)a3;
  OffsetRect(lprc, 0, v5 / 2);
  return lprc;
}
