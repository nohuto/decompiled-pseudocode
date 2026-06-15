/*
 * XREFs of ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@AEAV?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@@Z @ 0x18015DE44
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x18009025C (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18012F8D4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180027AE8 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _Init_thread_footer @ 0x1800A8320 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800A8388 (_Init_thread_header.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     ??1?$unique_ptr@UPacketSizeConstraints@@U?$default_delete@UPacketSizeConstraints@@@std@@@std@@QEAA@XZ @ 0x18012880C (--1-$unique_ptr@UPacketSizeConstraints@@U-$default_delete@UPacketSizeConstraints@@@std@@@std@@QE.c)
 *     ??R?$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z @ 0x18012A8E4 (--R-$default_delete@UPacketSizeConstraints@@@std@@QEBAXPEAUPacketSizeConstraints@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall GetPacketSizeConstraints(__int64 a1, __int64 a2, void ***a3)
{
  __int128 *v6; // rdi
  char v7; // si
  int v8; // eax
  void *v9; // rcx
  int v10; // ebx
  __int16 v11; // ax
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, PROPVARIANT, __int64 **); // rbx
  int v14; // eax
  __int64 v15; // rax
  int v16; // eax
  void *v17; // rdx
  __int64 v18; // rdx
  void *v19; // rdi
  void **v20; // rax
  void **v21; // rbx
  __int64 v22; // rcx
  void **v23; // rdx
  __int64 *v25; // [rsp+20h] [rbp-69h] BYREF
  void *v26; // [rsp+28h] [rbp-61h] BYREF
  __int64 v27; // [rsp+30h] [rbp-59h] BYREF
  void *v28; // [rsp+38h] [rbp-51h] BYREF
  size_t Size[2]; // [rsp+40h] [rbp-49h] BYREF
  void *Src; // [rsp+50h] [rbp-39h]
  __int64 v31; // [rsp+58h] [rbp-31h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v33; // [rsp+70h] [rbp-19h]
  void **v34; // [rsp+78h] [rbp-11h] BYREF
  void *v35; // [rsp+80h] [rbp-9h] BYREF
  char v36; // [rsp+88h] [rbp-1h]
  _DWORD v37[6]; // [rsp+90h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  if ( dword_1801D0E18 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1801D0E18);
    if ( dword_1801D0E18 == -1 )
    {
      xmmword_1801D09D0 = DEVPKEY_KsAudio_PacketSize_Constraints2;
      dword_1801D09E0 = 2;
      xmmword_1801D09E4 = DEVPKEY_KsAudio_PacketSize_Constraints;
      dword_1801D09F4 = 2;
      Init_thread_footer(&dword_1801D0E18);
    }
  }
  v28 = 0LL;
  v6 = &xmmword_1801D09D0;
  v7 = 1;
  while ( 1 )
  {
    *(_OWORD *)Size = 0LL;
    Src = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, size_t *))(*(_QWORD *)a2 + 40LL))(a2, v6, Size);
    v10 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x355,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v8);
LABEL_37:
      PropVariantClear((PROPVARIANT *)Size);
LABEL_38:
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v28,
        0LL);
      return (unsigned int)v10;
    }
    v11 = Size[0];
    if ( !LOWORD(Size[0]) )
    {
      *(_OWORD *)pvar = 0LL;
      v33 = 0LL;
      v37[0] = 590439624;
      v37[1] = 1283267372;
      v37[2] = 1907779772;
      v37[3] = 1730509416;
      v37[4] = 1;
      v12 = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)a2 + 40LL))(a2, v37, pvar);
      v10 = v12;
      if ( v12 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35D,
          (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
          (const char *)(unsigned int)v12);
      }
      else if ( LOWORD(pvar[0]) == 31 )
      {
        v25 = 0LL;
        v13 = *(__int64 (__fastcall **)(__int64, PROPVARIANT, __int64 **))(*(_QWORD *)a1 + 40LL);
        wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v25);
        v14 = v13(a1, pvar[1], &v25);
        v10 = v14;
        if ( v14 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x363,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v14);
        }
        else
        {
          v27 = 0LL;
          v15 = *v25;
          v27 = 0LL;
          v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v15 + 32))(v25, 0LL, &v27);
          v10 = v16;
          if ( v16 < 0 )
          {
            v18 = 870LL;
          }
          else
          {
            v16 = (*(__int64 (__fastcall **)(__int64, __int128 *, size_t *))(*(_QWORD *)v27 + 40LL))(v27, v6, Size);
            v10 = v16;
            if ( v16 >= 0 )
            {
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
              PropVariantClear(pvar);
              v11 = Size[0];
              goto LABEL_11;
            }
            v18 = 872LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v18,
            (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
            (const char *)(unsigned int)v16);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
        }
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
      }
      else
      {
        v10 = -2147023728;
      }
      PropVariantClear(pvar);
      goto LABEL_37;
    }
LABEL_11:
    if ( v11 != 65 || LODWORD(Size[1]) < 0x28 )
      goto LABEL_16;
    v26 = 0LL;
    v34 = &v26;
    v35 = 0LL;
    v36 = 1;
    v10 = CTCoAllocPolicy::Alloc(v9, 1, LODWORD(Size[1]), &v35);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v34);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x373,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
        (const char *)(unsigned int)v10);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v26,
        0LL);
      goto LABEL_37;
    }
    memcpy_0(v26, Src, LODWORD(Size[1]));
    v17 = v26;
    if ( LODWORD(Size[1]) >= 24 * *((_DWORD *)v26 + 3) + 16 )
      break;
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &v26,
      0LL);
LABEL_16:
    PropVariantClear((PROPVARIANT *)Size);
    v6 = (__int128 *)((char *)v6 + 20);
    if ( v6 == (__int128 *)&g_RenderStreamTaperTranslator )
      goto LABEL_17;
  }
  if ( *((_DWORD *)v6 + 4) != 2 || *v6 != DEVPKEY_KsAudio_PacketSize_Constraints2 )
    v7 = 0;
  v26 = 0LL;
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v28,
    v17);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v26,
    0LL);
  PropVariantClear((PROPVARIANT *)Size);
  v19 = v28;
  if ( !v28 )
  {
LABEL_17:
    v10 = -2147023728;
    goto LABEL_38;
  }
  v20 = (void **)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v21 = v20;
  if ( !v20 )
  {
    v31 = 0LL;
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\endpointutil.cpp",
      (const char *)0x8007000ELL);
    std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v31);
    goto LABEL_38;
  }
  *v20 = 0LL;
  v20[1] = 0LL;
  *(_BYTE *)v20 = v7;
  v28 = 0LL;
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    v20 + 1,
    v19);
  v31 = 0LL;
  v23 = *a3;
  *a3 = v21;
  if ( v23 )
    std::default_delete<PacketSizeConstraints>::operator()(v22, v23);
  std::unique_ptr<PacketSizeConstraints>::~unique_ptr<PacketSizeConstraints>(&v31);
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    &v28,
    0LL);
  return 0LL;
}
