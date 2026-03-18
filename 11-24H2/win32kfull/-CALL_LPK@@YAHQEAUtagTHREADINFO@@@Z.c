/*
 * XREFs of ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x14007C360
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     xxxPSMGetTextExtent @ 0x14003D240 (xxxPSMGetTextExtent.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x14006B8A4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x14007C284 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x14007E4B4 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CALL_LPK(struct tagTHREADINFO *const a1)
{
  __int64 v1; // rdx
  unsigned int v2; // edi

  v1 = *(unsigned int *)(*((_QWORD *)a1 + 58) + 752LL);
  if ( (v1 & 0xF) == 0 )
    return 0;
  v2 = 1;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)a1 + 132, 0, 0) & 1) != 0
    || a1 == *(struct tagTHREADINFO *const *)(W32GetUserSessionState(a1, v1) + 18704) )
  {
    return 0;
  }
  return v2;
}
