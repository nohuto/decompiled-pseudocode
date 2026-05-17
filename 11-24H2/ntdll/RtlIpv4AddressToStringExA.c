/*
 * XREFs of RtlIpv4AddressToStringExA @ 0x1800F4740
 * Callers:
 *     <none>
 * Callees:
 *     sprintf_s @ 0x18012D860 (sprintf_s.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

LONG __stdcall RtlIpv4AddressToStringExA(
        const struct in_addr *Address,
        USHORT Port,
        PSTR AddressString,
        PULONG AddressStringLength)
{
  int v7; // eax
  char *v8; // rbx
  ULONG v9; // ebx
  LONG result; // eax
  char Buffer[22]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v12[2]; // [rsp+56h] [rbp-32h] BYREF

  if ( Address && AddressStringLength && (AddressString || !*AddressStringLength) )
  {
    v7 = sprintf_s(
           Buffer,
           0x10uLL,
           "%u.%u.%u.%u",
           Address->S_un.S_un_b.s_b1,
           Address->S_un.S_un_b.s_b2,
           Address->S_un.S_un_b.s_b3,
           Address->S_un.S_un_b.s_b4);
    v8 = &Buffer[v7];
    if ( Port )
      LODWORD(v8) = sprintf_s(&Buffer[v7], v12 - v8, ":%u", (unsigned __int16)__ROR2__(Port, 8)) + (_DWORD)v8;
    v9 = (_DWORD)v8 - (unsigned int)Buffer + 1;
    if ( *AddressStringLength >= v9 )
    {
      memmove(AddressString, Buffer, v9);
      result = 0;
      *AddressStringLength = v9;
      return result;
    }
    *AddressStringLength = v9;
  }
  return -1073741811;
}
