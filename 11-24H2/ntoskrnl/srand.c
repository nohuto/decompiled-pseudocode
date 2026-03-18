/*
 * XREFs of srand @ 0x1404FF550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl srand(unsigned int Seed)
{
  RtlCopyFromUser__fo_ = Seed;
}
