/*
 * XREFs of ntoskrnl_27 @ 0x140977FD0
 * Callers:
 *     SPCallServerHandleQueryPolicy @ 0x140976EFC (SPCallServerHandleQueryPolicy.c)
 *     NtQueryLicenseValue @ 0x140977CA0 (NtQueryLicenseValue.c)
 *     sub_140978038 @ 0x140978038 (sub_140978038.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 */

__int64 __fastcall ntoskrnl_27(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v7; // r8
  unsigned int v8; // r9d
  const UNICODE_STRING *v9; // r11

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD7480 )
    return guard_dispatch_icall_no_overrides(Blink, v9, v5, v7);
  else
    return SLQueryLicenseValueInternal((__int64)Blink, v9, v5, v7, v8, a5);
}
