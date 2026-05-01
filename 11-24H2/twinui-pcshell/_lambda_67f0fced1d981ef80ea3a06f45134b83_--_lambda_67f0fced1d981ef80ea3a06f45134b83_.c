/*
 * XREFs of _lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18066C750
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_ResumeCoro$1 @ 0x18066CF00 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseClou_ea_18066CF00.c)
 * Callees:
 *     ??0hstring@winrt@@QEAA@AEBU01@@Z @ 0x1800549EC (--0hstring@winrt@@QEAA@AEBU01@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x1802CA838 (-InternalAddRef@-$ComPtr@UITaskDataArbiter@DataEngine@TaskFlow@Shell@Internal@Windows@@@WRL@Micr.c)
 *     ??0?$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z @ 0x1804A5014 (--0-$weak_ptr@VCAppThumbnailWindow@@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_67f0fced1d981ef80ea3a06f45134b83_::_lambda_67f0fced1d981ef80ea3a06f45134b83_(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        struct winrt::hstring *a5,
        struct winrt::hstring *a6,
        _DWORD *a7,
        _BYTE *a8)
{
  __int64 *v10; // rcx
  __int64 *v11; // r8

  std::weak_ptr<CAppThumbnailWindow>::weak_ptr<CAppThumbnailWindow>((_QWORD *)a1, a2);
  v10 += 2;
  *v10 = *v11;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef(v10);
  *(_QWORD *)(a1 + 24) = *a4;
  Microsoft::WRL::ComPtr<Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter>::InternalAddRef((__int64 *)(a1 + 24));
  winrt::hstring::hstring((winrt::hstring *)(a1 + 32), a5);
  winrt::hstring::hstring((winrt::hstring *)(a1 + 40), a6);
  *(_DWORD *)(a1 + 48) = *a7;
  *(_BYTE *)(a1 + 52) = *a8;
  return a1;
}
