/*
 * XREFs of ?UpdateEnableClearForRenderTargets@CDesktopManager@@QEAAXXZ @ 0x1800B556C
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180049B90 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AB20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShouldClearRenderTargets@CWindowList@@QEBA_NXZ @ 0x18010CBB0 (-ShouldClearRenderTargets@CWindowList@@QEBA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::UpdateEnableClearForRenderTargets(CDesktopManager *this)
{
  __int64 v2; // rdx
  bool ShouldClearRenderTargets; // bp
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+34h] [rbp-14h]
  unsigned int v10; // [rsp+38h] [rbp-10h]

  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( (int)CDWMDisplaySet::GetAllDisplaysNoRef(*((_QWORD *)this + 18), (__int64)&v7) >= 0 )
  {
    ShouldClearRenderTargets = CWindowList::ShouldClearRenderTargets(*((CWindowList **)this + 54));
    if ( v10 )
    {
      v4 = v7;
      v5 = v10;
      do
      {
        v6 = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
        if ( v6 )
        {
          LOBYTE(v2) = ShouldClearRenderTargets;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, v2);
        }
        v4 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 6) + 32LL) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 6) + 32LL));
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v7);
}
