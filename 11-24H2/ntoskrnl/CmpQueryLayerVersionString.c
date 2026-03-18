/*
 * XREFs of CmpQueryLayerVersionString @ 0x1407D74F0
 * Callers:
 *     CmpLoadLayerVersion @ 0x1407D6B20 (CmpLoadLayerVersion.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

NTSTATUS __fastcall CmpQueryLayerVersionString(
        PUNICODE_STRING DestinationString,
        char *SourceString,
        unsigned __int16 a3,
        const WCHAR *a4,
        HANDLE KeyHandle)
{
  unsigned __int64 v6; // r14
  NTSTATUS result; // eax
  __int64 v10; // rbx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationStringa; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+54h] [rbp-ACh]
  int v15; // [rsp+58h] [rbp-A8h]
  size_t Size; // [rsp+5Ch] [rbp-A4h]

  v6 = a3;
  DestinationStringa = 0LL;
  memset_0(KeyValueInformation, 0, 0x100uLL);
  *DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationStringa, a4);
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationStringa,
             KeyValueFullInformation,
             KeyValueInformation,
             0x100u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v14 == 1 )
    {
      if ( (_DWORD)Size + v15 == ResultLength )
      {
        if ( (Size & 1) != 0 )
        {
          return -1073741306;
        }
        else
        {
          v10 = (unsigned int)Size;
          if ( (unsigned __int64)(unsigned int)Size + 2 <= v6 )
          {
            memmove(SourceString, &KeyValueInformation[v15], (unsigned int)Size);
            *(_WORD *)&SourceString[v10] = 0;
            RtlInitUnicodeString(DestinationString, (PCWSTR)SourceString);
            result = 0;
            DestinationString->MaximumLength = v6;
          }
          else
          {
            return -1073741789;
          }
        }
      }
      else
      {
        return -1073741764;
      }
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
