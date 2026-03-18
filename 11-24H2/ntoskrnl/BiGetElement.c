/*
 * XREFs of BiGetElement @ 0x1409BFBB8
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408149C4 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140814BFC (BiCreateBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408153F4 (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x1409C14D0 (BiUpdateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140AB305C (BiExportEfiBootManager.c)
 * Callees:
 *     BcdGetElementData @ 0x1409BF8B0 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, unsigned int a2, _QWORD *a3, _DWORD *a4)
{
  int ElementData; // ebx
  __int64 Pool2; // rax
  void *v10; // rdi
  int v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v12 = 0;
  ElementData = BcdGetElementData(a1, a2, 0LL, &v12);
  if ( ElementData == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x102uLL);
    v10 = (void *)Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(a1, a2, Pool2, &v12);
      if ( ElementData >= 0 )
      {
        *a4 = v12;
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
