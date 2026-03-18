/*
 * XREFs of std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267EB8
 * Callers:
 *     std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267D88 (std--_Pop_heap_hole_by_index_detail--basic_iterator_COverlayContext____COverlayContext____lambda.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD **a4)
{
  __int64 v6; // rdi
  _QWORD *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // ebx
  _QWORD *result; // rax

  v6 = a2;
  if ( a3 < a2 )
  {
    do
    {
      v8 = *a4;
      v9 = (v6 - 1) >> 1;
      v10 = **(_QWORD **)(*a1 + 8 * v9);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 280LL))(v10);
      if ( !v11 )
        break;
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 280LL))(*v8);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 224LL))(v11) >= v13 )
          break;
      }
      *(_QWORD *)(*a1 + 8 * v6) = *(_QWORD *)(*a1 + 8 * v9);
      v6 = (v6 - 1) >> 1;
    }
    while ( a3 < v9 );
  }
  result = *a4;
  *(_QWORD *)(*a1 + 8 * v6) = *a4;
  return result;
}
