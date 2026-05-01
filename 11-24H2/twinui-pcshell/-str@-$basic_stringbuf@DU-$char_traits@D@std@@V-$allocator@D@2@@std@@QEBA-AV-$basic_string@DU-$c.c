/*
 * XREFs of ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18050939C
 * Callers:
 *     ?str@?$basic_ostringstream@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x180509378 (-str@-$basic_ostringstream@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@D.c)
 * Callees:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x180508A60 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::stringbuf::str(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r8
  const void *v4; // rdx
  size_t v5; // r8
  __int64 v6; // r9

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) == 2 || (v3 = **(_QWORD **)(a1 + 64)) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 4) != 0 || (v6 = **(_QWORD **)(a1 + 56)) == 0 )
    {
      v5 = 0LL;
      v4 = 0LL;
    }
    else
    {
      v4 = **(const void ***)(a1 + 24);
      v5 = v6 + **(int **)(a1 + 80) - (_QWORD)v4;
    }
  }
  else
  {
    v4 = **(const void ***)(a1 + 32);
    if ( v3 < *(_QWORD *)(a1 + 104) )
      v3 = *(_QWORD *)(a1 + 104);
    v5 = v3 - (_QWORD)v4;
  }
  if ( v4 )
    std::string::assign((void **)a2, v4, v5);
  return a2;
}
