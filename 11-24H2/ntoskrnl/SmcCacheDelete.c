/*
 * XREFs of SmcCacheDelete @ 0x14079D18C
 * Callers:
 *     SmcProcessCreateRequest @ 0x140798F8C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140799240 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14079E450 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x14079D0F4 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14079D4A8 (SmcCacheRemove.c)
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
