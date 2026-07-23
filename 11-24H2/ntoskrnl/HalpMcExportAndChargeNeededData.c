/*
 * XREFs of HalpMcExportAndChargeNeededData @ 0x1406FF9E4
 * Callers:
 *     HalpMcUpdateInitializeBSP @ 0x1405577DC (HalpMcUpdateInitializeBSP.c)
 *     HalpLoadMicrocode @ 0x1406FF6C0 (HalpLoadMicrocode.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407EDCD0 (MmObtainChargesToLockPagedPool.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpMcExportAndChargeNeededData(void *Src, size_t Size)
{
  size_t v2; // r14
  unsigned int v5; // edi
  void *Pool2; // rax
  void *v7; // rbx

  v2 = (unsigned int)Size;
  if ( !Src )
  {
    McMicrocodePatchRecord = 0LL;
    LODWORD(McMicrocodePatchRecordSize) = 0;
    return 0LL;
  }
  v5 = (Size + 4095) & 0xFFFFF000;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v5, 0x636C6148u);
  v7 = Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, v5);
    if ( (unsigned int)MmObtainChargesToLockPagedPool(v7, v5) )
    {
      McMicrocodePatchRecordCharged = 1;
LABEL_8:
      memmove(v7, Src, v2);
      if ( McMicrocodePatchRecord )
        ExFreePoolWithTag(McMicrocodePatchRecord, 0x636C6148u);
      McMicrocodePatchRecord = v7;
      LODWORD(McMicrocodePatchRecordSize) = v5;
      return 0LL;
    }
    ExFreePoolWithTag(v7, 0x636C6148u);
    v7 = (void *)ExAllocatePool2(0x40uLL, ((_DWORD)v2 + 4095) & 0xFFFFF000, 0x636C6148u);
    if ( v7 )
      goto LABEL_8;
  }
  return 3221225495LL;
}
