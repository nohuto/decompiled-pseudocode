/*
 * XREFs of KeRevertToUserAffinityThread @ 0x1405B7C40
 * Callers:
 *     <none>
 * Callees:
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

void KeRevertToUserAffinityThread(void)
{
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+20h] [rbp-28h] BYREF

  PreviousAffinity = 0LL;
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
