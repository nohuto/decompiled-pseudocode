/*
 * XREFs of ?StartAnimation@GestureHandler@@QEAAXAEAV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@_N@Z @ 0x180144BD8
 * Callers:
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180141440 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 * Callees:
 *     ?FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z @ 0x180058B30 (-FeedAnimationDataIfNeeded@GestureHandler@@AEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsGestureInvalid@GestureHandler@@QEBA_NXZ @ 0x180095778 (-IsGestureInvalid@GestureHandler@@QEBA_NXZ.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18009BE2C (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb___ @ 0x1801441FC (std--for_each_std--_List_const_iterator_std--_List_val_std--_List_simple_types_unsigned_int_____.c)
 *     ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180144440 (--4-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GestureHandler::StartAnimation(GestureHandler *this, __int64 a2, char a3)
{
  char *v6; // rdi
  struct IAnimationDataProvider *AnimationDataProvider; // rsi
  __int64 *v8; // rax
  __int64 (__fastcall *v9)(struct IAnimationDataProvider *, _QWORD **); // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+38h] BYREF

  if ( !GestureHandler::IsGestureInvalid(this) )
  {
    v6 = (char *)this + 248;
    if ( !*((_QWORD *)this + 31) )
    {
      AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
      v8 = (__int64 *)(*(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD **, _QWORD))(*(_QWORD *)AnimationDataProvider + 24LL))(
                        AnimationDataProvider,
                        &v12,
                        0LL);
      Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=((__int64 *)this + 31, v8);
      Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)&v12);
      (*(void (__fastcall **)(struct IAnimationDataProvider *, _QWORD **))(*(_QWORD *)AnimationDataProvider + 64LL))(
        AnimationDataProvider,
        &v14);
      v12 = v14;
      if ( v14 )
        (*(void (__fastcall **)(_QWORD *))*v14)(v14);
      std::for_each_std::_List_const_iterator_std::_List_val_std::_List_simple_types_unsigned_int_______lambda_1f06d20aa2c7b6f65f005431986a59fb___(
        &v13,
        **(__int64 ***)(a2 + 8),
        *(__int64 **)(a2 + 8),
        &v12);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)v6 + 8LL) + 120LL))(*(_QWORD *)v6 + 8LL, v14);
      v9 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD **))(*(_QWORD *)AnimationDataProvider + 40LL);
      v10 = *(_QWORD **)v6;
      v12 = v10;
      if ( v10 )
        (*(void (__fastcall **)(_QWORD *))*v10)(v10);
      *((_QWORD *)this + 32) = v9(AnimationDataProvider, &v12);
      *((_QWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider
                                                                                          + 32LL))(AnimationDataProvider);
      GestureHandler::FeedAnimationDataIfNeeded(this, 0);
      *((_BYTE *)this + 240) = a3;
      v11 = v14;
      if ( v14 )
      {
        v14 = 0LL;
        (*(void (__fastcall **)(_QWORD *))(*v11 + 8LL))(v11);
      }
    }
  }
}
