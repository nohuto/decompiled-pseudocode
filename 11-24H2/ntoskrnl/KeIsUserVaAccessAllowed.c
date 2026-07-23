/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x140421850
 * Callers:
 *     KiDispatchInterrupt @ 0x1402A32B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x1402A3870 (KiQuantumEnd.c)
 *     MiValidFault @ 0x1404F0710 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x14067F6A8 (MiDbgCopyMemory.c)
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
