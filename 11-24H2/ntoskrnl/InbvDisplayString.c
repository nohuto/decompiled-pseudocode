/*
 * XREFs of InbvDisplayString @ 0x14058C3A0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvDisplayString(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  if ( !byte_140E65E78 )
    return 0;
  if ( qword_140E65E80 )
  {
    guard_dispatch_icall_no_overrides(&v3, a2);
    a1 = v3;
  }
  if ( qword_140E65E70 && *(_QWORD *)(qword_140E65E70 + 40) )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return 0;
}
