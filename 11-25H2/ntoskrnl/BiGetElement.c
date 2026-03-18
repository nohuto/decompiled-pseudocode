/*
 * XREFs of BiGetElement @ 0x140A256B8
 * Callers:
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140804E4C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiCreateBootEntry @ 0x140805084 (BiCreateBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x14080587C (BiHandleFirmwareDefaultEntry.c)
 *     BiUpdateEfiEntry @ 0x140A25220 (BiUpdateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140AADFBC (BiExportEfiBootManager.c)
 * Callees:
 *     BcdGetElementData @ 0x140A25774 (BcdGetElementData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetElement(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v6; // ebp
  int ElementData; // ebx
  __int64 Pool2; // rax
  void *v10; // rdi
  int v12; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v12 = 0;
  v6 = a2;
  ElementData = BcdGetElementData(a1, a2, 0LL, &v12);
  if ( ElementData == -1073741789 )
  {
    Pool2 = ExAllocatePool2(0x102uLL);
    v10 = (void *)Pool2;
    if ( Pool2 )
    {
      ElementData = BcdGetElementData(a1, v6, Pool2, &v12);
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
