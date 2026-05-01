/*
 * XREFs of ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668
 * Callers:
 *     ?OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180178E30 (-OnApplicationViewChanged@ScreenManager@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@P.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreationThreadDispatcher@@@Z @ 0x180217FEC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCreation.c)
 *     ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VScreenManager@@@WRL@Microsoft@@@012@@Z @ 0x1802A89A4 (--$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@VSc.c)
 *     wistd::__invoke_void_return_wrapper_void_::__call__lambda_cfd27ea05118e91876b01966f7f941a5__&_enum_Windows::Internal::Shell::Holographic::ShellState_const_&_ @ 0x1802BC7DC (wistd--__invoke_void_return_wrapper_void_--__call__lambda_cfd27ea05118e91876b01966f7f941a5__-_en.c)
 *     CreationThreadDispatcher::RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___ @ 0x1802CA138 (CreationThreadDispatcher--RunAsync__lambda_0cedd56e0c33e1c71352c370e3ecb162___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_19713afaab0e793c65926cb0aea68e27___ @ 0x1802CDBF4 (CreationThreadDispatcher--RunAsync__lambda_19713afaab0e793c65926cb0aea68e27___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___ @ 0x180342C8C (CreationThreadDispatcher--RunAsync__lambda_e4eb6362e1cdc9e778b44101f989de9d___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_b0e52db6d999d0fb757f5dae78832a75___ @ 0x1803A1648 (CreationThreadDispatcher--RunAsync__lambda_b0e52db6d999d0fb757f5dae78832a75___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___ @ 0x1803A8450 (CreationThreadDispatcher--RunAsync__lambda_1a4d461b071b17a49d9b71157d22f5c1___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___ @ 0x1803A8510 (CreationThreadDispatcher--RunAsync__lambda_39011a0525b85c0c4a9a6636d6d62842___.c)
 *     ??$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@K@Z @ 0x1803ECCE0 (--$RunAsync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJV_lambda.c)
 *     CreationThreadDispatcher::RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___ @ 0x18048D52C (CreationThreadDispatcher--RunAsync__lambda_c3975a5b4ee2ba5280707fbe38be1371___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_fa553258777e9fe890f937adf5270d38___ @ 0x18048D5F0 (CreationThreadDispatcher--RunAsync__lambda_fa553258777e9fe890f937adf5270d38___.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&___lambda_33b4202f4967ef1cd2a31cded00016d1__&_ @ 0x1804ACDAC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--CTask.c)
 *     _lambda_de87d9780560173c9d125f808a86f278_::operator() @ 0x1804EC130 (_lambda_de87d9780560173c9d125f808a86f278_--operator().c)
 *     CreationThreadDispatcher::RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___ @ 0x1804F71AC (CreationThreadDispatcher--RunAsync__lambda_2461923bd7d30a187d21cb937ed01b39___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_5997640efe376a9387473cba5853814f___ @ 0x1804F7234 (CreationThreadDispatcher--RunAsync__lambda_5997640efe376a9387473cba5853814f___.c)
 *     _lambda_2ab4781663b1c98e73026fa5a544de84_::operator() @ 0x1804F97F4 (_lambda_2ab4781663b1c98e73026fa5a544de84_--operator().c)
 *     _lambda_5e0c83d06204f2c38ba237214f8d2681_::operator() @ 0x1804F9CF4 (_lambda_5e0c83d06204f2c38ba237214f8d2681_--operator().c)
 *     CreationThreadDispatcher::RunAsync__lambda_5fb34dca825284ea67ff945056291927___ @ 0x180511244 (CreationThreadDispatcher--RunAsync__lambda_5fb34dca825284ea67ff945056291927___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___ @ 0x1805B59A4 (CreationThreadDispatcher--RunAsync__lambda_6016a4952a1cba8173ba454c267c23ee___.c)
 *     CreationThreadDispatcher::RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___ @ 0x1806BC2F4 (CreationThreadDispatcher--RunAsync__lambda_6bd17a0f38fc15379b652e4a7dca1691___.c)
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef(__int64 *a1, volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v2 + 44), a2);
  return result;
}
