/*
 * XREFs of ?InternalRelease@?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@IEAAKXZ @ 0x180143760
 * Callers:
 *     ??$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPPIAllUpViewService@@@WRL@Microsoft@@@012@AEAPEAUIMultitaskingViewTaskScheduler@@@Z @ 0x1802A4518 (--$MakeAndInitialize@VCPPIAllUpViewService@@V1@AEAPEAUIMultitaskingViewTaskScheduler@@@Details@W.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UIPPIAllUpViewService@@UIPPIAllUpViewInvoker@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180143790 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWR_ea_180143790.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CPPIAllUpViewService>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,IPPIAllUpViewService,IPPIAllUpViewInvoker>::Release(v1);
  }
  return result;
}
