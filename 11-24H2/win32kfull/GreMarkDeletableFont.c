/*
 * XREFs of GreMarkDeletableFont @ 0x1401CDE34
 * Callers:
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     DeleteMetricsFont @ 0x1401CD284 (DeleteMetricsFont.c)
 *     UserSetFont @ 0x1401CD7E8 (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1401CD854 (CreateFontFromUserProfile.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x1400BEA9C (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  struct LFONT *v4; // [rsp+28h] [rbp-10h]

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v3, a1, 0LL);
  if ( v3 && (*(_DWORD *)(v3 + 4) & 2) == 0 )
  {
    LOBYTE(v2) = 10;
    HmgMarkDeletable(a1, v2);
  }
  if ( v4 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v4);
}
