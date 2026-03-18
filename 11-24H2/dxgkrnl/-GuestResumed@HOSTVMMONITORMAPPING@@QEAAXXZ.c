/*
 * XREFs of ?GuestResumed@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x14005B9E8
 * Callers:
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x140220AB0 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 */

void __fastcall HOSTVMMONITORMAPPING::GuestResumed(KSPIN_LOCK *this)
{
  char *v1; // rbx
  _BYTE v3[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v4; // [rsp+28h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE v5; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+48h] [rbp-10h]

  v1 = (char *)(this + 2);
  v6 = 0;
  v4 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &v5);
  *((_QWORD *)v1 + 1) = KeGetCurrentThread();
  v6 = 1;
  *((_BYTE *)this + 32) = 0;
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v3);
}
