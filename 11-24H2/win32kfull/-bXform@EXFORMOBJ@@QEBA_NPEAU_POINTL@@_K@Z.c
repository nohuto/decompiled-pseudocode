/*
 * XREFs of ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400C56E8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1400CCB64 (-GrepGetAppClipBox@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     XFORMOBJ_bApplyXform @ 0x1400DC420 (XFORMOBJ_bApplyXform.c)
 *     ?GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016E820 (-GrepGetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z @ 0x14016ECA0 (-GrepSetBoundsRect@@YAKAEAVXDCOBJ@@PEAUtagRECT@@K@Z.c)
 *     ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x140308EE0 (-Msk@BLTRECORD@@QEAAHHHHH@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x1400C5774 (bCvtPts1.c)
 */

char __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _POINTL *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx
  char v5; // cl
  int v7; // eax

  v4 = *(_QWORD *)this;
  if ( (*(_BYTE *)(v4 + 32) & 0x43) == 0x43 )
    return 1;
  v7 = bCvtPts1(v4, a2, a3, a4);
  v5 = 0;
  if ( v7 )
    return 1;
  return v5;
}
