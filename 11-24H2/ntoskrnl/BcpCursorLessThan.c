/*
 * XREFs of BcpCursorLessThan @ 0x140699A48
 * Callers:
 *     BcpDisplayProgress @ 0x14069A874 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
