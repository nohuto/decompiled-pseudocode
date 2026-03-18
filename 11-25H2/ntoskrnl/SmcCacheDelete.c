/*
 * XREFs of SmcCacheDelete @ 0x14078DCBC
 * Callers:
 *     SmcProcessCreateRequest @ 0x140789AAC (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x140789D60 (SmcProcessDeleteRequest.c)
 *     SmcVolumePnpNotification @ 0x14078EF80 (SmcVolumePnpNotification.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     SmcCacheCleanup @ 0x14078DC24 (SmcCacheCleanup.c)
 *     SmcCacheRemove @ 0x14078DFD8 (SmcCacheRemove.c)
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
