/*
 * XREFs of ??$query_to@UIMeetAndChatManager@Shell@Internal@Windows@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIMeetAndChatManager@Shell@Internal@Windows@@@Z @ 0x1803C7634
 * Callers:
 *     ?OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CAAE0 (-OnViewHidden@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803CAD60 (-OnViewShown@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::query_to<Windows::Internal::Shell::IMeetAndChatManager>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, GUID *, _QWORD *))(*(_QWORD *)*a1 + 24LL))(
             *a1,
             &GUID_eb298b37_68c2_5e60_86bf_72f8d0e513ff,
             a2);
  if ( (int)result >= 0 && !*a2 )
    return 2147943568LL;
  return result;
}
