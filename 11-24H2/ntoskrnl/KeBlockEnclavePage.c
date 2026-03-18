/*
 * XREFs of KeBlockEnclavePage @ 0x1405BA5C8
 * Callers:
 *     MiDecommitHardwareEnclavePages @ 0x1403D172C (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     KiEnclsStatus @ 0x1403D1C7C (KiEnclsStatus.c)
 *     KiEncls @ 0x1406AAF00 (KiEncls.c)
 */

__int64 __fastcall KeBlockEnclavePage(__int64 a1)
{
  int v2; // eax

  if ( !_bittest64(&KeFeatureBits, 0x28u) )
    return 3221225659LL;
  do
    v2 = KiEncls(9LL, 0LL, a1, 0LL);
  while ( v2 == 15 );
  return KiEnclsStatus(v2);
}
