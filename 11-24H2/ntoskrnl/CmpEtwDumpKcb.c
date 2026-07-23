/*
 * XREFs of CmpEtwDumpKcb @ 0x14092E190
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, unsigned __int8 a2)
{
  void (__fastcall *v2)(unsigned __int8, __int64, int, int, __int64, __int64); // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rbx
  _OWORD v9[2]; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE v10; // [rsp+60h] [rbp-58h] BYREF

  v2 = (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine;
  memset(&v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  if ( CmpTraceRoutine )
  {
    CmpAttachToRegistryProcess(&v10);
    v8 = (void *)CmpConstructName(a1, v5, v6, v7);
    if ( v8 )
    {
      if ( v2 == EtwpTraceRegistry )
        EtwpTraceRegistry(a2, (__int64)v9, 0, 0, a1, (__int64)v8);
      else
        guard_dispatch_icall_no_overrides(a2, v9);
      CmpFreeTransientPoolWithTag(v8, 0x624E4D43u);
    }
    CmpDetachFromRegistryProcess(&v10);
  }
}
