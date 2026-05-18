/*
 * XREFs of sub_18001E6D4 @ 0x18001E6D4
 * Callers:
 *     sub_1800306E0 @ 0x1800306E0 (sub_1800306E0.c)
 *     sub_1800328FC @ 0x1800328FC (sub_1800328FC.c)
 *     sub_18004F290 @ 0x18004F290 (sub_18004F290.c)
 *     sub_1800B863C @ 0x1800B863C (sub_1800B863C.c)
 * Callees:
 *     memmove @ 0x18000CE55 (memmove.c)
 *     sub_1800131AC @ 0x1800131AC (sub_1800131AC.c)
 *     sub_18001D960 @ 0x18001D960 (sub_18001D960.c)
 */

__int64 __fastcall sub_18001E6D4(__int64 a1, const void *a2, unsigned __int64 a3)
{
  char *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rbx
  char *v7; // rdi
  const void *v8; // rdx

  if ( a3 > *(_QWORD *)(a1 + 24) )
    return sub_18001D960(a1, a3, a3, a2);
  v4 = (char *)sub_1800131AC(a1);
  v6 = 2 * v5;
  *(_QWORD *)(a1 + 16) = v5;
  v7 = v4;
  memmove(v4, v8, 2 * v5);
  *(_WORD *)&v7[v6] = 0;
  return a1;
}
