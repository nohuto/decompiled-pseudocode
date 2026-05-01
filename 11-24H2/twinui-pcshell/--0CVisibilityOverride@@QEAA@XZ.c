/*
 * XREFs of ??0CVisibilityOverride@@QEAA@XZ @ 0x180079D00
 * Callers:
 *     ??$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Details@WRL@Microsoft@@YAJPEAPEAUIVisibilityOverride@@AEAPEAUIImmersiveApplicationVisibilityOverride@@@Z @ 0x180079BF4 (--$MakeAndInitialize@VCVisibilityOverride@@UIVisibilityOverride@@AEAPEAUIImmersiveApplicationVis.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIVisibilityOverride@@UIImmersiveSessionIdleNotification@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180079BD4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UI.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CVisibilityOverride *__fastcall CVisibilityOverride::CVisibilityOverride(CVisibilityOverride *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CVisibilityOverride::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CWRLObjectWithSite,IVisibilityOverride,IImmersiveSessionIdleNotification>::`vftable'{for `IVisibilityOverride'};
  *((_QWORD *)this + 4) = &CVisibilityOverride::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSessionIdleNotification>'};
  *((_DWORD *)this + 12) = SHTaskPoolGetUniqueContext();
  *((_BYTE *)this + 52) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 9);
  *((_QWORD *)this + 10) = 0LL;
  *((_WORD *)this + 44) = 0;
  return this;
}
