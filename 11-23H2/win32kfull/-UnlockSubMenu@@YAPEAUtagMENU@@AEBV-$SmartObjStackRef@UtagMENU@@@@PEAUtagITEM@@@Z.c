/*
 * XREFs of ?UnlockSubMenu@@YAPEAUtagMENU@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E3708
 * Callers:
 *     MNFreeItem @ 0x1C00E4014 (MNFreeItem.c)
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00E558C (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 * Callees:
 *     ?RemoveParentMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C00E2E40 (-RemoveParentMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 */

__int64 __fastcall UnlockSubMenu(__int64 **a1, _QWORD *a2)
{
  if ( !a2[2] )
    return 0LL;
  RemoveParentMenu(a1, (__int64)a2);
  *(_QWORD *)(*a2 + 16LL) = 0LL;
  return HMAssignmentUnlock(a2 + 2);
}
