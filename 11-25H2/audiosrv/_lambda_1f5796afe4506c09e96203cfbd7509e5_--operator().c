/*
 * XREFs of _lambda_1f5796afe4506c09e96203cfbd7509e5_::operator() @ 0x1800B7674
 * Callers:
 *     wil::details::lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___::_lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___ @ 0x1800B732C (wil--details--lambda_call__lambda_1f5796afe4506c09e96203cfbd7509e5___--_lambda_call__lambda_1f57.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800C01F8 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetAllStreamGroups@DeviceGraphStore@@YAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800F5114 (-GetAllStreamGroups@DeviceGraphStore@@YAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall lambda_1f5796afe4506c09e96203cfbd7509e5_::operator()(_QWORD **a1)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v4 = 0LL;
  v5 = 0LL;
  DeviceGraphStore::GetAllStreamGroups(&v4);
  v2 = (__int64 *)*((_QWORD *)&v4 + 1);
  v3 = (__int64 *)v4;
  if ( (_QWORD)v4 != *((_QWORD *)&v4 + 1) )
  {
    do
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v3 + 384LL))(*v3, **a1);
      ++v3;
    }
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)&v4 + 1);
    v3 = (__int64 *)v4;
  }
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v3, v2);
    std::_Deallocate<16,0>((char *)v4, (const struct std::nothrow_t *)((v5 - v4) & 0xFFFFFFFFFFFFFFF8uLL));
  }
}
