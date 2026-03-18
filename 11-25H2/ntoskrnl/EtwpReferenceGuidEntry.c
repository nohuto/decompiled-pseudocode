/*
 * XREFs of EtwpReferenceGuidEntry @ 0x14089BAD0
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1404AD640 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x1408995E0 (EtwpAddGuidEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpInitializeRegEntry @ 0x14089B6AC (EtwpInitializeRegEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x14089B9B0 (EtwpFindGuidEntryByGuid.c)
 *     EtwpRegisterUMProvider @ 0x14089D2F0 (EtwpRegisterUMProvider.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E53C0 (EtwpUpdateGuidEnableInfo.c)
 *     EtwpCreateUmReplyObject @ 0x140A74164 (EtwpCreateUmReplyObject.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

char __fastcall EtwpReferenceGuidEntry(ULONG_PTR BugCheckParameter2)
{
  signed __int64 i; // rdx
  signed __int64 v2; // rax

  _m_prefetchw((const void *)(BugCheckParameter2 + 32));
  for ( i = *(_QWORD *)(BugCheckParameter2 + 32); ; i = v2 )
  {
    if ( !i )
      return 0;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter2 + 32), i + 1, i);
    if ( i == v2 )
      break;
  }
  if ( i < 0 )
    KeBugCheckEx(0x11Du, 9uLL, BugCheckParameter2, 0LL, 0LL);
  return 1;
}
