/*
 * XREFs of ?SendHostMonitorPowerMsg@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IE@Z @ 0x140030D10
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042BF30 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x140031094 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003124C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     _lambda_45359a313f17151045e4a29f2155e221_::operator() @ 0x140078040 (_lambda_45359a313f17151045e4a29f2155e221_--operator().c)
 */

void __fastcall HOSTVMMONITORMAPPING::SendHostMonitorPowerMsg(
        HOSTVMMONITORMAPPING *this,
        struct _LUID a2,
        int a3,
        char a4)
{
  HOSTVMMONITORMAPPING *v5; // rbx
  HOSTVMMONITORMAPPING *v6; // rdx
  _QWORD v7[4]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v8[8]; // [rsp+40h] [rbp-30h] BYREF
  char *v9; // [rsp+48h] [rbp-28h]
  char v10; // [rsp+68h] [rbp-8h]
  struct _LUID v11; // [rsp+98h] [rbp+28h] BYREF
  int v12; // [rsp+A0h] [rbp+30h] BYREF
  char v13; // [rsp+A8h] [rbp+38h] BYREF

  v13 = a4;
  v12 = a3;
  v11 = a2;
  v10 = 0;
  v9 = (char *)this + 16;
  DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v8);
  v5 = *(HOSTVMMONITORMAPPING **)this;
  v7[0] = &v11;
  v7[1] = &v12;
  v7[2] = &v13;
  do
  {
    if ( v5 == this )
      break;
    v6 = v5;
    v5 = *(HOSTVMMONITORMAPPING **)v5;
  }
  while ( (unsigned __int8)lambda_45359a313f17151045e4a29f2155e221_::operator()(v7, v6) );
  DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v8);
}
