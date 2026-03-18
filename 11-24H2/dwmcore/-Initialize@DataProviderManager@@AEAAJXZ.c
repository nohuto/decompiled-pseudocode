/*
 * XREFs of ?Initialize@DataProviderManager@@AEAAJXZ @ 0x1800EE61C
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800EE49C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000CD4C (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializeServer@DataProviderManager@@AEAAJXZ @ 0x1800EE72C (-InitializeServer@DataProviderManager@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderManager::Initialize(DataProviderManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = DataProviderManager::InitializeServer(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 3) + 248LL) = this;
    v4 = DefaultHeap::AllocClear(0x40uLL);
    v5 = v4;
    if ( !v4 )
      ModuleFailFastForHRESULT(-2147024882, retaddr);
    v6 = *((_QWORD *)this + 3);
    *v4 = &BamoDataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
    v4[1] = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
    v4[2] = &Microsoft::BamoImpl::BamoPrincipalImpl::`vftable';
    *((_DWORD *)v4 + 6) = 1;
    v7 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6) + 96);
    v5[4] = v7;
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *((_DWORD *)v5 + 10) = 0;
    v5[6] = 0LL;
    v5[2] = &BamoImpl::BamoDataProviderRegistrarPrincipalImpl::`vftable';
    *v5 = &DataProviderRegistrarPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
    v5[1] = &BamoDataProviderRegistrarPrincipal::`vftable'{for `IDataProviderRegistrarPrincipal'};
    v8 = *((_QWORD *)this + 4);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)this + 4) = v5;
    result = 0LL;
    v5[7] = this;
  }
  return result;
}
