/*
 * XREFs of ?NavigationDisabled@ControllerNavigationManager@InputETW@@SAXXZ @ 0x1800362B8
 * Callers:
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x180036254 (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 * Callees:
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017640 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x1800365C0 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 */

void __fastcall InputETW::ControllerNavigationManager::NavigationDisabled(unsigned __int8 a1, unsigned __int64 a2)
{
  const struct _tlgProvider_t *v2; // rax

  if ( InputETW::IsEnabled(a1, a2) )
  {
    v2 = InputETW::Provider();
    if ( *(_DWORD *)v2 > 5u && (*((_BYTE *)v2 + 16) & 1) != 0 && (*((_QWORD *)v2 + 3) & 1LL) == *((_QWORD *)v2 + 3) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v2,
        &unk_1802233C2,
        0LL,
        0LL);
  }
}
