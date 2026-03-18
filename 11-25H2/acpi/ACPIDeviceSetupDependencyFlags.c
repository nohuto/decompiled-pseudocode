/*
 * XREFs of ACPIDeviceSetupDependencyFlags @ 0x1400276AC
 * Callers:
 *     ACPIDeviceRecordDependencies @ 0x140026E84 (ACPIDeviceRecordDependencies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIDeviceSetupDependencyFlags(__int64 **a1)
{
  __int64 *i; // rdx
  __int64 v2; // r8
  __int64 result; // rax

  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    v2 = i[5];
    if ( !*(_QWORD *)(v2 + 784) )
    {
      if ( *(_QWORD *)(v2 + 648) || (result = *(unsigned int *)(v2 + 1120), (result & 0x400000) != 0) )
      {
        result = *(_QWORD *)(v2 + 8);
        if ( (result & 0xA00000000000LL) == 0 )
          *((_DWORD *)i + 14) |= 0x4000000u;
      }
    }
  }
  return result;
}
