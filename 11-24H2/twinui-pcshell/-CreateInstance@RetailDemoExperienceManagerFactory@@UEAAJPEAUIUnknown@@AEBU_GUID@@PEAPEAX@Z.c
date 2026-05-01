/*
 * XREFs of ?CreateInstance@RetailDemoExperienceManagerFactory@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803A4E10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetailDemoExperienceManager@@@Z @ 0x1800D9034 (--$MakeAndInitialize@VRetailDemoExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVRetai.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIImmersiveLayoutChanges@@UIRetailDemoExperienceManager@RetailDemo@Internal@Windows@@UIPrivilegedOperationsConsumer@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x1800DA21C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCIm_ea_1800DA21C.c)
 *     ??1?$com_ptr_t@VRetailDemoExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1803A4B28 (--1-$com_ptr_t@VRetailDemoExperienceManager@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall RetailDemoExperienceManagerFactory::CreateInstance(
        RetailDemoExperienceManagerFactory *this,
        struct IUnknown *a2,
        struct _GUID *a3,
        void **a4)
{
  int v6; // eax
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RetailDemoExperienceManager *v12; // [rsp+38h] [rbp+10h] BYREF

  try
  {
    *a4 = 0LL;
    if ( a2 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32C,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)0x80040110LL,
        v10);
    v12 = 0LL;
    v6 = Microsoft::WRL::Details::MakeAndInitialize<RetailDemoExperienceManager,RetailDemoExperienceManager,>(&v12);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x32F,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
        (const char *)(unsigned int)v6,
        v10);
    v7 = Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IImmersiveLayoutChanges,Windows::Internal::RetailDemo::IRetailDemoExperienceManager,IPrivilegedOperationsConsumer,Microsoft::WRL::FtmBase>>(
           (char *)v12,
           a3,
           a4);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v7,
        v10);
    wil::com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>::~com_ptr_t<RetailDemoExperienceManager,wil::err_exception_policy>(&v12);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x333,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\retaildemoexperiencemanager.cpp",
                           v8);
  }
  return result;
}
