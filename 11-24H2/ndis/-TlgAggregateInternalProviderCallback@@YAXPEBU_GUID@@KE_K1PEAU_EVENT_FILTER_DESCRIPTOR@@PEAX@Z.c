/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x140166AB0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x14014EE64 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_14011D838, 0LL) )
  {
    for ( i = qword_14011D830; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_14011D838, 0LL);
  }
}
