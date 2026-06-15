/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCCrossProcessBaseMemory@@@WRL@Microsoft@@QEAA@XZ @ 0x180060284
 * Callers:
 *     ??$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x18009EACC (--$MakeAndInitialize@VCCrossProcessKSMemory@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YA.c)
 *     ??$MakeAndInitialize@V?$CCrossProcessClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x180165790 (--$MakeAndInitialize@V-$CCrossProcessClientMemory@UControlData_V0@@@@UICrossProcessMemory@@$$V@D.c)
 *     ??$MakeAndInitialize@V?$CCrossProcessClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemory@@@Z @ 0x180165830 (--$MakeAndInitialize@V-$CCrossProcessClientMemory@UControlData_V1@@@@UICrossProcessMemory@@$$V@D.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemory@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1800602C4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCrossProcessBaseMemor.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCrossProcessBaseMemory>();
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CCrossProcessBaseMemory>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
