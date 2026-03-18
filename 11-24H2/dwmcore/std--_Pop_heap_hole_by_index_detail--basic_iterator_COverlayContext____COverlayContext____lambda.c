/*
 * XREFs of std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267D88
 * Callers:
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267FA4 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_ff854f2e2b01ae0e4f4a0015b.c)
 * Callees:
 *     std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___ @ 0x180267EB8 (std--_Push_heap_by_index_detail--basic_iterator_COverlayContext____COverlayContext____lambda_ff8.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rsi
  bool v8; // zf
  __int64 v9; // r12
  _QWORD *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // ebx
  __int64 v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  va_list va1; // [rsp+90h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v18 = va_arg(va1, _QWORD);
  v17 = a2;
  v4 = a2;
  v6 = a2;
  v7 = (a3 - 1) >> 1;
  v8 = a2 == v7;
  if ( a2 < v7 )
  {
    do
    {
      v9 = 2 * a2;
      v10 = *(_QWORD **)(*a1 + 16 * a2 + 8);
      v11 = **(_QWORD **)(*a1 + 16 * a2 + 16);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v11 + 280LL))(v11, a2, v6);
      if ( v12 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 280LL))(*v10);
        if ( v14 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 224LL))(v14);
          v13 = 2LL - ((*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v12 + 224LL))(v12) < v15);
        }
        else
        {
          v13 = 1LL;
        }
      }
      else
      {
        v13 = 2LL;
      }
      a2 = v9 + v13;
      *(_QWORD *)(*a1 + 8 * v4) = *(_QWORD *)(*a1 + 8 * (v9 + v13));
      v4 = v9 + v13;
      v8 = v9 + v13 == v7;
    }
    while ( v9 + v13 < v7 );
    v6 = v17;
  }
  if ( v8 && (a3 & 1) == 0 )
  {
    *(_QWORD *)(*a1 + 8 * v4) = *(_QWORD *)(*a1 + 8 * a3 - 8);
    v4 = a3 - 1;
  }
  v18 = *a1;
  return std::_Push_heap_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_ff854f2e2b01ae0e4f4a0015b2a120f7___(
           (__int64 *)va,
           v4,
           v6);
}
