/*
 * XREFs of ??1?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAA@XZ @ 0x180029EC4
 * Callers:
 *     ??_E?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAPEAXI@Z @ 0x18002CCD0 (--_E-$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Wi.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800224B8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002AA00 (--1String@Internal@Windows@@QEAA@XZ.c)
 */

void **__fastcall Windows::Internal::COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>::~COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>(
        _QWORD *a1)
{
  void **result; // rax

  `eh vector destructor iterator'(
    a1 + 5,
    8uLL,
    1,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  Windows::Internal::String::~String((Windows::Internal::String *)(a1 + 1));
  result = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  return result;
}
