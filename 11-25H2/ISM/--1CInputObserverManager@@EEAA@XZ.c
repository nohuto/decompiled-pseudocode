/*
 * XREFs of ??1CInputObserverManager@@EEAA@XZ @ 0x180136300
 * Callers:
 *     ??_GCInputObserverManager@@EEAAPEAXI@Z @ 0x180136350 (--_GCInputObserverManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D588 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CInputObserverManager::~CInputObserverManager(CInputObserverManager *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // r9

  *(_QWORD *)this = &CInputObserverManager::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &BamoInputObserverManagerPrincipal::`vftable'{for `IInputObserverManagerPrincipal'};
  operator delete(qword_1802479A8, (const struct std::nothrow_t *)8);
  wil::com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>::~com_ptr_t<Microsoft::BamoImpl::ConnectionIndirector,wil::err_returncode_policy>(
    (volatile signed __int32 **)this + 4,
    v2,
    v3,
    v4);
}
