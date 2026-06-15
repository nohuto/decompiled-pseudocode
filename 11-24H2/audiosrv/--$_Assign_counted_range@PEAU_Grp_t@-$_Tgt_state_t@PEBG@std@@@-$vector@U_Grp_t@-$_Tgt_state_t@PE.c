/*
 * XREFs of ??$_Assign_counted_range@PEAU_Grp_t@?$_Tgt_state_t@PEBG@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAXPEAU_Grp_t@?$_Tgt_state_t@PEBG@1@_K@Z @ 0x18012E504
 * Callers:
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x180130958 (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 * Callees:
 *     ?_Clear_and_reserve_geometric@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_K@Z @ 0x180139720 (-_Clear_and_reserve_geometric@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_.c)
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

char *__fastcall std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Assign_counted_range<std::_Tgt_state_t<unsigned short const *>::_Grp_t *>(
        void **a1,
        char *a2,
        unsigned __int64 a3)
{
  char *v3; // r14
  unsigned __int64 v4; // rdi
  char *v7; // rbx
  char *v8; // rdx
  size_t v9; // rdi
  char *result; // rax
  _BYTE *v11; // rbp
  void *v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rdi

  v3 = (char *)*a1;
  v4 = a3;
  if ( a3 <= ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4 )
  {
    v11 = a1[1];
    v12 = *a1;
    v13 = (v11 - v3) >> 4;
    if ( a3 <= v13 )
    {
      v14 = 16 * a3;
      memmove_0(v12, a2, 16 * a3);
      result = &v3[v14];
      goto LABEL_7;
    }
    memmove_0(v12, a2, 16 * v13);
    v8 = &a2[16 * v13];
    v4 -= v13;
    v7 = (char *)a1[1];
  }
  else
  {
    std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Clear_and_reserve_geometric(
      a1,
      a3);
    v7 = (char *)*a1;
    v8 = a2;
  }
  v9 = 16 * v4;
  memmove_0(v7, v8, v9);
  result = &v7[v9];
LABEL_7:
  a1[1] = result;
  return result;
}
