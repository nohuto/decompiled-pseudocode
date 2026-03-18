/*
 * XREFs of BiOpenKey @ 0x140969FF4
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1404A7504 (BiOpenStoreKeyFromObject.c)
 *     BcdEnumerateObjects @ 0x1408023A4 (BcdEnumerateObjects.c)
 *     BiDeleteRegistryValue @ 0x140804BEC (BiDeleteRegistryValue.c)
 *     BiIsPortableWorkspaceBoot @ 0x140804D34 (BiIsPortableWorkspaceBoot.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C4B568 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x14049F444 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x1404A0958 (BiZwSetSecurityObject.c)
 *     BiZwOpenKey @ 0x1404A4F5C (BiZwOpenKey.c)
 *     BiSanitizeHandle @ 0x1404A6620 (BiSanitizeHandle.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409680C8 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
