/*
 * XREFs of ??$MakeAndInitialize@VCEndpointCharacteristicsCache@@UIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointCharacteristicsCache@@AEAPEAUIPolicyConfigInternal@@AEAPEAVEffectPackConfigurationManager@@AEAPEAUIEndpointResourceManagerProvider@@AEAPEBU_tlgProvider_t@@@Z @ 0x1801262CC
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CEndpointCharacteristicsCache@@QEAA@XZ @ 0x18012840C (--0CEndpointCharacteristicsCache@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@PEAVEffectPackConfigurationManager@@PEAUIEndpointResourceManagerProvider@@PEBU_tlgProvider_t@@@Z @ 0x18012E584 (-RuntimeClassInitialize@CEndpointCharacteristicsCache@@QEAAJPEAUIPolicyConfigInternal@@PEAVEffec.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointCharacteristicsCache,IEndpointCharacteristicsCache,IPolicyConfigInternal * &,EffectPackConfigurationManager * &,IEndpointResourceManagerProvider * &,_tlgProvider_t const * &>(
        void *a1,
        struct IPolicyConfigInternal **a2,
        struct EffectPackConfigurationManager **a3,
        struct IEndpointResourceManagerProvider **a4,
        const struct _tlgProvider_t **a5)
{
  void *v8; // rax
  int v9; // edi
  CEndpointCharacteristicsCache *v10; // rbx
  void *v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = a1;
  g_pEndpointCharacteristicsCache = 0LL;
  v8 = operator new(0x78uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v8;
  if ( v8 )
  {
    v10 = CEndpointCharacteristicsCache::CEndpointCharacteristicsCache((CEndpointCharacteristicsCache *)v8);
    v12 = 0LL;
    v9 = CEndpointCharacteristicsCache::RuntimeClassInitialize(v10, *a2, *a3, *a4, *a5);
    if ( v9 >= 0 )
    {
      v9 = (**(__int64 (__fastcall ***)(CEndpointCharacteristicsCache *, GUID *, PVOID *))v10)(
             v10,
             &GUID_e36f3578_1b06_4bb1_9661_3981c823ba47,
             &g_pEndpointCharacteristicsCache);
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    else if ( v10 )
    {
      (*(void (__fastcall **)(CEndpointCharacteristicsCache *))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v12);
  return (unsigned int)v9;
}
