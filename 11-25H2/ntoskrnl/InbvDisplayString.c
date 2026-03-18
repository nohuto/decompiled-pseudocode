/*
 * XREFs of InbvDisplayString @ 0x14058BBA0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall InbvDisplayString(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1;
  if ( !byte_140E65AF8 )
    return 0;
  if ( qword_140E65AF0 )
  {
    guard_dispatch_icall_no_overrides(&v2);
    a1 = v2;
  }
  if ( qword_140E65AE8 && *(_QWORD *)(qword_140E65AE8 + 40) )
    return guard_dispatch_icall_no_overrides(a1);
  else
    return 0;
}
