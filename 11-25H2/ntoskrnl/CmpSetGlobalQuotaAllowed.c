/*
 * XREFs of CmpSetGlobalQuotaAllowed @ 0x1407C2C80
 * Callers:
 *     CmpLoadKeyCommon @ 0x140465264 (CmpLoadKeyCommon.c)
 * Callees:
 *     <none>
 */

__int64 CmpSetGlobalQuotaAllowed()
{
  __int64 result; // rax

  result = CmpGlobalQuota;
  CmpGlobalQuotaAllowed = CmpGlobalQuota;
  return result;
}
