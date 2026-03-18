/*
 * XREFs of std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273388
 * Callers:
 *     std::_Guess_median_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x1802730F0 (std--_Guess_median_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc5068012e.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Med3_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        __int64 **a1,
        __int64 **a2,
        __int64 **a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 *v10; // r8
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 result; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  unsigned int v16; // ebx
  __int64 *v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned int v22; // ebx
  __int64 *v23; // r8
  __int64 v24; // rdx

  v6 = (_QWORD *)**a1;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)**a2 + 280LL))(*(_QWORD *)**a2);
  if ( v7 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 280LL))(*v6);
    if ( !v8
      || (v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 224LL))(v8),
          (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7) < v9) )
    {
      v10 = *a1;
      v11 = **a2;
      **a2 = **a1;
      *v10 = v11;
    }
  }
  v12 = (_QWORD *)**a2;
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)**a3 + 280LL))(*(_QWORD *)**a3);
  v14 = result;
  if ( result )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 280LL))(*v12);
    if ( !v15
      || (v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 224LL))(v15),
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 224LL))(v14),
          (unsigned int)result < v16) )
    {
      v17 = *a2;
      v18 = **a3;
      **a3 = **a2;
      *v17 = v18;
      v19 = (_QWORD *)**a1;
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)**a2 + 280LL))(*(_QWORD *)**a2);
      v20 = result;
      if ( result )
      {
        v21 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 280LL))(*v19);
        if ( !v21
          || (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 224LL))(v21),
              result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 224LL))(v20),
              (unsigned int)result < v22) )
        {
          v23 = *a1;
          result = **a1;
          v24 = **a2;
          **a2 = result;
          *v23 = v24;
        }
      }
    }
  }
  return result;
}
