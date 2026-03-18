/*
 * XREFs of ExpConvertSvmDevice @ 0x14064CD34
 * Callers:
 *     ExpShareAddressSpaceWithDevice @ 0x14064D138 (ExpShareAddressSpaceWithDevice.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall ExpConvertSvmDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( !*(_QWORD *)(a2 + 72) )
    return 3221225659LL;
  result = guard_dispatch_icall_no_overrides(*(_QWORD *)(a2 + 48));
  if ( (int)result >= 0 )
    return 3221225711LL;
  return result;
}
