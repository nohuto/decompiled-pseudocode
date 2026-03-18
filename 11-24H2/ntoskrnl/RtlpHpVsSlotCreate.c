/*
 * XREFs of RtlpHpVsSlotCreate @ 0x1406074FC
 * Callers:
 *     RtlpHpVsContextHandleContention @ 0x14048946C (RtlpHpVsContextHandleContention.c)
 *     RtlpHpVsContextStart @ 0x14060742C (RtlpHpVsContextStart.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1402B5710 (RtlpHpInitializeLock.c)
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

union _SLIST_HEADER *__fastcall RtlpHpVsSlotCreate(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  union _SLIST_HEADER *v6; // rbx
  char v7; // cl

  v5 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 8) ^ a1, 128LL, a3, a4);
  v6 = (union _SLIST_HEADER *)v5;
  if ( v5 )
  {
    memset_0((void *)(v5 + 8), 0, 0x78uLL);
    v6->Alignment = a1;
    RtlpHpInitializeLock(&v6->Region, *(unsigned __int8 *)(a1 + 3));
    v7 = *(_BYTE *)(a1 + 5);
    v6[1].Alignment = 0LL;
    v6[1].Region = 0LL;
    if ( (v7 & 1) != 0 )
      *((_BYTE *)&v6[1].HeaderX64 + 8) = 1;
    v6[2].Region = 0LL;
    v6[2].Alignment = 0LL;
    v6[4] = 0LL;
    InitializeSListHead(v6 + 4);
  }
  return v6;
}
