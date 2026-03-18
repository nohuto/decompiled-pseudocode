/*
 * XREFs of CmpCheckKcbStackAccess @ 0x1406EC908
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x140974380 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpSetKeySecurity @ 0x140977054 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x14086FF30 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1408F4150 (CmpCheckKeySecurityDescriptorAccess.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32));
}
