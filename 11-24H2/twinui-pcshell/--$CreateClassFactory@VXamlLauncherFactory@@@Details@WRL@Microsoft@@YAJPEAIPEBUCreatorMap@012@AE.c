/*
 * XREFs of ??$CreateClassFactory@VXamlLauncherFactory@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180459680
 * Callers:
 *     <none>
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180177D10 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@Details@23@V5623@V5623@V5623@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801C59E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$05@WRL@Microsoft@@$0A@UIClassFactory@@VNil@D.c)
 *     ??$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherFactory@@@Z @ 0x180459B30 (--$MakeAndInitialize@VXamlLauncherFactory@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlLauncherF.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<XamlLauncherFactory>(
        _DWORD *a1,
        __int64 a2,
        struct _GUID *a3,
        _QWORD *a4)
{
  __int64 v7; // rdx
  int v8; // ebx
  _DWORD *v10; // rbx
  __int64 v11; // rdx
  int CanCastTo; // edi
  __int64 v13[3]; // [rsp+20h] [rbp-18h] BYREF

  v13[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<XamlLauncherFactory,XamlLauncherFactory,>(v13);
  if ( v8 >= 0 )
  {
    v10 = (_DWORD *)v13[0];
    *(_DWORD *)(v13[0] + 20) = *a1;
    *a4 = 0LL;
    if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      *a4 = v10;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<6>,0,IClassFactory,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::CanCastTo(
                    (__int64)v10,
                    a3,
                    a4);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    }
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( CanCastTo < 0 )
      {
        v10[5] &= 0xFFFFFFFA;
      }
      else if ( (*(_BYTE *)a1 & 4) != 0 )
      {
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
      }
      else
      {
        v10 = 0LL;
      }
    }
    if ( v10 )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        (__int64)v10,
        v11);
    return (unsigned int)CanCastTo;
  }
  else
  {
    if ( v13[0] )
      Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        v13[0],
        v7);
    return (unsigned int)v8;
  }
}
