/*
 * XREFs of IopTranslateBusAddress @ 0x140723CC8
 * Callers:
 *     IopGenericTranslateOrdering @ 0x140723530 (IopGenericTranslateOrdering.c)
 * Callees:
 *     HalTranslateBusAddress @ 0x14044E090 (HalTranslateBusAddress.c)
 */

__int64 __fastcall IopTranslateBusAddress(
        PHYSICAL_ADDRESS BusAddress,
        char a2,
        LARGE_INTEGER *TranslatedAddress,
        _BYTE *a4)
{
  ULONG v6; // edi
  ULONG AddressSpace; // [rsp+48h] [rbp+10h] BYREF

  if ( ((a2 - 3) & 0xFB) != 0 )
  {
    if ( a2 != 1 )
      return 3221225485LL;
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  AddressSpace = v6;
  if ( !HalTranslateBusAddress(Isa, 0, BusAddress, &AddressSpace, TranslatedAddress) )
    return 3221225473LL;
  if ( (AddressSpace & 0xFFFFFFF9) != 0 )
  {
    if ( ((AddressSpace - 1) & 0xFFFFFFFD) != 0 )
      return 3221225485LL;
    *a4 = 1;
  }
  else if ( v6 || a2 != 7 )
  {
    *a4 = 3;
  }
  else
  {
    *a4 = 7;
  }
  return 0LL;
}
