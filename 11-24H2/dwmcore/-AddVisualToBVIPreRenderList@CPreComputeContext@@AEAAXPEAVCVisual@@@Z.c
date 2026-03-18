/*
 * XREFs of ?AddVisualToBVIPreRenderList@CPreComputeContext@@AEAAXPEAVCVisual@@@Z @ 0x180032000
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A38B0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180032D1C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@w.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800D6E60 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801860D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPreComputeContext::AddVisualToBVIPreRenderList(CPreComputeContext *this, struct CVisual *a2)
{
  __int64 v2; // rax
  struct _LIST_ENTRY *v4; // r14
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *v6; // r10
  struct _LIST_ENTRY *Flink; // rdx
  char *v8; // rdi
  __int128 *v9; // rbx
  struct _LIST_ENTRY *Blink; // rax
  _QWORD *v11; // r9
  __int64 v12; // rax
  struct _LIST_ENTRY *v13; // rsi
  __int64 v14; // rax
  struct _LIST_ENTRY *v15; // r8
  struct _LIST_ENTRY *v16; // rbx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  struct _LIST_ENTRY **v20; // r11
  __int64 v21; // rcx
  struct _LIST_ENTRY *v22; // r9
  struct _LIST_ENTRY *v23; // rdi
  __int64 v24; // rbx
  __int64 v25; // rbx
  HANDLE ProcessHeap; // rax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v28; // rax
  struct _LIST_ENTRY *v29; // r8
  unsigned __int64 v30; // rdi
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *v32; // r8
  struct _LIST_ENTRY *v33; // rdx
  struct _LIST_ENTRY *v34; // rbx
  struct _LIST_ENTRY *v35; // rcx
  __int128 v36; // [rsp+20h] [rbp-49h] BYREF
  __int64 v37; // [rsp+30h] [rbp-39h]
  __int128 v38; // [rsp+40h] [rbp-29h] BYREF
  __int64 v39; // [rsp+50h] [rbp-19h]
  LPVOID lpMem; // [rsp+60h] [rbp-9h]
  char *v41; // [rsp+68h] [rbp-1h]
  __int64 *v42; // [rsp+70h] [rbp+7h]
  __int128 v43; // [rsp+78h] [rbp+Fh] BYREF
  char v44; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v45; // [rsp+98h] [rbp+2Fh] BYREF

  v2 = *(_QWORD *)this;
  *(_QWORD *)&v36 = 0LL;
  v4 = *(struct _LIST_ENTRY **)(v2 + 328);
  lpMem = &v43;
  *((_QWORD *)&v36 + 1) = v4;
  v42 = &v45;
  v41 = &v44;
  v43 = v36;
  if ( !((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v4->Flink[11].Blink)(v4) )
  {
    TreeDataListHead = CVisual::GetTreeDataListHead(a2);
    if ( TreeDataListHead )
    {
      for ( i = TreeDataListHead->Flink; i != TreeDataListHead; i = i->Flink )
      {
        v6 = i - 22;
        if ( i[2].Flink == v4 )
          goto LABEL_3;
      }
    }
    goto LABEL_48;
  }
  v6 = (struct _LIST_ENTRY *)((char *)a2 + 328);
LABEL_3:
  if ( !v6 )
  {
LABEL_48:
    v13 = 0LL;
    goto LABEL_13;
  }
  Flink = v6[9].Flink;
  v8 = v41;
  v9 = (__int128 *)lpMem;
  while ( 1 )
  {
    if ( Flink == v6[9].Blink )
    {
      v13 = 0LL;
      goto LABEL_15;
    }
    i = Flink->Flink[130].Flink;
    Blink = Flink->Flink[129].Blink;
    if ( (char *)i - (char *)Blink == v41 - (_BYTE *)lpMem )
      break;
LABEL_58:
    Flink = (struct _LIST_ENTRY *)((char *)Flink + 8);
  }
  v11 = lpMem;
  v12 = (char *)Blink - (_BYTE *)lpMem;
  while ( (struct _LIST_ENTRY *)((char *)v11 + v12) != i )
  {
    if ( *(_QWORD *)((char *)v11 + v12) != *v11 || *(_QWORD *)((char *)v11 + v12 + 8) != v11[1] )
      goto LABEL_58;
    v11 += 2;
  }
  i = v6[15].Blink[1].Blink;
  Flink->Flink[139].Blink = i[55].Blink;
  v13 = Flink->Flink;
LABEL_13:
  v9 = (__int128 *)lpMem;
  v8 = v41;
LABEL_15:
  v14 = (v8 - (char *)v9) >> 4;
  if ( v14 )
    v41 = &v8[-16 * v14];
  lpMem = 0LL;
  if ( v9 != &v43 && v9 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v9);
  }
  if ( v13 && v13[8].Blink != v4[4].Blink )
    goto LABEL_38;
  while ( 1 )
  {
    v15 = v4[327].Flink;
    v16 = v4[326].Blink;
    v17 = ((char *)v15 - (char *)v16) >> 3;
    if ( ((char *)v4[327].Blink - (char *)v15) >> 3 )
      break;
    if ( v17 + 1 >= v17 )
    {
      v30 = detail::liberal_expansion_policy::expand(
              (detail::liberal_expansion_policy *)i,
              ((char *)v4[327].Blink - (char *)v16) >> 3,
              v17 + 1);
      v31 = (struct _LIST_ENTRY *)operator new[](saturated_mul(v30, 8uLL));
      v32 = v4[327].Flink;
      v33 = v4[326].Blink;
      *(_QWORD *)&v36 = v31;
      v34 = v31;
      *((_QWORD *)&v36 + 1) = v17;
      v37 = 0LL;
      v38 = v36;
      v39 = 0LL;
      ((void (__fastcall *)(__int128 *, struct _LIST_ENTRY *, struct _LIST_ENTRY *, __int128 *))std::uninitialized_move<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v36,
        v33,
        v32,
        &v38);
      v35 = v4[326].Blink;
      v4[326].Blink = v34;
      if ( v35 == &v4[328] )
        v35 = 0LL;
      operator delete(v35);
      v16 = v4[326].Blink;
      v15 = (struct _LIST_ENTRY *)((char *)v16 + 8 * v17);
      v4[327].Flink = v15;
      v4[327].Blink = (struct _LIST_ENTRY *)((char *)v16 + 8 * v30);
      break;
    }
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_38:
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v4->Flink[11].Blink)(v4) )
    {
      v23 = (struct _LIST_ENTRY *)((char *)a2 + 328);
LABEL_40:
      if ( v23 )
      {
        i = v23[9].Flink;
        v24 = ((char *)v23[9].Blink - (char *)i) >> 3;
        if ( v24 )
        {
          v25 = 8 * v24;
          std::_Destroy_range<std::allocator<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>>(
            i,
            (char *)i + v25);
          v23[9].Blink = (struct _LIST_ENTRY *)((char *)v23[9].Blink - v25);
        }
      }
    }
    else
    {
      v28 = CVisual::GetTreeDataListHead(a2);
      if ( v28 )
      {
        for ( i = v28->Flink; i != v28; i = i->Flink )
        {
          v23 = i - 22;
          if ( i[2].Flink == v4 )
            goto LABEL_40;
        }
      }
    }
  }
  v18 = ((char *)v15 - (char *)v16) >> 3;
  v19 = v18 - v17;
  v20 = &v16->Flink + v18;
  if ( !v20 )
    goto LABEL_30;
  v21 = (((char *)v15 - (char *)v16) >> 3) - v17;
  if ( v19 > 1 )
    v21 = 1LL;
  v22 = (struct _LIST_ENTRY *)((char *)v15 - 8 * v21);
  if ( v15 != v22 )
  {
    v29 = (struct _LIST_ENTRY *)((char *)v15 - 8);
    *v20 = v29->Flink;
    if ( v29 != v22 )
LABEL_30:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v19 > 1 )
  {
    if ( v18 && (!v16 || v18 < 0) )
      goto LABEL_30;
    if ( (__int64)(8 * v18 - 8 * v17 - 8) >> 3 <= 0 )
    {
      if ( (__int64)(8 * v18 - 8 * v17 - 8) >> 3 < 0 )
        goto LABEL_30;
    }
    else if ( v18 < (unsigned __int64)((__int64)(8 * v18 - 8 * v17 - 8) >> 3) )
    {
      goto LABEL_30;
    }
    memmove_0((char *)v16 + 8 * v18 - (8 * v18 - 8 * v17 - 8), (char *)v16 + 8 * v17, 8 * v18 - 8 * v17 - 8);
  }
  v4[327].Flink = (struct _LIST_ENTRY *)((char *)v4[327].Flink + 8);
  *((_QWORD *)&v16->Flink + v17) = a2;
}
