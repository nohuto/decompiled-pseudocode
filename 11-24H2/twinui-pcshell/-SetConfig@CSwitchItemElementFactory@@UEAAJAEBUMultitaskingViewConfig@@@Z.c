/*
 * XREFs of ?SetConfig@CSwitchItemElementFactory@@UEAAJAEBUMultitaskingViewConfig@@@Z @ 0x1804B8270
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Mirror_IsThreadRTL @ 0x180097AB4 (Mirror_IsThreadRTL.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z @ 0x1804A12B0 (-CIconLoaderInternal_CreateInstance@@YAJPEAUIApplicationViewIconLoader@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804B7CA4 (-LoadDWriteTextFormat@DWriteUtil@@YAJPEAUIDWriteFactory@@PEBGW4DWRITE_FONT_WEIGHT@@MW4DWRITE_TEX.c)
 *     ?LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@@W4DWRITE_PARAGRAPH_ALIGNMENT@@W4DWRITE_READING_DIRECTION@@PEAPEAUIDWriteTextFormat@@@Z @ 0x1804B7E18 (-LoadDWriteTextFormat@MultitaskingViewUtils@@YAJPEAUIDWriteFactory@@IIIIW4DWRITE_TEXT_ALIGNMENT@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSwitchItemElementFactory::SetConfig(
        CSwitchItemElementFactory *this,
        const struct MultitaskingViewConfig *a2)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rax
  __int64 v6; // rcx
  const struct _GUID *v7; // rdx
  int Instance; // ebx
  __int64 v9; // rdx
  __int64 *v10; // r14
  unsigned int v11; // r12d
  _QWORD *v12; // r15
  __int64 v13; // rdi
  __int64 (__fastcall *v14)(__int64, _QWORD, __int64 *); // rbx
  int DWriteTextFormat; // eax
  __int64 v16; // rdx
  __int64 v18; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+58h] [rbp-40h] BYREF
  __int64 v20; // [rsp+5Ch] [rbp-3Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = (_OWORD *)((char *)this + 16);
  v5 = (_OWORD *)((char *)a2 + 72);
  v6 = 2LL;
  do
  {
    *v4 = *v5;
    v4[1] = v5[1];
    v4[2] = v5[2];
    v4[3] = v5[3];
    v4[4] = v5[4];
    v4[5] = v5[5];
    v4[6] = v5[6];
    v4 += 8;
    *(v4 - 1) = v5[7];
    v5 += 8;
    --v6;
  }
  while ( v6 );
  *v4 = *v5;
  *((_QWORD *)v4 + 2) = *((_QWORD *)v5 + 2);
  *((_DWORD *)this + 86) = *((_DWORD *)a2 + 1);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 41);
  Instance = CIconLoaderInternal_CreateInstance(
               *((struct IApplicationViewIconLoader **)this + 40),
               v7,
               (void **)this + 41);
  if ( Instance >= 0 )
  {
    v10 = (__int64 *)((char *)this + 312);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 39);
    Instance = DWriteCreateFactory(0LL, &GUID_0439fc60_ca44_4994_8dee_3a9af7b732ec, (char *)this + 312);
    if ( Instance < 0 )
    {
      v9 = 55LL;
      goto LABEL_5;
    }
    v11 = Mirror_IsThreadRTL() != 0;
    v12 = (_QWORD *)((char *)this + 304);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 38);
    Instance = MultitaskingViewUtils::LoadDWriteTextFormat(
                 *v10,
                 *((_DWORD *)a2 + 1),
                 0x32C9u,
                 0x32CBu,
                 0x32CAu,
                 0,
                 2u,
                 v11,
                 (_QWORD *)this + 38);
    if ( Instance < 0 )
    {
      v9 = 68LL;
      goto LABEL_5;
    }
    Instance = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v12 + 40LL))(*v12, 1LL);
    if ( Instance < 0 )
    {
      v9 = 70LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    v19 = 1;
    v18 = 0LL;
    v13 = *v10;
    v14 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v10 + 160LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
    DWriteTextFormat = v14(v13, *v12, &v18);
    Instance = DWriteTextFormat;
    if ( DWriteTextFormat >= 0 )
    {
      DWriteTextFormat = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)*v12 + 72LL))(*v12, &v19, v18);
      Instance = DWriteTextFormat;
      if ( DWriteTextFormat >= 0 )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 42);
        DWriteTextFormat = DWriteUtil::LoadDWriteTextFormat(
                             *v10,
                             (__int64)L"Segoe MDL2 Assets",
                             0x190u,
                             (float)((float)*((int *)this + 45) * (float)*((int *)a2 + 1)) / 72.0,
                             2u,
                             2u,
                             v11,
                             (_QWORD *)this + 42);
        Instance = DWriteTextFormat;
        if ( DWriteTextFormat >= 0 )
        {
LABEL_19:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v18);
          return (unsigned int)Instance;
        }
        v16 = 85LL;
      }
      else
      {
        v16 = 75LL;
      }
    }
    else
    {
      v16 = 74LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
      (const char *)(unsigned int)DWriteTextFormat);
    goto LABEL_19;
  }
  v9 = 54LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelementfactory.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
