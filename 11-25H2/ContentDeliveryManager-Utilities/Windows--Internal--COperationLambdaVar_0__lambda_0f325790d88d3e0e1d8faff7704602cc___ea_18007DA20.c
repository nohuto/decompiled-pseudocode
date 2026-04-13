/*
 * XREFs of Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::Run @ 0x18007DA20
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007AFB0 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 */

__int64 __fastcall Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::Run(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4)
{
  if ( a3 >= 0 )
    a3 = *(_DWORD *)(a1 + 400);
  if ( a2 == 1 && a3 >= 0 )
    return (unsigned int)lambda_0f325790d88d3e0e1d8faff7704602cc_::operator()((HSTRING *)(a1 + 8), a4);
  return (unsigned int)a3;
}
