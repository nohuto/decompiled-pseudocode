/*
 * XREFs of MiInsertProcessVads @ 0x1408F8BD8
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x1408F8590 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA8538 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     MiInsertVad @ 0x14025FB40 (MiInsertVad.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140405E18 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     LOCK_ADDRESS_SPACE @ 0x140405F18 (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiReturnProcessVads @ 0x1408F842C (MiReturnProcessVads.c)
 */

__int64 __fastcall MiInsertProcessVads(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  int inserted; // edi
  __int64 Process; // rbp
  _QWORD *v7; // r15

  CurrentThread = KeGetCurrentThread();
  inserted = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
  while ( 1 )
  {
    if ( !a2 )
    {
      UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
      return (unsigned int)inserted;
    }
    v7 = (_QWORD *)*a2;
    inserted = MiInsertVadCharges((__int64)a2, a1);
    if ( inserted < 0 )
      break;
    MiInsertVad((__int64)a2, a1, 0);
    a2 = v7;
  }
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, Process);
  MiReturnProcessVads(a2);
  return (unsigned int)inserted;
}
