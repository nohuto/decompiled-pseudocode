/*
 * XREFs of ?assign@?$vector@EV?$allocator@E@std@@@std@@QEAAX_KAEBE@Z @ 0x1801A94E4
 * Callers:
 *     ?PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z @ 0x1801A921C (-PullNewPerFrameData@CSynchronousSuperWetInk@@AEAAXIPEA_N@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x180254890 (-_Clear_and_reserve_geometric@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

char *__fastcall std::vector<unsigned char>::assign(void **a1, size_t a2, unsigned __int8 *a3)
{
  char *v3; // rbx
  size_t v5; // rdi
  int v7; // edx
  size_t v8; // rbp
  char *result; // rax

  v3 = (char *)*a1;
  v5 = a2;
  if ( a2 > (_BYTE *)a1[2] - (_BYTE *)*a1 )
  {
    std::vector<unsigned char>::_Clear_and_reserve_geometric();
    v3 = (char *)*a1;
LABEL_5:
    v7 = *a3;
    goto LABEL_3;
  }
  v7 = *a3;
  v8 = (_BYTE *)a1[1] - v3;
  if ( v5 > v8 )
  {
    memset_0(*a1, v7, (_BYTE *)a1[1] - v3);
    v3 = (char *)a1[1];
    v5 -= v8;
    goto LABEL_5;
  }
LABEL_3:
  memset_0(v3, v7, v5);
  result = &v3[v5];
  a1[1] = &v3[v5];
  return result;
}
