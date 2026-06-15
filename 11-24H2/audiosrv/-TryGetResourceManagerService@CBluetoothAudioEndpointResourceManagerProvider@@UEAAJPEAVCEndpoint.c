/*
 * XREFs of ?TryGetResourceManagerService@CBluetoothAudioEndpointResourceManagerProvider@@UEAAJPEAVCEndpointCharacteristics@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F2770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002A5BC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18006C370 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ??$construct@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@?$_Default_allocator_traits@V?$allocator@U?$_Flist_node@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@SAXAEAV?$allocator@U?$_Flist_node@V?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@1@QEAV?$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV34@@Z @ 0x18009C388 (--$construct@V-$com_ptr_t@UIBtAudioResourceManager@@Uerr_returncode_policy@wil@@@wil@@AEBV12@@-$.c)
 *     ??4?$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteControlHandler@@@Z @ 0x1800A0888 (--4-$com_ptr_t@VIMuteControlHandler@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAVIMuteContro.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Flist_node@V?$com_ptr_t@VCPBMStreamClassVolumeGainStage@@Uerr_returncode_policy@wil@@@wil@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1800A1F54 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Flist_node@V-$com_ptr_t@VCPBMStreamClassVolumeGainSta.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F0FCC (--$MakeAndInitialize@VCBtAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoo.c)
 *     ??$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluetoothResourceArbitrator@@@Details@WRL@Microsoft@@YAJPEAPEAUIBtAudioResourceManager@@AEAU_GUID@@$$QEAPEAUIBluetoothResourceArbitrator@@@Z @ 0x1800F10A8 (--$MakeAndInitialize@VCBtLeAudioResourceManager@@UIBtAudioResourceManager@@AEAU_GUID@@PEAUIBluet.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CBluetoothAudioEndpointResourceManagerProvider::TryGetResourceManagerService(
        RTL_SRWLOCK *this,
        struct CEndpointCharacteristics *a2,
        const struct _GUID *a3,
        void **a4)
{
  __m128i v6; // xmm1
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  RTL_SRWLOCK *v11; // rdi
  RTL_SRWLOCK *v12; // r13
  _QWORD *i; // rdi
  _QWORD *v14; // rax
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // edi
  unsigned __int64 v19; // rsi
  int v20; // eax
  unsigned int v21; // edi
  __int64 *v22; // rdi
  __int64 v23; // rcx
  bool v24; // zf
  void (__fastcall **v25)(_QWORD *, const struct _GUID *, void **); // rax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  unsigned int v29; // edi
  _QWORD *v30; // [rsp+20h] [rbp-88h] BYREF
  RTL_SRWLOCK *v31; // [rsp+28h] [rbp-80h] BYREF
  void **v32; // [rsp+30h] [rbp-78h]
  const struct _GUID *v33; // [rsp+38h] [rbp-70h]
  unsigned __int128 v34; // [rsp+40h] [rbp-68h] BYREF
  __m128i v35; // [rsp+50h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  v32 = a4;
  v33 = a3;
  *a4 = 0LL;
  v6 = *(__m128i *)((char *)a2 + 8252);
  v35 = v6;
  v34 = *(_OWORD *)((char *)a2 + 8268);
  v7 = v6.m128i_i64[0] - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
  if ( v6.m128i_i64[0] == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
  {
    v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
    v7 = v8 + 0x12C28937D3A30176LL;
  }
  else
  {
    v8 = v35.m128i_u64[1];
  }
  if ( v7 )
  {
    v9 = v6.m128i_i64[0] - BLUETOOTHLE_AUDIO_RESOURCE_MANAGER;
    if ( v6.m128i_i64[0] == BLUETOOTHLE_AUDIO_RESOURCE_MANAGER )
      v9 = v8 + 0x54DCF32F8E93AD5ALL;
    if ( v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  v11 = this + 3;
  AcquireSRWLockExclusive(this + 3);
  v31 = v11;
  v12 = this + 4;
  for ( i = this[4].Ptr; i; i = (_QWORD *)*i )
  {
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)i[1] + 56LL))(i[1], &v35);
    v15 = *v14 - v34;
    if ( *v14 == (_QWORD)v34 )
      v15 = v14[1] - *((_QWORD *)&v34 + 1);
    if ( !v15 )
      break;
  }
  v30 = 0LL;
  if ( i )
  {
    wil::com_ptr_t<IMuteControlHandler,wil::err_exception_policy>::operator=((__int64 *)&v30, i[1]);
  }
  else
  {
    v16 = v6.m128i_i64[0] - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
    if ( v6.m128i_i64[0] == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
      v16 = v8 + 0x12C28937D3A30176LL;
    if ( v16 )
    {
      v19 = v6.m128i_i64[0] - BLUETOOTHLE_AUDIO_RESOURCE_MANAGER;
      if ( v6.m128i_i64[0] == BLUETOOTHLE_AUDIO_RESOURCE_MANAGER )
        v19 = v8 + 0x54DCF32F8E93AD5ALL;
      if ( !v19 )
      {
        v35.m128i_i64[0] = (unsigned __int64)&this[1] & -(__int64)(this != 0LL);
        v30 = 0LL;
        v20 = Microsoft::WRL::Details::MakeAndInitialize<CBtLeAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
                &v30,
                (struct _GUID *)&v34,
                (struct IBluetoothResourceArbitrator **)&v35);
        v21 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
            (const char *)(unsigned int)v20);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
          wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
          return v21;
        }
      }
    }
    else
    {
      v35.m128i_i64[0] = (unsigned __int64)&this[1] & -(__int64)(this != 0LL);
      v30 = 0LL;
      v17 = Microsoft::WRL::Details::MakeAndInitialize<CBtAudioResourceManager,IBtAudioResourceManager,_GUID &,IBluetoothResourceArbitrator *>(
              &v30,
              (struct _GUID *)&v34,
              (struct IBluetoothResourceArbitrator **)&v35);
      v18 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4B,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
        wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
        return v18;
      }
    }
    v34 = (unsigned __int64)v12;
    v22 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
    std::_Default_allocator_traits<std::allocator<std::_Flist_node<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>,void *>>>::construct<wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy>,wil::com_ptr_t<IBtAudioResourceManager,wil::err_returncode_policy> const &>(
      v23,
      v22 + 1,
      (__int64 *)&v30);
    *v22 = (__int64)v12->Ptr;
    *((_QWORD *)&v34 + 1) = 0LL;
    v12->Ptr = v22;
    std::_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Flist_node<wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>,void *>>>((__int64)&v34);
  }
  v24 = (*(unsigned int (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)a2 + 56LL))(a2) == 0;
  v25 = (void (__fastcall **)(_QWORD *, const struct _GUID *, void **))*v30;
  if ( v24 )
  {
    v26 = ((__int64 (__fastcall *)(_QWORD *, struct CEndpointCharacteristics *))v25[8])(v30, a2);
    v27 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v26);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
      return v27;
    }
  }
  else
  {
    v28 = ((__int64 (__fastcall *)(_QWORD *, struct CEndpointCharacteristics *))v25[9])(v30, a2);
    v29 = v28;
    if ( v28 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v28);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
      wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
      return v29;
    }
  }
  (*(void (__fastcall **)(_QWORD *, const struct _GUID *, void **))*v30)(v30, v33, v32);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v30);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v31);
  return 0LL;
}
