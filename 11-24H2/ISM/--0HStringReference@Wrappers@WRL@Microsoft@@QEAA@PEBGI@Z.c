/*
 * XREFs of ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEBGI@Z @ 0x18003406C
 * Callers:
 *     ?OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1800880D0 (-OnDeviceNotification@Details@PnpApiWrapper@@YAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@.c)
 * Callees:
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800343EC (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800C1B68 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        unsigned int a3)
{
  UINT32 v4; // edi
  unsigned int v6; // eax
  HRESULT StringReference; // eax
  int v8; // edx
  unsigned int v9; // r8d

  hstringHeader[1].Reserved.Reserved1 = 0LL;
  v4 = a3;
  v6 = Microsoft::WRL::Wrappers::HStringReference::AddOne(a3);
  if ( v4 >= v6 )
    v4 = v6 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference, v8, v9);
    JUMPOUT(0x1800340DBLL);
  }
  return hstringHeader;
}
