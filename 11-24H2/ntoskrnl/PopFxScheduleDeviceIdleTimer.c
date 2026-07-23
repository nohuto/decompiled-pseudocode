/*
 * XREFs of PopFxScheduleDeviceIdleTimer @ 0x140468810
 * Callers:
 *     PopFxProcessWork @ 0x1402BFE70 (PopFxProcessWork.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x140495294 (PopFxUpdateDeviceIdleTimer.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 */

char __fastcall PopFxScheduleDeviceIdleTimer(__int64 a1)
{
  char v2; // r8
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r9

  v2 = 0;
  _m_prefetchw((const void *)(a1 + 32));
  if ( (_InterlockedOr((volatile signed __int32 *)(a1 + 32), 0) & 8) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 544);
    v4 = v3 + *(_QWORD *)(a1 + 536);
    if ( v4 >= v3 && MEMORY[0xFFFFF78000000008] < v4 )
    {
      v5 = v4 - MEMORY[0xFFFFF78000000008];
      if ( v5 < 0x186A000000000LL )
        v6 = v5 / 0x186A0;
      else
        LODWORD(v6) = -1;
      KeSetCoalescableTimer((PKTIMER)(a1 + 408), (LARGE_INTEGER)-(__int64)v5, 0, v6, (PKDPC)(a1 + 472));
      _InterlockedOr((volatile signed __int32 *)(a1 + 32), 4u);
      return 1;
    }
  }
  return v2;
}
