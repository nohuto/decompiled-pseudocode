/*
 * XREFs of ?GuestResumed@HOSTVMMONITORMAPPING@@QEAAXXZ @ 0x140030C58
 * Callers:
 *     ?VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x14021A550 (-VmBusChannelStarted@DXG_HOST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 */

void __fastcall HOSTVMMONITORMAPPING::GuestResumed(HOSTVMMONITORMAPPING *this)
{
  _BYTE v2[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v3; // [rsp+28h] [rbp-30h]
  char v4; // [rsp+48h] [rbp-10h]

  v4 = 0;
  v3 = (char *)this + 16;
  DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v2);
  *((_BYTE *)this + 32) = 0;
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v2);
}
