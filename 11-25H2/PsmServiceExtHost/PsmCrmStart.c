/*
 * XREFs of PsmCrmStart @ 0x180077870
 * Callers:
 *     <none>
 * Callees:
 *     CrmGlobalsInitialize @ 0x18007883C (CrmGlobalsInitialize.c)
 *     CrmGlobalsStart @ 0x180078A08 (CrmGlobalsStart.c)
 */

__int64 PsmCrmStart()
{
  int v0; // ecx
  __int64 result; // rax

  CrmGlobalsInitialize();
  v0 = CrmGlobalsStart();
  result = 0LL;
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
