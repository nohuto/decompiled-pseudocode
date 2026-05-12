/*
 * XREFs of RaidUnitLogSenseTemperatureSrb @ 0x14009FA80
 * Callers:
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x14009C17C (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     RaidUnitLogSenseCommandSrb @ 0x14009F72C (RaidUnitLogSenseCommandSrb.c)
 */

__int64 __fastcall RaidUnitLogSenseTemperatureSrb(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 Pool; // rdi
  unsigned int v6; // ebx
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v8 = 256;
  Pool = RaidAllocatePool(64LL, 256LL, 1918067026LL, v2);
  if ( Pool )
  {
    v6 = RaidUnitLogSenseCommandSrb(a1, a2, 13, 0, (char *)&v8, (_BYTE *)Pool);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2147483643 )
    {
      *(_WORD *)(Pool + 2) = 0;
      v6 = -1073741668;
    }
    ExFreePoolWithTag((PVOID)Pool, 0x72536152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v6;
}
