/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180027E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180028120 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  struct KnownGameList::IGameEntry *v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  int v10; // r14d
  int v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v18; // [rsp+58h] [rbp+10h] BYREF
  void *v19; // [rsp+60h] [rbp+18h] BYREF
  _DWORD *v20; // [rsp+68h] [rbp+20h]

  v18 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    if ( *((_DWORD *)this + 6) )
    {
      v4 = 0LL;
      v20 = 0LL;
      v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      v19 = v5;
      if ( v5 )
      {
        *(_QWORD *)v5 = &Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
        v5[3] = 1;
        *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IGameEntry>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v6 = &CGameEntry::`vftable';
        *((_QWORD *)v6 + 2) = 0LL;
        *((_QWORD *)v6 + 3) = 0LL;
        *((_QWORD *)v6 + 4) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        v6[12] = 0;
        *((_WORD *)v6 + 26) = 0;
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        *((_QWORD *)v6 + 9) = 0LL;
        v19 = 0LL;
        v7 = *((_DWORD *)this + 6);
        v8 = *((_QWORD *)this + 2);
        *((_QWORD *)v6 + 2) = v8;
        *((_QWORD *)v6 + 3) = v8;
        v6[8] = v7;
        v9 = CGameEntry::CompleteInitialization((CGameEntry *)v6);
        v10 = v9;
        if ( v9 >= 0 )
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
          v4 = (struct KnownGameList::IGameEntry *)v6;
          v20 = v6;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
          v10 = 0;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4B0,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v9,
            v16);
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
          Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v19);
        }
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v19);
        v10 = -2147024882;
      }
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x603,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v10,
          v16);
        if ( v4 )
          (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
        return (unsigned int)v10;
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(
                v4,
                &v18);
        v12 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x605,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v11,
            v16);
          if ( v4 )
            (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
        }
        else
        {
          v13 = *((_DWORD *)this + 6);
          v14 = v18;
          if ( v18 <= v13 )
          {
            *((_DWORD *)this + 6) = v13 - v18;
            *((_QWORD *)this + 2) += v14;
            *a2 = v4;
            return 0LL;
          }
          v12 = -2147024883;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x607,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)0x8007000DLL,
            v16);
          if ( v4 )
            (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
        }
        return v12;
      }
    }
    else
    {
      return 1LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      v16);
    return 2147500035LL;
  }
}
