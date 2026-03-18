/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075F274
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405DAE54 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdOpenObject @ 0x1409BE0D4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409BF5DC (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(__int64 a1, GUID *a2)
{
  GUID *v3; // rdi
  int ElementData; // ebx
  __int64 Pool2; // rax
  GUID v6; // xmm0
  int v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v9 = -1LL;
  v3 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &v9);
  if ( ElementData >= 0 )
  {
    v8 = 0;
    ElementData = BcdGetElementData(v9, 603979778LL, 0LL, &v8);
    if ( ElementData == -1073741789 )
    {
      Pool2 = ExAllocatePool2(0x100uLL);
      v3 = (GUID *)Pool2;
      if ( !Pool2 )
      {
        ElementData = -1073741670;
        goto LABEL_12;
      }
      ElementData = BcdGetElementData(v9, 603979778LL, Pool2, &v8);
    }
    if ( ElementData == -1073741275 )
      goto LABEL_10;
    if ( ElementData < 0 )
      goto LABEL_12;
    if ( !v8 )
LABEL_10:
      v6 = GUID_DEFAULT_BOOT_ENTRY;
    else
      v6 = *v3;
    *a2 = v6;
    ElementData = 0;
  }
LABEL_12:
  if ( v9 != -1 )
    BcdCloseObject(v9);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67696450u);
  return (unsigned int)ElementData;
}
