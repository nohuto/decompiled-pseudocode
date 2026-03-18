/*
 * XREFs of std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273200
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273C54 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac1.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        _QWORD *a1,
        _QWORD ***a2,
        _QWORD *a3)
{
  _QWORD **v3; // rbx
  _QWORD **v5; // rax
  _QWORD *v6; // r12
  _QWORD *v8; // r15
  _QWORD *v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned int v12; // edi
  _QWORD **v13; // r8
  _QWORD *v14; // rdx
  _QWORD **v15; // rcx
  _QWORD **v16; // rax
  _QWORD **v17; // rdi
  _QWORD *i; // rsi
  _QWORD *v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rax
  unsigned int v22; // ebp

  v3 = *a2;
  v5 = (_QWORD **)*a3;
  v6 = a1;
  if ( *a2 != (_QWORD **)*a3 )
  {
    while ( 1 )
    {
      v5 = (_QWORD **)*a3;
      if ( ++v3 == (_QWORD **)*a3 )
        break;
      v8 = *v3;
      v9 = **a2;
      v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)**v3 + 280LL))(**v3);
      if ( !v10
        || (v11 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 280LL))(*v9)) != 0
        && (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11),
            (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 224LL))(v10) >= v12) )
      {
        v17 = v3;
        for ( i = v3; ; i = v17 )
        {
          v19 = *--v17;
          v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 280LL))(*v8);
          if ( !v20 )
            break;
          v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 280LL))(*v19);
          if ( v21 )
          {
            v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 224LL))(v21);
            if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v20 + 224LL))(v20) >= v22 )
              break;
          }
          *i = *v17;
        }
        *i = v8;
      }
      else
      {
        v13 = *a2;
        v14 = v3 + 1;
        v15 = v3;
        v16 = v3;
        while ( v13 != v15 )
        {
          v15 = v16 - 1;
          *--v14 = *--v16;
        }
        **a2 = v8;
      }
    }
    v6 = a1;
  }
  *v6 = v5;
  return v6;
}
