/*
 * XREFs of ?InternalRelease@?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1800796C4
 * Callers:
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x180079560 (--$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 *     ?CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180079B10 (-CreateInstance@CortanaStoreAppExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180237558 (--1-$ComPtr@VCortanaStoreAppExperienceManager@@@WRL@Microsoft@@QEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UICortanaStoreAppExperienceManager@@UIImmersiveLayoutChanges@@UIInputHostLayoutChanges@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800796F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellCo.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CortanaStoreAppExperienceManager>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,ICortanaStoreAppExperienceManager,IImmersiveLayoutChanges,IInputHostLayoutChanges,IPrivilegedOperationsConsumer>::Release(v1);
  }
  return result;
}
