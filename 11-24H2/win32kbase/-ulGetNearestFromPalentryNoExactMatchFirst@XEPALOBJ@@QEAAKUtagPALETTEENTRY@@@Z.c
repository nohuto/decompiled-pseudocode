/*
 * XREFs of ?ulGetNearestFromPalentryNoExactMatchFirst@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003BA00
 * Callers:
 *     ulGetNearestIndexFromColorref @ 0x14003B500 (ulGetNearestIndexFromColorref.c)
 *     ?ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z @ 0x14003B974 (-ulIndexedGetNearestFromPalentry@@YAKPEAVPALETTE@@K@Z.c)
 *     ?ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z @ 0x14003BD18 (-ulGetNearestFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@K@Z.c)
 * Callees:
 *     ?ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z @ 0x14003CA18 (-ulGetMatchFromPalentry@XEPALOBJ@@QEAAKUtagPALETTEENTRY@@@Z.c)
 */

unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(XEPALOBJ *this, struct tagPALETTEENTRY a2)
{
  BYTE peRed; // bl
  unsigned __int8 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // r9
  unsigned int v10; // r8d
  unsigned __int8 *v11; // r10
  unsigned __int8 *v12; // rbp
  unsigned __int8 *v13; // r14
  unsigned int v14; // edx

  peRed = a2.peRed;
  if ( !*(_DWORD *)(*(_QWORD *)this + 28LL) )
    return XEPALOBJ::ulGetMatchFromPalentry(this, a2);
  v4 = 0LL;
  v5 = *(_QWORD *)(W32GetSessionState(this) + 88);
  v6 = *(_QWORD *)this;
  v7 = *(_QWORD *)this == *(_QWORD *)(v5 + 3768);
  v8 = (unsigned __int8 *)&unk_14025A3B0;
  if ( !v7 )
    v8 = *(unsigned __int8 **)(v6 + 112);
  v9 = v8;
  v10 = 196608;
  v11 = &v8[4 * *(unsigned int *)(v6 + 28)];
  do
  {
    v12 = v8;
    v13 = v4;
    v14 = word_140259FB0[*v8 - (unsigned __int64)peRed + 255]
        + word_140259FB0[v8[1] - (unsigned __int64)a2.peGreen + 255]
        + word_140259FB0[v8[2] - (unsigned __int64)a2.peBlue + 255];
    if ( v14 < v10 )
    {
      v4 = v8;
      if ( !v14 )
        break;
    }
    v8 += 4;
    v4 = v12;
    if ( v14 >= v10 )
    {
      v14 = v10;
      v4 = v13;
    }
    v10 = v14;
  }
  while ( v8 < v11 );
  return (v4 - v9) >> 2;
}
