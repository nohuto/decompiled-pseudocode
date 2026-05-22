/*
 * XREFs of ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18002DC64
 * Callers:
 *     ?DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z @ 0x18001F920 (-DeliverInput@ContextualProcessorBuffer@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UInputSample@ContextualProcessorBuffer@@U12@@?$_Default_allocator_traits@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@SAXAEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@1@QEAUInputSample@ContextualProcessorBuffer@@$$QEAU34@@Z @ 0x18002DDCC (--$construct@UInputSample@ContextualProcessorBuffer@@U12@@-$_Default_allocator_traits@V-$allocat.c)
 *     ??$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAPEAUInputSample@ContextualProcessorBuffer@@QEAU12@0PEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18009561C (--$_Uninitialized_move@PEAUInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Cont.c)
 *     ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180097B44 (-_Change_array@-$vector@UInputSample@ContextualProcessorBuffer@@V-$allocator@UInputSample@Contex.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009ADDC (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Emplace_reallocate<ContextualProcessorBuffer::InputSample>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  ContextualProcessorBuffer::InputSample *v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v17; // [rsp+20h] [rbp-48h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  ContextualProcessorBuffer::InputSample *v19; // [rsp+70h] [rbp+8h]
  __int64 v20; // [rsp+78h] [rbp+10h]

  v5 = (a2 - *a1) / 208;
  v6 = 0x4EC4EC4EC4EC4EC5LL * ((a1[1] - *a1) >> 4);
  if ( v6 == 0x13B13B13B13B13BLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = 0x4EC4EC4EC4EC4EC5LL * ((a1[2] - *a1) >> 4);
  v9 = v8 >> 1;
  if ( v8 <= 0x13B13B13B13B13BLL - (v8 >> 1) )
  {
    v10 = v6 + 1;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    v20 = v10;
    if ( v10 > 0x13B13B13B13B13BLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x13B13B13B13B13BLL;
    v20 = 0x13B13B13B13B13BLL;
  }
  v12 = (ContextualProcessorBuffer::InputSample *)std::_Allocate<16,std::_Default_allocate_traits,0>(208 * v10);
  v13 = (char *)v12 + 208 * v5;
  try
  {
    std::_Default_allocator_traits<std::allocator<ContextualProcessorBuffer::InputSample>>::construct<ContextualProcessorBuffer::InputSample,ContextualProcessorBuffer::InputSample>(
      v11,
      v13,
      a3);
    v19 = (ContextualProcessorBuffer::InputSample *)v13;
    v14 = a1[1];
    v15 = *a1;
    if ( a2 == v14 )
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v15, v14, v12, a1, v12);
    }
    else
    {
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(v15, a2, v12, a1, v12);
      v19 = v12;
      std::_Uninitialized_move<ContextualProcessorBuffer::InputSample *>(a2, a1[1], v13 + 208, a1, v18);
    }
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      v19,
      (ContextualProcessorBuffer::InputSample *)(v13 + 208));
    std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)(208 * v20));
    throw;
  }
  std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(a1, v12, v7, v10);
  return v13;
}
