/*
 * XREFs of InbvNotifyDisplayOwnershipLost @ 0x14058BCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall InbvNotifyDisplayOwnershipLost(__int64 a1)
{
  __int64 result; // rax

  result = qword_140E65AE8;
  if ( qword_140E65AE8 )
  {
    result = *(_QWORD *)qword_140E65AE8;
    if ( *(_QWORD *)qword_140E65AE8 )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
