/*
 * XREFs of ?MNDrawHilite@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14006B83C
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagDRAWITEMSTRUCT@@@Z @ 0x14006B4C8 (-MNInitDrawItemStruct@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagD.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 * Callees:
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400726AC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ?MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z @ 0x140217D44 (-MNIsCachedBmpOnly@@YAHPEAUtagITEM@@@Z.c)
 */

__int64 __fastcall MNDrawHilite(__int64 a1, struct tagITEM *a2)
{
  unsigned int v3; // ebx
  int v5; // ecx
  struct tagMENU *v7; // rcx

  v3 = 0;
  v5 = *(_DWORD *)(*(_QWORD *)a2 + 4LL);
  if ( (v5 & 0x80u) != 0 && (v5 & 0xC0000000) == 0 )
  {
    v7 = *(struct tagMENU **)(a1 + 16);
    if ( !v7 )
      v7 = **(struct tagMENU ***)a1;
    if ( (unsigned int)MNIsUAHMenu(v7) || !(unsigned int)MNIsCachedBmpOnly(a2) )
      return 1;
  }
  return v3;
}
