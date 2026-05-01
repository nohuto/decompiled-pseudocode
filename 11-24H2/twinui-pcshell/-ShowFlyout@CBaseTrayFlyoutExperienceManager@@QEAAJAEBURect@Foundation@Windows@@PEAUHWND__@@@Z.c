/*
 * XREFs of ?ShowFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJAEBURect@Foundation@Windows@@PEAUHWND__@@@Z @ 0x1803CC0BC
 * Callers:
 *     ?ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z @ 0x1803C4EF0 (-ShowFlyout@CNetworkExperienceManager@@UEAAJURect@Foundation@Windows@@_K@Z.c)
 * Callees:
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180025298 (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1800AF724 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z @ 0x1803CBEE8 (-SetTrayItemRect@CBaseTrayFlyoutExperienceManager@@IEAAJAEBURect@Foundation@Windows@@@Z.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::ShowFlyout(
        CBaseTrayFlyoutExperienceManager *this,
        const struct Windows::Foundation::Rect *a2,
        HWND a3)
{
  const struct _tlgProvider_t *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v6 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v6,
      byte_1807F3E48,
      0LL);
  if ( GetTickCount64() - *((_QWORD *)this + 56) > 0x64 )
  {
    *((_QWORD *)this + 59) = a3;
    v7 = CBaseTrayFlyoutExperienceManager::SetTrayItemRect(this, a2);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25B,
        (int)"desktop\\internal\\shell\\inc\\private\\BaseTrayFlyoutExperience.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    CSingleViewShellExperience::Show(
      (__int64)this + 72,
      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)4);
  }
  return 0LL;
}
