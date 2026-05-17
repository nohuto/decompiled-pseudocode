/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x180113140
 * Callers:
 *     <none>
 * Callees:
 *     RtlCapabilityCheck @ 0x180039FF0 (RtlCapabilityCheck.c)
 *     RtlIsMultiSessionSku @ 0x18003AA40 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(void *a1, __int64 a2, char *a3, __int64 a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku((__int64)a1, a2, (__int64)a3, a4) )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(a1, a2, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
