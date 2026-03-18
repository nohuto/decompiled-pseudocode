/*
 * XREFs of std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267898
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267FA4 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b.c)
 * Callees:
 *     std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267440 (std--_Guess_median_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v3; // r10
  __int64 v5; // rax
  _QWORD **v6; // rbx
  __int64 v7; // rdx
  _QWORD **v8; // rdi
  _QWORD **v9; // rsi
  _QWORD *v10; // r15
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // ebp
  _QWORD *v14; // r15
  __int64 v15; // r14
  __int64 v16; // rax
  unsigned int v17; // ebp
  _QWORD *v18; // r13
  _QWORD *v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r14
  unsigned int v22; // esi
  _QWORD *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned int v26; // esi
  _QWORD **v27; // rsi
  _QWORD *v28; // r14
  _QWORD *v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // ebp
  _QWORD *v33; // rbp
  __int64 v34; // r15
  __int64 v35; // rax
  unsigned int v36; // ebp
  _QWORD *v37; // rcx
  _QWORD **v38; // r15
  _QWORD *v39; // rbp
  __int64 v40; // r12
  __int64 v41; // rax
  unsigned int v42; // ebp
  _QWORD *v43; // r12
  __int64 v44; // rbp
  __int64 v45; // r12
  unsigned int v46; // ebp
  _QWORD *v47; // rcx
  _QWORD *v48; // rcx
  _QWORD *v49; // rcx
  _QWORD *v50; // rcx
  _QWORD *v51; // rcx
  __int64 v52; // rcx
  _QWORD *result; // rax
  __int64 v54; // [rsp+20h] [rbp-58h] BYREF
  _QWORD **v55; // [rsp+28h] [rbp-50h] BYREF
  __int64 v56[9]; // [rsp+30h] [rbp-48h] BYREF

  v3 = *a3;
  v5 = *a3;
  v56[0] = *a2;
  v6 = (_QWORD **)(v56[0] + 8 * ((v5 - v56[0]) >> 4));
  v55 = v6;
  v54 = v3 - 8;
  std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
    v56,
    (__int64 *)&v55,
    &v54);
  v8 = v6 + 1;
  v9 = v6;
  while ( *a2 < (unsigned __int64)v9 )
  {
    v10 = *v6;
    v9 = v6 - 1;
    v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**(v6 - 1) + 280LL))(**(v6 - 1));
    if ( v11 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 280LL))(*v10);
      v7 = v12;
      if ( !v12 )
        break;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11) < v13 )
        break;
    }
    v14 = *v9;
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v6 + 280LL))(**v6);
    if ( v15 )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 280LL))(*v14);
      v7 = v16;
      if ( !v16 )
        break;
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 224LL))(v16);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v15 + 224LL))(v15) < v17 )
        break;
    }
    --v6;
  }
  v18 = a3;
  while ( (unsigned __int64)v8 < *a3 )
  {
    v19 = *v6;
    v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)**v8 + 280LL))(**v8, v7);
    if ( v20 )
    {
      v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 280LL))(*v19);
      if ( !v21 )
        break;
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 224LL))(v20);
      if ( v22 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v21 + 224LL))(v21) )
        break;
    }
    v23 = *v8;
    v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v6 + 280LL))(**v6);
    if ( v24 )
    {
      v25 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v23 + 280LL))(*v23);
      v7 = v25;
      if ( !v25 )
        break;
      v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 224LL))(v25);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v24 + 224LL))(v24) < v26 )
        break;
    }
    ++v8;
  }
  v27 = v8;
  v28 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int64)v27 < *v18 )
      {
        v29 = *v27;
        v30 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)**v6 + 280LL))(**v6, v7);
        if ( v30 )
        {
          v31 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 280LL))(*v29);
          v7 = v31;
          if ( !v31 )
            goto LABEL_51;
          v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 224LL))(v31);
          if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 224LL))(v30) < v32 )
            goto LABEL_51;
        }
        v33 = *v6;
        v34 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v27 + 280LL))(**v27);
        if ( !v34
          || (v35 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v33 + 280LL))(*v33), (v7 = v35) != 0)
          && (v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 224LL))(v35),
              (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v34 + 224LL))(v34) >= v36) )
        {
          if ( v8 != v27 )
          {
            v37 = *v8;
            *v8 = *v27;
            *v27 = v37;
          }
          ++v8;
          goto LABEL_51;
        }
      }
      v38 = (_QWORD **)(v28 - 1);
      while ( *a2 < (unsigned __int64)v28 )
      {
        v39 = *v6;
        v40 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)**v38 + 280LL))(**v38, v7);
        if ( !v40
          || (v41 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v39 + 280LL))(*v39), (v7 = v41) != 0)
          && (v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 224LL))(v41),
              (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v40 + 224LL))(v40) >= v42) )
        {
          v43 = *v38;
          v44 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v6 + 280LL))(**v6);
          if ( v44 )
          {
            v45 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v43 + 280LL))(*v43);
            if ( !v45 )
              break;
            v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 224LL))(v44);
            if ( v46 < (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v45 + 224LL))(v45) )
              break;
          }
          if ( --v6 != v38 )
          {
            v47 = *v6;
            *v6 = *v38;
            *v38 = v47;
          }
        }
        --v28;
        --v38;
      }
      v18 = a3;
      if ( v28 == (_QWORD *)*a2 )
        break;
      --v28;
      if ( v27 != (_QWORD **)*a3 )
      {
        v52 = (__int64)*v27;
        *v27 = (_QWORD *)*v28;
        *v28 = v52;
        goto LABEL_51;
      }
      if ( v28 != --v6 )
      {
        v50 = (_QWORD *)*v28;
        *v28 = *v6;
        *v6 = v50;
      }
      v51 = *v6;
      *v6 = *--v8;
      *v8 = v51;
    }
    if ( v27 == (_QWORD **)*a3 )
      break;
    if ( v8 != v27 )
    {
      v48 = *v6;
      *v6 = *v8;
      *v8 = v48;
    }
    v49 = *v6;
    ++v8;
    *v6++ = *v27;
    *v27 = v49;
LABEL_51:
    ++v27;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v8;
  return result;
}
