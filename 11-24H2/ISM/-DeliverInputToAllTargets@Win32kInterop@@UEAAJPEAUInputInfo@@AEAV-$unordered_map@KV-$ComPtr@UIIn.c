/*
 * XREFs of ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180030570
 * Callers:
 *     <none>
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000D380 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA?AUInputInteropMessageStorage@1@PEBUPointerInputInfo@@@Z @ 0x1800308C8 (-CreateInputInteropMessageFromInputInfo@Win32kInterop@@CA-AUInputInteropMessageStorage@1@PEBUPoi.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180030A30 (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180030A50 (--1-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uhash_compare@PEAXU-$has.c)
 *     ?OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180030B0C (-OnForwardedToGestureTargeting@PointerInputMediator@@SAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ??$_Try_emplace@PEAX$$V@?$_Hash@V?$_Umap_traits@PEAXV?$vector@IV?$allocator@I@std@@@std@@V?$_Uhash_compare@PEAXU?$hash@PEAX@std@@U?$equal_to@PEAX@2@@2@V?$allocator@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAXV?$vector@IV?$allocator@I@std@@@std@@@std@@PEAX@std@@_N@1@$$QEAPEAX@Z @ 0x1800312C4 (--$_Try_emplace@PEAX$$V@-$_Hash@V-$_Umap_traits@PEAXV-$vector@IV-$allocator@I@std@@@std@@V-$_Uha.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x180066A64 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A7BC (-RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4Fram.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Win32kInterop::DeliverInputToAllTargets(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // r14d
  _QWORD *v6; // rax
  struct _MIT_INPUT_INTEROP_MESSAGE *v7; // rsi
  unsigned int v8; // r12d
  int v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 i; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  int (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rdi
  int (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rbx
  _OWORD *v17; // r8
  _OWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rdi
  _QWORD *j; // rbx
  __int64 *v23; // r8
  char *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  _DWORD *v27; // rdx
  int v28; // [rsp+28h] [rbp-71h]
  __int64 v29; // [rsp+40h] [rbp-59h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-51h]
  struct _MIT_INPUT_INTEROP_MESSAGE *v31; // [rsp+50h] [rbp-49h] BYREF
  __int64 v32; // [rsp+58h] [rbp-41h] BYREF
  int v33; // [rsp+60h] [rbp-39h] BYREF
  _QWORD *v34; // [rsp+68h] [rbp-31h]
  __int64 v35; // [rsp+70h] [rbp-29h]
  __int64 v36; // [rsp+78h] [rbp-21h] BYREF
  __int128 v37; // [rsp+80h] [rbp-19h]
  __int64 v38; // [rsp+90h] [rbp-9h]
  __int64 v39; // [rsp+98h] [rbp-1h]
  char v40; // [rsp+A0h] [rbp+7h] BYREF
  char v41; // [rsp+B0h] [rbp+17h] BYREF
  int v42; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v43; // [rsp+118h] [rbp+7Fh] BYREF

  v5 = *(_DWORD *)(a2 + 328);
  v30 = v5;
  v35 = 0LL;
  v6 = operator new(0x30uLL);
  *v6 = v6;
  v6[1] = v6;
  v34 = v6;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 7LL;
  v39 = 8LL;
  v33 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (__int64)&v36,
    0x10uLL,
    (unsigned __int64)v6);
  Win32kInterop::CreateInputInteropMessageFromInputInfo(&v31, a2);
  v7 = v31;
  *((_DWORD *)v31 + 39) = 0;
  v8 = 0;
  if ( *(_DWORD *)(a2 + 316) )
  {
    while ( 1 )
    {
      v9 = *(_DWORD *)(a2 + 144LL * v8 + 324);
      v42 = v9;
      v29 = 0LL;
      LODWORD(v43) = v9;
      v10 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v43 + i) ^ (unsigned __int64)v10);
      v12 = 2 * (v10 & a3[6]);
      v13 = a3[3];
      v14 = *(_QWORD *)(v13 + 8 * v12 + 8);
      if ( v14 == a3[1] )
      {
LABEL_8:
        v14 = 0LL;
      }
      else
      {
        while ( v9 != *(_DWORD *)(v14 + 16) )
        {
          if ( v14 == *(_QWORD *)(v13 + 8 * v12) )
            goto LABEL_8;
          v14 = *(_QWORD *)(v14 + 8);
        }
      }
      if ( !v14 )
        break;
      if ( v14 == a3[1] )
        break;
      v15 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v14 + 24);
      v16 = **v15;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
      if ( v16(v15, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v29) < 0 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29) )
      {
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 56LL))(v29);
        v23 = &v32;
        v24 = &v40;
LABEL_25:
        v25 = std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::_Try_emplace<void *,>(
                &v33,
                v24,
                v23);
        v26 = *(_QWORD *)v25 + 24LL;
        v27 = *(_DWORD **)(*(_QWORD *)v25 + 32LL);
        if ( v27 == *(_DWORD **)(*(_QWORD *)v25 + 40LL) )
        {
          std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>(v26, v27, &v42);
        }
        else
        {
          *v27 = v9;
          *(_QWORD *)(v26 + 8) += 4LL;
        }
        goto LABEL_14;
      }
      v17 = (_OWORD *)((char *)v7 + 240 * *((unsigned int *)v7 + 39) + 168);
      v18 = (_OWORD *)(144LL * v8 + a2 + 320);
      *v17 = *v18;
      v17[1] = v18[1];
      v17[2] = v18[2];
      v17[3] = v18[3];
      v17[4] = v18[4];
      v17[5] = v18[5];
      v17[6] = v18[6];
      v17[7] = v18[7];
      v17[8] = v18[8];
      *((_DWORD *)v7 + 60 * (unsigned int)(*((_DWORD *)v7 + 39))++ + 90) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 64LL))(v29);
LABEL_14:
      v19 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      if ( ++v8 >= *(_DWORD *)(a2 + 316) )
      {
        v5 = v30;
        goto LABEL_18;
      }
    }
    v43 = 0LL;
    v23 = &v43;
    v24 = &v41;
    goto LABEL_25;
  }
LABEL_18:
  v20 = v34;
  for ( j = (_QWORD *)*v34; j != v20; j = (_QWORD *)*j )
  {
    LOBYTE(v28) = 0;
    PointerInputMediator::RoutePointers(v5, j[2], (__int64)(j[4] - j[3]) >> 2, j[3], a2 + 88, v28, 0);
  }
  if ( *((_DWORD *)v7 + 39) )
  {
    PointerInputMediator::OnForwardedToGestureTargeting(v7);
    ((void (__fastcall *)(struct _MIT_INPUT_INTEROP_MESSAGE *, _QWORD))Win32kInterop::s_pfnMTCallback)(v7, 0LL);
  }
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v31);
  std::_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<void *,std::vector<unsigned int>,std::_Uhash_compare<void *,std::hash<void *>,std::equal_to<void *>>,std::allocator<std::pair<void * const,std::vector<unsigned int>>>,0>>(&v33);
  return 0LL;
}
