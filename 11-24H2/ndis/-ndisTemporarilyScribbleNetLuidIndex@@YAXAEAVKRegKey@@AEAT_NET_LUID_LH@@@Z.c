/*
 * XREFs of ?ndisTemporarilyScribbleNetLuidIndex@@YAXAEAVKRegKey@@AEAT_NET_LUID_LH@@@Z @ 0x140160A20
 * Callers:
 *     ?ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z @ 0x14006E990 (-ndisPnPAddDevice@@YAJPEAU_DRIVER_OBJECT@@PEAU_DEVICE_OBJECT@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x140096778 (RtlUnicodeStringInitWorker.c)
 *     ?SetValueUlong@KRegKey@@QEAAJPEB_WK@Z @ 0x140135FF0 (-SetValueUlong@KRegKey@@QEAAJPEB_WK@Z.c)
 *     ?NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z @ 0x14013F42C (-NdisTraceLoggingTemporarilyScribbleNetLuidIndex@@YAXAEAT_NET_LUID_LH@@@Z.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x140160C40 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

void __fastcall ndisTemporarilyScribbleNetLuidIndex(KRegKey *this, union _NET_LUID_LH *a2, size_t a3, ULONG a4)
{
  ULONG v6; // r9d
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0;
  DestinationString = 0LL;
  if ( RtlUnicodeStringInitWorker(&DestinationString, L"NetLuidIndex", a3, a4) < 0
    || (int)KRegKey::QueryValueUlong(this, &DestinationString, &v8) < 0
    || v8 != ((a2->Value >> 24) & 0xFFFFFF) )
  {
    KRegKey::SetValueUlong(this, L"NetLuidIndex", (a2->Value >> 24) & 0xFFFFFF, v6);
    NdisTraceLoggingTemporarilyScribbleNetLuidIndex(a2);
  }
}
