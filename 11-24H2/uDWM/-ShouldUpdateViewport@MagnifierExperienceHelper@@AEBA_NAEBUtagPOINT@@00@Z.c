/*
 * XREFs of ?ShouldUpdateViewport@MagnifierExperienceHelper@@AEBA_NAEBUtagPOINT@@00@Z @ 0x1800C9984
 * Callers:
 *     ?GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA?AUtagPOINT@@AEBU2@AEBN00@Z @ 0x1800C91F0 (-GetFullScreenMagnifierOffset@MagnifierExperienceHelper@@QEAA-AUtagPOINT@@AEBU2@AEBN00@Z.c)
 * Callees:
 *     ?GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA?AUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1800C950C (-GetStillZoneFromOffset@MagnifierExperienceHelper@@AEBA-AUtagRECT@@AEBUtagPOINT@@0@Z.c)
 */

bool __fastcall MagnifierExperienceHelper::ShouldUpdateViewport(
        RECT *lprc,
        const struct tagPOINT *a2,
        const struct tagPOINT *a3,
        const struct tagPOINT *a4)
{
  LONG x; // eax
  struct tagRECT v9; // [rsp+20h] [rbp-18h] BYREF

  MagnifierExperienceHelper::GetStillZoneFromOffset(lprc, &v9, a2, a3);
  x = a3->x;
  if ( a3->x < v9.left )
  {
    if ( a4->x > 0 )
      return 0;
  }
  else
  {
    if ( x > v9.right )
      goto LABEL_8;
    if ( a3->y >= v9.top && a3->y <= v9.bottom )
      return 0;
  }
  if ( x <= v9.right )
    goto LABEL_9;
LABEL_8:
  if ( a4->x < 0 )
    return 0;
LABEL_9:
  if ( a3->y < v9.top && a4->y > 0 || a3->y > v9.bottom && a4->y < 0 )
    return 0;
  return PtInRect(lprc, *a3);
}
