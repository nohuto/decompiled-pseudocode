/*
 * XREFs of BiGetElement @ 0x1409A6208
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140815104 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x14081533C (BiCreateBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140815B34 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1409A7B20 (BiUpdateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140AADFCC (BiExportEfiBootManager.c)
 * Callees:
 *     BcdGetElementData @ 0x1409A5F00 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(HANDLE BcdObjectHandle, ULONG BcdElement, _QWORD *a3, ULONG *a4)
{
  NTSTATUS ElementData; // ebx
  void *Pool2; // rax
  void *v10; // rdi
  ULONG BufferSize; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  BufferSize = 0;
  ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, 0LL, &BufferSize);
  if ( ElementData == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x102uLL, BufferSize, 0x4B444342u);
    v10 = Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(BcdObjectHandle, BcdElement, Pool2, &BufferSize);
      if ( ElementData >= 0 )
      {
        *a4 = BufferSize;
        *a3 = v10;
      }
      else
      {
        ExFreePoolWithTag(v10, 0x4B444342u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)ElementData;
}
