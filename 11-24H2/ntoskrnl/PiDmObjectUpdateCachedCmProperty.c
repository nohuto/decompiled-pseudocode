/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x1409C3E70
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C4E80 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1408B8C6C (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlGUIDFromString @ 0x1408C7C70 (RtlGUIDFromString.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1409C4C50 (_CmMapCmObjectTypeToPnpObjectType.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        const WCHAR *SourceString,
        unsigned int a7)
{
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // ecx
  __int64 v11; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  GUID Guid; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 == 1 )
  {
    Guid = 0LL;
    DestinationString = 0LL;
    if ( a4 == 9 )
    {
      if ( a7 )
      {
        if ( a5 == 1 && a7 >= 2 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
            PiDmObjectUpdateCachedObjectProperty(
              v10,
              a2,
              v11,
              0LL,
              (__int64)&DEVPKEY_Device_ClassGuid,
              0xDu,
              &Guid,
              0x10u);
          }
        }
      }
      else
      {
        v8 = CmMapCmObjectTypeToPnpObjectType(1LL);
        PiDmObjectUpdateCachedObjectProperty(v8, a2, v9, 0LL, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, 0);
      }
    }
  }
}
