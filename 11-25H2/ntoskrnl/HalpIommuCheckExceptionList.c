/*
 * XREFs of HalpIommuCheckExceptionList @ 0x1404C55D4
 * Callers:
 *     HalpIommuUnblockDevice @ 0x1404BC0D0 (HalpIommuUnblockDevice.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406F0ED0 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     <none>
 */

char __fastcall HalpIommuCheckExceptionList(__int64 a1)
{
  __int64 i; // rdx

  if ( *(_DWORD *)a1 == 1 )
  {
    for ( i = HalpIommuExceptionList; (__int64 *)i != &HalpIommuExceptionList; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 16) == *(unsigned __int16 *)(a1 + 8) && *(_QWORD *)(i + 24) == *(unsigned __int16 *)(a1 + 12) )
        return 1;
    }
  }
  return 0;
}
