/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIContextualProcessor@@@WRL@Microsoft@@QEAA@XZ @ 0x1800820D4
 * Callers:
 *     ??$MakeAndInitialize@VDelegatedInkCanvasProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDelegatedInkCanvasProcessor@@@Z @ 0x180082038 (--$MakeAndInitialize@VDelegatedInkCanvasProcessor@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDeleg.c)
 *     ??0MagnifierProcessor@@QEAA@XZ @ 0x1801A5B8C (--0MagnifierProcessor@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IContextualProcessor>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
