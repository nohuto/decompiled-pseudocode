/*
 * XREFs of ?GetResults@GammaFlashAsyncOperation@@UEAAJXZ @ 0x1803509D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ErrorCode@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00U?$AsyncCausalityOptions@$1?c_gammaFlashAsyncOperationName@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@67@@WRL@Microsoft@@IEAAXPEAJ@Z @ 0x18034CAC0 (-ErrorCode@-$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Micros.c)
 */

__int64 __fastcall GammaFlashAsyncOperation::GetResults(GammaFlashAsyncOperation *this)
{
  char *v1; // rcx
  int v2; // ebx
  signed __int32 v4; // [rsp+20h] [rbp-18h] BYREF
  char *v5; // [rsp+24h] [rbp-14h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  LODWORD(v5) = 0;
  v1 = (char *)this + 16;
  v4 = 0;
  _InterlockedCompareExchange(&v4, *((_DWORD *)v1 + 14), 0);
  if ( v4 == 1 )
    goto LABEL_4;
  if ( v4 == 3 )
  {
    Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const c_gammaFlashAsyncOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::ErrorCode(
      (__int64)v1,
      (volatile signed __int32 *)&v5);
LABEL_4:
    v2 = (int)v5;
    goto LABEL_5;
  }
  v2 = -2147418113;
LABEL_5:
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1108,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
