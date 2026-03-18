/*
 * XREFs of VrpJobContextDelete @ 0x140AA0570
 * Callers:
 *     <none>
 * Callees:
 *     VrpCleanupNamespace @ 0x14092AAD8 (VrpCleanupNamespace.c)
 *     VrpDecrementSiloCount @ 0x140AAB7A8 (VrpDecrementSiloCount.c)
 */

void __fastcall VrpJobContextDelete(__int64 a1)
{
  if ( !*(_DWORD *)(a1 + 84) )
    VrpCleanupNamespace(a1);
  if ( *(_DWORD *)(a1 + 88) )
    VrpDecrementSiloCount();
}
