/*
 * XREFs of BiOpenKey @ 0x14085D808
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1404A7E94 (BiOpenStoreKeyFromObject.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BiDeleteRegistryValue @ 0x140814764 (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408148AC (BiIsPortableWorkspaceBoot.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiGetObjectDescription @ 0x14085DA8C (BiGetObjectDescription.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 *     BiAddStoreFromFile @ 0x14085E3B8 (BiAddStoreFromFile.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C5C8E8 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x14049E2AC (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14049F890 (BiZwSetSecurityObject.c)
 *     BiZwOpenKey @ 0x1404A54C8 (BiZwOpenKey.c)
 *     BiSanitizeHandle @ 0x1404A6FD0 (BiSanitizeHandle.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // esi
  ACL *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  __int64 v12; // rdx
  HANDLE v14; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v15; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17[2]; // [rsp+48h] [rbp-70h] BYREF
  void *v18; // [rsp+C0h] [rbp+8h]

  v15 = 0LL;
  DestinationString = 0LL;
  memset(v17, 0, 44);
  for ( i = 0; ; ++i )
  {
    v14 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v17[0].Length = 48;
    v17[0].RootDirectory = v18;
    v17[0].Attributes = 576;
    v17[0].ObjectName = &DestinationString;
    *(_OWORD *)&v17[0].SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = BiZwOpenKey(&v14, v10, v17);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_9;
      KeySecurityDescriptor = BiCreateKeySecurityDescriptor(983103);
      v11 = BiZwSetSecurityObject(v14, v12, KeySecurityDescriptor);
      if ( v11 >= 0 )
      {
        v11 = BiZwOpenKey(&v15, a3, v17);
        if ( v11 >= 0 )
        {
          CmSiCloseSection(v14);
          v14 = v15;
LABEL_9:
          *a4 = v14;
        }
      }
    }
    if ( v11 < 0 && v14 )
      CmSiCloseSection(v14);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      a1 = (__int64)v18;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
