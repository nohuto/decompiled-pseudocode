/*
 * XREFs of ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140181CE4
 * Callers:
 *     DpiPdoDispatchInternalIoctl @ 0x1404296A0 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140183EDC (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x1403D48D0 (-OnInternalIoctl@MonitorDescriptorState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DxgMonitor::MonitorDescriptorState **this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  unsigned int v9; // ebp
  __int64 v10; // rdi
  unsigned int v12; // ebx
  __int64 v13; // rax

  v9 = a3;
  v10 = (unsigned int)a2;
  v12 = -1073741637;
  *a7 = 0LL;
  v13 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v13 + 24) = v10;
  *(_QWORD *)(v13 + 32) = this;
  WdLogGlobalForLineNumber = 2137;
  if ( (unsigned int)v10 > 0x23241F )
  {
    if ( (_DWORD)v10 == 2303011 || (_DWORD)v10 == 2303015 || (_DWORD)v10 == 2303019 )
      return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v10, v9, a4, a5, a6, a7);
    if ( (_DWORD)v10 == 2303187 )
    {
      if ( v9 >= 0x20 )
      {
        if ( *a4 != 3 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2164;
        }
        DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(this[28], a4[1], a8);
        return 0;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  else if ( (_DWORD)v10 == 2303007
         || (_DWORD)v10 == 2302979
         || (_DWORD)v10 == 2302991
         || (_DWORD)v10 == 2302995
         || (_DWORD)v10 == 2302999
         || (_DWORD)v10 == 2303003 )
  {
    return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v10, v9, a4, a5, a6, a7);
  }
  return v12;
}
