/*
 * XREFs of BiLoadHive @ 0x1409C2190
 * Callers:
 *     BiAddStoreFromFile @ 0x14085E3B8 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x1406A8610 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x1406A8630 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x1406A9F50 (ZwUnloadKey.c)
 *     BiLogMessage @ 0x1409BE7F8 (BiLogMessage.c)
 *     BiReleasePrivilege @ 0x1409C0C38 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1409C0C90 (BiAcquirePrivilege.c)
 *     BiOpenKeyNonBcd @ 0x1409C12C4 (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x1409C2478 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int Key2; // ebx
  __int64 v8; // rdx
  __int64 v10; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE v11; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v13; // [rsp+70h] [rbp-88h] BYREF
  __int128 v14; // [rsp+80h] [rbp-78h]
  __int128 v15; // [rsp+90h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v17; // [rsp+B0h] [rbp-48h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  *(_QWORD *)&v15 = 0LL;
  DWORD2(v15) = 0;
  memset(&ObjectAttributes, 0, 44);
  v10 = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    v11 = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      Key2 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &v11);
      if ( Key2 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.Length = 48;
        v6 = v11;
        ObjectAttributes.RootDirectory = v11;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v17, (PCWSTR)(a2 + 12));
        LODWORD(v13) = 48;
        *((_QWORD *)&v13 + 1) = 0LL;
        DWORD2(v14) = 576;
        *(_QWORD *)&v14 = &v17;
        v15 = 0LL;
        Key2 = BiAcquirePrivilege(0x12u, (__int64)&v10);
        if ( Key2 < 0 )
          goto LABEL_7;
        Key2 = ZwLoadKey2((__int64)&ObjectAttributes, (__int64)&v13);
        if ( Key2 < 0 )
          Key2 = ZwLoadKey2((__int64)&ObjectAttributes, (__int64)&v13);
        if ( Key2 < 0 )
          Key2 = ZwLoadKey((__int64)&ObjectAttributes, (__int64)&v13);
        BiReleasePrivilege((unsigned int *)&v10);
        if ( Key2 < 0 )
        {
LABEL_7:
          BiLogMessage();
        }
        else
        {
          Key2 = ZwOpenKey(a3, 0x20019u, &ObjectAttributes);
          if ( Key2 < 0 )
          {
            BiAcquirePrivilege(0x11u, (__int64)&v10);
            ZwUnloadKey((__int64)&ObjectAttributes, v8);
            BiReleasePrivilege((unsigned int *)&v10);
            BiLogMessage();
          }
        }
      }
      else
      {
        BiLogMessage();
        v6 = v11;
      }
    }
    else
    {
      Key2 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( Key2 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)Key2;
}
