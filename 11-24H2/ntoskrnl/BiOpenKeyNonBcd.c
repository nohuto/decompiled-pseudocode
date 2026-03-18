/*
 * XREFs of BiOpenKeyNonBcd @ 0x1409C12C4
 * Callers:
 *     BiDoesHiveKeyExist @ 0x140814800 (BiDoesHiveKeyExist.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     BiLoadHive @ 0x1409C2190 (BiLoadHive.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C5C8E8 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 */

__int64 __fastcall BiOpenKeyNonBcd(void *a1, const WCHAR *a2, ACCESS_MASK a3, HANDLE *a4)
{
  unsigned int i; // edi
  NTSTATUS v9; // ebx
  HANDLE KeyHandle; // [rsp+28h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-68h] BYREF

  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenKey(&KeyHandle, a3, &ObjectAttributes);
    if ( v9 < 0 )
    {
      if ( KeyHandle )
        ZwClose(KeyHandle);
    }
    else
    {
      *a4 = KeyHandle;
    }
    if ( v9 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v9;
}
