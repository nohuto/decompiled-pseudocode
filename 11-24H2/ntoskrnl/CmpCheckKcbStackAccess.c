/*
 * XREFs of CmpCheckKcbStackAccess @ 0x1406F6094
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086D420 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14090ADCC (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32));
}
