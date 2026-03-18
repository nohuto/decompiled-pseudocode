/*
 * XREFs of IcIsActiveBothPrimaryInterrupt @ 0x1400AADAC
 * Callers:
 *     IcCheckIrqConflict @ 0x1400BD0F4 (IcCheckIrqConflict.c)
 * Callees:
 *     <none>
 */

bool __fastcall IcIsActiveBothPrimaryInterrupt(__int64 a1, unsigned int a2)
{
  int v2; // eax

  if ( (*(_DWORD *)(a1 + 28) & 4) != 0 )
    return 0;
  v2 = *(_DWORD *)(200LL * a2 + a1 + 148);
  return v2 == 3 || v2 == 4;
}
