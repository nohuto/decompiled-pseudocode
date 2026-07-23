/*
 * XREFs of RtlIpv4AddressToStringExW @ 0x1800B18F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv4AddressToStringW @ 0x1800B1B70 (RtlIpv4AddressToStringW.c)
 *     swprintf_s @ 0x18012C000 (swprintf_s.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 */

LONG __stdcall RtlIpv4AddressToStringExW(
        const struct in_addr *Address,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  wchar_t *v7; // rax
  wchar_t *v8; // rbx
  ULONG v9; // ebx
  LONG result; // eax
  WCHAR S[22]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v12[4]; // [rsp+4Ch] [rbp-3Ch] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v7 = RtlIpv4AddressToStringW(Address, S);
  v8 = v7;
  if ( Port )
    v8 = &v7[swprintf_s(v7, (v12 - (_BYTE *)v7) >> 1, L":%u", (unsigned __int16)__ROR2__(Port, 8))];
  v9 = v8 - S + 1;
  if ( *AddressStringLength < v9 )
  {
    *AddressStringLength = v9;
    return -1073741811;
  }
  else
  {
    memmove(AddressString, S, 2LL * v9);
    result = 0;
    *AddressStringLength = v9;
  }
  return result;
}
