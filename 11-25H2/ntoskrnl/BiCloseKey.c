/*
 * XREFs of BiCloseKey @ 0x140966980
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1404A74B8 (BiSetFirmwareModifiedFromObject.c)
 *     BiOpenStoreKeyFromObject @ 0x1404A7504 (BiOpenStoreKeyFromObject.c)
 *     BcdEnumerateObjects @ 0x1408023A4 (BcdEnumerateObjects.c)
 *     BiIsPortableWorkspaceBoot @ 0x140804D34 (BiIsPortableWorkspaceBoot.c)
 *     BcdOpenObject @ 0x1409666B4 (BcdOpenObject.c)
 *     BiGetObjectDescription @ 0x14096A86C (BiGetObjectDescription.c)
 *     BcdSetElementDataWithFlags @ 0x14096B5A4 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14096B820 (BcdGetElementDataWithFlags.c)
 *     BiUnloadHiveByHandle @ 0x140A24908 (BiUnloadHiveByHandle.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140A25948 (BiAddStoreFromFile.c)
 *     BiSetRegistryValue @ 0x140A25BA8 (BiSetRegistryValue.c)
 *     BiCreateObject @ 0x140A262E4 (BiCreateObject.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 *     BiDeleteElement @ 0x140A26F84 (BiDeleteElement.c)
 *     BiDeleteKey @ 0x140A27140 (BiDeleteKey.c)
 *     BiBuildIdentifierList @ 0x140A27590 (BiBuildIdentifierList.c)
 *     BcdCloseObject @ 0x140A27BE8 (BcdCloseObject.c)
 *     BiSetObjectDescription @ 0x140A64424 (BiSetObjectDescription.c)
 *     BcdSetBootBcdAsSystemStore @ 0x140C4B568 (BcdSetBootBcdAsSystemStore.c)
 * Callees:
 *     CmSiCloseSection @ 0x14049F444 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x1404A0958 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1409680C8 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
