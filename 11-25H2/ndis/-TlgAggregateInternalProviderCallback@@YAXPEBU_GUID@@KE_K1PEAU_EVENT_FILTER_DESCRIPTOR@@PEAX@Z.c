/*
 * XREFs of ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1401733B0
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x140159B34 (LookUpTableFlushComplete.c)
 */

void __fastcall TlgAggregateInternalProviderCallback(const struct _GUID *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 i; // rbx

  if ( a2 == 2 && a4 == 32 && (unsigned __int8)ExTryAcquirePushLockExclusiveEx(&unk_1401278E8, 0LL) )
  {
    for ( i = qword_1401278E0; i; i = *(_QWORD *)(i + 352) )
      LookUpTableFlushComplete(i);
    ExReleasePushLockExclusiveEx(&unk_1401278E8, 0LL);
  }
}
