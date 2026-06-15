/*
 * XREFs of ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180042244
 * Callers:
 *     s_epmGetEffectPackDescriptorsForEndpoint @ 0x180042100 (s_epmGetEffectPackDescriptorsForEndpoint.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x180042484 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x180042554 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetEffectPackDescriptorsForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor **a3,
        unsigned int *a4)
{
  int EffectPacks; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  struct EffectPackDescriptor *v13; // rax
  struct EffectPackDescriptor *v14; // rsi
  __int64 v15; // rbx
  struct EffectPackDescriptor *i; // r14
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int128 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v25; // [rsp+80h] [rbp+30h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v25 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                         + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v25) >= 0 )
  {
    v22 = 0LL;
    v23 = 0LL;
    EffectPacks = CEndpointCharacteristics::GetEffectPacks(v25, &v22);
    v9 = EffectPacks;
    if ( EffectPacks < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x780,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)EffectPacks);
      if ( (_QWORD)v22 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v22, *((_QWORD *)&v22 + 1), v18, v19);
        std::_Deallocate<16,0>((char *)v22, (const struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL));
        v22 = 0LL;
        v23 = 0LL;
      }
      if ( v25 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
    }
    else
    {
      v10 = *((_QWORD *)&v22 + 1);
      v11 = v22;
      v12 = (__int64)(*((_QWORD *)&v22 + 1) - v22) >> 4;
      if ( !v12 )
      {
LABEL_9:
        if ( v11 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v11, v10, v7, v8);
          std::_Deallocate<16,0>((char *)v22, (const struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL));
          v22 = 0LL;
          v23 = 0LL;
        }
        if ( v25 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        return 0LL;
      }
      v13 = (struct EffectPackDescriptor *)MIDL_user_allocate(1312 * v12);
      v14 = v13;
      if ( v13 )
      {
        memset_0(v13, 0, 1312 * v12);
        v15 = v22;
        for ( i = v14; ; i = (struct EffectPackDescriptor *)((char *)i + 1312) )
        {
          v10 = *((_QWORD *)&v22 + 1);
          if ( v15 == *((_QWORD *)&v22 + 1) )
            break;
          memcpy_0(i, *(const void **)(*(_QWORD *)v15 + 1568LL), 0x520uLL);
          v15 += 16LL;
        }
        *a3 = v14;
        *a4 = v12;
        v11 = v22;
        goto LABEL_9;
      }
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x789,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x8007000ELL);
      if ( (_QWORD)v22 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v22, *((_QWORD *)&v22 + 1), v20, v21);
        std::_Deallocate<16,0>((char *)v22, (const struct std::nothrow_t *)((v23 - v22) & 0xFFFFFFFFFFFFFFF0uLL));
        v22 = 0LL;
        v23 = 0LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
    }
    return v9;
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return 2147942487LL;
}
