/*
 * XREFs of BiCloseKey @ 0x1408588F0
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A2898 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1404A28E4 (BiOpenStoreKeyFromObject.c)
 *     BcdEnumerateObjects @ 0x14081265C (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x140814FEC (BiIsPortableWorkspaceBoot.c)
 *     BiGetObjectDescription @ 0x1408597FC (BiGetObjectDescription.c)
 *     BiSetRegistryValue @ 0x140859C9C (BiSetRegistryValue.c)
 *     BiCreateObject @ 0x140859DBC (BiCreateObject.c)
 *     BiAddStoreFromFile @ 0x14085A128 (BiAddStoreFromFile.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409A4E5C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409A5F20 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409A62C4 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 *     BiUnloadHiveByHandle @ 0x140A81B58 (BiUnloadHiveByHandle.c)
 *     BiSetObjectDescription @ 0x140AAAEDC (BiSetObjectDescription.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C5EA78 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     CmSiCloseSection @ 0x1404990AC (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14049A718 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140858674 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  ACL *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  ACL *v4; // rbx

  KeySecurityDescriptor = BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
