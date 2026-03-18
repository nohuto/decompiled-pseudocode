/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14058BA20
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405AFF14 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140B4FEE0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvAcquireDisplayOwnership(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)(qword_140E65AE8 + 8);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
