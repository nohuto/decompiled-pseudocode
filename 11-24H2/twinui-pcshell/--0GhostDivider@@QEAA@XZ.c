/*
 * XREFs of ??0GhostDivider@@QEAA@XZ @ 0x18053D3FC
 * Callers:
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1802A33F0 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18003B754 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIImmersiveApplication@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

GhostDivider *__fastcall GhostDivider::GhostDivider(GhostDivider *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IImmersiveApplication>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGhostDivider>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &GhostDivider::`vftable'{for `Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IGhostDivider>'};
  *((_QWORD *)this + 2) = &GhostDivider::`vftable'{for `CWRLImpWndProc<GhostDivider>'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 100LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_WORD *)this + 46) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
