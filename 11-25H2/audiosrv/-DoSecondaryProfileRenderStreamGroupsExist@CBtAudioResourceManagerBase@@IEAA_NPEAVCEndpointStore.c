/*
 * XREFs of ?DoSecondaryProfileRenderStreamGroupsExist@CBtAudioResourceManagerBase@@IEAA_NPEAVCEndpointStore@@@Z @ 0x1800D4EC8
 * Callers:
 *     ?RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ @ 0x1800DC130 (-RestoreDisplacedPrimaryProfileStreamGroupsIfAppropriate@CBtAudioResourceManagerBase@@IEAAJXZ.c)
 *     ?UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800DD238 (-UpdateBtAudioStreamContextIfNecessary@CBtAudioResourceManagerBase@@IEAAXW4__MIDL___MIDL_itf_mmd.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x18002368C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CBtAudioResourceManagerBase::DoSecondaryProfileRenderStreamGroupsExist(
        CBtAudioResourceManagerBase *this,
        struct CEndpointStore *a2)
{
  int v4; // eax
  _QWORD *i; // rdi
  _QWORD *v7; // r15
  int v8; // eax
  _QWORD *j; // rsi
  _QWORD *v10; // r14
  unsigned __int8 (__fastcall *v11)(CBtAudioResourceManagerBase *, __int128 *); // rbx
  __int128 v12; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h]
  __int128 v14; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v17[16]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v14 = 0LL;
  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 112LL))(*((_QWORD *)a2 + 13), &v14);
  if ( v4 >= 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)&v14 + 1);
    for ( i = (_QWORD *)v14; i != v7; ++i )
    {
      v12 = 0LL;
      v13 = 0LL;
      v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)a2 + 13) + 120LL))(
             *((_QWORD *)a2 + 13),
             *i,
             &v12);
      if ( v8 >= 0 )
      {
        v10 = (_QWORD *)*((_QWORD *)&v12 + 1);
        for ( j = (_QWORD *)v12; j != v10; ++j )
        {
          v11 = *(unsigned __int8 (__fastcall **)(CBtAudioResourceManagerBase *, __int128 *))(*(_QWORD *)this + 144LL);
          v16 = *(_OWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*j + 136LL))(*j, v17);
          if ( v11(this, &v16) )
          {
            if ( (_QWORD)v12 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v12,
                *((__int64 **)&v12 + 1));
              std::_Deallocate<16,0>((char *)v12, (const struct std::nothrow_t *)((v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL));
              v12 = 0LL;
              v13 = 0LL;
            }
            if ( (_QWORD)v14 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                (__int64 *)v14,
                *((__int64 **)&v14 + 1));
              std::_Deallocate<16,0>((char *)v14, (const struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
            }
            return 1;
          }
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1024LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v8);
      }
      if ( (_QWORD)v12 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          (__int64 *)v12,
          *((__int64 **)&v12 + 1));
        std::_Deallocate<16,0>((char *)v12, (const struct std::nothrow_t *)((v13 - v12) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1019LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v4);
  }
  if ( (_QWORD)v14 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
      (__int64 *)v14,
      *((__int64 **)&v14 + 1));
    std::_Deallocate<16,0>((char *)v14, (const struct std::nothrow_t *)((v15 - v14) & 0xFFFFFFFFFFFFFFF8uLL));
  }
  return 0;
}
