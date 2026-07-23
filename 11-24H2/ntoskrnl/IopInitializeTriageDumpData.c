/*
 * XREFs of IopInitializeTriageDumpData @ 0x14070EFB0
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     KeInitializeTriageDumpDataArray @ 0x1404AA2A0 (KeInitializeTriageDumpDataArray.c)
 *     KeAddTriageDumpDataBlock @ 0x1405AE5D0 (KeAddTriageDumpDataBlock.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void IopInitializeTriageDumpData()
{
  struct _KTRIAGE_DUMP_DATA_ARRAY *Pool2; // rax
  SIZE_T v1; // r9
  unsigned int v2; // ebx

  if ( !IopTriageDumpDataArray )
  {
    Pool2 = (struct _KTRIAGE_DUMP_DATA_ARRAY *)ExAllocatePool2(0x40uLL, 0x4030uLL, 0x72546F49u);
    IopTriageDumpDataArray = Pool2;
    if ( !Pool2 || KeInitializeTriageDumpDataArray(Pool2, 0x4030u) < 0 )
      goto LABEL_8;
    if ( IopNumTriageDumpDataBlocks )
    {
      v2 = 0;
      do
      {
        KeAddTriageDumpDataBlock(
          IopTriageDumpDataArray,
          IopTriageDumpDataBlocks[2 * v2],
          (PVOID)(IopTriageDumpDataBlocks[2 * v2 + 1] - IopTriageDumpDataBlocks[2 * v2]),
          v1);
        ++v2;
      }
      while ( v2 < IopNumTriageDumpDataBlocks );
    }
    IopBugCheckTriageDumpDataCallbackRecord.State = 0;
    if ( !KeRegisterBugCheckReasonCallback(
            &IopBugCheckTriageDumpDataCallbackRecord,
            (PKBUGCHECK_REASON_CALLBACK_ROUTINE)IoBugCheckTriageDumpDataCallback,
            KbCallbackTriageDumpData,
            (PUCHAR)"IoTriageDumpData") )
    {
LABEL_8:
      if ( IopTriageDumpDataArray )
      {
        ExFreePoolWithTag(IopTriageDumpDataArray, 0x72546F49u);
        IopTriageDumpDataArray = 0LL;
      }
    }
  }
}
