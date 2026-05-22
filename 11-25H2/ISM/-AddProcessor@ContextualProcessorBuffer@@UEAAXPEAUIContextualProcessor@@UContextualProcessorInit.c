/*
 * XREFs of ?AddProcessor@ContextualProcessorBuffer@@UEAAXPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x18002B5E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180029930 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18002A548 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ @ 0x18002AE7C (--1ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@XZ.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003DF60 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18009B1C4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=15
void __fastcall ContextualProcessorBuffer::AddProcessor(__int64 a1, __int64 a2, int *a3)
{
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  int v16; // r12d
  __int64 v17; // rsi
  unsigned __int64 i; // rcx
  _DWORD *v19; // rbx
  _DWORD *v20; // rdi
  _QWORD *v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  float v24; // xmm0_4
  float v25; // xmm1_4
  __int64 v26; // rax
  _QWORD *v27; // rcx
  _QWORD *v28; // r8
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // [rsp+20h] [rbp-E0h] BYREF
  float v34; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h]
  void *v37[2]; // [rsp+40h] [rbp-C0h]
  _QWORD *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  __int64 v40; // [rsp+60h] [rbp-A0h]
  int v41; // [rsp+68h] [rbp-98h]
  __int128 v42; // [rsp+70h] [rbp-90h]
  void *v43[2]; // [rsp+80h] [rbp-80h]
  _QWORD *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  __int64 v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  int v48; // [rsp+B0h] [rbp-50h]
  _QWORD *v49; // [rsp+B8h] [rbp-48h]
  __int64 v50; // [rsp+C0h] [rbp-40h]
  _QWORD *v51; // [rsp+C8h] [rbp-38h]
  _QWORD *v52; // [rsp+D0h] [rbp-30h]
  _QWORD *v53; // [rsp+D8h] [rbp-28h]
  __int64 v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  __int64 v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  _QWORD *v58; // [rsp+100h] [rbp+0h] BYREF
  _DWORD *v59; // [rsp+108h] [rbp+8h]
  int v60; // [rsp+168h] [rbp+68h]

  v33 = 0LL;
  v36 = 0LL;
  v6 = operator new(0x18uLL);
  *v6 = v6;
  v6[1] = v6;
  v35 = v6;
  v39 = 7LL;
  v40 = 8LL;
  v34 = 1.0;
  v7 = operator new(0x80uLL);
  v37[0] = v7;
  v8 = v7 + 16;
  v37[1] = v7 + 16;
  v38 = v7 + 16;
  while ( v7 != v8 )
    *v7++ = v6;
  v42 = 0LL;
  v9 = operator new(0x18uLL);
  *v9 = v9;
  v9[1] = v9;
  *(_QWORD *)&v42 = v9;
  v45 = 7LL;
  v46 = 8LL;
  v41 = 1065353216;
  v10 = operator new(0x80uLL);
  v43[0] = v10;
  v11 = v10 + 16;
  v43[1] = v10 + 16;
  v44 = v10 + 16;
  while ( v10 != v11 )
    *v10++ = v9;
  v47 = 0LL;
  v50 = 0LL;
  v12 = operator new(0x18uLL);
  *v12 = v12;
  v12[1] = v12;
  v49 = v12;
  v54 = 7LL;
  v55 = 8LL;
  v48 = 1065353216;
  v13 = operator new(0x80uLL);
  v51 = v13;
  v14 = v13 + 16;
  v52 = v13 + 16;
  v53 = v13 + 16;
  while ( v13 != v14 )
    *v13++ = v12;
  v56 = 0LL;
  v57 = 0LL;
  v15 = v33;
  if ( v33 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
      v15 = v33;
    }
    v33 = a2;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *a3;
  v60 = 0;
  v17 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v17 = 0x100000001B3LL * (*((unsigned __int8 *)&v60 + i) ^ (unsigned __int64)v17);
  v19 = (_DWORD *)*((_QWORD *)v37[0] + 2 * (v17 & v39) + 1);
  v20 = v35;
  if ( v19 == (_DWORD *)v35 )
    goto LABEL_21;
  v21 = (_QWORD *)*((_QWORD *)v37[0] + 2 * (v17 & v39));
  while ( 1 )
  {
    if ( !v19[4] )
    {
      v20 = *(_DWORD **)v19;
      goto LABEL_20;
    }
    if ( v19 == (_DWORD *)v21 )
      break;
    v19 = (_DWORD *)*((_QWORD *)v19 + 1);
  }
  v20 = v19;
  v19 = 0LL;
LABEL_20:
  if ( !v19 )
  {
LABEL_21:
    if ( v36 == 0xAAAAAAAAAAAAAAALL )
      std::_Xlength_error("unordered_map/set too long");
    v58 = &v35;
    v59 = 0LL;
    v19 = operator new(0x18uLL);
    v59 = v19;
    v19[4] = v60;
    v19[5] = 0;
    v22 = v36;
    v23 = v36 + 1;
    if ( v36 + 1 < 0 )
      v24 = (float)(int)(v23 & 1 | (v23 >> 1)) + (float)(int)(v23 & 1 | (v23 >> 1));
    else
      v24 = (float)(int)v23;
    if ( v40 < 0 )
      v25 = (float)(v40 & 1 | (unsigned int)((unsigned __int64)v40 >> 1))
          + (float)(v40 & 1 | (unsigned int)((unsigned __int64)v40 >> 1));
    else
      v25 = (float)(int)v40;
    if ( (float)(v24 / v25) > v34 )
    {
      std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(&v34);
      v32 = (_QWORD *)((__int64 (__fastcall *)(float *, _QWORD **, _DWORD *, __int64, __int64))std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>)(
                        &v34,
                        &v58,
                        v19 + 4,
                        v17,
                        v33);
      v22 = v36;
      v20 = (_DWORD *)*v32;
    }
    v21 = (_QWORD *)*((_QWORD *)v20 + 1);
    v36 = v22 + 1;
    *(_QWORD *)v19 = v20;
    *((_QWORD *)v19 + 1) = v21;
    *v21 = v19;
    *((_QWORD *)v20 + 1) = v19;
    v26 = 2 * (v17 & v39);
    v27 = v37[0];
    v28 = (_QWORD *)*((_QWORD *)v37[0] + 2 * (v17 & v39));
    if ( v28 == v35 )
    {
      *((_QWORD *)v37[0] + 2 * (v17 & v39)) = v19;
LABEL_30:
      v27[v26 + 1] = v19;
      goto LABEL_31;
    }
    if ( v28 == (_QWORD *)v20 )
    {
      *((_QWORD *)v37[0] + 2 * (v17 & v39)) = v19;
    }
    else if ( *((_QWORD **)v37[0] + 2 * (v17 & v39) + 1) == v21 )
    {
      goto LABEL_30;
    }
  }
LABEL_31:
  v19[5] = v16;
  v29 = *((_QWORD *)a3 + 1);
  v30 = v56;
  if ( v56 != v29 )
  {
    if ( v29 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v29 + 8LL))(*((_QWORD *)a3 + 1), v21);
      v30 = v56;
    }
    v56 = v29;
    if ( v30 )
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v30 + 16LL))(v30, v21);
  }
  LODWORD(v47) = 0;
  LOBYTE(v57) = 0;
  if ( *(_QWORD *)(a1 + 32) == *(_QWORD *)(a1 + 40) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      (ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 24),
      *(_QWORD *)(a1 + 32),
      (ContextualProcessorBuffer::ContextualProcessorMetadata *)&v33);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(a1 + 32),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v33);
    *(_QWORD *)(a1 + 32) += 224LL;
  }
  ContextualProcessorBuffer::ContextualProcessorMetadata::~ContextualProcessorMetadata((ContextualProcessorBuffer::ContextualProcessorMetadata *)&v33);
  v31 = *((_QWORD *)a3 + 1);
  if ( v31 )
  {
    *((_QWORD *)a3 + 1) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  }
}
