/*
 * XREFs of BiCloseKey @ 0x14085CB80
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A7E48 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1404A7E94 (BiOpenStoreKeyFromObject.c)
 *     BcdEnumerateObjects @ 0x140811F1C (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408148AC (BiIsPortableWorkspaceBoot.c)
 *     BiGetObjectDescription @ 0x14085DA8C (BiGetObjectDescription.c)
 *     BiSetRegistryValue @ 0x14085DF2C (BiSetRegistryValue.c)
 *     BiCreateObject @ 0x14085E04C (BiCreateObject.c)
 *     BiAddStoreFromFile @ 0x14085E3B8 (BiAddStoreFromFile.c)
 *     BiUnloadHiveByHandle @ 0x14085EDB0 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiSetObjectDescription @ 0x14085F3C4 (BiSetObjectDescription.c)
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x1409BE80C (BcdGetElementDataWithFlags.c)
 *     BcdSetElementDataWithFlags @ 0x1409BEB2C (BcdSetElementDataWithFlags.c)
 *     BiBuildIdentifierList @ 0x1409BEF7C (BiBuildIdentifierList.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BiDeleteElement @ 0x1409BF8D0 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x1409BFC74 (BiDeleteKey.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C5C8E8 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     CmSiCloseSection @ 0x14049E2AC (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14049F890 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x14085C904 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
