/*
 * XREFs of ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EF770
 * Callers:
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800EAABC (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 * Callees:
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180008BA8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005B718 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800EEE50 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::Shutdown(CConstraintModelResourceManager *this)
{
  char *v2; // rcx
  char *v3; // rcx
  LPCRITICAL_SECTION v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 22) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)v4,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 192));
    *((_DWORD *)this + 70) = 1;
    ATL::CCritSecLock::~CCritSecLock(v4);
    SetThreadpoolWait(*((PTP_WAIT *)this + 22), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 22), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 22));
    *((_QWORD *)this + 22) = 0LL;
  }
  CConstraintModelResourceManager::ReleaseAllResources((struct _RTL_CRITICAL_SECTION *)this);
  v2 = (char *)*((_QWORD *)this + 23);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 23) = 0LL;
  }
  v3 = (char *)*((_QWORD *)this + 8);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
}
