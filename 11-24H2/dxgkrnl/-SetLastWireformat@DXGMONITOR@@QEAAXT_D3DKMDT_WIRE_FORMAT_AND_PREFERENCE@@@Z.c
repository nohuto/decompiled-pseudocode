/*
 * XREFs of ?SetLastWireformat@DXGMONITOR@@QEAAXT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1403D3CF4
 * Callers:
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x14018B338 (-MonitorSetLastWireformatAndColorspace@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_.c)
 *     ?MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x14026F4F8 (-MonitorSetLastWireformat@@YAJPEAXIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1403D3B8C (-MonitorSetLastWireformatAndColorspace@@YAJPEAUHDXGMONITOR__@@T_D3DKMDT_WIRE_FORMAT_AND_PREFEREN.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x14002FE7C (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x140034CD4 (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?reset@?$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z @ 0x14004F6B0 (-reset@-$auto_rc@UDXGK_GAMMA_RAMP@@@@QEAAXPEAUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ @ 0x1403D3DA4 (-OnOutputColorspaceUpdated@MonitorColorState@DxgMonitor@@QEAAXXZ.c)
 */

void __fastcall DXGMONITOR::SetLastWireformat(DXGMONITOR *this, union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2)
{
  __int64 v3; // rbx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  *((union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)this + 115) = a2;
  DxgMonitor::MonitorColorState::OnOutputColorspaceUpdated(*((DxgMonitor::MonitorColorState **)this + 28));
  v3 = *((_QWORD *)this + 31);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v4, (struct DXGFASTMUTEX *)(v3 + 96));
  auto_rc<DXGK_GAMMA_RAMP>::reset((ReferenceCounted **)(v3 + 144), 0LL);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v4);
}
