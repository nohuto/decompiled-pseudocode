/*
 * XREFs of BcpCursorLessThan @ 0x14068D678
 * Callers:
 *     BcpDisplayProgress @ 0x14068E4A4 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
