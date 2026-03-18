/*
 * XREFs of ?GrepGetFontData@@YAKAEAVUDCOBJ@@KKPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1400B2754
 * Callers:
 *     NtGdiGetFontData @ 0x14025FC90 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1400B2790 (-ulGetFontData2@@YAKAEAVUDCOBJ@@KKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 */

unsigned int __fastcall GrepGetFontData(struct UDCOBJ *a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  __int64 v5; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+44h] [rbp+Ch]

  v5 = *(_QWORD *)a1;
  v7 = 21;
  v8 = *(unsigned __int16 *)(v5 + 12);
  return ulGetFontData2(a1, a2, a3, a4, a5, (const struct RFONTOBJ::Tag *)&v7);
}
