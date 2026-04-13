/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___ @ 0x18008C44C
 * Callers:
 *     ?Execute@UnlockActionHelper@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18008D450 (-Execute@UnlockActionHelper@@UEAAJPEAPEAU-$IAsyncOperation@_N@Foundation@Windows@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800226E8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CBasicResult_unsigned_char_0___lambda_de7ca9b0ec13d6a85971aebf8330bbf3___(
        __int64 *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v4 = *a1;
  *a1 = 0LL;
  v3[1] = v4;
  v5 = a1[1];
  a1[1] = 0LL;
  v3[2] = v5;
  *v3 = off_1800C7820;
  *((_DWORD *)v3 + 6) = 0;
  `eh vector constructor iterator'(
    v3 + 4,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v3 + 6) = 0;
  return v3;
}
