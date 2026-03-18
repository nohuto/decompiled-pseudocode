/*
 * XREFs of PopPrintUserActivityPresence @ 0x1409BCFE4
 * Callers:
 *     PopSetSessionUserStatus @ 0x1409BC5C8 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x1409BCF98 (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall PopPrintUserActivityPresence(int a1)
{
  int v2; // ecx

  if ( !a1 )
    return L"PowerUserPresent";
  v2 = a1 - 1;
  if ( !v2 )
    return L"PowerUserNotPresent";
  if ( v2 == 1 )
    return L"PowerUserInactive";
  return L"Invalid";
}
