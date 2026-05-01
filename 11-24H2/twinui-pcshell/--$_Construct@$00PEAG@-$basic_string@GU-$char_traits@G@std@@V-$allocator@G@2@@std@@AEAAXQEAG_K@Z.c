/*
 * XREFs of ??$_Construct@$00PEAG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEAG_K@Z @ 0x1800499A0
 * Callers:
 *     ?UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z @ 0x1800491DC (-UpdateViewVisibilityInShellPreference@TabTipAdapter@KeyboardHosting@@QEAAXI_N@Z.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@I@Z @ 0x18018E184 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@I@Z.c)
 * Callees:
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180125FF0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180296974 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Xlen_string@std@@YAXXZ @ 0x1802CF544 (-_Xlen_string@std@@YAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1806CA2DC (memcpy_0.c)
 */

void *__fastcall std::wstring::_Construct<1,unsigned short *>(_QWORD *a1, const void *a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v7; // rbx
  void *result; // rax
  size_t v9; // rcx
  char *v10; // rax
  char *v11; // rbp
  size_t v12; // rbx

  v3 = 0x7FFFFFFFFFFFFFFELL;
  if ( a3 > 0x7FFFFFFFFFFFFFFELL )
    std::_Xlen_string();
  a1[3] = 7LL;
  if ( a3 <= 7 )
  {
    a1[2] = a3;
    v7 = 2 * a3;
    result = memcpy_0(a1, a2, 2 * a3);
    *(_WORD *)((char *)a1 + v7) = 0;
    return result;
  }
  if ( (a3 | 7) > 0x7FFFFFFFFFFFFFFELL )
  {
    v9 = -2LL;
LABEL_15:
    v10 = (char *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(v9);
    goto LABEL_12;
  }
  v3 = a3 | 7;
  if ( (a3 | 7) < 0xA )
    v3 = 10LL;
  if ( (unsigned __int64)(v3 + 1) > 0x7FFFFFFFFFFFFFFFLL )
    std::_Throw_bad_array_new_length();
  v9 = 2 * (v3 + 1);
  if ( v9 >= 0x1000 )
    goto LABEL_15;
  if ( !v9 )
  {
    v11 = 0LL;
    goto LABEL_13;
  }
  v10 = (char *)operator new(v9);
LABEL_12:
  v11 = v10;
LABEL_13:
  a1[2] = a3;
  v12 = 2 * a3;
  *a1 = v11;
  a1[3] = v3;
  result = memcpy_0(v11, a2, v12);
  *(_WORD *)&v11[v12] = 0;
  return result;
}
