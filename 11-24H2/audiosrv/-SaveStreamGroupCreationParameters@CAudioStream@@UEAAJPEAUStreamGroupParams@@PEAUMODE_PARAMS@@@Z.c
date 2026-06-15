/*
 * XREFs of ?SaveStreamGroupCreationParameters@CAudioStream@@UEAAJPEAUStreamGroupParams@@PEAUMODE_PARAMS@@@Z @ 0x180019640
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z @ 0x1800199D0 (-SetProcessingModeParameters@CAudioStream@@QEAAJPEAVCProcessingModeParameters@@@Z.c)
 *     ?Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z @ 0x180019A00 (-Clone@StreamGroupParams@@QEBAJPEAPEAU1@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x180019F78 (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 *     ??$?4U?$default_delete@UMODE_PARAMS@@@std@@$0A@@?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001A08C (--$-4U-$default_delete@UMODE_PARAMS@@@std@@$0A@@-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMO.c)
 *     ??R?$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z @ 0x18001A0BC (--R-$default_delete@UMODE_PARAMS@@@std@@QEBAXPEAUMODE_PARAMS@@@Z.c)
 *     ??1?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ @ 0x18001A0EC (--1-$unique_ptr@UMODE_PARAMS@@U-$default_delete@UMODE_PARAMS@@@std@@@std@@QEAA@XZ.c)
 *     ??1MODE_PARAMS@@QEAA@XZ @ 0x18001A11C (--1MODE_PARAMS@@QEAA@XZ.c)
 *     ??$?4U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@?$unique_ptr@UAUDIO_DEVICE_MODE_DESCRIPTOR@@U?$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001A168 (--$-4U-$default_delete@UAUDIO_DEVICE_MODE_DESCRIPTOR@@@std@@$0A@@-$unique_ptr@UAUDIO_DEVICE_MODE.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42AC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioStream::SaveStreamGroupCreationParameters(
        CAudioStream *this,
        struct StreamGroupParams *a2,
        struct MODE_PARAMS *a3)
{
  int v6; // ebx
  struct StreamGroupParams *v7; // rdx
  MODE_PARAMS *v8; // rax
  MODE_PARAMS *v9; // rbx
  __int64 v10; // rdi
  void *v11; // rsi
  __int64 v12; // r14
  void *v13; // rax
  void *v14; // r12
  _DWORD *v15; // rax
  unsigned int i; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  MODE_PARAMS *v19; // rbx
  unsigned int v21; // esi
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  struct StreamGroupParams **v27; // [rsp+28h] [rbp-18h]
  struct StreamGroupParams *v28; // [rsp+30h] [rbp-10h] BYREF
  char v29; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  void *Src; // [rsp+80h] [rbp+40h] BYREF
  MODE_PARAMS *v32; // [rsp+98h] [rbp+58h] BYREF

  v27 = (struct StreamGroupParams **)((char *)this + 640);
  v28 = 0LL;
  v29 = 1;
  v6 = StreamGroupParams::Clone(a2, &v28);
  if ( v29 )
  {
    v7 = *v27;
    *v27 = v28;
    if ( v7 )
      std::default_delete<StreamGroupParams>::operator()();
  }
  if ( v6 < 0 )
  {
    v23 = 2093LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CAudioStream::SetProcessingModeParameters(this, (struct StreamGroupParams *)((char *)a2 + 56));
  if ( v6 < 0 )
  {
    v23 = 2095LL;
    goto LABEL_35;
  }
  if ( !a3 )
    return 0LL;
  v8 = (MODE_PARAMS *)operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v8;
  if ( !v8 )
  {
    v32 = 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x835,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    v21 = -2147024882;
LABEL_29:
    std::unique_ptr<MODE_PARAMS>::~unique_ptr<MODE_PARAMS>(&v32);
    return v21;
  }
  *(_QWORD *)v8 = 0LL;
  *((_QWORD *)v8 + 1) = 0LL;
  v32 = v8;
  v10 = *((_QWORD *)a3 + 1);
  if ( !v10 )
  {
LABEL_19:
    std::unique_ptr<MODE_PARAMS>::operator=<std::default_delete<MODE_PARAMS>,0>((char *)this + 648, &v32);
    v19 = v32;
    if ( v32 )
    {
      MODE_PARAMS::~MODE_PARAMS(v32);
      operator delete(v19, (const struct std::nothrow_t *)0x10);
    }
    return 0LL;
  }
  v11 = 0LL;
  Src = 0LL;
  if ( !*(_QWORD *)(v10 + 24) )
    goto LABEL_10;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &Src,
    0LL);
  v26 = _AllocString<CTCoAllocPolicy>(v25, v24, *(_QWORD *)(v10 + 24), &Src);
  v21 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v26);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&Src);
    goto LABEL_29;
  }
  v11 = Src;
LABEL_10:
  Src = *(void **)(v10 + 16);
  v12 = *((unsigned __int16 *)Src + 8);
  v13 = CoTaskMemAlloc(v12 + 18);
  v14 = v13;
  if ( v13 )
  {
    memcpy_0(v13, Src, v12 + 18);
    v15 = operator new[](16LL * *(unsigned int *)(v10 + 64) + 68, (const struct std::nothrow_t *)&std::nothrow);
    Src = v15;
    if ( v15 )
    {
      *v15 = *(_DWORD *)v10;
      v15[1] = *(_DWORD *)(v10 + 4);
      v15[2] = *(_DWORD *)(v10 + 8);
      *((_QWORD *)v15 + 2) = v14;
      *((_QWORD *)v15 + 3) = v11;
      v15[8] = *(_DWORD *)(v10 + 32);
      *(_OWORD *)(v15 + 9) = *(_OWORD *)(v10 + 36);
      v15[13] = *(_DWORD *)(v10 + 52);
      v15[14] = *(_DWORD *)(v10 + 56);
      v15[16] = *(_DWORD *)(v10 + 64);
      for ( i = 0; i < *(_DWORD *)(v10 + 64); ++i )
        *(_OWORD *)&v15[4 * i + 17] = *(_OWORD *)(v10 + 16LL * i + 68);
      std::unique_ptr<AUDIO_DEVICE_MODE_DESCRIPTOR>::operator=<std::default_delete<AUDIO_DEVICE_MODE_DESCRIPTOR>,0>(
        (char *)v9 + 8,
        &Src);
      v17 = *(_QWORD *)v9;
      *(_QWORD *)v9 = 0LL;
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v18 = *(_QWORD *)a3;
      if ( *(_QWORD *)a3 )
      {
        *(_QWORD *)v9 = v18;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      }
      else
      {
        *(_QWORD *)v9 = 0LL;
      }
      if ( Src )
        operator delete(Src, (const struct std::nothrow_t *)0x58);
      goto LABEL_19;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x845,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    CoTaskMemFree(v14);
    if ( v11 )
      CoTaskMemFree(v11);
    MODE_PARAMS::~MODE_PARAMS(v9);
    operator delete(v9, (const struct std::nothrow_t *)0x10);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x841,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x8007000ELL);
    if ( v11 )
      CoTaskMemFree(v11);
    std::default_delete<MODE_PARAMS>::operator()(v22, v9);
  }
  return 2147942414LL;
}
