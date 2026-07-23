/*
 * XREFs of HalpMapNvsArea @ 0x140B6EF40
 * Callers:
 *     HalpPowerStateCallback @ 0x1404A8B80 (HalpPowerStateCallback.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     HalpMmAllocCtxAlloc @ 0x14027C378 (HalpMmAllocCtxAlloc.c)
 *     MmMapIoSpaceEx @ 0x14034B090 (MmMapIoSpaceEx.c)
 *     HalpFreeNvsBuffers @ 0x140B6DCA4 (HalpFreeNvsBuffers.c)
 */

void __fastcall HalpMapNvsArea(__int64 a1)
{
  __int64 i; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx

  if ( HalpNvsPreservedDataSize )
  {
    HalpDisableNvsSaveRestore = 0;
    HalpNvsPreservedData = HalpMmAllocCtxAlloc(a1, (unsigned int)HalpNvsPreservedDataSize);
    if ( HalpNvsPreservedData )
    {
      for ( i = 0LL; (unsigned int)i < HalpNvsRegionCount; i = (unsigned int)(i + 1) )
      {
        v2 = MmMapIoSpaceEx(
               *(_QWORD *)(HalpNvsRegionData + 24 * i),
               *(unsigned int *)(HalpNvsRegionData + 24 * i + 8),
               516LL);
        *(_QWORD *)(HalpNvsRegionData + 24 * i + 16) = v2;
        if ( !v2 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      DbgPrint("HALACPI:  The BIOS's non-volatile data will not be preserved\n");
      HalpDisableNvsSaveRestore = 1;
      HalpFreeNvsBuffers(v3);
    }
  }
  else
  {
    HalpDisableNvsSaveRestore = 1;
  }
}
