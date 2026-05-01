/*
 * XREFs of CrmStateMonitorPostResumeUsageCheck @ 0x180064C90
 * Callers:
 *     CrmStateMonitorPostResumeUsageCallback @ 0x180064BD0 (CrmStateMonitorPostResumeUsageCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorPostResumeUsageCheck(__int64 a1)
{
  __int64 result; // rax
  unsigned int i; // edx

  if ( *(_DWORD *)(a1 + 168) < 4u || *(_DWORD *)(a1 + 188) < 4u )
    return 0LL;
  result = 0LL;
  for ( i = 0; i < 4; ++i )
  {
    if ( *(_DWORD *)(a1 + 4LL * i + 152) > 0x1Eu || *(_DWORD *)(a1 + 4LL * i + 172) > 0x1Eu )
      return result;
  }
  return 1LL;
}
