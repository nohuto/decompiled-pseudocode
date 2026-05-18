/*
 * XREFs of sub_180010C10 @ 0x180010C10
 * Callers:
 *     sub_1800108FC @ 0x1800108FC (sub_1800108FC.c)
 *     sub_180015CC8 @ 0x180015CC8 (sub_180015CC8.c)
 *     sub_180015DB8 @ 0x180015DB8 (sub_180015DB8.c)
 *     sub_180015EA8 @ 0x180015EA8 (sub_180015EA8.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800236FC @ 0x1800236FC (sub_1800236FC.c)
 *     sub_180040998 @ 0x180040998 (sub_180040998.c)
 *     sub_180044560 @ 0x180044560 (sub_180044560.c)
 *     sub_180044674 @ 0x180044674 (sub_180044674.c)
 *     sub_180049D9C @ 0x180049D9C (sub_180049D9C.c)
 *     sub_180049E6C @ 0x180049E6C (sub_180049E6C.c)
 *     sub_180049F3C @ 0x180049F3C (sub_180049F3C.c)
 *     sub_18004A00C @ 0x18004A00C (sub_18004A00C.c)
 *     sub_18004A0DC @ 0x18004A0DC (sub_18004A0DC.c)
 *     sub_180059EB0 @ 0x180059EB0 (sub_180059EB0.c)
 *     sub_18007AAD0 @ 0x18007AAD0 (sub_18007AAD0.c)
 *     sub_18007CF48 @ 0x18007CF48 (sub_18007CF48.c)
 * Callees:
 *     sub_1800109F8 @ 0x1800109F8 (sub_1800109F8.c)
 *     sub_180010D7C @ 0x180010D7C (sub_180010D7C.c)
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 *     sub_180011920 @ 0x180011920 (sub_180011920.c)
 *     sub_18001195C @ 0x18001195C (sub_18001195C.c)
 */

unsigned __int64 __fastcall sub_180010C10(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v17 = sub_180011920(a1, v6 + 1);
  v10 = sub_1800109F8(v9, &v17);
  v11 = (a2 - v3) & 0xFFFFFFFFFFFFFFF0uLL;
  v12 = v11 + v10;
  sub_180010DC0(v11, v11 + v10, a3);
  v13 = a1[1];
  v14 = v10;
  v15 = *a1;
  if ( a2 != v13 )
  {
    sub_180010D7C(v15, a2, v10);
    v13 = a1[1];
    v14 = v12 + 16;
    v15 = a2;
  }
  sub_180010D7C(v15, v13, v14);
  sub_18001195C(a1, v10, v8, v17);
  return v12;
}
