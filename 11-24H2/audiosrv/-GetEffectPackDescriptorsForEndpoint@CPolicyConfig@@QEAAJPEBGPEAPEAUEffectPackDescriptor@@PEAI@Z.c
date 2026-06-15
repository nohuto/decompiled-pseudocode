/*
 * XREFs of ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x18003F360
 * Callers:
 *     s_epmGetEffectPackDescriptorsForEndpoint @ 0x18007F680 (s_epmGetEffectPackDescriptorsForEndpoint.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@Z @ 0x18003F5A0 (-GetEffectPacks@CEndpointCharacteristics@@QEAAJAEAV-$vector@V-$shared_ptr@VEffectPack@@@std@@V-$.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@VEffectPack@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@VEffectPack@@@std@@@0@@Z @ 0x18003F674 (--$_Destroy_range@V-$allocator@V-$shared_ptr@VEffectPack@@@std@@@std@@@std@@YAXPEAV-$shared_ptr@.c)
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetEffectPackDescriptorsForEndpoint(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        struct EffectPackDescriptor **a3,
        unsigned int *a4)
{
  int EffectPacks; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct EffectPackDescriptor *v11; // rax
  struct EffectPackDescriptor *v12; // rsi
  __int64 v13; // rbx
  struct EffectPackDescriptor *i; // r14
  __int128 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  __int64 v19; // [rsp+80h] [rbp+30h] BYREF

  *a3 = 0LL;
  *a4 = 0;
  v19 = 0LL;
  if ( (*(int (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD, __int64 *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                         + 24LL))(
         g_pEndpointCharacteristicsCache,
         a2,
         0LL,
         0LL,
         &v19) >= 0 )
  {
    v16 = 0LL;
    v17 = 0LL;
    EffectPacks = CEndpointCharacteristics::GetEffectPacks(v19, &v16);
    v7 = EffectPacks;
    if ( EffectPacks < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7A2,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)EffectPacks);
      if ( (_QWORD)v16 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v16, *((_QWORD *)&v16 + 1));
        std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF0uLL));
        v16 = 0LL;
        v17 = 0LL;
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    else
    {
      v8 = *((_QWORD *)&v16 + 1);
      v9 = v16;
      v10 = (__int64)(*((_QWORD *)&v16 + 1) - v16) >> 4;
      if ( !v10 )
      {
LABEL_9:
        if ( v9 )
        {
          std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v9, v8);
          std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF0uLL));
          v16 = 0LL;
          v17 = 0LL;
        }
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        return 0LL;
      }
      v11 = (struct EffectPackDescriptor *)MIDL_user_allocate(1312 * v10);
      v12 = v11;
      if ( v11 )
      {
        memset_0(v11, 0, 1312 * v10);
        v13 = v16;
        for ( i = v12; ; i = (struct EffectPackDescriptor *)((char *)i + 1312) )
        {
          v8 = *((_QWORD *)&v16 + 1);
          if ( v13 == *((_QWORD *)&v16 + 1) )
            break;
          memcpy_0(i, *(const void **)(*(_QWORD *)v13 + 1568LL), 0x520uLL);
          v13 += 16LL;
        }
        *a3 = v12;
        *a4 = v10;
        v9 = v16;
        goto LABEL_9;
      }
      v7 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7AB,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)0x8007000ELL);
      if ( (_QWORD)v16 )
      {
        std::_Destroy_range<std::allocator<std::shared_ptr<EffectPack>>>(v16, *((_QWORD *)&v16 + 1));
        std::_Deallocate<16,0>((char *)v16, (const struct std::nothrow_t *)((v17 - v16) & 0xFFFFFFFFFFFFFFF0uLL));
        v16 = 0LL;
        v17 = 0LL;
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    }
    return v7;
  }
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  return 2147942487LL;
}
