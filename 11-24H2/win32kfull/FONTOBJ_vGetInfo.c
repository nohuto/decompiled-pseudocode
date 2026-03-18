/*
 * XREFs of FONTOBJ_vGetInfo @ 0x1401FB690
 * Callers:
 *     NtGdiFONTOBJ_vGetInfo @ 0x1401FB580 (NtGdiFONTOBJ_vGetInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14005CE04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vGetInfo@RFONTOBJ@@QEBAXPEAU_FONTINFO@@@Z @ 0x1401FB6FC (-vGetInfo@RFONTOBJ@@QEBAXPEAU_FONTINFO@@@Z.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void __stdcall FONTOBJ_vGetInfo(FONTOBJ *pfo, ULONG cjSize, FONTINFO *pfi)
{
  unsigned int v3; // r10d
  void *v4; // r11
  struct _FONTINFO Src; // [rsp+20h] [rbp-28h] BYREF
  FONTOBJ *v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = pfo;
  memset(&Src, 0, sizeof(Src));
  RFONTOBJ::vGetInfo((RFONTOBJ *)&v6, &Src);
  if ( v3 >= 0x1C )
    v3 = 28;
  memmove(v4, &Src, v3);
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
}
