/*
 * XREFs of ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x1400560E4
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042DE1C (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x1400354BC (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x140078FB8 (McTemplateK0xqpp_EtwWriteTransfer.c)
 *     ?VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z @ 0x14007B998 (-VmBusSendHostMonitorPower@DXG_HOST_GLOBAL_VMBUS@@SAJPEAXU_LUID@@IE@Z.c)
 */

void __fastcall HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
        KSPIN_LOCK *this,
        struct _LUID a2,
        int a3,
        unsigned __int8 a4)
{
  char *v4; // rdi
  HOSTVMMONITORMAPPING *v9; // rsi
  HOSTVMMONITORMAPPING *v10; // rdi
  unsigned int v11; // r8d
  void *v12; // rcx
  int v13; // ecx
  int v14; // r8d
  _BYTE v15[8]; // [rsp+40h] [rbp-58h] BYREF
  char *v16; // [rsp+48h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+50h] [rbp-48h] BYREF
  char v18; // [rsp+68h] [rbp-30h]
  LONG HighPart; // [rsp+ACh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = (char *)(this + 2);
  v18 = 0;
  v16 = (char *)(this + 2);
  KeAcquireInStackQueuedSpinLock(this + 2, &v17);
  *((_QWORD *)v4 + 1) = KeGetCurrentThread();
  v9 = (HOSTVMMONITORMAPPING *)*this;
  v18 = 1;
  while ( v9 != (HOSTVMMONITORMAPPING *)this )
  {
    v10 = v9;
    v9 = *(HOSTVMMONITORMAPPING **)v9;
    if ( *((_DWORD *)v10 + 4) == a2.LowPart && *((_DWORD *)v10 + 5) == HighPart )
    {
      v11 = *((_DWORD *)v10 + 6);
      if ( v11 == a3 || a3 == -1 )
      {
        v12 = (void *)*((_QWORD *)v10 + 4);
        if ( v12 )
        {
          if ( *((_DWORD *)v10 + 10) >= 0x25u )
          {
            DXG_HOST_GLOBAL_VMBUS::VmBusSendHostMonitorPower(v12, a2, v11, a4);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000000) != 0 )
              McTemplateK0xqpp_EtwWriteTransfer(
                v13,
                (unsigned int)&RemoteMonitorVSyncTrigger,
                v14,
                *((_QWORD *)v10 + 2),
                *((_DWORD *)v10 + 6),
                *((_QWORD *)v10 + 6),
                *((_QWORD *)v10 + 4));
          }
        }
      }
    }
  }
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v15);
}
