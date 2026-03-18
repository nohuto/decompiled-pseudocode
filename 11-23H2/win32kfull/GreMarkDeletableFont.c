/*
 * XREFs of GreMarkDeletableFont @ 0x1C00D16B0
 * Callers:
 *     DeleteMetricsFont @ 0x1C001B840 (DeleteMetricsFont.c)
 *     xxxSetNCFonts @ 0x1C00CFFDC (xxxSetNCFonts.c)
 *     UserSetFont @ 0x1C00D04FC (UserSetFont.c)
 *     CreateFontFromUserProfile @ 0x1C00D0578 (CreateFontFromUserProfile.c)
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01C71A4 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C00D1AD8 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 */

void __fastcall GreMarkDeletableFont(struct HLFONT__ *a1)
{
  __int64 v2; // rdx
  struct LFONT *v3; // rbx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v4, a1, 0LL);
  v3 = (struct LFONT *)v4;
  if ( v4 )
  {
    if ( (*(_DWORD *)(v4 + 28) & 2) == 0 )
    {
      LOBYTE(v2) = 10;
      HmgMarkDeletable(a1, v2);
    }
    if ( v3 )
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v3);
  }
}
