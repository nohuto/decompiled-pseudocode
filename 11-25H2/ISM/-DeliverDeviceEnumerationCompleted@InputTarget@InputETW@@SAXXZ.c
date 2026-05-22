/*
 * XREFs of ?DeliverDeviceEnumerationCompleted@InputTarget@InputETW@@SAXXZ @ 0x180031240
 * Callers:
 *     ?DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ @ 0x1800313C0 (-DeliverDeviceEnumerationCompleted@DWMInputTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ @ 0x180017070 (-Provider@InputETW@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?IsVerboseEnabled@InputETW@@SA_N_K@Z @ 0x180031118 (-IsVerboseEnabled@InputETW@@SA_N_K@Z.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void InputETW::InputTarget::DeliverDeviceEnumerationCompleted(void)
{
  const struct _tlgProvider_t *v0; // rcx
  __int64 v1; // r8
  __int64 v2; // rcx

  if ( InputETW::IsVerboseEnabled(1LL) )
  {
    v0 = InputETW::Provider();
    if ( *(_DWORD *)v0 > 5u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v0, 1LL, v1) )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          v2,
          &unk_18020AFD6,
          0LL,
          0LL);
    }
  }
}
