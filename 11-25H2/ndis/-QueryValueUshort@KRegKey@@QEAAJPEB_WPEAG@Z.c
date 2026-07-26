/*
 * XREFs of ?QueryValueUshort@KRegKey@@QEAAJPEB_WPEAG@Z @ 0x14014D31C
 * Callers:
 *     ?ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x140168320 (-ndisCheckNetworkInterfaceDataMismatch@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_MINIPORT_ADAPTER_.c)
 * Callees:
 *     RtlUnicodeStringInitWorker @ 0x1400A0BEC (RtlUnicodeStringInitWorker.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x14016CCE0 (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 */

NTSTATUS __fastcall KRegKey::QueryValueUshort(KRegKey *this, const wchar_t *a2, unsigned __int16 *a3, ULONG a4)
{
  NTSTATUS result; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  DestinationString = 0LL;
  result = RtlUnicodeStringInitWorker(&DestinationString, a2, (const size_t)a3, a4);
  if ( result >= 0 )
  {
    v8 = 0;
    result = KRegKey::QueryValueUlong(this, &DestinationString, &v8);
    if ( result >= 0 )
    {
      if ( v8 <= 0xFFFF )
      {
        *a3 = v8;
        return 0;
      }
      else
      {
        return -1073741675;
      }
    }
  }
  return result;
}
