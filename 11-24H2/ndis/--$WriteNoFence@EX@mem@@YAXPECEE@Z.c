/*
 * XREFs of ??$WriteNoFence@EX@mem@@YAXPECEE@Z @ 0x14008E9A0
 * Callers:
 *     ndisReadCtaPolicy @ 0x140137BB8 (ndisReadCtaPolicy.c)
 * Callees:
 *     <none>
 */

void __fastcall mem::WriteNoFence<unsigned char,void>(_BYTE *a1, char a2)
{
  *a1 = a2;
}
