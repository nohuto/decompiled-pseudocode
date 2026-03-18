/*
 * XREFs of KeIsUserVaAccessAllowed @ 0x14042FDA0
 * Callers:
 *     KiDispatchInterrupt @ 0x1402936B0 (KiDispatchInterrupt.c)
 *     KiQuantumEnd @ 0x140293C70 (KiQuantumEnd.c)
 *     MiValidFault @ 0x1404F2C70 (MiValidFault.c)
 *     MiDbgCopyMemory @ 0x14067E4A8 (MiDbgCopyMemory.c)
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
