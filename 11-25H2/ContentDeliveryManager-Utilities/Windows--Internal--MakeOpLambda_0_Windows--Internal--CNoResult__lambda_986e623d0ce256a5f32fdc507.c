/*
 * XREFs of Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___ @ 0x180047858
 * Callers:
 *     ?ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x1800569F0 (-ResolveLayoutBindingsAsync@ContentManagementService@ContentManagement@@UEAAJPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800226E8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::MakeOpLambda_0_Windows::Internal::CNoResult__lambda_986e623d0ce256a5f32fdc507965e6c2___(
        _QWORD *a1)
{
  _QWORD *v2; // rbx

  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v2[1] = 0LL;
  if ( v2 + 1 != a1 )
  {
    v2[1] = *a1;
    *a1 = 0LL;
  }
  v2[2] = a1[1];
  a1[1] = 0LL;
  *((_BYTE *)v2 + 24) = 0;
  *((_BYTE *)a1 + 16) = 1;
  *v2 = off_1800C3F98;
  *((_DWORD *)v2 + 8) = 0;
  `eh vector constructor iterator'(
    v2 + 5,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    (void (*)(void *))Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v2 + 8) = 0;
  return v2;
}
