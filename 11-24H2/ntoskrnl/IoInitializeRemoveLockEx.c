/*
 * XREFs of IoInitializeRemoveLockEx @ 0x1404B8620
 * Callers:
 *     PopFxCreateDeviceCommon @ 0x1405CE344 (PopFxCreateDeviceCommon.c)
 *     DifIoInitializeRemoveLockExWrapper @ 0x140627880 (DifIoInitializeRemoveLockExWrapper.c)
 *     PopFxRegisterDeviceWorker @ 0x14074CF20 (PopFxRegisterDeviceWorker.c)
 *     VfFilterAttach @ 0x140B9ED90 (VfFilterAttach.c)
 * Callees:
 *     <none>
 */

void __stdcall IoInitializeRemoveLockEx(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  ULONG v5; // eax

  if ( Lock )
  {
    if ( RemlockSize != 32 )
    {
      if ( RemlockSize != 120 )
        return;
      *(_DWORD *)&Lock[1].Common.Removed = 1129270354;
      Lock[1].Common.IoCount = HighWatermark;
      *(_QWORD *)&Lock[1].Common.RemoveEvent.Header.Lock = 600000000
                                                         * MaxLockedMinutes
                                                         * (unsigned __int64)KeMaximumIncrement;
      v5 = 1919970896;
      if ( AllocateTag )
        v5 = AllocateTag;
      LODWORD(Lock[1].Common.RemoveEvent.Header.WaitListHead.Flink) = v5;
      *(_QWORD *)&Lock[2].Common.RemoveEvent.Header.Lock = 0LL;
      LODWORD(Lock[2].Common.RemoveEvent.Header.WaitListHead.Flink) = 0;
      Lock[3].Common.RemoveEvent.Header.WaitListHead.Flink = 0LL;
    }
    Lock->Common.Removed = 0;
    Lock->Common.IoCount = 1;
    LOWORD(Lock->Common.RemoveEvent.Header.Lock) = 1;
    Lock->Common.RemoveEvent.Header.Size = 6;
    Lock->Common.RemoveEvent.Header.SignalState = 0;
    Lock->Common.RemoveEvent.Header.WaitListHead.Blink = &Lock->Common.RemoveEvent.Header.WaitListHead;
    Lock->Common.RemoveEvent.Header.WaitListHead.Flink = &Lock->Common.RemoveEvent.Header.WaitListHead;
  }
}
