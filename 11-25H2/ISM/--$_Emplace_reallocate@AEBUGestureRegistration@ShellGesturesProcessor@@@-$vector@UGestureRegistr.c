/*
 * XREFs of ??$_Emplace_reallocate@AEBUGestureRegistration@ShellGesturesProcessor@@@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU23@AEBU23@@Z @ 0x1800285B4
 * Callers:
 *     ?RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI@Windows@@W4InputType@3456@PEAVDragManagerClientProxy@@@Z @ 0x180027DEC (-RegisterGestureSource@ShellGesturesProcessor@@QEAAX_KW4InputGestureSourceType@Input@Internal@UI.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z @ 0x180028484 (--0GestureRegistration@ShellGesturesProcessor@@QEAA@AEBU01@@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800284F0 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@UGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@AEAAXQEAUGestureRegistration@ShellGesturesProcessor@@_K1@Z @ 0x180028860 (-_Change_array@-$vector@UGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegist.c)
 *     ??$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V?$allocator@UGestureRegistration@ShellGesturesProcessor@@@std@@@std@@YAPEAUGestureRegistration@ShellGesturesProcessor@@QEAU12@0PEAU12@AEAV?$allocator@UGestureRegistration@ShellGesturesProcessor@@@0@@Z @ 0x180028960 (--$_Uninitialized_move@PEAUGestureRegistration@ShellGesturesProcessor@@V-$allocator@UGestureRegi.c)
 */

__int64 *__fastcall std::vector<ShellGesturesProcessor::GestureRegistration>::_Emplace_reallocate<ShellGesturesProcessor::GestureRegistration const &>(
        __int64 *a1,
        __int64 a2,
        const struct ShellGesturesProcessor::GestureRegistration *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  char *v19; // [rsp+20h] [rbp-48h]
  char *v20; // [rsp+20h] [rbp-48h]
  __int64 *v21; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 5;
  v7 = 0x7FFFFFFFFFFFFFFLL;
  if ( v6 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<32>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = (char *)v12;
  v14 = (__int64 *)((char *)v12 + (v5 & 0xFFFFFFFFFFFFFFE0uLL));
  try
  {
    ShellGesturesProcessor::GestureRegistration::GestureRegistration(
      (ShellGesturesProcessor::GestureRegistration *)v14,
      a3);
    v21 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(v17, a2, v13);
      v21 = v13;
      v16 = v14 + 4;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<ShellGesturesProcessor::GestureRegistration *>(v17, v15, v16);
    std::vector<ShellGesturesProcessor::GestureRegistration>::_Change_array(a1, v13, v8, v7, v19);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ShellGesturesProcessor::GestureRegistration>>(v21, v14 + 4);
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(32 * v7));
    throw;
  }
  return result;
}
