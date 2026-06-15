/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x140016B88
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@1@AEBV?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x140016AE4 (--0-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessingHostObject@@U.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x14005685C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessing.c)
 * Callees:
 *     ??$fill@PEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@std@@YAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@0@0AEBV10@@Z @ 0x140016C34 (--$fill@PEAV-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@QEAUIAudioProc.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x140016CAC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140018288 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400190B8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>>>>>::_Assign_grow(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  __int64 size_of; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  if ( (__int64)(a1[1] - *a1) >> 3 >= a2 )
    return std::fill<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>>> *,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>>>>(
             *a1,
             a1[1],
             &v10);
  size_of = std::_Get_size_of_n<8>(a2);
  v8 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v9 = (__int64)(a1[2] - *a1) >> 3;
  if ( v9 )
    std::_Deallocate<16,0>(*a1, 8 * v9);
  result = (__int64)&v8[a2];
  *a1 = v8;
  a1[1] = result;
  a1[2] = result;
  while ( v8 != (_QWORD *)result )
    *v8++ = a3;
  return result;
}
