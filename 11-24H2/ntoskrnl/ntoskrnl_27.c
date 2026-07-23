/*
 * XREFs of ntoskrnl_27 @ 0x1409607E0
 * Callers:
 *     SPCallServerHandleQueryPolicy @ 0x14095F70C (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x1409604B0 (NtQueryLicenseValue.c)
 *     sub_140960848 @ 0x140960848 (sub_140960848.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SLQueryLicenseValueInternal @ 0x1407B9E3C (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v7; // r8
  int v8; // r9d
  const UNICODE_STRING *v9; // r11

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD8490 )
    return guard_dispatch_icall_no_overrides(Blink, v9);
  else
    return SLQueryLicenseValueInternal((__int64)Blink, v9, v5, v7, v8, a5);
}
