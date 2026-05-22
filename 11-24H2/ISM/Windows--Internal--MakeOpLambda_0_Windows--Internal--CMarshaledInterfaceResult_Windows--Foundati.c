/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_b07e28b8d9a43b43078b009fd4c08247___ @ 0x18016A0D0
 * Callers:
 *     ?GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Foundation@6@@Z @ 0x18016F120 (-GetConstantsForInputTypeAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Inter.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E884 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=2
char *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CMarshaledInterfaceResult_Windows::Foundation::Collections::IVector_HSTRING_________lambda_b07e28b8d9a43b43078b009fd4c08247___(
        _OWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx

  v2 = (char *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_QWORD *)v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CNoResult>::`vftable';
  *(_OWORD *)(v2 + 8) = *a1;
  *(_QWORD *)v2 = &off_1801EDDF0;
  *((_DWORD *)v2 + 6) = 0;
  `eh vector constructor iterator'(
    v2 + 32,
    8LL,
    1LL,
    (void (__fastcall *)(char *))std::unique_ptr<CSharedCircularQueueProducer>::unique_ptr<CSharedCircularQueueProducer>);
  *((_DWORD *)v3 + 6) = 0;
  return v3;
}
