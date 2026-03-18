/*
 * XREFs of InbvDisplayString @ 0x14058F380
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvDisplayString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  if ( !byte_140E65D3C )
    return 0;
  if ( qword_140E65D48 )
  {
    guard_dispatch_icall_no_overrides(&v5, a2, a3, a4);
    a1 = v5;
  }
  if ( qword_140E65D40 && *(_QWORD *)(qword_140E65D40 + 40) )
    return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  else
    return 0;
}
