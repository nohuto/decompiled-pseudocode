/*
 * XREFs of RaidUnitUpdateDynamicRegistrySettings @ 0x1400A1580
 * Callers:
 *     <none>
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 */

LONG __fastcall RaidUnitUpdateDynamicRegistrySettings(__int64 a1)
{
  LONG result; // eax
  unsigned __int64 v3; // r8
  LONG v4; // ett

  result = RaUnitAcquireRemoveLock(a1, 0LL, 0);
  if ( result >= 0 )
  {
    v3 = (unsigned __int64)HIDWORD(KeGetPcr()[1].LockArray) << 6;
    result = *(_DWORD *)(v3 + *(_QWORD *)(a1 + 40));
    while ( (result & 1) == 0 )
    {
      v4 = result;
      result = _InterlockedCompareExchange((volatile signed __int32 *)(v3 + *(_QWORD *)(a1 + 40)), result - 2, result);
      if ( v4 == result )
        return result;
    }
    result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1032), 0xFFFFFFFF);
    if ( result == 1 )
      return KeSetEvent((PRKEVENT)(a1 + 520), 0, 0);
  }
  return result;
}
