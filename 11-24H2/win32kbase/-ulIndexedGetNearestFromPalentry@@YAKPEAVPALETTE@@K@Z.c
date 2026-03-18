/*
 * XREFs of ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003B974
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x14003B500 (ulGetNearestIndexFromColorref.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x14003B820 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x14003BD18 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003CA18 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 * Callees:
 *     ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003BA00 (-ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

__int64 __fastcall ulIndexedGetNearestFromPalentry(struct PALETTE *a1, struct tagPALETTEENTRY a2)
{
  _DWORD *v5; // rdx
  int v6; // eax
  _DWORD *i; // r8
  __int64 v8; // r8
  unsigned int v10; // ecx
  struct PALETTE *v11; // [rsp+30h] [rbp+8h] BYREF

  if ( a2.peFlags != 2 )
  {
    v5 = (_DWORD *)*((_QWORD *)a1 + 14);
    v6 = *(_DWORD *)&a2 & 0xFFFFFF;
    for ( i = v5; i != &v5[*((unsigned int *)a1 + 7)]; ++i )
    {
      if ( (*i & 0xFFFFFF) == v6 )
      {
        v8 = i - v5;
        goto LABEL_7;
      }
    }
    goto LABEL_8;
  }
  v10 = *((_DWORD *)a1 + 7);
  LODWORD(v8) = a2.peRed;
  if ( a2.peRed >= v10 )
    LODWORD(v8) = a2.peRed % v10;
LABEL_7:
  if ( (_DWORD)v8 == -1 )
  {
LABEL_8:
    v11 = a1;
    LODWORD(v8) = XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst((XEPALOBJ *)&v11, a2);
  }
  return (unsigned int)v8;
}
