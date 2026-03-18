/*
 * XREFs of ACPIExtListIsMemberOfRelation @ 0x140060268
 * Callers:
 *     ACPIDetectEjectDevices @ 0x14003CD1C (ACPIDetectEjectDevices.c)
 *     ACPIDetectDockDevices @ 0x14003D250 (ACPIDetectDockDevices.c)
 * Callees:
 *     <none>
 */

char __fastcall ACPIExtListIsMemberOfRelation(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a2 )
  {
    while ( v2 < *a2 )
    {
      if ( *(_QWORD *)&a2[2 * v2 + 2] == a1 )
        return 1;
      ++v2;
    }
  }
  return 0;
}
