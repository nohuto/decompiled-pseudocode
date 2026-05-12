/*
 * XREFs of RaMiniportIsFeatureSupported @ 0x140040214
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 *     NvmeIsAdapterControlSupported @ 0x140071734 (NvmeIsAdapterControlSupported.c)
 * Callees:
 *     <none>
 */

char __fastcall RaMiniportIsFeatureSupported(__int64 a1, int a2)
{
  int v2; // r8d
  char result; // al

  v2 = *(_DWORD *)(a1 + 376);
  result = 0;
  if ( v2 )
  {
    if ( a2 < v2 )
      return *(_BYTE *)(a2 + a1 + 380);
  }
  return result;
}
