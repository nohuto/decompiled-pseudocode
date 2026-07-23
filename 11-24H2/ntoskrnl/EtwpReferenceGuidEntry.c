/*
 * XREFs of EtwpReferenceGuidEntry @ 0x140838980
 * Callers:
 *     EtwGetProviderIdFromHandle @ 0x1404A8EF0 (EtwGetProviderIdFromHandle.c)
 *     EtwpAddGuidEntry @ 0x1408367C0 (EtwpAddGuidEntry.c)
 *     EtwpInitializeRegEntry @ 0x14083857C (EtwpInitializeRegEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140838880 (EtwpFindGuidEntryByGuid.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     EtwpUpdateGuidEnableInfo @ 0x1409E7D3C (EtwpUpdateGuidEnableInfo.c)
 *     EtwpCreateUmReplyObject @ 0x140A703BC (EtwpCreateUmReplyObject.c)
 *     EtwpAddRegEntryToGroup @ 0x140AD9390 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
