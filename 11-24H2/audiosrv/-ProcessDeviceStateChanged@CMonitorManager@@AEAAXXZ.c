/*
 * XREFs of ?ProcessDeviceStateChanged@CMonitorManager@@AEAAXXZ @ 0x18000A9BC
 * Callers:
 *     ?OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000A980 (-OnHandleDeviceStateChanged@CMonitorManager@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180009508 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?RemoveHead@?$CAtlList@V?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V?$CAutoPtrElementTraits@UDeviceStateChangedContext@CMonitorManager@@@2@@ATL@@QEAA?AV?$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@2@XZ @ 0x18000A6E8 (-RemoveHead@-$CAtlList@V-$CAutoPtr@UDeviceStateChangedContext@CMonitorManager@@@ATL@@V-$CAutoPtr.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x18000A78C (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A940 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z @ 0x18000B620 (--_GDeviceStateChangedContext@CMonitorManager@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMonitorManager::ProcessDeviceStateChanged(CMonitorManager *this)
{
  __int64 *v2; // rax
  unsigned int v3; // edx
  __int64 v4; // rdi
  unsigned int v5; // edx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-20h] BYREF
  char v7; // [rsp+28h] [rbp-18h]
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-10h] BYREF
  char v9; // [rsp+38h] [rbp-8h]
  CMonitorManager::DeviceStateChangedContext *v10; // [rsp+60h] [rbp+20h] BYREF
  __int64 v11; // [rsp+68h] [rbp+28h]

  v8 = (LPCRITICAL_SECTION)((char *)this + 16);
  v9 = 0;
  ATL::CCritSecLock::Lock(&v8);
  if ( *((_DWORD *)this + 14) == 1 )
  {
    lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 160);
    v7 = 0;
    ATL::CCritSecLock::Lock(&lpCriticalSection);
    if ( *((_BYTE *)this + 248) )
    {
      ATL::CCritSecLock::~CCritSecLock(&lpCriticalSection);
      ATL::CCritSecLock::~CCritSecLock(&v8);
      return;
    }
    *((_BYTE *)this + 248) = 1;
    while ( *((_QWORD *)this + 27) )
    {
      v11 = 0LL;
      v2 = ATL::CAtlList<ATL::CAutoPtr<CMonitorManager::DeviceStateChangedContext>,ATL::CAutoPtrElementTraits<CMonitorManager::DeviceStateChangedContext>>::RemoveHead(
             (__int64)this + 200,
             &v10);
      v4 = *v2;
      *v2 = 0LL;
      v11 = v4;
      if ( v10 )
        CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(v10, v3);
      v10 = 0LL;
      LeaveCriticalSection(lpCriticalSection);
      v7 = 0;
      if ( (*(_BYTE *)(v4 + 8) & 0xA) != 0 )
      {
        CMonitorManager::HandleDeviceRemoved(this, *(unsigned __int16 **)v4);
      }
      else if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
      {
        CMonitorManager::HandleDeviceAdded(this, *(const unsigned __int16 **)v4);
      }
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      CMonitorManager::DeviceStateChangedContext::`scalar deleting destructor'(
        (CMonitorManager::DeviceStateChangedContext *)v4,
        v5);
    }
    *((_BYTE *)this + 248) = 0;
    if ( v7 )
      LeaveCriticalSection(lpCriticalSection);
  }
  if ( v9 )
    LeaveCriticalSection(v8);
}
