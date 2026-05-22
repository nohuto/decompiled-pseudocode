/*
 * XREFs of ??$_Destroy_range@V?$allocator@UInputProvider@@@std@@@std@@YAXPEAUInputProvider@@QEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800A2FC4
 * Callers:
 *     ??1InputProviderManager@@QEAA@XZ @ 0x180098A6C (--1InputProviderManager@@QEAA@XZ.c)
 *     ??_GInputProviderManager@@QEAAPEAXI@Z @ 0x1800A3200 (--_GInputProviderManager@@QEAAPEAXI@Z.c)
 *     ??1DeviceInputHost@@UEAA@XZ @ 0x1800A374C (--1DeviceInputHost@@UEAA@XZ.c)
 *     ??$_Emplace_reallocate@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@AEAAPEAUInputProvider@@QEAU2@$$QEAU2@@Z @ 0x1800CE8D0 (--$_Emplace_reallocate@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@s.c)
 *     ??$_Uninitialized_move@PEAUInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@YAPEAUInputProvider@@QEAU1@0PEAU1@AEAV?$allocator@UInputProvider@@@0@@Z @ 0x1800CEA5C (--$_Uninitialized_move@PEAUInputProvider@@V-$allocator@UInputProvider@@@std@@@std@@YAPEAUInputPr.c)
 *     _std::vector_InputProvider_std::allocator_InputProvider___::_Emplace_reallocate_InputProvider__::_1_::catch$0 @ 0x1801D536D (_std--vector_InputProvider_std--allocator_InputProvider___--_Emplace_reallocate_InputProvider__-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<InputProvider>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(v3 + 16));
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
