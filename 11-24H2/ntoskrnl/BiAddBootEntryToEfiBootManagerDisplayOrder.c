/*
 * XREFs of BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x140815104
 * Callers:
 *     BiExportBcdObjects @ 0x14081595C (BiExportBcdObjects.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BcdOpenObject @ 0x1409A4724 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x1409A517C (BcdSetElementDataWithFlags.c)
 *     BcdCloseObject @ 0x1409A5C2C (BcdCloseObject.c)
 *     BiGetElement @ 0x1409A6208 (BiGetElement.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiAddBootEntryToEfiBootManagerDisplayOrder(void *a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  int Element; // eax
  _OWORD *Pool2; // rax
  void *v6; // rbp
  BCD_FLAGS v7; // r8d
  HANDLE BcdObjectHandle; // [rsp+30h] [rbp-28h] BYREF

  BcdObjectHandle = 0LL;
  v3 = BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR, &BcdObjectHandle);
  if ( v3 >= 0 )
  {
    Element = BiGetElement(BcdObjectHandle, 0x24000001u);
    v3 = Element;
    if ( Element == -1073741275 || Element >= 0 )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL, 0x10uLL, 0x4B444342u);
      v6 = Pool2;
      if ( Pool2 )
      {
        *Pool2 = *(_OWORD *)(a2 + 16);
        memmove(Pool2 + 1, 0LL, 0LL);
        v3 = BcdSetElementDataWithFlags(BcdObjectHandle, 0x24000001u, v7, v6, 0x10u);
        ExFreePoolWithTag(v6, 0x4B444342u);
      }
      else
      {
        v3 = -1073741801;
      }
    }
  }
  if ( BcdObjectHandle )
    BcdCloseObject(BcdObjectHandle);
  return (unsigned int)v3;
}
