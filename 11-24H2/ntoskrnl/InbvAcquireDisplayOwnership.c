/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x14058C220
 * Callers:
 *     KiDisplayBlueScreen @ 0x1405B0834 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140B620D0 (PopShutdownHandler.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvAcquireDisplayOwnership(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = qword_140E65E70;
  if ( qword_140E65E70 )
  {
    result = *(_QWORD *)(qword_140E65E70 + 8);
    if ( result )
      return guard_dispatch_icall_no_overrides(a1, a2);
  }
  return result;
}
