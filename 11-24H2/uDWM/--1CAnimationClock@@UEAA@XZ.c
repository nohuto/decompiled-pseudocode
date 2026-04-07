/*
 * XREFs of ??1CAnimationClock@@UEAA@XZ @ 0x180070188
 * Callers:
 *     ??_GCAnimationClock@@UEAAPEAXI@Z @ 0x180070150 (--_GCAnimationClock@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x180070218 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z @ 0x18007E394 (-SetTimerCallback@CTimer@@QEAAJPEAUITimerCallbackListener@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CAnimationClock::~CAnimationClock(CAnimationClock *this)
{
  CTimer *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &CAnimationClock::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAnimationClock::`vftable'{for `ITimerCallbackListener'};
  v2 = (CTimer *)*((_QWORD *)this + 8);
  if ( v2 )
    CTimer::SetTimerCallback(v2, 0LL);
  v3 = (CBaseObject *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
  *((_QWORD *)this + 9) = 0LL;
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((char *)this + 112);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  CBaseObject::~CBaseObject(this);
}
