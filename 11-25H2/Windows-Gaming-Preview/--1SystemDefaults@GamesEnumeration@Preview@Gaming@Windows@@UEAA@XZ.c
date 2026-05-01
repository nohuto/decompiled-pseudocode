/*
 * XREFs of ??1SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003B3BC
 * Callers:
 *     ??_ESystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003B460 (--_ESystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::~SystemDefaults(
        Windows::Gaming::Preview::GamesEnumeration::SystemDefaults *this)
{
  struct _TP_WORK *v2; // rdi
  __int64 v3; // rcx

  *(_QWORD *)this = &Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::`vftable';
  EnterCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  v2 = Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_populateThread;
  LeaveCriticalSection(&Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::_initializeLock);
  if ( v2 )
    WaitForThreadpoolWorkCallbacks(v2, 0);
  v3 = *((_QWORD *)this + 5);
  if ( v3 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  WindowsDeleteString(*((HSTRING *)this + 4));
  *((_QWORD *)this + 4) = 0LL;
}
