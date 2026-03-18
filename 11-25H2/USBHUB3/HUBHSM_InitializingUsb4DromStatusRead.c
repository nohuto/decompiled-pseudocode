/*
 * XREFs of HUBHSM_InitializingUsb4DromStatusRead @ 0x1400096E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_InitializingUsb4DromStatusRead(__int64 a1)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 960) + 2720LL) = MEMORY[0xFFFFF78000000008];
  return 2053LL;
}
