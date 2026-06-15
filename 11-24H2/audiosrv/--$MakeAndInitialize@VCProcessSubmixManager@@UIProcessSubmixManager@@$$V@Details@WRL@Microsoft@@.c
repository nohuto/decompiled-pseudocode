/*
 * XREFs of ??$MakeAndInitialize@VCProcessSubmixManager@@UIProcessSubmixManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIProcessSubmixManager@@@Z @ 0x1800ACC04
 * Callers:
 *     ?InitializeDeviceGraphManager@@YAJXZ @ 0x1800F7870 (-InitializeDeviceGraphManager@@YAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18000B60C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CProcessSubmixManager,IProcessSubmixManager,>(char *a1)
{
  char *v1; // rax
  char *v2; // rbx
  unsigned int v3; // edi
  char *v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  g_ProcessSubmixManager = 0LL;
  v1 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v2 = v1;
  v5 = v1;
  if ( v1 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)v1);
    *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IProcessSubmixManager>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v2 = &CProcessSubmixManager::`vftable';
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 16), 0, 0);
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    *((_QWORD *)v2 + 9) = 0LL;
    *((_QWORD *)v2 + 10) = 0LL;
    v5 = 0LL;
    v3 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IProcessSubmixManager **))v2)(
           v2,
           &GUID_166bfe2a_d2e3_4958_97eb_1b46fe5b5578,
           &g_ProcessSubmixManager);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  else
  {
    v3 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>((void **)&v5);
  return v3;
}
