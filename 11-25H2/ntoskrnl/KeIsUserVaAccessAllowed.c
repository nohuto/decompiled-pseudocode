/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140434110
 * Callers:
 *     KiDispatchInterrupt @ 0x14032E330 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x14032ED10 (KiQuantumEnd.c)
 *     MiValidFault @ 0x1404EECA0 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x140672C90 (MiDbgCopyMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsUserVaAccessAllowed(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+0h] [rbp-8h]

  if ( !KeSmapEnabled )
    return 1;
  if ( a1 )
    v1 = *(_DWORD *)(a1 + 376);
  else
    v1 = v3;
  return (v1 & 0x40000) != 0;
}
