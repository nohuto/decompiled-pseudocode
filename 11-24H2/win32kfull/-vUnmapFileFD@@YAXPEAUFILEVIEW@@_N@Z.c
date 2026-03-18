/*
 * XREFs of ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14019F500
 * Callers:
 *     EngMapFontFileFDInternal @ 0x1400B39CC (EngMapFontFileFDInternal.c)
 * Callees:
 *     ?UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z @ 0x14019F540 (-UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z @ 0x14019F58C (-vUnreferenceFileviewSection@@YAXPEAUFILEVIEW@@@Z.c)
 */

void __fastcall vUnmapFileFD(struct FILEVIEW *a1, char a2)
{
  UnmapViewOfSectionFromFontDriverProcess(a1);
  if ( !*((_QWORD *)a1 + 1) && a2 )
    vUnreferenceFileviewSection(a1);
  *((_DWORD *)a1 + 10) &= ~1u;
}
