/*
 * XREFs of ?ReleaseSaDevices@CBtAudioResourceManagerBase@@IEAAJPEAVCEndpointStore@@AEAV?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@@Z @ 0x1800E0438
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800DF8B8 (-RefreshStreamsOnDevice@CBtAudioResourceManagerBase@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ @ 0x1800E0260 (-ReleaseResources@CBtAudioResourceManagerBase@@UEAAJXZ.c)
 * Callees:
 *     ??0?$forward_list@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18000B2F0 (--0-$forward_list@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevicePr.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ @ 0x180016880 (--1-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@QEAA@XZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180016BF4 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180016CE8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$vector@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18005FE14 (--1-$vector@V-$com_ptr_t@VCAudioStream@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$com_pt.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18005FF0C (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ??$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z @ 0x180066768 (--$AsWeak@UIStreamGroupProxy@@@WRL@Microsoft@@YAJPEAUIStreamGroupProxy@@PEAVWeakRef@01@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x180066F4C (--1-$out_param_t@V-$unique_ptr@USaDeviceParams@@U-$default_delete@USaDeviceParams@@@std@@@std@@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B096C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_front@AEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$forward_list@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAA?A_TAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800DAB5C (--$emplace_front@AEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$forward_list@V-$ComPtr@UISt.c)
 *     ??$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@std@@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@@?$forward_list@UDisplacedStreamGroup@@V?$allocator@UDisplacedStreamGroup@@@std@@@std@@QEAA?A_TAEAVWeakRef@WRL@Microsoft@@AEAV?$unique_ptr@USaDeviceParams@@U?$default_delete@USaDeviceParams@@@std@@@1@AEAV?$vector@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@@std@@@1@@Z @ 0x1800DABCC (--$emplace_front@AEAVWeakRef@WRL@Microsoft@@AEAV-$unique_ptr@USaDeviceParams@@U-$default_delete@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBtAudioResourceManagerBase::ReleaseSaDevices(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rdx
  int v5; // eax
  unsigned int v6; // r14d
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  __int64 v12; // rdi
  _QWORD *v13; // rbx
  _QWORD *i; // rbx
  int v15; // eax
  __int64 **v16; // rsi
  __int64 **v17; // r14
  int v18; // eax
  __int64 *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rsi
  _QWORD *v22; // rbx
  _QWORD *v23; // rsi
  _QWORD *v24; // rbx
  _QWORD *j; // rbx
  __int64 **v26; // r15
  int v27; // eax
  _QWORD *v28; // rsi
  _QWORD *v29; // r12
  __int64 *v30; // rcx
  __int64 v31; // rax
  int v32; // eax
  int v33; // eax
  __int64 *v34; // rax
  _QWORD *v35; // rsi
  _QWORD *v36; // rbx
  _QWORD *v37; // rsi
  _QWORD *v38; // rbx
  _QWORD *v39; // rsi
  _QWORD *v40; // rbx
  _QWORD *v41; // rsi
  _QWORD *v42; // rbx
  _QWORD *v43; // rsi
  _QWORD *v44; // rbx
  _QWORD *v45; // rsi
  _QWORD *v46; // rbx
  int v47[4]; // [rsp+20h] [rbp-89h] BYREF
  __int64 v48; // [rsp+30h] [rbp-79h]
  __int64 v49; // [rsp+38h] [rbp-71h] BYREF
  __int64 *v50; // [rsp+40h] [rbp-69h] BYREF
  __int128 v51; // [rsp+48h] [rbp-61h] BYREF
  __int64 v52; // [rsp+58h] [rbp-51h]
  SaDeviceParams **v53; // [rsp+60h] [rbp-49h] BYREF
  __int64 v54; // [rsp+68h] [rbp-41h] BYREF
  char v55; // [rsp+70h] [rbp-39h]
  _QWORD v56[17]; // [rsp+78h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  _QWORD *v58; // [rsp+110h] [rbp+67h] BYREF
  _QWORD *v59; // [rsp+118h] [rbp+6Fh] BYREF
  _QWORD *v60; // [rsp+120h] [rbp+77h]
  SaDeviceParams *v61; // [rsp+128h] [rbp+7Fh] BYREF

  v60 = a3;
  v58 = a1;
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v59);
  std::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::forward_list<Microsoft::WRL::ComPtr<ISaDeviceProxy>>(&v58);
  *(_OWORD *)v47 = 0LL;
  v48 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v4 + 104) + 112LL))(*(_QWORD *)(v4 + 104), v47);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v12 = *(_QWORD *)&v47[2];
    v13 = *(_QWORD **)v47;
    if ( *(_QWORD *)v47 != *(_QWORD *)&v47[2] )
    {
      do
      {
        if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 96LL))(*v13) == 1 )
          std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
            &v59,
            v13);
        std::forward_list<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::emplace_front<Microsoft::WRL::ComPtr<IStreamGroupProxy> &>(
          &v58,
          v13++);
      }
      while ( v13 != (_QWORD *)v12 );
      v12 = *(_QWORD *)&v47[2];
      v13 = *(_QWORD **)v47;
    }
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>((__int64)v13, v12);
      std::_Deallocate<16,0>(
        *(char **)v47,
        (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    for ( i = v59; i; i = (_QWORD *)*i )
    {
      *(_OWORD *)v47 = 0LL;
      v48 = 0LL;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a2 + 104) + 120LL))(
              *(_QWORD *)(a2 + 104),
              i[1],
              v47);
      v6 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x578,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v15);
        if ( *(_QWORD *)v47 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            *(__int64 *)v47,
            *(__int64 *)&v47[2]);
          std::_Deallocate<16,0>(
            *(char **)v47,
            (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
          *(_OWORD *)v47 = 0LL;
          v48 = 0LL;
        }
        v21 = v58;
        v58 = 0LL;
        if ( v21 )
        {
          do
          {
            v22 = (_QWORD *)*v21;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v21 + 1);
            std::_Deallocate<16,0>((char *)v21, (const struct std::nothrow_t *)0x10);
            v21 = v22;
          }
          while ( v22 );
        }
        v23 = v59;
        v59 = 0LL;
        if ( v23 )
        {
          do
          {
            v24 = (_QWORD *)*v23;
            Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v23 + 1);
            std::_Deallocate<16,0>((char *)v23, (const struct std::nothrow_t *)0x10);
            v23 = v24;
          }
          while ( v24 );
        }
        return v6;
      }
      v16 = *(__int64 ***)v47;
      v17 = *(__int64 ***)&v47[2];
      while ( v16 != v17 )
      {
        v18 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64 *, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *v16,
                i[1]);
        if ( v18 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1404LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v18);
        v19 = *v16;
        v20 = **v16;
        v56[0] = off_18017C080;
        v56[7] = v56;
        (*(void (__fastcall **)(__int64 *, _QWORD *))(v20 + 368))(v19, v56);
        ++v16;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(i + 1);
      if ( *(_QWORD *)v47 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 *)v47,
          *(__int64 *)&v47[2]);
        std::_Deallocate<16,0>(
          *(char **)v47,
          (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    for ( j = v58; j; j = (_QWORD *)*j )
    {
      v26 = (__int64 **)(j + 1);
      *(_OWORD *)v47 = 0LL;
      v48 = 0LL;
      v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *))(**(_QWORD **)(a2 + 104) + 120LL))(
              *(_QWORD *)(a2 + 104),
              j[1],
              v47);
      if ( v27 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          1421LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
          (const char *)(unsigned int)v27);
      v28 = *(_QWORD **)v47;
      v29 = *(_QWORD **)&v47[2];
      while ( v28 != v29 )
      {
        v61 = 0LL;
        v30 = *v26;
        v31 = **v26;
        v53 = &v61;
        v54 = 0LL;
        v55 = 1;
        v6 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v31 + 120))(v30, &v54);
        wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>((__int64)&v53);
        if ( (v6 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x593,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)v6);
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v61);
          if ( *(_QWORD *)v47 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              *(__int64 *)v47,
              *(__int64 *)&v47[2]);
            std::_Deallocate<16,0>(
              *(char **)v47,
              (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v47 = 0LL;
            v48 = 0LL;
          }
          v39 = v58;
          v58 = 0LL;
          if ( v39 )
          {
            do
            {
              v40 = (_QWORD *)*v39;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v39 + 1);
              std::_Deallocate<16,0>((char *)v39, (const struct std::nothrow_t *)0x10);
              v39 = v40;
            }
            while ( v40 );
          }
          v41 = v59;
          v59 = 0LL;
          if ( v41 )
          {
            do
            {
              v42 = (_QWORD *)*v41;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v41 + 1);
              std::_Deallocate<16,0>((char *)v41, (const struct std::nothrow_t *)0x10);
              v41 = v42;
            }
            while ( v42 );
          }
          return v6;
        }
        v51 = 0LL;
        v52 = 0LL;
        v32 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(**v26 + 240))(*v26, &v51);
        v6 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x596,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v32);
          std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v51);
          std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v61);
          if ( *(_QWORD *)v47 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              *(__int64 *)v47,
              *(__int64 *)&v47[2]);
            std::_Deallocate<16,0>(
              *(char **)v47,
              (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v47 = 0LL;
            v48 = 0LL;
          }
          v35 = v58;
          v58 = 0LL;
          if ( v35 )
          {
            do
            {
              v36 = (_QWORD *)*v35;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v35 + 1);
              std::_Deallocate<16,0>((char *)v35, (const struct std::nothrow_t *)0x10);
              v35 = v36;
            }
            while ( v36 );
          }
          v37 = v59;
          v59 = 0LL;
          if ( v37 )
          {
            do
            {
              v38 = (_QWORD *)*v37;
              Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v37 + 1);
              std::_Deallocate<16,0>((char *)v37, (const struct std::nothrow_t *)0x10);
              v37 = v38;
            }
            while ( v38 );
          }
          return v6;
        }
        v33 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, __int64 *))(*(_QWORD *)g_DeviceGraphManager
                                                                                         + 40LL))(
                g_DeviceGraphManager,
                *v28,
                *v26);
        if ( v33 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            1432LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
            (const char *)(unsigned int)v33);
        v49 = 0LL;
        v50 = &v49;
        v34 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(&v50);
        Microsoft::WRL::AsWeak<IStreamGroupProxy>((__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v28, v34);
        std::forward_list<DisplacedStreamGroup>::emplace_front<Microsoft::WRL::WeakRef &,std::unique_ptr<SaDeviceParams> &,std::vector<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>> &>(
          v60,
          &v49,
          (__int64 *)&v61,
          (__int64 *)&v51);
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v49);
        std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>((__int64)&v51);
        std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>(&v61);
        ++v28;
      }
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(j + 1);
      if ( *(_QWORD *)v47 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
          *(__int64 *)v47,
          *(__int64 *)&v47[2]);
        std::_Deallocate<16,0>(
          *(char **)v47,
          (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    v43 = v58;
    v58 = 0LL;
    if ( v43 )
    {
      do
      {
        v44 = (_QWORD *)*v43;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v43 + 1);
        std::_Deallocate<16,0>((char *)v43, (const struct std::nothrow_t *)0x10);
        v43 = v44;
      }
      while ( v44 );
    }
    v45 = v59;
    v59 = 0LL;
    if ( v45 )
    {
      do
      {
        v46 = (_QWORD *)*v45;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v45 + 1);
        std::_Deallocate<16,0>((char *)v45, (const struct std::nothrow_t *)0x10);
        v45 = v46;
      }
      while ( v46 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x564,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\btaudioresourcemanagerbase.cpp",
      (const char *)(unsigned int)v5);
    if ( *(_QWORD *)v47 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
        *(__int64 *)v47,
        *(__int64 *)&v47[2]);
      std::_Deallocate<16,0>(
        *(char **)v47,
        (const struct std::nothrow_t *)((v48 - *(_QWORD *)v47) & 0xFFFFFFFFFFFFFFF8uLL));
      *(_OWORD *)v47 = 0LL;
      v48 = 0LL;
    }
    v7 = v58;
    v58 = 0LL;
    if ( v7 )
    {
      do
      {
        v8 = (_QWORD *)*v7;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v7 + 1);
        std::_Deallocate<16,0>((char *)v7, (const struct std::nothrow_t *)0x10);
        v7 = v8;
      }
      while ( v8 );
    }
    v9 = v59;
    v59 = 0LL;
    if ( v9 )
    {
      do
      {
        v10 = (_QWORD *)*v9;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(v9 + 1);
        std::_Deallocate<16,0>((char *)v9, (const struct std::nothrow_t *)0x10);
        v9 = v10;
      }
      while ( v10 );
    }
    return v6;
  }
}
