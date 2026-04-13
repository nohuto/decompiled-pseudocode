/*
 * XREFs of ??$MakeOpLambda@$0A@VCNoResult@Internal@Windows@@V_lambda_c9532b930f253e78667049fecbd894a6_@@$$V@Internal@Windows@@YAPEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@$$QEAV_lambda_c9532b930f253e78667049fecbd894a6_@@@Z @ 0x180026E54
 * Callers:
 *     ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002D6B0 (-AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180022490 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800226E8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::MakeOpLambda<0,Windows::Internal::CNoResult,_lambda_c9532b930f253e78667049fecbd894a6_,>(
        __int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx

  v2 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *v2 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>>>::`vftable';
  v2[1] = *(_QWORD *)a1;
  *(_QWORD *)a1 = 0LL;
  *((_BYTE *)v2 + 16) = 0;
  *(_BYTE *)(a1 + 8) = 1;
  *((_DWORD *)v2 + 6) = *(_DWORD *)(a1 + 16);
  *v2 = &Windows::Internal::COperationLambdaVar<0,_lambda_c9532b930f253e78667049fecbd894a6_,Windows::Internal::CNoResult,>::`vftable';
  *((_DWORD *)v2 + 8) = 0;
  `eh vector constructor iterator'(
    v2 + 5,
    8uLL,
    1,
    (void (*)(void *))Microsoft::WRL::AgileRef::AgileRef,
    Microsoft::WRL::ComPtr<Windows::System::ILauncherOptions2>::~ComPtr<Windows::System::ILauncherOptions2>);
  *((_DWORD *)v3 + 8) = 0;
  return v3;
}
