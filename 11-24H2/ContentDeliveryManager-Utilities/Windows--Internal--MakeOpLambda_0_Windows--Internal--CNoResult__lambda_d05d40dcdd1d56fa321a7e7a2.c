/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___ @ 0x18006BA00
 * Callers:
 *     ?RevertAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18006EC70 (-RevertAsync@TargetedContentActionInternalImpl@Internal@TargetedContent@Services@Windows@@UEAAJP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800224A0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800226F8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_d05d40dcdd1d56fa321a7e7a2b4d6dca___(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v2[1] = *a1;
  *v2 = off_1800C70E8;
  *((_DWORD *)v2 + 4) = 0;
  `eh vector constructor iterator'(
    v2 + 3,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v3 + 4) = 0;
  return v3;
}
