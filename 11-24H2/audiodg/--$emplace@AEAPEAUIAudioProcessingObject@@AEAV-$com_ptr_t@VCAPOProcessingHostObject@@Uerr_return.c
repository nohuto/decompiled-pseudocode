/*
 * XREFs of ??$emplace@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUIAudioProcessingObject@@AEAV?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x140018C34
 * Callers:
 *     ?RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z @ 0x140018A90 (-RegisterAPOWithProcessingHost@CAPOProcessingHost@@UEAAJPEAUIAudioProcessingObject@@@Z.c)
 * Callees:
 *     ??0?$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInstanceInternal@@@Z @ 0x140018E68 (--0-$com_ptr_t@UIStreamInstanceInternal@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIStreamInsta.c)
 *     ??$_Find_last@PEAUIAudioProcessingObject@@@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@AEBQEAUIAudioProcessingObject@@_K@Z @ 0x14003AD40 (--$_Find_last@PEAUIAudioProcessingObject@@@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@PEAUIAudioProcessingObject@@U?$hash@PEAUIAudioProcessingObject@@@std@@U?$equal_to@PEAUIAudioProcessingObject@@@3@@std@@V?$allocator@U?$pair@QEAUIAudioProcessingObject@@V?$com_ptr_t@VCAPOProcessingHostObject@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x14005685C (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIAudioProcessingObject@@V-$com_ptr_t@VCAPOProcessing.c)
 *     ??2@YAPEAX_K@Z @ 0x140058D14 (--2@YAPEAX_K@Z.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCAPOEndpointNotificationsHandler@@Uerr_returncode_policy@wil@@@wil@@@std@@@2@$0A@@std@@@std@@IEBA_K_K@Z @ 0x140062E58 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::emplace<IAudioProcessingObject * &,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy> &>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rbp
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  float v16; // xmm0_4
  __int64 v17; // rcx
  float v18; // xmm1_4
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v26[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0xCBF29CE484222325uLL;
  do
    v9 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v8++) ^ (unsigned __int64)v9);
  while ( v8 < 8 );
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8);
  v12 = a1 + 8;
  v13 = *(_QWORD **)(a1 + 8);
  if ( v11 != v13 )
  {
    while ( 1 )
    {
      if ( *a3 == v11[2] )
      {
        v13 = (_QWORD *)*v11;
        goto LABEL_6;
      }
      if ( v11 == *(_QWORD **)(v10 + 16 * (v9 & *(_QWORD *)(a1 + 48))) )
        break;
      v11 = (_QWORD *)v11[1];
    }
    v13 = v11;
    v11 = 0LL;
LABEL_6:
    if ( v11 )
    {
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
    v12 = a1 + 8;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("unordered_map/set too long");
  v26[0] = v12;
  v14 = operator new(0x20uLL);
  v26[1] = v14;
  v14[2] = *a3;
  wil::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>::com_ptr_t<IStreamInstanceInternal,wil::err_returncode_policy>(
    v14 + 3,
    *a4);
  v15 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v15 < 0 )
    v16 = (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1))
        + (float)(v15 & 1 | (unsigned int)((unsigned __int64)v15 >> 1));
  else
    v16 = (float)(int)v15;
  v17 = *(_QWORD *)(a1 + 56);
  if ( v17 < 0 )
  {
    v24 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v17 >> 1);
    v18 = (float)(int)v24 + (float)(int)v24;
  }
  else
  {
    v18 = (float)(int)v17;
  }
  if ( (float)(v16 / v18) > *(float *)a1 )
  {
    v25 = std::_Hash<std::_Umap_traits<std::wstring,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,wil::com_ptr_t<CAPOEndpointNotificationsHandler,wil::err_returncode_policy>>>,0>>::_Desired_grow_bucket_count(a1);
    std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Forced_rehash(
      a1,
      v25);
    v13 = *(_QWORD **)((__int64 (__fastcall *)(__int64, _QWORD *, _QWORD *, __int64))std::_Hash<std::_Umap_traits<IAudioProcessingObject *,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>,std::_Uhash_compare<IAudioProcessingObject *,std::hash<IAudioProcessingObject *>,std::equal_to<IAudioProcessingObject *>>,std::allocator<std::pair<IAudioProcessingObject * const,wil::com_ptr_t<CAPOProcessingHostObject,wil::err_returncode_policy>>>,0>>::_Find_last<IAudioProcessingObject *>)(
                        a1,
                        v26,
                        v14 + 2,
                        v9);
  }
  v19 = (_QWORD *)v13[1];
  ++*(_QWORD *)(a1 + 16);
  *v14 = v13;
  v14[1] = v19;
  *v19 = v14;
  v13[1] = v14;
  v20 = *(_QWORD *)(a1 + 24);
  v21 = 2 * (v9 & *(_QWORD *)(a1 + 48));
  v22 = *(_QWORD **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)));
  if ( v22 == *(_QWORD **)(a1 + 8) )
  {
    *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
  }
  else
  {
    if ( v22 == v13 )
    {
      *(_QWORD *)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48))) = v14;
      goto LABEL_18;
    }
    if ( *(_QWORD **)(v20 + 16 * (v9 & *(_QWORD *)(a1 + 48)) + 8) != v19 )
      goto LABEL_18;
  }
  *(_QWORD *)(v20 + 8 * v21 + 8) = v14;
LABEL_18:
  *(_QWORD *)a2 = v14;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
