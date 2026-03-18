/*
 * XREFs of GreGetTextCharacterExtra @ 0x140310A74
 * Callers:
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 * Callees:
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextCharacterExtra(HDC a1)
{
  unsigned int v1; // ebx
  _QWORD v3[11]; // [rsp+20h] [rbp-58h] BYREF

  v1 = 0;
  UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v3, a1);
  if ( v3[0] )
    v1 = *(_DWORD *)(*(_QWORD *)(v3[0] + 976LL) + 280LL);
  DCOBJ::~DCOBJ((DCOBJ *)v3);
  return v1;
}
