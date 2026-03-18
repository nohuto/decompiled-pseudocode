/*
 * XREFs of MiSetIdealProcessorThread @ 0x1403B4508
 * Callers:
 *     MiZeroMoveToProcessor @ 0x14030AA98 (MiZeroMoveToProcessor.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140248260 (KeQueryPriorityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1403B422C (KeSetIdealProcessorThreadEx.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x1403B4C70 (KeFindFirstSetRightGroupAffinity.c)
 *     KeSetPriorityThread @ 0x1403F96D0 (KeSetPriorityThread.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall MiSetIdealProcessorThread(PGROUP_AFFINITY Affinity)
{
  bool v1; // zf
  struct _KTHREAD *CurrentThread; // rbx
  KPRIORITY v4; // edi
  unsigned int FirstSetRightGroupAffinity; // eax
  int v6; // esi
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+28h] [rbp-20h] BYREF

  v8 = 0;
  v1 = Affinity->Mask == 0;
  PreviousAffinity = 0LL;
  if ( v1 )
    return 0xFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  v4 = KeQueryPriorityThread(CurrentThread) >= 16 ? -1 : KeSetPriorityThread(CurrentThread, 16);
  KeSetSystemGroupAffinityThread(Affinity, &PreviousAffinity);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(Affinity);
  v6 = KeSetIdealProcessorThreadEx(CurrentThread, FirstSetRightGroupAffinity, &v8);
  if ( v4 != -1 )
    KeSetPriorityThread(CurrentThread, v4);
  if ( v6 < 0 )
    return 0xFFFFFFFFLL;
  else
    return v8;
}
