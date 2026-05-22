/*
 * XREFs of ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1800250C0
 * Callers:
 *     ??0DWMLegacyInputTarget@@IEAA@KKK_K@Z @ 0x180024904 (--0DWMLegacyInputTarget@@IEAA@KKK_K@Z.c)
 *     ?GetInputSite@DWMLegacyInputTarget@@UEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@XZ @ 0x180025070 (-GetInputSite@DWMLegacyInputTarget@@UEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800163E4 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18001AE40 (-GetInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdN.c)
 *     ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x1800252B0 (-GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002582C (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall DWMLegacyInputTarget::PopulateInputSiteFromWindowId(DWMLegacyInputTarget *this)
{
  struct InputSiteManager *InputSiteManager; // rax
  char *InputSiteFromId; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct InputSiteManager *v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r14
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // r15
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // r12
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rcx
  char v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+40h] BYREF
  __int64 v22; // [rsp+78h] [rbp+48h]

  InputSiteManager = ISMStatics::GetInputSiteManager();
  InputSiteFromId = (char *)InputSiteManager::GetInputSiteFromId(
                              (__int64)InputSiteManager,
                              (__int64)&v21,
                              1u,
                              *((_QWORD *)this + 8));
  v4 = 0LL;
  if ( &v20 != InputSiteFromId )
  {
    v4 = *(_QWORD *)InputSiteFromId;
    *(_QWORD *)InputSiteFromId = 0LL;
  }
  v5 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v4;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( !*((_QWORD *)this + 9) )
  {
    v7 = ISMStatics::GetInputSiteManager();
    v8 = (__int64 *)*((_QWORD *)v7 + 7);
    v9 = (__int64 *)*((_QWORD *)v7 + 8);
    while ( v8 != v9 )
    {
      v10 = *v8;
      v11 = 0LL;
      v21 = 0LL;
      v12 = *(_QWORD *)(v10 + 488);
      v13 = *(_QWORD *)(v10 + 496);
      if ( v12 != v13 )
      {
        while ( 1 )
        {
          v14 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v12 + 8);
          v15 = **v14;
          if ( v11 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
          }
          if ( v15(v14, &GUID_d3573f80_52a7_d2c9_ece4_38e96aede26c, &v21) >= 0 )
            break;
          v12 += 16LL;
          if ( v12 == v13 )
            break;
          v11 = v21;
        }
        v11 = v21;
      }
      v16 = (v11 - 8) & -(__int64)(v11 != 0);
      v22 = v16;
      v17 = v16 + 16;
      if ( v16 )
      {
        (**(void (__fastcall ***)(__int64))v17)(v16 + 16);
        v11 = v21;
      }
      if ( v11 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v16
        && BamoWindowsMessageDeliveryProxy::GetHwnd((BamoWindowsMessageDeliveryProxy *)(v16 + 8)) == *((_QWORD *)this + 8) )
      {
        v18 = *v8;
        if ( *((_QWORD *)this + 9) != v18 )
        {
          v21 = v18;
          wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v21);
          v19 = *((_QWORD *)this + 9);
          *((_QWORD *)this + 9) = v18;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v16 + 16) + 8LL))(v16 + 16);
        return;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v16 + 16);
      ++v8;
    }
  }
}
