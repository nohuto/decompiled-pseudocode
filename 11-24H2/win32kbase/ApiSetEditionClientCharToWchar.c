/*
 * XREFs of ApiSetEditionClientCharToWchar @ 0x1401914B8
 * Callers:
 *     xxxInternalToUnicode @ 0x140097BA0 (xxxInternalToUnicode.c)
 * Callees:
 *     EditionClientCharToWchar @ 0x14023AE28 (EditionClientCharToWchar.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ApiSetEditionClientCharToWchar(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // di
  unsigned __int16 v3; // si
  unsigned __int16 v4; // bx
  int (*v5)(void); // rax

  v2 = a2;
  v3 = a1;
  v4 = 0;
  v5 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1, a2) + 48) + 5920LL);
  if ( v5 && v5() >= 0 )
    return (unsigned __int16)EditionClientCharToWchar(v3, v2);
  return v4;
}
