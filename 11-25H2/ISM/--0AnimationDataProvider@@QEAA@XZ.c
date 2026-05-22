/*
 * XREFs of ??0AnimationDataProvider@@QEAA@XZ @ 0x1800FEB48
 * Callers:
 *     ??$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIAnimationDataProvider@@@Z @ 0x18000CFF0 (--$MakeAndInitialize@VAnimationDataProvider@@UIAnimationDataProvider@@$$V@Details@WRL@Microsoft@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
AnimationDataProvider *__fastcall AnimationDataProvider::AnimationDataProvider(AnimationDataProvider *this)
{
  *((_DWORD *)this + 3) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAnimationDataProvider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &AnimationDataProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  return this;
}
