/*
 * XREFs of ??$CreateClassFactory@V?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180177B60
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@V?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@V12@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@@wil@@@Z @ 0x180177C50 (--$MakeAndInitialize@V-$wrl_factory_for_winrt_com_class@UPenMenuSystemTrayManager@implementation.c)
 *     ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180177D10 (-Release@-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::CreateClassFactory<wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>>(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // ebx
  void (*v8)(void); // rax
  _DWORD *v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  void (__fastcall *v13)(_DWORD *); // rax
  _DWORD *v14; // [rsp+20h] [rbp-18h] BYREF

  v14 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>,wil::wrl_factory_for_winrt_com_class<winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager>,>(&v14);
  if ( v7 >= 0 )
  {
    v10 = v14;
    v14[5] = *a1;
    v11 = (**(__int64 (__fastcall ***)(_DWORD *, __int64, __int64))v10)(v10, a3, a4);
    v12 = v11;
    if ( (*(_BYTE *)a1 & 1) != 0 )
    {
      if ( v11 < 0 )
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
    {
      v13 = *(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v13 == (char *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release )
        Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v10);
      else
        v13(v10);
    }
    return v12;
  }
  else
  {
    if ( v14 )
    {
      v8 = *(void (**)(void))(*(_QWORD *)v14 + 16LL);
      if ( (char *)v8 == (char *)Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release )
        Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(v14);
      else
        v8();
    }
    return (unsigned int)v7;
  }
}
