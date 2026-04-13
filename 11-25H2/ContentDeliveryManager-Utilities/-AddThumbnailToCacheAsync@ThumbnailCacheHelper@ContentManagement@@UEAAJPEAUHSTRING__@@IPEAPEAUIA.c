/*
 * XREFs of ?AddThumbnailToCacheAsync@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAUHSTRING__@@IPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18002D6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDelegate@Internal@3@VCNoResult@63@VComTaskPoolHandler@63@U?$AsyncCausalityOptions@$1?AddThumbnailToCacheAsyncActionName@ContentManagement@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@YAJPEAPEAUIAsyncAction@Foundation@1@$$QEAVComTaskPoolHandler@01@QEBGW4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180026CAC (--$MakeAsyncHelper@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@UINilDeleg.c)
 *     ??$MakeOpLambda@$0A@VCNoResult@Internal@Windows@@V_lambda_c9532b930f253e78667049fecbd894a6_@@$$V@Internal@Windows@@YAPEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@$$QEAV_lambda_c9532b930f253e78667049fecbd894a6_@@@Z @ 0x180026E54 (--$MakeOpLambda@$0A@VCNoResult@Internal@Windows@@V_lambda_c9532b930f253e78667049fecbd894a6_@@$$V.c)
 *     ??1String@Internal@Windows@@QEAA@XZ @ 0x18002AA00 (--1String@Internal@Windows@@QEAA@XZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18002ED8C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A0D0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::AddThumbnailToCacheAsync(
        ContentManagement::ThumbnailCacheHelper *this,
        HSTRING a2,
        int a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v14; // [rsp+20h] [rbp-50h]
  _DWORD v15[4]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING v16; // [rsp+40h] [rbp-30h] BYREF
  char v17; // [rsp+48h] [rbp-28h]
  HSTRING v18; // [rsp+50h] [rbp-20h] BYREF
  char v19; // [rsp+58h] [rbp-18h]
  int v20; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  *a4 = 0LL;
  if ( a2 )
  {
    v16 = 0LL;
    v17 = 0;
    v18 = a2;
    v7 = Windows::Internal::String::Initialize(&v16, &v18);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v18 = v16;
      v16 = 0LL;
      v19 = 0;
      v17 = 1;
      v20 = a3;
      v15[0] = 1;
      v15[1] = 128;
      v15[2] = 0;
      v10 = Windows::Internal::MakeOpLambda<0,Windows::Internal::CNoResult,_lambda_c9532b930f253e78667049fecbd894a6_,>((__int64)&v18);
      v6 = Windows::Internal::MakeAsyncHelper<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::INilDelegate,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const ContentManagement::AddThumbnailToCacheAsyncActionName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>(
             (__int64 *)a4,
             (__int64)v15,
             v11,
             v12,
             (void (__fastcall ***)(_QWORD, __int64))v10);
      Windows::Internal::String::~String(&v18);
      if ( (v6 & 0x80000000) == 0 )
      {
        v6 = 0;
        goto LABEL_9;
      }
      v8 = v6;
      v9 = 187LL;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 164LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)v8,
      v14);
LABEL_9:
    Windows::Internal::String::~String(&v16);
    return v6;
  }
  v6 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA1,
    (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)0x80070057LL,
    v14);
  return v6;
}
