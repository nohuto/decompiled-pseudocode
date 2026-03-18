/*
 * XREFs of ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02B6E40
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C007DDA8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00C8860 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall vRestartRemoveAllInactiveRFONTs(struct _FONTOBJ **a1)
{
  struct _FONTOBJ *v1; // rax
  struct _FONTOBJ **v2; // rbx
  struct _FONTOBJ *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = a1;
  while ( v1 )
  {
    v3 = v1;
    RFONTOBJ::vDeleteRFONT(&v3, 0LL, 0LL, 0);
    v3 = 0LL;
    ++v2;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
    v1 = *v2;
  }
}
