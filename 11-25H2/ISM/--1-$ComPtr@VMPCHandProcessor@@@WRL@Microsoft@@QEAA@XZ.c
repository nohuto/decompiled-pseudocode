/*
 * XREFs of ??1?$ComPtr@VMPCHandProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x180192A38
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCClickerProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801D1354 (_Microsoft--WRL--Details--MakeAndInitialize_MPCClickerProcessor_IInputProcessor_Inp_ea_1801D1354.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreateParams___&__::_1_::dtor$1 @ 0x1801D1366 (_Microsoft--WRL--Details--MakeAndInitialize_MPCHeadProcessor_IInputProcessor_InputProcessorCreat.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProviderBase@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180051A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VMPCInputProvider.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<MPCHandProcessor>::~ComPtr<MPCHandProcessor>(__int64 *a1, volatile int *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,MPCInputProviderBase>::Release(
             result,
             a2);
  }
  return result;
}
