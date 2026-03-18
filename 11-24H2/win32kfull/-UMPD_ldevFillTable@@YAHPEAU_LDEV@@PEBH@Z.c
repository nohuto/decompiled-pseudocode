/*
 * XREFs of ?UMPD_ldevFillTable@@YAHPEAU_LDEV@@PEBH@Z @ 0x1401D5FF8
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1401D5D28 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     memset_0 @ 0x140340780 (memset_0.c)
 */

__int64 __fastcall UMPD_ldevFillTable(struct _LDEV *a1, const int *a2)
{
  __int64 (*const near **v2)(void); // rbx
  __int64 (*const near **v4)(void); // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 result; // rax

  v2 = (__int64 (*const near **)(void))((char *)a1 + 72);
  memset_0((char *)a1 + 72, 0, 0x340uLL);
  v4 = v2;
  v5 = 104LL;
  do
  {
    if ( *a2 )
      *v4 = *(__int64 (*const near **)(void))((char *)v4 + (char *)&gpUMDriverFunc - (char *)v2);
    ++a2;
    ++v4;
    --v5;
  }
  while ( v5 );
  LODWORD(v6) = 3;
  while ( 1 )
  {
    v7 = v6;
    v6 = (unsigned int)(v6 - 1);
    if ( !v7 )
      break;
    if ( !v2[dword_140363198[v6]] )
      return 0LL;
  }
  result = 1LL;
  v2[42] = (__int64 (*const near *)(void))UMPDDrvFree;
  return result;
}
