/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180045FA0
 * Callers:
 *     ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x180045E78 (-reserve_region@-$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V-$buffer_impl@UConstant.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

int __fastcall detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        __int64 a1,
        unsigned __int64 a2)
{
  void *v2; // r14
  void *v3; // r15
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  signed __int64 v11; // r8
  void *v12; // rbp
  bool v13; // zf
  __int64 v14; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (v5 - v6) >> 4;
  if ( v7 < a2 )
  {
    v8 = (v6 - *(_QWORD *)a1) >> 4;
    v9 = (v5 - *(_QWORD *)a1) >> 4;
    v10 = v8 + a2;
    if ( v8 + a2 >= v8 )
    {
      v16 = v9 >> 1;
      if ( v9 <= ~(v9 >> 1) && v16 + v9 >= v10 )
        v10 = v16 + v9;
      v2 = operator new[](saturated_mul(v10, 0x10uLL));
      v11 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      v3 = 0LL;
      v17 = v11 >> 4;
      if ( v11 >> 4 < 0 || v17 > 0 && v8 < v17 )
        _invalid_parameter_noinfo_noreturn();
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    memmove_0(v2, *(const void **)a1, v11);
    v12 = *(void **)a1;
    LODWORD(v7) = a1 + 24;
    v13 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v2;
    if ( v13 )
      v12 = v3;
    if ( v12 )
    {
      ProcessHeap = GetProcessHeap();
      LODWORD(v7) = HeapFree(ProcessHeap, 0, v12);
    }
    v14 = *(_QWORD *)a1 + 16 * v8;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v10;
    *(_QWORD *)(a1 + 8) = v14;
  }
  return v7;
}
