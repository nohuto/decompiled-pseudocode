/*
 * XREFs of ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18006643C
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x1800A4E38 (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800664E8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x180066524 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180074F3C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioDGProcess::DoShutdownADG(CAudioDGProcess *this)
{
  HANDLE *v1; // rdi
  void *v3; // rdx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (HANDLE *)((char *)this + 88);
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( *((_QWORD *)this + 16) )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 96LL))(ThreadPool);
      *((_QWORD *)this + 16) = 0LL;
    }
    v5 = 0;
    if ( CAudioDGProcess::WaitForADGStartup(this, &v5) >= 0 )
      wil::details::SetEvent(*((wil::details **)this + 15), v3);
    WaitForSingleObjectEx(*v1, 0xFFFFFFFF, 0);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      v1,
      0LL);
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 36) = GetTickCount();
  }
  return 0LL;
}
