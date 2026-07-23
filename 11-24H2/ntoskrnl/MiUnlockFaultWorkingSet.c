/*
 * XREFs of MiUnlockFaultWorkingSet @ 0x140487790
 * Callers:
 *     MiCheckHoldFaultForHotPatch @ 0x1403D6FD8 (MiCheckHoldFaultForHotPatch.c)
 *     MiWaitForRotateToComplete @ 0x140494E48 (MiWaitForRotateToComplete.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x140243400 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiUnlockFaultWorkingSet(__int64 a1)
{
  __int64 v2; // rcx
  unsigned __int8 v3; // dl

  v2 = *(_QWORD *)a1;
  v3 = *(_BYTE *)(a1 + 12);
  if ( (*(_BYTE *)(a1 + 13) & 1) != 0 )
  {
    MiUnlockWorkingSetExclusive(v2, v3);
    *(_BYTE *)(a1 + 13) &= ~1u;
  }
  else
  {
    MiUnlockWorkingSetShared(v2, v3);
  }
}
