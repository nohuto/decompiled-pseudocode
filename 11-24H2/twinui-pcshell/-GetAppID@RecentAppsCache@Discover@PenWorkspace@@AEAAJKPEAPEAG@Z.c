/*
 * XREFs of ?GetAppID@RecentAppsCache@Discover@PenWorkspace@@AEAAJKPEAPEAG@Z @ 0x1803F2D34
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x1803F4350 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 * Callees:
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18005D440 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18005D4A0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetAppID(
        PenWorkspace::Discover::RecentAppsCache *this,
        DWORD a2,
        unsigned __int16 **a3)
{
  HANDLE v6; // rax
  wil::details *v7; // rcx
  unsigned __int16 **v8; // r8
  signed int LastErrorFailHr; // eax
  unsigned int v10; // ebx
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = OpenProcess(0x410u, 0, a2);
  v12 = v6;
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    if ( (int)CallerIdentity::GetProcessAppId(v6, a3, v8) >= 0
      || (LastErrorFailHr = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int16 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 23) + 48LL))(
                              *((_QWORD *)this + 23),
                              a2,
                              a3,
                              0LL,
                              0LL,
                              0LL),
          LastErrorFailHr >= 0) )
    {
      v10 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v7);
  }
  v10 = LastErrorFailHr;
LABEL_7:
  wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v12);
  return v10;
}
