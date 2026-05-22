/*
 * XREFs of ??$emplace@K@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x18002B0B4
 * Callers:
 *     ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x18004B700 (-List@PointerMetadata@@YAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18000CC20 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     _o_ceilf_0 @ 0x18009D2F0 (_o_ceilf_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  unsigned __int64 *v10; // r13
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  float v20; // xmm0_4
  unsigned __int64 v21; // rdi
  float v22; // xmm2_4
  float v23; // xmm0_4
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r10
  __int64 v33; // r11
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rax
  __int64 *v37; // rax
  __int64 *v38; // rbx
  __int64 v39; // r8
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rbx
  unsigned __int64 v49; // rdi
  __int64 *v50; // rbp
  unsigned __int64 v51; // [rsp+20h] [rbp-38h]

  v6 = 0LL;
  v7 = 0xCBF29CE484222325uLL;
  do
    v7 = 0x100000001B3LL * (*((unsigned __int8 *)a3 + v6++) ^ (unsigned __int64)v7);
  while ( v6 < 4 );
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v10 = (unsigned __int64 *)(a1 + 8);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v9 == v11 )
  {
    v9 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    while ( 1 )
    {
      if ( *a3 == *(_DWORD *)(v9 + 16) )
      {
        v11 = *(_QWORD *)v9;
        v12 = v9;
        v9 = *(_QWORD *)v9;
        goto LABEL_8;
      }
      if ( v9 == *(_QWORD *)(v8 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    v11 = v9;
    v12 = 0LL;
LABEL_8:
    if ( v12 )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
      return a2;
    }
  }
  if ( *(_QWORD *)(a1 + 16) == 0xAAAAAAAAAAAAAAALL )
    std::_Xlength_error("unordered_map/set too long");
  v18 = operator new(0x18uLL);
  v18[4] = *a3;
  v19 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v19 < 0 )
    v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
        + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
  else
    v20 = (float)(int)v19;
  v21 = *(_QWORD *)(a1 + 56);
  if ( (v21 & 0x8000000000000000uLL) != 0LL )
  {
    v28 = *(_QWORD *)(a1 + 56) & 1LL | (v21 >> 1);
    v22 = (float)(int)v28 + (float)(int)v28;
  }
  else
  {
    v22 = (float)(int)v21;
  }
  if ( (float)(v20 / v22) <= *(float *)a1 )
    goto LABEL_16;
  v23 = o_ceilf_0(v20 / *(float *)a1);
  v24 = 0LL;
  if ( v23 >= 9.223372e18 )
  {
    v23 = v23 - 9.223372e18;
    if ( v23 < 9.223372e18 )
      v24 = 0x8000000000000000uLL;
  }
  v25 = v24 + (unsigned int)(int)v23;
  v26 = 8LL;
  if ( v25 > 8 )
    v26 = v25;
  if ( v21 < v26 )
  {
    if ( v21 >= 0x200 || (v21 *= 8LL, v21 < v26) )
      v21 = v26;
  }
  _BitScanReverse64(&v27, 0xFFFFFFFFFFFFFFFuLL);
  if ( v21 > 1LL << v27 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v47, (v21 - 1) | 1);
  v48 = 1LL << ((unsigned __int8)v47 + 1);
  v49 = *v10;
  v50 = (__int64 *)(a1 + 24);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    a1 + 24,
    2 * v48,
    *v10);
  *(_QWORD *)(a1 + 48) = v48 - 1;
  *(_QWORD *)(a1 + 56) = v48;
  v33 = *(_QWORD *)*v10;
LABEL_44:
  while ( v33 != v49 )
  {
    v29 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v31,
            v33 + 16);
    v34 = 2 * (*(_QWORD *)(a1 + 48) & v29);
    v35 = *v50;
    if ( *(_QWORD *)(*v50 + 16 * (*(_QWORD *)(a1 + 48) & v29)) == v49 )
    {
      *(_QWORD *)(v35 + 16 * (*(_QWORD *)(a1 + 48) & v29)) = v32;
      goto LABEL_47;
    }
    v37 = *(__int64 **)(v35 + 16 * (*(_QWORD *)(a1 + 48) & v29) + 8);
    v31 = *v30;
    if ( (_DWORD)v31 == *((_DWORD *)v37 + 4) )
    {
      v42 = *v37;
      if ( *v37 != v32 )
      {
        v43 = *(_QWORD **)(v32 + 8);
        *v43 = v33;
        v31 = *(_QWORD *)(v33 + 8);
        *(_QWORD *)v31 = v42;
        v44 = *(_QWORD **)(v42 + 8);
        *v44 = v32;
        *(_QWORD *)(v42 + 8) = v31;
        *(_QWORD *)(v33 + 8) = v43;
        *(_QWORD *)(v32 + 8) = v44;
      }
LABEL_47:
      *(_QWORD *)(v35 + 8 * v34 + 8) = v32;
    }
    else
    {
      while ( 1 )
      {
        v38 = v37 + 1;
        if ( *(__int64 **)(v35 + 8 * v34) == v37 )
          break;
        v37 = (__int64 *)*v38;
        if ( (_DWORD)v31 == *(_DWORD *)(*v38 + 16) )
        {
          v39 = *v37;
          v40 = *(_QWORD **)(v32 + 8);
          *v40 = v33;
          v31 = *(_QWORD *)(v33 + 8);
          *(_QWORD *)v31 = v39;
          v41 = *(_QWORD **)(v39 + 8);
          *v41 = v32;
          *(_QWORD *)(v39 + 8) = v31;
          *(_QWORD *)(v33 + 8) = v40;
          *(_QWORD *)(v32 + 8) = v41;
          goto LABEL_44;
        }
      }
      v45 = *(_QWORD **)(v32 + 8);
      *v45 = v33;
      v31 = *(_QWORD *)(v33 + 8);
      *(_QWORD *)v31 = v37;
      v46 = (_QWORD *)*v38;
      *v46 = v32;
      *v38 = v31;
      *(_QWORD *)(v33 + 8) = v45;
      *(_QWORD *)(v32 + 8) = v46;
      *(_QWORD *)(v35 + 8 * v34) = v32;
    }
  }
  v36 = *(_QWORD *)(*v50 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8);
  v9 = *v10;
  if ( v36 == *v10 )
  {
LABEL_14:
    v51 = v9;
  }
  else
  {
    while ( 1 )
    {
      v9 = v36;
      if ( v18[4] == *(_DWORD *)(v36 + 16) )
      {
        v9 = *(_QWORD *)v36;
        goto LABEL_14;
      }
      if ( v36 == *(_QWORD *)(*v50 + 16 * (v7 & *(_QWORD *)(a1 + 48))) )
        break;
      v36 = *(_QWORD *)(v36 + 8);
    }
    v51 = v36;
  }
  v11 = v51;
LABEL_16:
  v13 = *(_QWORD **)(v9 + 8);
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v18 = v11;
  *((_QWORD *)v18 + 1) = v13;
  *v13 = v18;
  *(_QWORD *)(v9 + 8) = v18;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = 2 * (v7 & *(_QWORD *)(a1 + 48));
  v16 = *(_QWORD *)(v14 + 16 * (v7 & *(_QWORD *)(a1 + 48)));
  if ( v16 == *v10 )
  {
    *(_QWORD *)(v14 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v18;
    goto LABEL_18;
  }
  if ( v16 == v11 )
  {
    *(_QWORD *)(v14 + 16 * (v7 & *(_QWORD *)(a1 + 48))) = v18;
  }
  else if ( *(_QWORD **)(v14 + 16 * (v7 & *(_QWORD *)(a1 + 48)) + 8) == v13 )
  {
LABEL_18:
    *(_QWORD *)(v14 + 8 * v15 + 8) = v18;
  }
  *(_QWORD *)a2 = v18;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
