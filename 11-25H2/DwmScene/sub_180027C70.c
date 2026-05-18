/*
 * XREFs of sub_180027C70 @ 0x180027C70
 * Callers:
 *     sub_18002359C @ 0x18002359C (sub_18002359C.c)
 *     sub_180024D60 @ 0x180024D60 (sub_180024D60.c)
 *     sub_180026710 @ 0x180026710 (sub_180026710.c)
 *     sub_180026858 @ 0x180026858 (sub_180026858.c)
 *     sub_180031634 @ 0x180031634 (sub_180031634.c)
 *     sub_18004468C @ 0x18004468C (sub_18004468C.c)
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_1800447DC @ 0x1800447DC (sub_1800447DC.c)
 *     sub_180044884 @ 0x180044884 (sub_180044884.c)
 *     sub_180044924 @ 0x180044924 (sub_180044924.c)
 *     sub_1800449CC @ 0x1800449CC (sub_1800449CC.c)
 *     sub_180045508 @ 0x180045508 (sub_180045508.c)
 *     sub_180045F1C @ 0x180045F1C (sub_180045F1C.c)
 *     sub_180050750 @ 0x180050750 (sub_180050750.c)
 *     sub_180051970 @ 0x180051970 (sub_180051970.c)
 *     sub_180051A28 @ 0x180051A28 (sub_180051A28.c)
 *     sub_180068A3C @ 0x180068A3C (sub_180068A3C.c)
 *     sub_180068E10 @ 0x180068E10 (sub_180068E10.c)
 *     sub_180069048 @ 0x180069048 (sub_180069048.c)
 *     sub_180069108 @ 0x180069108 (sub_180069108.c)
 *     sub_18007D894 @ 0x18007D894 (sub_18007D894.c)
 *     sub_18007EEC0 @ 0x18007EEC0 (sub_18007EEC0.c)
 *     sub_180080D78 @ 0x180080D78 (sub_180080D78.c)
 *     sub_1800C84D0 @ 0x1800C84D0 (sub_1800C84D0.c)
 *     sub_1800C8C18 @ 0x1800C8C18 (sub_1800C8C18.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027C70(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
