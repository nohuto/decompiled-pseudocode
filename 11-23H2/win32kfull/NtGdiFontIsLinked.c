/*
 * XREFs of NtGdiFontIsLinked @ 0x1C0089A90
 * Callers:
 *     <none>
 * Callees:
 *     ?GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1C0089AD8 (-GreFontIsLinked@@YAHPEAUHDC__@@W4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1C00F9818 (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z @ 0x1C00FB710 (--0EUDCCountRegion@@QEAA@AEAUSESSION_GLOBALS@Full@Gre@@@Z.c)
 */

__int64 __fastcall NtGdiFontIsLinked(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1;
  v2 = SGDGetSessionState(a1);
  EUDCCountRegion::EUDCCountRegion((EUDCCountRegion *)v4, *(struct Gre::Full::SESSION_GLOBALS **)(v2 + 32));
  LODWORD(v1) = GreFontIsLinked(v1);
  EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v4);
  return (unsigned int)v1;
}
