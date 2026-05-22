/*
 * XREFs of ?GetFeatures@BamoControllerNavigationOverrideProxy@@UEAAIXZ @ 0x180046530
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800465A0 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180046B80 (-EnterLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall BamoControllerNavigationOverrideProxy::GetFeatures(BamoControllerNavigationOverrideProxy *this)
{
  __int64 v2; // rbx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rsi
  unsigned int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v6 = 0LL;
  v3 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(v2 + 32);
  if ( *((_DWORD *)v3 + 46) != GetCurrentThreadId() )
  {
    v6 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    Microsoft::BamoImpl::BaseBamoConnectionImpl::EnterLock(v3);
  }
  v4 = *((_DWORD *)this + 11);
  Microsoft::BamoImpl::InternalLock::~InternalLock((Microsoft::BamoImpl::InternalLock *)&v6);
  return v4;
}
