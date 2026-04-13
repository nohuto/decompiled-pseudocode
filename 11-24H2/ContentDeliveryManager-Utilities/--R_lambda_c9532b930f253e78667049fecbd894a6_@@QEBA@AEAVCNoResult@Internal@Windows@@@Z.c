/*
 * XREFs of ??R_lambda_c9532b930f253e78667049fecbd894a6_@@QEBA@AEAVCNoResult@Internal@Windows@@@Z @ 0x18002C714
 * Callers:
 *     ?Run@?$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@Windows@@$$V@Internal@Windows@@UEAAJW4AsyncStage@23@JAEAVCNoResult@23@@Z @ 0x18003A5B0 (-Run@-$COperationLambdaVar@$0A@V_lambda_c9532b930f253e78667049fecbd894a6_@@VCNoResult@Internal@W.c)
 * Callees:
 *     ??$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z @ 0x1800285DC (--$_CreatePropertyBagBindCtx@PEBG@@YAJPEAUIBindCtx@@PEBG1PEAPEAU0@@Z.c)
 *     ?GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180033520 (-GetThreadThumbnailCache@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E10 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A210 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall _lambda_c9532b930f253e78667049fecbd894a6_::operator()(__int64 a1, void *a2)
{
  const WCHAR *StringRawBuffer; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx
  IBindCtx *v9; // rbx
  const WCHAR *v10; // rax
  HRESULT v11; // eax
  const struct _GUID *v12; // rcx
  int ThreadThumbnailCache; // eax
  void *v14; // rbx
  __int64 (__fastcall *v15)(void *, void *, _QWORD, __int64); // rdi
  int v16; // eax
  int v18; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  void *v20; // [rsp+70h] [rbp+30h] BYREF
  void *ppv; // [rsp+78h] [rbp+38h] BYREF
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  IBindCtx *pbc; // [rsp+88h] [rbp+48h] BYREF

  ppv = a2;
  pbc = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
  if ( *PathFindExtensionW(StringRawBuffer)
    || (Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&pbc),
        v7 = _CreatePropertyBagBindCtx<unsigned short const *>(v5, v4, v6, &pbc),
        v8 = v7,
        v7 >= 0) )
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
    v9 = pbc;
    v10 = WindowsGetStringRawBuffer(*(HSTRING *)a1, 0LL);
    v11 = SHCreateItemFromParsingName(v10, v9, &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe, &ppv);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v20 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
      ThreadThumbnailCache = GetThreadThumbnailCache(v12, &v20);
      v8 = ThreadThumbnailCache;
      if ( ThreadThumbnailCache >= 0 )
      {
        v22 = 0LL;
        v14 = v20;
        v15 = *(__int64 (__fastcall **)(void *, void *, _QWORD, __int64))(*(_QWORD *)v20 + 24LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        v16 = v15(v14, ppv, *(unsigned int *)(a1 + 16), 64LL);
        v8 = v16;
        if ( v16 >= 0 )
        {
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
          v8 = 0;
          goto LABEL_13;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB6,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v16,
          (int)&v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB3,
          (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)ThreadThumbnailCache,
          v18);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v20);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB0,
        (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v11,
        v18);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&ppv);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAC,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7,
      v18);
  }
LABEL_13:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&pbc);
  return v8;
}
