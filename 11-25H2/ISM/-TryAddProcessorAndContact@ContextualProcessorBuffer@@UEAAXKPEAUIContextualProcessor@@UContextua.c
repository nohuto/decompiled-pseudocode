/*
 * XREFs of ?TryAddProcessorAndContact@ContextualProcessorBuffer@@UEAAXKPEAUIContextualProcessor@@UContextualProcessorInitialState@@@Z @ 0x180028FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@?$vector@UContextualProcessorMetadata@ContextualProcessorBuffer@@V?$allocator@UContextualProcessorMetadata@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUContextualProcessorMetadata@ContextualProcessorBuffer@@QEAU23@AEBU23@@Z @ 0x180029930 (--$_Emplace_reallocate@AEBUContextualProcessorMetadata@ContextualProcessorBuffer@@@-$vector@UCon.c)
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x18002A548 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x18003DF60 (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAAXXZ @ 0x18009B1C4 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall ContextualProcessorBuffer::TryAddProcessorAndContact(__int64 a1, int a2, __int64 a3, int *a4)
{
  __int64 v7; // r12
  __int64 i; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // r13
  __int64 v13; // rcx
  float v14; // xmm0_4
  __int64 v15; // rcx
  float v16; // xmm1_4
  _QWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rsi
  _QWORD *v24; // rbx
  _QWORD *v25; // rax
  _QWORD *v26; // rsi
  _QWORD *v27; // rbx
  _QWORD *v28; // rax
  _QWORD *v29; // rsi
  _QWORD *v30; // rax
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rbx
  unsigned __int64 v34; // rdi
  _QWORD *v35; // rbx
  _QWORD *v36; // rsi
  __int64 v37; // rdx
  unsigned __int64 v38; // rcx
  float v39; // xmm0_4
  float v40; // xmm1_4
  _QWORD *v41; // rcx
  __int64 v42; // rdi
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  _BYTE *v46; // rcx
  const struct std::nothrow_t *v47; // rdx
  _QWORD **v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rbx
  _QWORD **v51; // rcx
  _QWORD *v52; // rcx
  _BYTE *v53; // rax
  _QWORD **v54; // rcx
  _QWORD *v55; // rcx
  _QWORD *v56; // rbx
  __int64 v57; // rcx
  _QWORD *v58; // rbx
  __int64 v59; // rax
  _QWORD *v60; // rax
  void **v61; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD *v62; // [rsp+28h] [rbp-D8h]
  __int64 v63; // [rsp+30h] [rbp-D0h] BYREF
  float v64; // [rsp+38h] [rbp-C8h] BYREF
  void *v65; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h]
  void *v67[2]; // [rsp+50h] [rbp-B0h]
  char *v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  __int64 v70; // [rsp+70h] [rbp-90h]
  int v71; // [rsp+78h] [rbp-88h]
  void *v72[2]; // [rsp+80h] [rbp-80h]
  void *v73[2]; // [rsp+90h] [rbp-70h]
  char *v74; // [rsp+A0h] [rbp-60h]
  __int64 v75; // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h]
  __int64 v77; // [rsp+B8h] [rbp-48h]
  int v78; // [rsp+C0h] [rbp-40h]
  void *v79; // [rsp+C8h] [rbp-38h]
  __int64 v80; // [rsp+D0h] [rbp-30h]
  void *v81; // [rsp+D8h] [rbp-28h]
  __int128 v82; // [rsp+E0h] [rbp-20h]
  __int64 v83; // [rsp+F0h] [rbp-10h]
  __int64 v84; // [rsp+F8h] [rbp-8h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+108h] [rbp+8h]
  int v87; // [rsp+150h] [rbp+50h]
  int v88; // [rsp+150h] [rbp+50h]

  v7 = a1 + 24;
  for ( i = *(_QWORD *)(a1 + 24); i != *(_QWORD *)(a1 + 32); i += 224LL )
  {
    if ( *(_QWORD *)i == a3 )
    {
      v87 = *a4;
      v9 = 0x100000001B3LL
         * (HIBYTE(a2) ^ (0x100000001B3LL
                        * (BYTE2(a2) ^ (0x100000001B3LL
                                      * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))));
      v10 = *(_QWORD *)(i + 32);
      v11 = *(_QWORD **)(v10 + 16 * (*(_QWORD *)(i + 56) & v9) + 8);
      v12 = *(_QWORD **)(i + 16);
      if ( v11 != v12 )
      {
        while ( a2 != *((_DWORD *)v11 + 4) )
        {
          if ( v11 == *(_QWORD **)(v10
                                 + 16
                                 * (*(_QWORD *)(i + 56) & (0x100000001B3LL
                                                         * (HIBYTE(a2) ^ (0x100000001B3LL
                                                                        * (BYTE2(a2) ^ (0x100000001B3LL
                                                                                      * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))) )
          {
            v12 = v11;
            goto LABEL_9;
          }
          v11 = (_QWORD *)v11[1];
        }
        goto LABEL_19;
      }
LABEL_9:
      if ( *(_QWORD *)(i + 24) == 0xAAAAAAAAAAAAAAALL )
        std::_Xlength_error("unordered_map/set too long");
      v61 = (void **)(i + 16);
      v11 = operator new(0x18uLL);
      v62 = v11;
      *((_DWORD *)v11 + 4) = a2;
      *((_DWORD *)v11 + 5) = 0;
      v13 = *(_QWORD *)(i + 24) + 1LL;
      if ( v13 < 0 )
        v14 = (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1))
            + (float)(v13 & 1 | (unsigned int)((unsigned __int64)v13 >> 1));
      else
        v14 = (float)(int)v13;
      v15 = *(_QWORD *)(i + 64);
      if ( v15 < 0 )
      {
        v59 = *(_QWORD *)(i + 64) & 1LL | ((unsigned __int64)v15 >> 1);
        v16 = (float)(int)v59 + (float)(int)v59;
      }
      else
      {
        v16 = (float)(int)v15;
      }
      if ( (float)(v14 / v16) > *(float *)(i + 8) )
      {
        std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(i + 8);
        v12 = *(_QWORD **)((__int64 (__fastcall *)(__int64, void ***, _QWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>)(
                            i + 8,
                            &v61,
                            v11 + 2,
                            v9);
      }
      v17 = (_QWORD *)v12[1];
      ++*(_QWORD *)(i + 24);
      *v11 = v12;
      v11[1] = v17;
      *v17 = v11;
      v12[1] = v11;
      v18 = *(_QWORD *)(i + 32);
      v19 = 2 * (v9 & *(_QWORD *)(i + 56));
      v20 = *(_QWORD **)(v18 + 16 * (v9 & *(_QWORD *)(i + 56)));
      if ( v20 == *(_QWORD **)(i + 16) )
      {
        *(_QWORD *)(v18 + 16 * (v9 & *(_QWORD *)(i + 56))) = v11;
        goto LABEL_18;
      }
      if ( v20 == v12 )
      {
        *(_QWORD *)(v18 + 16 * (v9 & *(_QWORD *)(i + 56))) = v11;
        goto LABEL_19;
      }
      if ( *(_QWORD **)(v18 + 16 * (v9 & *(_QWORD *)(i + 56)) + 8) == v17 )
LABEL_18:
        *(_QWORD *)(v18 + 8 * v19 + 8) = v11;
LABEL_19:
      *((_DWORD *)v11 + 5) = v87;
      v21 = *((_QWORD *)a4 + 1);
      if ( v21 )
      {
        if ( v21 != *(_QWORD *)(i + 208) )
          Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)(i + 208), (_QWORD *)a4 + 1);
      }
      v22 = *((_QWORD *)a4 + 1);
      if ( v22 )
      {
        *((_QWORD *)a4 + 1) = 0LL;
LABEL_22:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        return;
      }
      return;
    }
  }
  v63 = 0LL;
  v66 = 0LL;
  v23 = operator new(0x18uLL);
  *v23 = v23;
  v23[1] = v23;
  v65 = v23;
  v69 = 7LL;
  v70 = 8LL;
  v64 = 1.0;
  v24 = operator new(0x80uLL);
  v67[0] = v24;
  v25 = v24 + 16;
  v67[1] = v24 + 16;
  v68 = (char *)(v24 + 16);
  do
    *v24++ = v23;
  while ( v24 != v25 );
  *(_OWORD *)v72 = 0LL;
  v26 = operator new(0x18uLL);
  *v26 = v26;
  v26[1] = v26;
  v72[0] = v26;
  v75 = 7LL;
  v76 = 8LL;
  v71 = 1065353216;
  v27 = operator new(0x80uLL);
  v73[0] = v27;
  v28 = v27 + 16;
  v73[1] = v27 + 16;
  v74 = (char *)(v27 + 16);
  do
    *v27++ = v26;
  while ( v27 != v28 );
  v77 = 0LL;
  v80 = 0LL;
  v29 = operator new(0x18uLL);
  *v29 = v29;
  v29[1] = v29;
  v79 = v29;
  v83 = 7LL;
  v84 = 8LL;
  v78 = 1065353216;
  v31 = operator new(0x80uLL);
  v81 = v31;
  v30 = v31 + 16;
  *(_QWORD *)&v82 = v31 + 16;
  *((_QWORD *)&v82 + 1) = v31 + 16;
  do
    *v31++ = v29;
  while ( v31 != v30 );
  v85 = 0LL;
  v86 = 0LL;
  v32 = v63;
  if ( v63 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      v32 = v63;
    }
    v63 = a3;
    if ( v32 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = *((_QWORD *)a4 + 1);
  if ( v85 != v33 )
  {
    if ( v33 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 8LL))(*((_QWORD *)a4 + 1));
    v85 = v33;
  }
  LOBYTE(v86) = 0;
  LODWORD(v77) = 0;
  v88 = *a4;
  v34 = 0x100000001B3LL
      * (HIBYTE(a2) ^ (0x100000001B3LL
                     * (BYTE2(a2) ^ (0x100000001B3LL
                                   * (BYTE1(a2) ^ (0x100000001B3LL * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))));
  v35 = (_QWORD *)*((_QWORD *)v67[0] + 2 * (v69 & v34) + 1);
  v36 = v65;
  if ( v35 != v65 )
  {
    while ( a2 != *((_DWORD *)v35 + 4) )
    {
      if ( v35 == *((_QWORD **)v67[0]
                  + 2
                  * (v69 & (0x100000001B3LL
                          * (HIBYTE(a2) ^ (0x100000001B3LL
                                         * (BYTE2(a2) ^ (0x100000001B3LL
                                                       * (BYTE1(a2) ^ (0x100000001B3LL
                                                                     * ((unsigned __int8)a2 ^ 0xCBF29CE484222325uLL)))))))))) )
      {
        v36 = v35;
        goto LABEL_46;
      }
      v35 = (_QWORD *)v35[1];
    }
    goto LABEL_56;
  }
LABEL_46:
  if ( v66 == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v61 = &v65;
  v35 = operator new(0x18uLL);
  v62 = v35;
  *((_DWORD *)v35 + 4) = a2;
  *((_DWORD *)v35 + 5) = 0;
  v37 = v66;
  v38 = v66 + 1;
  if ( v66 + 1 < 0 )
    v39 = (float)(int)(v38 & 1 | (v38 >> 1)) + (float)(int)(v38 & 1 | (v38 >> 1));
  else
    v39 = (float)(int)v38;
  if ( v70 < 0 )
    v40 = (float)(v70 & 1 | (unsigned int)((unsigned __int64)v70 >> 1))
        + (float)(v70 & 1 | (unsigned int)((unsigned __int64)v70 >> 1));
  else
    v40 = (float)(int)v70;
  if ( (float)(v39 / v40) > v64 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::_Rehash_for_1(&v64);
    v60 = (_QWORD *)((__int64 (__fastcall *)(float *, void ***, _QWORD *, unsigned __int64))std::_Hash<std::_Umap_traits<unsigned long,IRawInputProvider *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,IRawInputProvider *>>,0>>::_Find_last<unsigned long>)(
                      &v64,
                      &v61,
                      v35 + 2,
                      v34);
    v37 = v66;
    v36 = (_QWORD *)*v60;
  }
  v41 = (_QWORD *)v36[1];
  v66 = v37 + 1;
  *v35 = v36;
  v35[1] = v41;
  *v41 = v35;
  v36[1] = v35;
  v42 = 2 * (v69 & v34);
  v43 = v67[0];
  v44 = (_QWORD *)*((_QWORD *)v67[0] + v42);
  if ( v44 == v65 )
  {
    *((_QWORD *)v67[0] + v42) = v35;
    goto LABEL_55;
  }
  if ( v44 == v36 )
  {
    *((_QWORD *)v67[0] + v42) = v35;
    goto LABEL_56;
  }
  if ( *((_QWORD **)v67[0] + v42 + 1) == v41 )
LABEL_55:
    v43[v42 + 1] = v35;
LABEL_56:
  *((_DWORD *)v35 + 5) = v88;
  if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)(v7 + 16) )
  {
    std::vector<ContextualProcessorBuffer::ContextualProcessorMetadata>::_Emplace_reallocate<ContextualProcessorBuffer::ContextualProcessorMetadata const &>(
      v7,
      *(_QWORD *)(v7 + 8),
      &v63);
  }
  else
  {
    ContextualProcessorBuffer::ContextualProcessorMetadata::ContextualProcessorMetadata(
      *(ContextualProcessorBuffer::ContextualProcessorMetadata **)(v7 + 8),
      (const struct ContextualProcessorBuffer::ContextualProcessorMetadata *)&v63);
    *(_QWORD *)(v7 + 8) += 224LL;
  }
  v45 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  v46 = v81;
  if ( v81 )
  {
    v47 = (const struct std::nothrow_t *)(8 * ((__int64)(*((_QWORD *)&v82 + 1) - (_QWORD)v81) >> 3));
    if ( (unsigned __int64)v47 >= 0x1000 )
    {
      v47 = (const struct std::nothrow_t *)((char *)v47 + 39);
      v46 = (_BYTE *)*((_QWORD *)v81 - 1);
      if ( (unsigned __int64)((_BYTE *)v81 - v46 - 8) > 0x1F )
        goto LABEL_90;
    }
    operator delete(v46, v47);
    v81 = 0LL;
    v82 = 0LL;
  }
  v48 = (_QWORD **)v79;
  **((_QWORD **)v79 + 1) = 0LL;
  v49 = *v48;
  if ( v49 )
  {
    do
    {
      v50 = (_QWORD *)*v49;
      operator delete(v49, (const struct std::nothrow_t *)0x18);
      v49 = v50;
    }
    while ( v50 );
  }
  operator delete(v79, (const struct std::nothrow_t *)0x18);
  v46 = v73[0];
  if ( v73[0] )
  {
    v47 = (const struct std::nothrow_t *)(8 * ((v74 - (char *)v73[0]) >> 3));
    if ( (unsigned __int64)v47 >= 0x1000 )
    {
      v47 = (const struct std::nothrow_t *)((char *)v47 + 39);
      v46 = (_BYTE *)*((_QWORD *)v73[0] - 1);
      if ( (unsigned __int64)((char *)v73[0] - (char *)v46 - 8) > 0x1F )
      {
        do
        {
LABEL_90:
          v53 = (_BYTE *)_o__invalid_parameter_noinfo_noreturn(v46, v47);
          __debugbreak();
LABEL_91:
          v47 = (const struct std::nothrow_t *)((char *)v47 + 39);
          v46 = (_BYTE *)*((_QWORD *)v46 - 1);
        }
        while ( (unsigned __int64)(v53 - v46 - 8) > 0x1F );
        goto LABEL_71;
      }
    }
    operator delete(v46, v47);
    *(_OWORD *)v73 = 0LL;
    v74 = 0LL;
  }
  v51 = (_QWORD **)v72[0];
  **((_QWORD **)v72[0] + 1) = 0LL;
  v52 = *v51;
  if ( v52 )
  {
    do
    {
      v58 = (_QWORD *)*v52;
      operator delete(v52, (const struct std::nothrow_t *)0x18);
      v52 = v58;
    }
    while ( v58 );
  }
  operator delete(v72[0], (const struct std::nothrow_t *)0x18);
  v46 = v67[0];
  if ( v67[0] )
  {
    v47 = (const struct std::nothrow_t *)(8 * ((v68 - (char *)v67[0]) >> 3));
    v53 = v67[0];
    if ( (unsigned __int64)v47 >= 0x1000 )
      goto LABEL_91;
LABEL_71:
    operator delete(v46, v47);
    *(_OWORD *)v67 = 0LL;
    v68 = 0LL;
  }
  v54 = (_QWORD **)v65;
  **((_QWORD **)v65 + 1) = 0LL;
  v55 = *v54;
  if ( v55 )
  {
    do
    {
      v56 = (_QWORD *)*v55;
      operator delete(v55, (const struct std::nothrow_t *)0x18);
      v55 = v56;
    }
    while ( v56 );
  }
  operator delete(v65, (const struct std::nothrow_t *)0x18);
  v57 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  v22 = *((_QWORD *)a4 + 1);
  if ( v22 )
  {
    *((_QWORD *)a4 + 1) = 0LL;
    goto LABEL_22;
  }
}
