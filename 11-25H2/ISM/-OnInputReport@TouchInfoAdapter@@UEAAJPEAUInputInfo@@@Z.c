/*
 * XREFs of ?OnInputReport@TouchInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x1801BE9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$?RW4_Button@@@?$_Uhash_compare@W4_Button@@U?$hash@W4_Button@@@std@@U?$equal_to@W4_Button@@@3@@std@@QEBA_KAEBW4_Button@@@Z @ 0x180026F68 (--$-RW4_Button@@@-$_Uhash_compare@W4_Button@@U-$hash@W4_Button@@@std@@U-$equal_to@W4_Button@@@3@.c)
 *     ??$_Find_last@K@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@AEBK_K@Z @ 0x1800515EC (--$_Find_last@K@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VBamoControllerNavigationClientProxy@@@WRL@Mi.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ??$_Insert_or_assign@KAEAG@?$unordered_map@KGU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@$$QEAKAEAG@Z @ 0x1801BE59C (--$_Insert_or_assign@KAEAG@-$unordered_map@KGU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@1@V21@@Z @ 0x1801BE73C (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKG@std@@@std@@@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall TouchInfoAdapter::OnInputReport(TouchInfoAdapter *this, struct InputInfo *a2)
{
  unsigned int v4; // r14d
  void *v5; // rax
  __int64 v6; // rcx
  const char *v7; // r9
  bool v8; // cc
  char v9; // r10
  char v10; // r11
  __int16 v11; // di
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r12
  int v15; // esi
  int v16; // esi
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int16 v20; // r10
  unsigned int i; // ecx
  __int64 v22; // rdx
  __int16 v23; // ax
  int v24; // ecx
  int v25; // eax
  __int16 v26; // ax
  __int16 v27; // ax
  int v28; // eax
  unsigned int v29; // r12d
  __int64 v30; // rsi
  __int16 v31; // dx
  __int128 v32; // xmm1
  __int64 v33; // rcx
  __int128 v34; // xmm0
  _QWORD *v35; // rax
  __int64 v36; // r8
  int v37; // r9d
  char v38; // si
  unsigned __int16 v39; // dx
  __int64 v41; // r9
  __int64 v42; // rax
  __int16 v43; // cx
  __int64 v44; // rcx
  unsigned __int8 v45; // r10
  unsigned int v46; // r9d
  unsigned int k; // r8d
  __int64 v48; // rdx
  unsigned __int16 v49; // dx
  int v50; // eax
  unsigned __int8 v51; // r10
  unsigned int v52; // r9d
  unsigned int j; // r8d
  __int64 v54; // rdx
  __int16 v55; // ax
  unsigned __int16 v56; // dx
  int v57; // eax
  unsigned __int16 v58; // dx
  _OWORD *v59; // rcx
  __int16 *v60; // rax
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // rax
  int v72; // [rsp+20h] [rbp-E0h]
  int v73; // [rsp+24h] [rbp-DCh] BYREF
  unsigned int v74; // [rsp+28h] [rbp-D8h]
  int v75; // [rsp+2Ch] [rbp-D4h]
  int v76; // [rsp+30h] [rbp-D0h]
  int v77; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v78; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v79; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v80; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v81; // [rsp+52h] [rbp-AEh] BYREF
  int v82; // [rsp+54h] [rbp-ACh]
  int v83; // [rsp+60h] [rbp-A0h]
  char v84; // [rsp+65h] [rbp-9Bh]
  char v85; // [rsp+66h] [rbp-9Ah]
  unsigned __int8 v86; // [rsp+67h] [rbp-99h]
  _BYTE v87[568]; // [rsp+68h] [rbp-98h]
  __int128 v88; // [rsp+2A0h] [rbp+1A0h] BYREF
  int v89; // [rsp+2B0h] [rbp+1B0h]
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  if ( (*(_DWORD *)a2 & 0x100003B) == 0 )
    return 0LL;
  v4 = 0;
  v80 = 0;
  v5 = memset_0(&v81, 0, 0x246uLL);
  v8 = *((_DWORD *)a2 + 79) <= 0xAu;
  LOBYTE(v5) = 0;
  v75 = (int)v5;
  v9 = 0;
  LOWORD(v72) = 0;
  v10 = 0;
  BYTE2(v72) = 0;
  v74 = 0;
  if ( !v8 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x80,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      v7);
  v11 = 1;
  v12 = 0LL;
  v13 = 4LL;
  while ( 1 )
  {
    v76 = v12;
    if ( (unsigned int)v12 >= *((_DWORD *)a2 + 79) )
      break;
    v14 = 18 * v12;
    LOBYTE(v6) = (*(_BYTE *)a2 & 2) != 0;
    v15 = *((_DWORD *)a2 + 36 * v12 + 83);
    if ( ((unsigned __int8)v6 & ((v15 & 0x10) == 0)) != 0 )
    {
      v15 &= ~4u;
      *((_DWORD *)a2 + 36 * v12 + 83) = v15;
    }
    if ( (v15 & 2) != 0 && !*((_BYTE *)this + 32) )
    {
      LOWORD(v4) = 8;
      BYTE2(v72) = v9 + 1;
    }
    v16 = v15 & 4;
    if ( v16 )
      BYTE1(v72) = v10 + 1;
    v73 = *((_DWORD *)a2 + 36 * v12 + 81);
    v17 = std::_Uhash_compare<enum _Button,std::hash<enum _Button>,std::equal_to<enum _Button>>::operator()<enum _Button>(
            v6,
            (__int64)&v73);
    v18 = std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<BamoControllerNavigationClientProxy>>>,0>>::_Find_last<unsigned long>(
            (_QWORD *)this + 5,
            &v88,
            &v73,
            v17);
    v6 = (__int64)this + 40;
    v19 = v18[1];
    if ( !v19 )
      v19 = *((_QWORD *)this + 6);
    if ( v19 == *((_QWORD *)this + 6) )
    {
      if ( v16 )
      {
        LOWORD(v4) = v4 | 1;
      }
      else if ( *((_BYTE *)this + 32) )
      {
        goto LABEL_45;
      }
      LOWORD(v73) = *((_WORD *)this + 54);
      *((_WORD *)this + 54) = v73 + 1;
      v77 = *((_DWORD *)a2 + 2 * v14 + 81);
      std::unordered_map<unsigned long,unsigned short>::_Insert_or_assign<unsigned long,unsigned short &>(
        (float *)v6,
        (__int64)&v79,
        &v77,
        &v73);
      v19 = v79;
      v20 = v73;
    }
    else
    {
      v20 = *(_WORD *)(v19 + 20);
      if ( !*((_BYTE *)this + 696) )
        goto LABEL_27;
      for ( i = 0; ; ++i )
      {
        if ( i >= *((unsigned __int8 *)this + 135) )
          goto LABEL_27;
        v22 = 56LL * i;
        if ( v20 == *(_WORD *)((char *)this + v22 + 136) )
          break;
      }
      v23 = *(_WORD *)((char *)this + v22 + 138);
      if ( *((_BYTE *)this + 32) )
      {
        if ( (v23 & 4) != 0 )
          goto LABEL_27;
      }
      else if ( (v23 & 8) == 0 )
      {
LABEL_27:
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xBF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
          (const char *)0x8000FFFFLL,
          v72);
      }
      v24 = *((_DWORD *)a2 + 2 * v14 + 83);
      if ( (v24 & 4) != 0 )
      {
        if ( (v23 & 3) != 0 )
          LOWORD(v4) = v4 | 2;
        else
          LOWORD(v4) = v4 | 1;
      }
      else if ( (v23 & 1) != 0 || (v23 & 2) != 0 )
      {
        LOWORD(v4) = v4 | 4;
      }
      v25 = (unsigned __int8)v75;
      if ( (v24 & 0x8000) != 0 )
        v25 = 1;
      *(_WORD *)((char *)this + v22 + 154) = 1;
      v75 = v25;
      v26 = v4 | 0x2000;
      if ( (v24 & 0x8000) == 0 )
        v26 = v4;
      LOWORD(v4) = v26;
    }
    v27 = *((_WORD *)a2 + 4 * v14 + 184);
    v6 = 56LL * v74++;
    *(_WORD *)&v87[v6 + 4] = v27;
    *(_WORD *)&v87[v6 + 6] = *((_WORD *)a2 + 4 * v14 + 186);
    *(_WORD *)&v87[v6 + 8] = *((_WORD *)a2 + 4 * v14 + 176);
    *(_WORD *)&v87[v6 + 10] = *((_WORD *)a2 + 4 * v14 + 178);
    v28 = *((_DWORD *)a2 + 2 * v14 + 83);
    *(_WORD *)&v87[v6] = v20;
    *(_WORD *)&v87[v6 + 2] = v4;
    if ( (v28 & 2) == 0 || *((_BYTE *)this + 32) && (v28 & 4) == 0 )
      std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>,0>(
        (_QWORD *)this + 5,
        &v78,
        v19);
LABEL_45:
    v9 = BYTE2(v72);
    v12 = (unsigned int)(v76 + 1);
    v10 = BYTE1(v72);
    v4 = 0;
  }
  v29 = v74;
  if ( *((_BYTE *)this + 696) && *((_BYTE *)this + 135) )
  {
    do
    {
      v30 = 56LL * v4;
      v31 = *(_WORD *)((char *)this + v30 + 138);
      if ( (v31 & 0xB) != 0 && *(_WORD *)((char *)this + v30 + 154) != 1 )
      {
        v32 = *(_OWORD *)((char *)this + v30 + 152);
        v33 = 56LL * v29;
        *(_OWORD *)&v87[v33] = *(_OWORD *)((char *)this + v30 + 136);
        ++v29;
        v34 = *(_OWORD *)((char *)this + v30 + 168);
        *(_OWORD *)&v87[v33 + 16] = v32;
        *(_QWORD *)&v32 = *(_QWORD *)((char *)this + v30 + 184);
        *(_OWORD *)&v87[v33 + 32] = v34;
        *(_QWORD *)&v87[v33 + 48] = v32;
        *(_WORD *)&v87[v33 + 2] = (v31 & 3) != 0 ? 4 : 0;
        v35 = (_QWORD *)*((_QWORD *)this + 6);
        while ( 1 )
        {
          v35 = (_QWORD *)*v35;
          if ( v35 == *((_QWORD **)this + 6) )
            break;
          if ( *((_WORD *)v35 + 10) == *(_WORD *)((char *)this + v30 + 136) )
            v35 = std::_Hash<std::_Umap_traits<unsigned long,unsigned short,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned short>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,unsigned short>>>>,0>(
                    (_QWORD *)this + 5,
                    &v78,
                    (__int64)v35);
        }
      }
      ++v4;
    }
    while ( v4 < *((unsigned __int8 *)this + 135) );
    v9 = BYTE2(v72);
    v10 = BYTE1(v72);
  }
  v36 = 0LL;
  v37 = *((_DWORD *)this + 26);
  v82 = *((_DWORD *)a2 + 2);
  v83 = v37;
  v81 = 0;
  v84 = v9;
  v85 = v10;
  v86 = v29;
  v80 = 56 * v29 + 24;
  if ( *((_BYTE *)this + 696) )
  {
    if ( *((_BYTE *)this + 32) || (v39 = 256, (*((_WORD *)this + 57) & 0x100) == 0) )
    {
      v39 = 0;
      if ( !v10 )
      {
        v81 = 4;
        if ( v9 )
        {
          (*(void (__fastcall **)(_QWORD, __int16 *, _QWORD))(**((_QWORD **)this + 3) + 24LL))(
            *((_QWORD *)this + 3),
            &v80,
            0LL);
          v51 = v86;
          v52 = 0;
          for ( j = 0; j < v51; ++j )
          {
            v54 = 56LL * v52;
            v55 = *(_WORD *)&v87[56 * j + 2];
            if ( (v55 & 8) != 0 )
            {
              *(_WORD *)&v87[56 * v52++ + 2] = v55 & 0xFFFB;
              *(_WORD *)&v87[v54] = *(_WORD *)&v87[56 * j];
              *(_WORD *)&v87[v54 + 4] = *(_WORD *)&v87[56 * j + 4];
              *(_WORD *)&v87[v54 + 6] = *(_WORD *)&v87[56 * j + 6];
              *(_WORD *)&v87[v54 + 8] = *(_WORD *)&v87[56 * j + 8];
              *(_WORD *)&v87[v54 + 10] = *(_WORD *)&v87[56 * j + 10];
              v51 = v86;
            }
          }
          v56 = v81;
          v57 = *((_DWORD *)this + 26) + 1;
          *((_DWORD *)this + 26) = v57;
          v83 = v57;
          v39 = v56 & 0xFEFA | 0x101;
          v86 = v52;
          v36 = v39;
          v81 = v39;
          v80 = 56 * v52 + 24;
        }
        else
        {
          *((_BYTE *)this + 696) = 0;
          *((_DWORD *)this + 26) = v37 + 1;
          v36 = 4LL;
          *((_WORD *)this + 54) = 0;
          v39 = 4;
        }
      }
    }
    else
    {
      if ( v10 )
      {
        v89 = 0;
        v41 = 0LL;
        v88 = 0LL;
        if ( (_BYTE)v29 )
        {
          do
          {
            v42 = (unsigned int)v41;
            v41 = (unsigned int)(v41 + 1);
            v43 = *(_WORD *)&v87[56 * v42 + 2];
            *((_WORD *)&v88 + v42) = v43;
            *(_WORD *)&v87[56 * v42 + 2] = v43 & 0xFFFE;
          }
          while ( (unsigned int)v41 < v86 );
          v36 = v81;
        }
        v44 = *((_QWORD *)this + 3);
        LOWORD(v36) = v36 | 0x104;
        v85 = 0;
        v81 = v36;
        (*(void (__fastcall **)(__int64, __int16 *, __int64, __int64))(*(_QWORD *)v44 + 24LL))(v44, &v80, v36, v41);
        v45 = v86;
        v46 = 0;
        for ( k = 0; k < v45; ++k )
        {
          v48 = 56LL * v46;
          if ( (v87[56 * k + 2] & 8) != 0 )
          {
            ++v46;
            *(_WORD *)&v87[v48 + 2] = *((_WORD *)&v88 + k);
            *(_WORD *)&v87[v48] = *(_WORD *)&v87[56 * k];
            *(_WORD *)&v87[v48 + 4] = *(_WORD *)&v87[56 * k + 4];
            *(_WORD *)&v87[v48 + 6] = *(_WORD *)&v87[56 * k + 6];
            *(_WORD *)&v87[v48 + 8] = *(_WORD *)&v87[56 * k + 8];
            *(_WORD *)&v87[v48 + 10] = *(_WORD *)&v87[56 * k + 10];
            v45 = v86;
          }
        }
        v49 = v81;
        v50 = *((_DWORD *)this + 26) + 1;
        *((_DWORD *)this + 26) = v50;
        v83 = v50;
        v86 = v46;
        v39 = v49 & 0xFEFA | 1;
        v85 = BYTE1(v72);
        v80 = 56 * v46 + 24;
      }
      else if ( !v9 )
      {
        *((_BYTE *)this + 696) = 0;
        *((_DWORD *)this + 26) = v37 + 1;
        v39 = 260;
        *((_WORD *)this + 54) = 0;
      }
      v36 = v39;
      v81 = v39;
    }
    v38 = 0;
    goto LABEL_89;
  }
  *((_BYTE *)this + 696) = 1;
  if ( v10 )
  {
    v36 = 1LL;
    v81 = 1;
    goto LABEL_61;
  }
  if ( v9 )
  {
    v36 = 257LL;
    v81 = 257;
    v11 = 257;
LABEL_61:
    v38 = 0;
LABEL_64:
    v39 = v11;
LABEL_89:
    if ( (_BYTE)v75 )
    {
      v58 = v39 | 0x8000;
      v36 = v58;
      v81 = v58;
    }
    if ( (*(_BYTE *)a2 & 0x20) != 0 )
    {
      LOWORD(v36) = v36 | 0x1000;
      v81 = v36;
    }
    if ( !v38 )
    {
      v59 = (_OWORD *)((char *)this + 112);
      v60 = &v80;
      do
      {
        v61 = *((_OWORD *)v60 + 1);
        *v59 = *(_OWORD *)v60;
        v62 = *((_OWORD *)v60 + 2);
        v59[1] = v61;
        v63 = *((_OWORD *)v60 + 3);
        v59[2] = v62;
        v64 = *((_OWORD *)v60 + 4);
        v59[3] = v63;
        v65 = *((_OWORD *)v60 + 5);
        v59[4] = v64;
        v66 = *((_OWORD *)v60 + 6);
        v59[5] = v65;
        v67 = *((_OWORD *)v60 + 7);
        v60 += 64;
        v59[6] = v66;
        v59 += 8;
        *(v59 - 1) = v67;
        --v13;
      }
      while ( v13 );
      v68 = *((_OWORD *)v60 + 1);
      *v59 = *(_OWORD *)v60;
      v69 = *((_OWORD *)v60 + 2);
      v59[1] = v68;
      v70 = *((_OWORD *)v60 + 3);
      v71 = *((_QWORD *)v60 + 8);
      v59[2] = v69;
      v59[3] = v70;
      *((_QWORD *)v59 + 8) = v71;
      (*(void (__fastcall **)(_QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
        *((_QWORD *)this + 3),
        &v80,
        v36);
    }
    return 0LL;
  }
  else
  {
    if ( *((_BYTE *)this + 32) )
    {
      v38 = 1;
      *((_BYTE *)this + 696) = 0;
      v11 = 0;
      goto LABEL_64;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\adapters\\touchinfo\\lib\\touchinfoadapter.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
}
