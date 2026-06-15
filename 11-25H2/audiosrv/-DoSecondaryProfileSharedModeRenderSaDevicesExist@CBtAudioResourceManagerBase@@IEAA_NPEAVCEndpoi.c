/*
 * XREFs of ?DoSecondaryProfileSharedModeRenderSaDevicesExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D50B4
 * Callers:
 *     ?AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ @ 0x1800D38A0 (-AllowOffloadStreamCreation@CBtAudioResourceManagerBase@@UEAA_NXZ.c)
 *     ?CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEBV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800D42D0 (-CreateSaDeviceOnRenderEndpoint@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDes.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180064D38 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CBtAudioResourceManagerBase::DoSecondaryProfileSharedModeRenderSaDevicesExist(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2,
        struct ISaDeviceProxy **a3)
{
  int v5; // eax
  _QWORD *i; // rdi
  _QWORD *v8; // r14
  unsigned __int8 (__fastcall *v9)(CBtAudioResourceManagerBase *, __int128 *); // rbx
  struct ISaDeviceProxy **v10; // rbx
  __int128 v11; // [rsp+20h] [rbp-50h] BYREF
  __int64 v12; // [rsp+30h] [rbp-40h]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v14[16]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v11 = 0LL;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 96LL))(*((_QWORD *)a2 + 13), &v11);
  if ( v5 >= 0 )
  {
    v8 = (_QWORD *)*((_QWORD *)&v11 + 1);
    for ( i = (_QWORD *)v11; i != v8; ++i )
    {
      v9 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, __int128 *))(*(_QWORD *)this + 144LL);
      v13 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*i + 40LL))(*i, v14);
      if ( v9(this, &v13) )
      {
        if ( a3 )
        {
          v10 = (struct ISaDeviceProxy **)v11;
          Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)v11);
          *a3 = *v10;
        }
        if ( (_QWORD)v11 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v11,
            *((__int64 **)&v11 + 1));
          std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        return 1;
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      981LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( (_QWORD)v11 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v11,
      *((__int64 **)&v11 + 1));
    std::_Deallocate<16,0>((char *)v11, (const struct std::nothrow_t *)((v12 - v11) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0;
}
