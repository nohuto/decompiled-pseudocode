/*
 * XREFs of BiLoadHive @ 0x140A28550
 * Callers:
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x14069D340 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x14069D360 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x14069EC80 (ZwUnloadKey.c)
 *     BiReleasePrivilege @ 0x140A26700 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140A26758 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140A26990 (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x140A26DFC (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x140A28838 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int v7; // ebx
  __int64 v9; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE v10; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES TargetKey; // [rsp+40h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES SourceFile; // [rsp+70h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v14; // [rsp+B0h] [rbp-48h] BYREF

  memset(&SourceFile, 0, 44);
  memset(&TargetKey, 0, 44);
  v9 = 0LL;
  v14 = 0LL;
  DestinationString = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    v10 = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &v10);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        TargetKey.Length = 48;
        v6 = v10;
        TargetKey.RootDirectory = v10;
        TargetKey.Attributes = 576;
        TargetKey.ObjectName = &DestinationString;
        *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v14, (PCWSTR)(a2 + 12));
        SourceFile.Length = 48;
        SourceFile.RootDirectory = 0LL;
        SourceFile.Attributes = 576;
        SourceFile.ObjectName = &v14;
        *(_OWORD *)&SourceFile.SecurityDescriptor = 0LL;
        v7 = BiAcquirePrivilege(0x12u, (__int64)&v9);
        if ( v7 < 0 )
          goto LABEL_7;
        v7 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1780u);
        if ( v7 < 0 )
          v7 = ZwLoadKey2(&TargetKey, &SourceFile, 0x1380u);
        if ( v7 < 0 )
          v7 = ZwLoadKey(&TargetKey, &SourceFile);
        BiReleasePrivilege((unsigned int *)&v9);
        if ( v7 < 0 )
        {
LABEL_7:
          BiLogMessage();
        }
        else
        {
          v7 = ZwOpenKey(a3, 0x20019u, &TargetKey);
          if ( v7 < 0 )
          {
            BiAcquirePrivilege(0x11u, (__int64)&v9);
            ZwUnloadKey(&TargetKey);
            BiReleasePrivilege((unsigned int *)&v9);
            BiLogMessage();
          }
        }
      }
      else
      {
        BiLogMessage();
        v6 = v10;
      }
    }
    else
    {
      v7 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( v7 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v7;
}
