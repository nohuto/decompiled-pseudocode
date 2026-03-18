/*
 * XREFs of ?_Growmap@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX_K@Z @ 0x18006BDB0
 * Callers:
 *     ??$_Emplace_front_internal@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAX$$QEAV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801BC93C (--$_Emplace_front_internal@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$deq.c)
 *     ??$_Emplace_front_internal@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1802B8E1C (--$_Emplace_front_internal@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Growmap(_QWORD *a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdi
  char *v8; // r12
  unsigned __int64 v9; // rbx
  char *v10; // rsi
  size_t v11; // rdi
  const void *v12; // rdx
  char *v13; // rdi
  size_t v14; // r8
  char *v15; // rcx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx

  v2 = 1LL;
  v3 = a1[2];
  if ( v3 )
    v2 = v3;
  while ( v2 == v3 || v2 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFLL - v2 < v2 )
      std::_Xlength_error("deque<T> too long");
    v2 *= 2LL;
  }
  v4 = a1[3] >> 1;
  if ( v2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(8 * v2);
  v6 = 8 * v4;
  v7 = a1[2];
  v8 = (char *)v5;
  v9 = v2 - v7;
  v10 = (char *)(8 * v4 + v5);
  v11 = 8 * v7 - 8 * v4;
  memmove_0(v10, (const void *)(a1[1] + 8 * v4), v11);
  v12 = (const void *)a1[1];
  v13 = &v10[v11];
  if ( v4 > v9 )
  {
    memmove_0(v13, v12, 8 * v9);
    memmove_0(v8, (const void *)(8 * v9 + a1[1]), v6 - 8 * v9);
    v15 = &v8[v6 - 8 * v9];
    v14 = 8 * v9;
  }
  else
  {
    memmove_0(v13, v12, 8 * v4);
    memset_0(&v13[v6], 0, 8 * (v9 - v4));
    v14 = 8 * v4;
    v15 = v8;
  }
  memset_0(v15, 0, v14);
  v16 = (_QWORD *)a1[1];
  if ( v16 )
  {
    v17 = 8LL * a1[2];
    if ( v17 >= 0x1000 )
    {
      v17 += 39LL;
      if ( (unsigned __int64)v16 - *(v16 - 1) - 8 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v16 = (_QWORD *)*(v16 - 1);
    }
    operator delete(v16, v17);
  }
  a1[1] = v8;
  a1[2] += v9;
}
