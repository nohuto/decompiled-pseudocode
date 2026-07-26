/*
 * XREFs of ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x14009A710
 * Callers:
 *     ndisReadCtaPolicy @ 0x140142BD8 (ndisReadCtaPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteNoFence<unsigned char,void>(_BYTE *a1, char a2)
{
  *a1 = a2;
}
