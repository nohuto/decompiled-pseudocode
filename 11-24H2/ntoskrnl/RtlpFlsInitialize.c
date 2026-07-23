/*
 * XREFs of RtlpFlsInitialize @ 0x140787B5C
 * Callers:
 *     PspTlsInitialize @ 0x140C37F40 (PspTlsInitialize.c)
 * Callees:
 *     <none>
 */

void RtlpFlsInitialize()
{
  *(_OWORD *)&PspTlsContext = 0LL;
  unk_140E28220 = 0LL;
  *(_OWORD *)(&PspTlsContext + 1) = 0LL;
  *(__int128 *)((char *)&xmmword_140E28210 + 8) = 0LL;
}
