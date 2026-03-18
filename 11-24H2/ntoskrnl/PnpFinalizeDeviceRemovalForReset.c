/*
 * XREFs of PnpFinalizeDeviceRemovalForReset @ 0x140721884
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IopLogDeviceResetComplete @ 0x140721494 (IopLogDeviceResetComplete.c)
 *     IopMarkDeviceToBeReset @ 0x140721520 (IopMarkDeviceToBeReset.c)
 *     IopEnumerateRelations @ 0x140A56CE8 (IopEnumerateRelations.c)
 */

NTSTATUS __fastcall PnpFinalizeDeviceRemovalForReset(__int64 a1, int a2)
{
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF
  int v6; // [rsp+58h] [rbp+20h] BYREF
  int v7; // [rsp+5Ch] [rbp+24h]

  BugCheckParameter2 = 0LL;
  v7 = 0;
  v6 = 1;
  while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v6, (unsigned int)&BugCheckParameter2, 0, 0LL) )
    IopMarkDeviceToBeReset(BugCheckParameter2);
  return IopLogDeviceResetComplete(a1, 0);
}
