/*
 * XREFs of ?InternalRelease@?$ComPtr@VForegroundManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A76CC
 * Callers:
 *     ?GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ @ 0x18006D4C8 (-GetForegroundManager@ISMStatics@@SAPEAVForegroundManager@@XZ.c)
 *     ??1?$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A7390 (--1-$ComPtr@VForegroundManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManager@@@Z @ 0x1800AC114 (--$MakeAndInitialize@VForegroundManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVForegroundManag.c)
 *     ?Create@ForegroundManager@@SA?AV?$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ @ 0x1800ACEF4 (-Create@ForegroundManager@@SA-AV-$ComPtr@VForegroundManager@@@WRL@Microsoft@@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DA40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ForegroundManager>::InternalRelease(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v1);
  }
  return result;
}
