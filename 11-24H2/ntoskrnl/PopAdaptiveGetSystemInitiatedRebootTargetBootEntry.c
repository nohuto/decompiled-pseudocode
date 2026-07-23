/*
 * XREFs of PopAdaptiveGetSystemInitiatedRebootTargetBootEntry @ 0x14075E214
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 * Callees:
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopAdaptiveGetSystemInitiatedRebootTargetBootEntry(void *a1, GUID *a2)
{
  GUID *v3; // rdi
  NTSTATUS ElementData; // ebx
  GUID *Pool2; // rax
  GUID v6; // xmm0
  ULONG BufferSize; // [rsp+40h] [rbp+18h] BYREF
  HANDLE BcdObjectHandle; // [rsp+48h] [rbp+20h] BYREF

  BcdObjectHandle = (HANDLE)-1LL;
  v3 = 0LL;
  ElementData = BcdOpenObject(a1, &GUID_WINDOWS_BOOTMGR, &BcdObjectHandle);
  if ( ElementData >= 0 )
  {
    BufferSize = 0;
    ElementData = BcdGetElementData(BcdObjectHandle, 0x24000002u, 0LL, &BufferSize);
    if ( ElementData == -1073741789 )
    {
      Pool2 = (GUID *)ExAllocatePool2(0x100uLL, BufferSize, 0x67696450u);
      v3 = Pool2;
      if ( !Pool2 )
      {
        ElementData = -1073741670;
        goto LABEL_12;
      }
      ElementData = BcdGetElementData(BcdObjectHandle, 0x24000002u, Pool2, &BufferSize);
    }
    if ( ElementData == -1073741275 )
      goto LABEL_10;
    if ( ElementData < 0 )
      goto LABEL_12;
    if ( !BufferSize )
LABEL_10:
      v6 = GUID_DEFAULT_BOOT_ENTRY;
    else
      v6 = *v3;
    *a2 = v6;
    ElementData = 0;
  }
LABEL_12:
  if ( BcdObjectHandle != (HANDLE)-1LL )
    BcdCloseObject(BcdObjectHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x67696450u);
  return (unsigned int)ElementData;
}
