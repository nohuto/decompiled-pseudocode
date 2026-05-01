/*
 * XREFs of ?Add@?$AgileEventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x18000159C
 * Callers:
 *     ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180012240 (-add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 *     ?add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x180019480 (-add_AppMemoryUsageDecreased@CMemoryManager@System@Windows@@UEAAJPEAU-$IEventHandler@PEAUIInspec.c)
 * Callees:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x1800017B8 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180001AE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$CreateAgileHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1800021FC (--$CreateAgileHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@@Details@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 )
    return 2147942487LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v10);
  v6 = Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<IInspectable *>>(a2, &v10);
  v7 = v10;
  v8 = v6;
  if ( v6 >= 0 )
  {
    if ( v10 )
      v8 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
             a1,
             v10,
             *(_QWORD *)(*(_QWORD *)a2 + 24LL),
             a3);
    else
      v8 = -2147024809;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
