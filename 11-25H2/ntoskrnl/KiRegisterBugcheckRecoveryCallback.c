/*
 * XREFs of KiRegisterBugcheckRecoveryCallback @ 0x1404696DC
 * Callers:
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 */

char __fastcall KiRegisterBugcheckRecoveryCallback(__int64 a1)
{
  signed __int32 v1; // eax

  if ( *(_DWORD *)(a1 + 40) == 1023 )
  {
    v1 = _InterlockedIncrement(&KiRecoveryCallbackCount);
    if ( v1 == 1 )
    {
      LOBYTE(v1) = (_BYTE)KiPristineTriageDump;
      if ( !KiPristineTriageDump )
        LOBYTE(v1) = KeInsertQueueDpc(&KiPristineTriageDumpAllocationDpc, 0LL, 0LL);
    }
  }
  return v1;
}
