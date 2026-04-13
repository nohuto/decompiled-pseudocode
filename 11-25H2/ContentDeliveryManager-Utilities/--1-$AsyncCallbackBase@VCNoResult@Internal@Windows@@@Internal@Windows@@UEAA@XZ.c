/*
 * XREFs of ??1?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@Internal@Windows@@UEAA@XZ @ 0x180029B5C
 * Callers:
 *     _Windows::Internal::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_______::COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVectorView_Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal_________lambda_0f325790d88d3e0e1d8faff7704602cc____::_1_::dtor$0 @ 0x1800B7616 (_Windows--Internal--COperationLambdaVar_0__lambda_0f325790d88d3e0e1d8faff7704602cc__Windows--Int.c)
 *     _Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3____::_1_::dtor$1 @ 0x1800B76ED (_Windows--Internal--MakeOpLambda_0_Windows--Internal--CBasicResult_unsigned_char_0__ea_1800B76ED.c)
 * Callees:
 *     <none>
 */

void **__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::~AsyncCallbackBase<Windows::Internal::CNoResult>(
        _QWORD *a1)
{
  void **result; // rax

  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
