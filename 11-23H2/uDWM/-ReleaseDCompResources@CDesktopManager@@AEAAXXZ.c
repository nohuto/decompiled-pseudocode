/*
 * XREFs of ?ReleaseDCompResources@CDesktopManager@@AEAAXXZ @ 0x1800B50B4
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800B36AC (--1CDesktopManager@@EEAA@XZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800B4D00 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CDWMDisplaySet@@QEBAXXZ @ 0x180028A88 (-Release@CDWMDisplaySet@@QEBAXXZ.c)
 *     ?GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV?$DynArray@PEAVCDWMDisplay@@$0A@@@@Z @ 0x18002AB20 (-GetAllDisplaysNoRef@CDWMDisplaySet@@QEBAJPEAV-$DynArray@PEAVCDWMDisplay@@$0A@@@@Z.c)
 *     ?SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z @ 0x18002ABC4 (-SetDcompTarget@CDWMDisplay@@QEAAXPEAUIDCompositionRenderTargetPartner@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::ReleaseDCompResources(CDesktopManager *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  CDWMDisplay **v5; // rdi
  __int64 v6; // rsi
  CBaseObject *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  CDWMDisplaySet *v12; // rcx
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+34h] [rbp-14h]
  unsigned int v16; // [rsp+38h] [rbp-10h]

  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, 0LL);
    v3 = *((_QWORD *)this + 10);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      *((_QWORD *)this + 10) = 0LL;
    }
  }
  v4 = *((_QWORD *)this + 18);
  if ( v4 && (int)CDWMDisplaySet::GetAllDisplaysNoRef(v4, (__int64)&v13) >= 0 && v16 )
  {
    v5 = (CDWMDisplay **)v13;
    v6 = v16;
    do
    {
      CDWMDisplay::SetDcompTarget(*v5++, 0LL);
      --v6;
    }
    while ( v6 );
  }
  v7 = (CBaseObject *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    CBaseObject::Release(v7);
    *((_QWORD *)this + 12) = 0LL;
  }
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    *((_QWORD *)this + 11) = 0LL;
  }
  v9 = *((_QWORD *)this + 6);
  if ( v9 )
  {
    v10 = *(_QWORD *)(v9 + 32);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
  }
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    *((_QWORD *)this + 17) = 0LL;
  }
  v12 = (CDWMDisplaySet *)*((_QWORD *)this + 18);
  if ( v12 )
  {
    CDWMDisplaySet::Release(v12);
    *((_QWORD *)this + 18) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>(&v13);
}
