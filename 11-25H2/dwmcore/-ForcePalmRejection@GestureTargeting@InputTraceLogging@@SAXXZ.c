/*
 * XREFs of ?ForcePalmRejection@GestureTargeting@InputTraceLogging@@SAXXZ @ 0x180229978
 * Callers:
 *     ?PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B42D0 (-PostSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180137874 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void InputTraceLogging::GestureTargeting::ForcePalmRejection(void)
{
  const struct _tlgProvider_t *v0; // rax

  v0 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v0 > 4u
    && (*((_DWORD *)v0 + 4) & 0x800LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x800LL) == *((_QWORD *)v0 + 3) )
  {
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v0,
      &unk_1803D756D);
  }
}
