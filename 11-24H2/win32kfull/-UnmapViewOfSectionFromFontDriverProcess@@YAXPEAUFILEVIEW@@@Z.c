/*
 * XREFs of ?UnmapViewOfSectionFromFontDriverProcess@@YAXPEAUFILEVIEW@@@Z @ 0x14019F540
 * Callers:
 *     ?vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z @ 0x14019F500 (-vUnmapFileFD@@YAXPEAUFILEVIEW@@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall UnmapViewOfSectionFromFontDriverProcess(struct FILEVIEW *a1)
{
  __int64 v1; // rax
  _QWORD v2[5]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+48h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 9);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[0] = v1;
  v2[1] = 0LL;
  v2[2] = *((_QWORD *)a1 + 2);
  v3 = 4;
  Gre::MapViewOfSectionObj::Unmap((Gre::MapViewOfSectionObj *)v2);
}
