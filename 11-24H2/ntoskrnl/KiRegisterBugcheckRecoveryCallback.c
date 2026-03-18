/*
 * XREFs of KiRegisterBugcheckRecoveryCallback @ 0x140467E94
 * Callers:
 *     KeRegisterBugCheckReasonCallback @ 0x140467D20 (KeRegisterBugCheckReasonCallback.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
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
