/*
 * XREFs of ?_Change_array@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAXQEAUInputSample@ContextualProcessorBuffer@@_K1@Z @ 0x180097B44
 * Callers:
 *     ??$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@?$vector@UInputSample@ContextualProcessorBuffer@@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@AEAAPEAUInputSample@ContextualProcessorBuffer@@QEAU23@$$QEAU23@@Z @ 0x18002DC64 (--$_Emplace_reallocate@UInputSample@ContextualProcessorBuffer@@@-$vector@UInputSample@Contextual.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputSample@ContextualProcessorBuffer@@QEAU12@AEAV?$allocator@UInputSample@ContextualProcessorBuffer@@@0@@Z @ 0x18002D55C (--$_Destroy_range@V-$allocator@UInputSample@ContextualProcessorBuffer@@@std@@@std@@YAXPEAUInputS.c)
 */

__int64 __fastcall std::vector<ContextualProcessorBuffer::InputSample>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v6; // rcx
  __int64 result; // rax

  v6 = *(char **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<ContextualProcessorBuffer::InputSample>>(
      (ContextualProcessorBuffer::InputSample *)v6,
      *(ContextualProcessorBuffer::InputSample **)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)(16 * ((__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4)));
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 208 * a3;
  result = a2 + 208 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
