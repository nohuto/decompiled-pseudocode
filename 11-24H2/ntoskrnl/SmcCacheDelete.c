/*
 * XREFs of SmcCacheDelete @ 0x14079D07C
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798E7C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140799130 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14079E340 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x14079CFE4 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14079D398 (SmcCacheRemove.c)
 */

__int64 __fastcall SmcCacheDelete(__int64 a1)
{
  __int64 v2; // rax
  struct _PRIVILEGE_SET *v3; // rdi

  v2 = SmcCacheRemove();
  v3 = (struct _PRIVILEGE_SET *)v2;
  if ( !v2 )
    return 3221225561LL;
  SmcCacheCleanup(a1, v2);
  CmSiFreeMemory(v3);
  KeSetEvent(*(PRKEVENT *)(a1 + 552), 0, 0);
  return 0LL;
}
