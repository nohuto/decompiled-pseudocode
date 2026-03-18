/*
 * XREFs of BcpCursorLessThan @ 0x1406989C8
 * Callers:
 *     BcpDisplayProgress @ 0x1406997F4 (BcpDisplayProgress.c)
 * Callees:
 *     <none>
 */

bool __fastcall BcpCursorLessThan(_QWORD *a1)
{
  return *a1 < (unsigned __int64)BcpProgressEnd;
}
