/*
 * XREFs of CrmpInProcActivityStop @ 0x180034580
 * Callers:
 *     <none>
 * Callees:
 *     CrmSrvActivityStop @ 0x180033670 (CrmSrvActivityStop.c)
 */

__int64 __fastcall CrmpInProcActivityStop(__int64 a1, __int64 a2)
{
  CrmSrvActivityStop(a1, a2);
  return 0LL;
}
