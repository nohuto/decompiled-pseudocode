/*
 * XREFs of ??$_Emplace_reallocate@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAPEAVWeakRef@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x180018198
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@@Z @ 0x18001735C (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEAUIAudioSessionInfo@@PEAPEAUIPropertyStore@@.c)
 *     ?GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixProxy@@@Z @ 0x180017A20 (-GetProcessSubmix@CBaseStreamGroupProxy@@UEAAJPEAUProcessSubmixParams@@KPEAPEAUIProcessSubmixPro.c)
 *     ?AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z @ 0x1800593D0 (-AddSaDevice@CDeviceGraphObjectsStore@@UEAAJPEBUSaDeviceParams@@AEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z @ 0x180059540 (-AddStreamGroup@CDeviceGraphObjectsStore@@UEAAJAEAVWeakRef@WRL@Microsoft@@@Z.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800C6790 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 *     _lambda_c4f66075b064f94c83b6e478b87a895c_::operator() @ 0x18010BA98 (_lambda_c4f66075b064f94c83b6e478b87a895c_--operator().c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$construct@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@?$_Default_allocator_traits@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@1@QEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@$$QEAV345@@Z @ 0x18001836C (--$construct@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V123@@-$_Default_allocator_traits@V-$all.c)
 *     ??$construct@VWeakRef@WRL@Microsoft@@AEBV123@@?$_Default_allocator_traits@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@VWeakRef@WRL@Microsoft@@@1@QEAVWeakRef@WRL@Microsoft@@AEBV345@@Z @ 0x180018388 (--$construct@VWeakRef@WRL@Microsoft@@AEBV123@@-$_Default_allocator_traits@V-$allocator@VWeakRef@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAPEAV?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@AEAV?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@0@AEA_K@Z @ 0x1800A2284 (--$_Allocate_at_least_helper@V-$allocator@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil.c)
 *     ?_Xlength@?$vector@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@V?$allocator@V?$unique_ptr@$$BY0A@PEAGU?$function_deleter@P6AXPEAX@Z$1?MIDL_user_free@@YAX0@Z@wil@@@wistd@@@std@@@std@@CAXXZ @ 0x1800B5290 (-_Xlength@-$vector@V-$unique_ptr@$$BY0A@PEAGU-$function_deleter@P6AXPEAX@Z$1-MIDL_user_free@@YAX.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::WeakRef>::_Emplace_reallocate<Microsoft::WRL::WeakRef const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 *v15; // r9
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 *v23; // rbx
  __int64 *v24; // r14
  __int64 v26; // r9
  __int64 *v27; // rcx
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  __int64 v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+88h] [rbp+20h]

  v4 = a2;
  v6 = a2 - *a1;
  v7 = a1[1] - *a1;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<wistd::unique_ptr<unsigned short * [0],wil::function_deleter<void (*)(void *),&void MIDL_user_free(void *)>>>::_Xlength();
  v30 = v7 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v8 = v10 + v9;
    if ( v10 + v9 < v7 + 1 )
      v8 = v7 + 1;
  }
  v29 = v8;
  v28 = v8;
  v11 = std::_Allocate_at_least_helper<std::allocator<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>>(
          v9,
          &v28);
  v12 = v11 + 8 * v6;
  v13 = v12 + 8;
  std::_Default_allocator_traits<std::allocator<Microsoft::WRL::WeakRef>>::construct<Microsoft::WRL::WeakRef,Microsoft::WRL::WeakRef const &>(
    v14,
    v12,
    a3);
  v28 = v12;
  v15 = a1[1];
  v16 = *a1;
  v17 = v11;
  if ( v4 == v15 )
  {
    while ( 1 )
    {
      v22 = v17;
      if ( v16 == v15 )
        break;
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        v17,
        v17,
        v16,
        v15);
      v17 = v20 + 8;
      v16 = (__int64 *)(v21 + 8);
    }
  }
  else
  {
    while ( v16 != v4 )
    {
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        v17,
        v17,
        v16,
        v15);
      v17 = v18 + 8;
      v16 = (__int64 *)(v19 + 8);
    }
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v17, v17);
    v28 = v11;
    v27 = a1[1];
    while ( 1 )
    {
      v22 = v13;
      if ( v4 == v27 )
        break;
      std::_Default_allocator_traits<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>::construct<Microsoft::WRL::ComPtr<ISaDeviceProxy>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        v27,
        v13,
        v4,
        v26);
      v13 += 8LL;
      ++v4;
    }
    v17 = v13;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v17, v22);
  v23 = *a1;
  if ( *a1 )
  {
    v24 = a1[1];
    while ( v23 != v24 )
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v23++);
    std::_Deallocate<16,0>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = (__int64 *)v11;
  a1[1] = (__int64 *)(v11 + 8 * v30);
  a1[2] = (__int64 *)(v11 + 8 * v8);
  return v12;
}
