/*
 * XREFs of VrpJobContextDelete @ 0x140A9B900
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14092CC18 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140AA69D8 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
