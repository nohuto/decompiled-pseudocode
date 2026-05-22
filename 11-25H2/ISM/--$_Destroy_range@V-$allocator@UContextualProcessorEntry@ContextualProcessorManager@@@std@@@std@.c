/*
 * XREFs of ??$_Destroy_range@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAXPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x1800599B8
 * Callers:
 *     ?_Change_array@?$vector@UContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@AEAAXQEAUContextualProcessorEntry@ContextualProcessorManager@@_K1@Z @ 0x1800598D4 (-_Change_array@-$vector@UContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCont.c)
 *     ??$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@std@@@std@@YAPEAUContextualProcessorEntry@ContextualProcessorManager@@QEAU12@0PEAU12@AEAV?$allocator@UContextualProcessorEntry@ContextualProcessorManager@@@0@@Z @ 0x180059950 (--$_Uninitialized_move@PEAUContextualProcessorEntry@ContextualProcessorManager@@V-$allocator@UCo.c)
 *     ??1ContextualProcessorManager@@MEAA@XZ @ 0x18019B2EC (--1ContextualProcessorManager@@MEAA@XZ.c)
 *     _std::vector_ContextualProcessorManager::ContextualProcessorEntry_std::allocator_ContextualProcessorManager::ContextualProcessorEntry___::_Emplace_reallocate_ContextualProcessorManager::ContextualProcessorEntry__::_1_::catch$1 @ 0x1801CB718 (_std--vector_ContextualProcessorManager--ContextualProcessorEntry_std--allocator_ContextualProce.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ContextualProcessorManager::ContextualProcessorEntry>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v3);
      v3 += 2;
    }
    while ( v3 != a2 );
  }
  return result;
}
