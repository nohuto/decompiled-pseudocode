/*
 * XREFs of KsepCacheDeviceHash @ 0x140985E30
 * Callers:
 *     <none>
 * Callees:
 *     RtlHashUnicodeString @ 0x1409862A0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall KsepCacheDeviceHash(__int64 a1)
{
  ULONG HashValue; // [rsp+30h] [rbp+8h] BYREF

  HashValue = 0;
  RtlHashUnicodeString((PCUNICODE_STRING)(a1 + 40), 1u, 0, &HashValue);
  return HashValue;
}
