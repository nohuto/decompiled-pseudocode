/*
 * XREFs of ?AddObject@ObjectArray@Discover@PenWorkspace@@QEAAXPEAUIUnknown@@@Z @ 0x1803EEF60
 * Callers:
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1803EE48C (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803EE7E8 (--$_Emplace_reallocate@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIApplic.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall PenWorkspace::Discover::ObjectArray::AddObject(
        PenWorkspace::Discover::ObjectArray *this,
        struct IUnknown *a2)
{
  __int64 *v4; // rdx
  const char *v5; // r9
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v6[0] = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
  v4 = (__int64 *)*((_QWORD *)this + 7);
  if ( v4 == *((__int64 **)this + 8) )
  {
    try
    {
      std::vector<Microsoft::WRL::ComPtr<IApplicationView>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IApplicationView>>(
        (__int64 **)this + 6,
        v4,
        v6);
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x21,
        (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\ObjectArrayPenWorkspaceBroker.h",
        v5);
      return;
    }
  }
  else
  {
    *v4 = 0LL;
    if ( v4 != v6 )
    {
      *v4 = (__int64)a2;
      v6[0] = 0LL;
    }
    *((_QWORD *)this + 7) += 8LL;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v6);
}
