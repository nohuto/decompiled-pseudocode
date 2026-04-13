/*
 * XREFs of ??0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHSTRING__@@@Z @ 0x1800AB9E4
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800AC658 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800AA648 (--$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIXmlDocument@Dom.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities(
        CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities *this,
        HSTRING a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+40h] [rbp+18h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)this = 0LL;
  v4 = wil::ActivateInstance<Windows::Data::Xml::Dom::IXmlDocument>(&v14);
  v5 = *v4;
  *v4 = 0LL;
  v6 = *(_QWORD *)this;
  *(_QWORD *)this = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  v7 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v13 = 0LL;
  v8 = (**v7)(v7, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, &v13);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1C60,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8,
      v11);
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v13 + 48LL))(v13, a2);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v9,
      v11);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  return this;
}
