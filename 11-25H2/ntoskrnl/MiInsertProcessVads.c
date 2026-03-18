/*
 * XREFs of MiInsertProcessVads @ 0x140905110
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x140904AC8 (MmInitializeProcessAddressSpace.c)
 *     MmInitializeHandBuiltProcess2 @ 0x140AA4AB4 (MmInitializeHandBuiltProcess2.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x1402A3CEC (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x1403D824C (LOCK_ADDRESS_SPACE.c)
 *     MiInsertVadCharges @ 0x140900770 (MiInsertVadCharges.c)
 *     MiReturnProcessVads @ 0x140ABC98C (MiReturnProcessVads.c)
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
