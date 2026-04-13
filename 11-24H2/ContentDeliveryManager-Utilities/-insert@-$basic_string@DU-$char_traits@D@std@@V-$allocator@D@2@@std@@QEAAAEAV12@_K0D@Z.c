/*
 * XREFs of ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBC8
 * Callers:
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180006E14 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180009564 (-_Iput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800126D0 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Getmfld@?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0_NAEAVios_base@2@PEA_W@Z @ 0x180013700 (-_Getmfld@-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$bas.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001D894 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ?_Putmfld@?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@_NAEAVios_base@2@D1V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@D@Z @ 0x18001F0F4 (-_Putmfld@-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 * Callees:
 *     memmove_0 @ 0x1800227F2 (memmove_0.c)
 *     memset_0 @ 0x180022931 (memset_0.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x18003D464 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x18003DE84 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x18003DE9C (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 */

_QWORD *__fastcall std::string::insert(_QWORD *a1, unsigned __int64 a2, size_t a3, char a4)
{
  int v5; // r14d
  unsigned __int64 v6; // r8
  size_t v9; // rdi
  size_t v10; // r8
  _QWORD *v11; // rax
  char *v12; // rdx
  _BYTE *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax

  v5 = a4;
  v6 = a1[2];
  if ( v6 < a2 )
    std::wstring::_Xran();
  if ( ~v6 <= a3 )
    goto LABEL_31;
  if ( !a3 )
    return a1;
  v9 = v6 + a3;
  if ( v6 + a3 == -1LL )
LABEL_31:
    std::wstring::_Xlen();
  if ( a1[3] >= v9 )
  {
    if ( !v9 )
    {
      if ( a1[3] < 0x10uLL )
        v13 = a1;
      else
        v13 = (_BYTE *)*a1;
      a1[2] = 0LL;
      *v13 = 0;
      return a1;
    }
  }
  else
  {
    std::string::_Copy(a1);
    if ( !v9 )
      return a1;
  }
  v10 = a1[2] - a2;
  if ( a1[3] < 0x10uLL )
  {
    v12 = (char *)a1 + a2;
    v11 = a1;
  }
  else
  {
    v11 = (_QWORD *)*a1;
    v12 = (char *)(*a1 + a2);
  }
  if ( v10 )
    memmove_0((char *)v11 + a2 + a3, v12, v10);
  if ( a3 == 1 )
  {
    if ( a1[3] < 0x10uLL )
      v14 = a1;
    else
      v14 = (_QWORD *)*a1;
    *((_BYTE *)v14 + a2) = v5;
  }
  else
  {
    if ( a1[3] < 0x10uLL )
      v15 = a1;
    else
      v15 = (_QWORD *)*a1;
    memset_0((char *)v15 + a2, v5, a3);
  }
  if ( a1[3] < 0x10uLL )
    v16 = a1;
  else
    v16 = (_QWORD *)*a1;
  a1[2] = v9;
  *((_BYTE *)v16 + v9) = 0;
  return a1;
}
