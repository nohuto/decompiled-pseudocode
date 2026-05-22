/*
 * XREFs of ?_Tidy@?$_Hash_vec@V?$allocator@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@U_Iterator_base0@2@@std@@@std@@@std@@QEAAXXZ @ 0x1800213D0
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<unsigned long>>,std::_Iterator_base0>>>::_Tidy(
        __int64 a1)
{
  char *v2; // rcx
  const struct std::nothrow_t *v3; // rdx
  __int64 result; // rax
  char *v5; // r8
  char *v6; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    v3 = (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (unsigned __int64)v3 >= 0x1000 )
    {
      v5 = (char *)*((_QWORD *)v2 - 1);
      v3 = (const struct std::nothrow_t *)((char *)v3 + 39);
      v6 = (char *)(v2 - v5);
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        _o__invalid_parameter_noinfo_noreturn(v6, v3);
        __debugbreak();
        JUMPOUT(0x180021435LL);
      }
      v2 = v5;
    }
    operator delete(v2, v3);
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
