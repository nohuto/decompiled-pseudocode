/*
 * XREFs of ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x18003D000
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_MESSAGE_const___::_Do_call @ 0x18003C670 (std--_Func_impl_no_alloc__lambda_6a5191454e116649e14e82c7628f104b__void_MIT_INPUTSTREAM_ENDED_ME.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$unordered_map@KUTargetingInfo@Win32kInterop@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003D38C (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$unordered_map@KUTargetingInfo@Win32kInterop@.c)
 *     ?InputStreamEnded@ISM@InputTraceLogging@@SAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x18003D780 (-InputStreamEnded@ISM@InputTraceLogging@@SAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 *     ?_Unchecked_erase@?$list@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@2@@std@@AEAAPEAU?$_List_node@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@PEAX@2@QEAU32@@Z @ 0x18003D820 (-_Unchecked_erase@-$list@U-$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@V-$allocator@U-$pair@$.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18003D8A8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@W.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@V21@@Z @ 0x18003DA70 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUTargetingInfo@Win32k.c)
 *     ??$As@UIContextualProcessorBufferTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180054DB0 (--$As@UIContextualProcessorBufferTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Win32kInterop::ProcessInputStreamEndedMessage(
        Win32kInterop *this,
        const struct MIT_INPUTSTREAM_ENDED_MESSAGE *a2)
{
  int v4; // r13d
  int v5; // edx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // rcx
  unsigned __int64 j; // r8
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 k; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r8
  int (__fastcall ***v23)(_QWORD, GUID *, __int64); // rbx
  __int64 v24; // r9
  __int64 v25; // r14
  int (__fastcall *v26)(_QWORD, GUID *, __int64); // rdi
  _QWORD *v27; // r9
  unsigned __int64 m; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rax
  unsigned __int64 i; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // r8
  _BYTE v37[16]; // [rsp+20h] [rbp-10h] BYREF
  int (__fastcall ***v38)(_QWORD, _QWORD, _QWORD); // [rsp+78h] [rbp+48h] BYREF
  int v39; // [rsp+80h] [rbp+50h]
  int (__fastcall ***v40)(_QWORD, _QWORD, _QWORD); // [rsp+88h] [rbp+58h]

  v4 = *((_DWORD *)a2 + 4);
  v39 = v4;
  v5 = *((_DWORD *)a2 + 3);
  switch ( *((_DWORD *)a2 + 2) )
  {
    case 2:
      v6 = 8;
      break;
    case 3:
      v6 = 16;
      break;
    case 4:
      v6 = 2;
      break;
    case 5:
      v6 = v5 != 0 ? 0x1000000 : 32;
      break;
    default:
      v6 = 0;
      break;
  }
  InputTraceLogging::ISM::InputStreamEnded(a2);
  v8 = 0xCBF29CE484222325uLL;
  if ( v6 == 2 )
  {
    for ( i = 0LL; i < 4; ++i )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v39 + i) ^ (unsigned __int64)v8);
    v34 = *((_QWORD *)this + 30);
    v35 = *(_QWORD *)(v34 + 16 * (v8 & *((_QWORD *)this + 33)) + 8);
    v36 = *((_QWORD *)this + 28);
    if ( v35 == v36 )
    {
LABEL_57:
      v35 = 0LL;
    }
    else
    {
      v7 = *(_QWORD *)(v34 + 16 * (v8 & *((_QWORD *)this + 33)));
      while ( v4 != *(_DWORD *)(v35 + 16) )
      {
        if ( v35 == v7 )
          goto LABEL_57;
        v35 = *(_QWORD *)(v35 + 8);
      }
    }
    if ( v35 && v35 != v36 )
    {
      v23 = *(int (__fastcall ****)(_QWORD, GUID *, __int64))(v35 + 32);
      v38 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
      if ( v23 )
      {
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64), __int64))(*v23)[1])(v23, v7);
        if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IContextualProcessorBufferTarget>(&v38, (char *)this + 280) >= 0 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 80LL))(*((_QWORD *)this + 35));
      }
      std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>,0>(
        (char *)this + 216,
        &v38,
        v35);
LABEL_43:
      if ( v23 )
        ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64)))(*v23)[2])(v23);
    }
  }
  else
  {
    v9 = *(_DWORD *)a2;
    if ( !*(_DWORD *)a2 )
      v9 = -1;
    LODWORD(v38) = v9;
    v10 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 4; ++j )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v38 + j) ^ (unsigned __int64)v10);
    v12 = 2 * (v10 & *((_QWORD *)this + 42));
    v13 = *((_QWORD *)this + 39);
    v14 = *(_QWORD *)(v13 + 16 * (v10 & *((_QWORD *)this + 42)) + 8);
    v15 = *((_QWORD *)this + 37);
    if ( v14 == v15 )
    {
LABEL_15:
      v14 = 0LL;
    }
    else
    {
      v16 = *(_QWORD *)(v13 + 8 * v12);
      while ( v9 != *(_DWORD *)(v14 + 16) )
      {
        if ( v14 == v16 )
          goto LABEL_15;
        v14 = *(_QWORD *)(v14 + 8);
      }
    }
    if ( v14 && v14 != v15 )
    {
      v17 = 0xCBF29CE484222325uLL;
      for ( k = 0LL; k < 4; ++k )
        v17 = 0x100000001B3LL * (*((unsigned __int8 *)&v39 + k) ^ (unsigned __int64)v17);
      v19 = 2 * (v17 & *(_QWORD *)(v14 + 72));
      v20 = *(_QWORD *)(v14 + 48);
      v21 = *(_QWORD *)(v20 + 8 * v19 + 8);
      v22 = *(_QWORD *)(v14 + 32);
      if ( v21 == v22 )
      {
LABEL_23:
        v21 = 0LL;
      }
      else
      {
        while ( v4 != *(_DWORD *)(v21 + 16) )
        {
          if ( v21 == *(_QWORD *)(v20 + 8 * v19) )
            goto LABEL_23;
          v21 = *(_QWORD *)(v21 + 8);
        }
      }
      if ( v21 && v21 != v22 )
      {
        v23 = *(int (__fastcall ****)(_QWORD, GUID *, __int64))(v21 + 32);
        v40 = (int (__fastcall ***)(_QWORD, _QWORD, _QWORD))v23;
        if ( v23 )
          ((void (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64)))(*v23)[1])(v23);
        v25 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::_Try_emplace<unsigned long const &,>(
                           (char *)this + 352,
                           v37,
                           &v38);
        if ( v23 )
        {
          v26 = **v23;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v25 + 24));
          if ( v26(v23, &GUID_09d4eb6f_2e60_439b_b350_48a58a91f245, v25 + 24) >= 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v25 + 24) + 80LL))(*(_QWORD *)(v25 + 24));
        }
        v27 = *(_QWORD **)std::_Hash<std::_Umap_traits<unsigned long,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unordered_map<unsigned long,Win32kInterop::TargetingInfo>>>,0>>::_Try_emplace<unsigned long const &,>(
                            (char *)this + 288,
                            v37,
                            &v38,
                            v24);
        for ( m = 0LL; m < 4; ++m )
          v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v39 + m) ^ (unsigned __int64)v8);
        v29 = 2 * (v8 & v27[9]);
        v30 = v27[6];
        v31 = *(_QWORD *)(v30 + 16 * (v8 & v27[9]) + 8);
        v32 = v27[4];
        if ( v31 == v32 )
        {
LABEL_36:
          v31 = 0LL;
        }
        else
        {
          while ( v4 != *(_DWORD *)(v31 + 16) )
          {
            if ( v31 == *(_QWORD *)(v30 + 16 * (v8 & v27[9])) )
              goto LABEL_36;
            v31 = *(_QWORD *)(v31 + 8);
          }
        }
        if ( v31 )
        {
          if ( *(_QWORD *)(v30 + 16 * (v8 & v27[9]) + 8) == v31 )
          {
            if ( *(_QWORD *)(v30 + 16 * (v8 & v27[9])) == v31 )
              *(_QWORD *)(v30 + 16 * (v8 & v27[9])) = v32;
            else
              v32 = *(_QWORD *)(v31 + 8);
            *(_QWORD *)(v30 + 8 * v29 + 8) = v32;
          }
          else if ( *(_QWORD *)(v30 + 16 * (v8 & v27[9])) == v31 )
          {
            *(_QWORD *)(v30 + 16 * (v8 & v27[9])) = *(_QWORD *)v31;
          }
          std::list<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>::_Unchecked_erase(v27 + 4);
        }
        goto LABEL_43;
      }
    }
  }
}
