/*
 * XREFs of ??$com_query_to_nothrow@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@AEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@wil@@YAJAEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@PEAPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1803C7614
 * Callers:
 *     ?OnViewCreated@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CA670 (-OnViewCreated@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewDestroyed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CA8F0 (-OnViewDestroyed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_query_to_nothrow<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState,Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> &>(
        _QWORD *a1,
        __int64 a2)
{
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a1)(*a1, &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e, a2);
}
