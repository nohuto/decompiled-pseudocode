/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x140AB8160
 * Callers:
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGUIDFromString @ 0x140959130 (RtlGUIDFromString.c)
 *     BiGetKeyName @ 0x14096BB40 (BiGetKeyName.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(__int64 a1, GUID *a2)
{
  unsigned int Data1; // eax
  int KeyName; // ebx
  GUID v5; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  HANDLE BcdObjectHandle; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v9[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  SourceString = 0LL;
  BcdObjectHandle = 0LL;
  Data1 = a2[3].Data1;
  Guid = 0LL;
  DestinationString = 0LL;
  if ( (Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v9[1] = 270532607;
    v9[0] = 1;
    KeyName = BiCreateObject(a1, 0LL, v9, 1LL, &BcdObjectHandle);
    if ( KeyName >= 0 )
    {
      KeyName = BiGetKeyName(BcdObjectHandle, &SourceString);
      if ( KeyName >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyName = RtlGUIDFromString(&DestinationString, &Guid);
        if ( KeyName >= 0 )
        {
          v5 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v5;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( BcdObjectHandle )
      BcdCloseObject(BcdObjectHandle);
  }
  return (unsigned int)KeyName;
}
