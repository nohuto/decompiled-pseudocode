/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIInputProcessor@@UIInputProcessorDeviceQueryRemove@@@WRL@Microsoft@@QEAA@XZ @ 0x1800977D0
 * Callers:
 *     ??$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@WRL@Microsoft@@YAJPEAPEAVPTPProcessor@@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Z @ 0x1801C56C0 (--$MakeAndInitialize@VPTPProcessor@@V1@AEAPEAUDeviceInfo@@AEAPEAUIInputProcessorHost@@@Details@W.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 20) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>::`vftable'{for `IInputProcessor'};
  *(_QWORD *)(a1 + 8) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IInputProcessor,IInputProcessorDeviceQueryRemove>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IInputProcessorDeviceQueryRemove>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
