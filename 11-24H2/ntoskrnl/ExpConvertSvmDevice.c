/*
 * XREFs of ExpConvertSvmDevice @ 0x140658C28
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14065902C (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpConvertSvmDevice(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  if ( !a2[9] )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(a2[6], &v7, a3, a4);
  if ( (int)result >= 0 )
  {
    if ( (v7 & 1) != 0
      && (v7 & 2) != 0
      && (v7 & 4) != 0
      && 1 << ((unsigned __int8)v7 >> 3) >= (unsigned int)ExpSvmAgents )
    {
      _InterlockedIncrement(&ExTbFlushActive);
      result = guard_dispatch_icall_no_overrides(a1, a2[21], a2[3], &v7);
      if ( (int)result < 0 )
        _InterlockedDecrement(&ExTbFlushActive);
    }
    else
    {
      return 3221225711LL;
    }
  }
  return result;
}
