/*
 * XREFs of srand @ 0x1404FCE10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl srand(unsigned int Seed)
{
  RtlCopyFromUser__fo_ = Seed;
}
