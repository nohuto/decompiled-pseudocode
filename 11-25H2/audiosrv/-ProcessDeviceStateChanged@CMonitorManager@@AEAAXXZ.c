/*
 * XREFs of ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18002CE3C
 * Callers:
 *     ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18002CE00 (-OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18002C510 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002CFAC (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18002CFE4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAA?AV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@XZ @ 0x18002D170 (-RemoveHead@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtr.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x18002E4FC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002F408 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::ProcessDeviceStateChanged(CMonitorManager *this)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v5; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-10h] BYREF
  char v7; // [rsp+38h] [rbp-8h]
  CMonitorManager::DeviceStateChangedContext *v8; // [rsp+60h] [rbp+20h] BYREF
  __int64 v9; // [rsp+68h] [rbp+28h]

  v6 = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v6);
  if ( *((_DWORD *)this + 14) == 1 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
    v5 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    if ( *((_BYTE *)this + 248) )
    {
      ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&lpCriticalSection);
      ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v6);
      return;
    }
    *((_BYTE *)this + 248) = 1;
    while ( *((_QWORD *)this + 27) )
    {
      v9 = 0LL;
      v2 = (__int64 *)ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveHead(
                        (char *)this + 200,
                        &v8);
      v3 = *v2;
      *v2 = 0LL;
      v9 = v3;
      if ( v8 )
        CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v8);
      v8 = 0LL;
      LeaveCriticalSection(lpCriticalSection);
      v5 = 0;
      if ( (*(_BYTE *)(v3 + 8) & 0xA) != 0 )
      {
        CMonitorManager::HandleDeviceRemoved(this, *(const unsigned __int16 **)v3);
      }
      else if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
      {
        CMonitorManager::HandleDeviceAdded(this, *(const unsigned __int16 **)v3);
      }
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'((CMonitorManager::DeviceStateChangedContext *)v3);
    }
    *((_BYTE *)this + 248) = 0;
    if ( v5 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v7 )
    LeaveCriticalSection(v6);
}
