/*
 * XREFs of ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x1800B64B0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800836DC (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::CommonHelper::SettingsContainer::GetValues(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  struct Windows::Foundation::Collections::IPropertySet *v6; // rsi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet *v11; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+58h] [rbp+10h]
  _DWORD *v13; // [rsp+60h] [rbp+18h]

  v12 = a2;
  v11 = 0LL;
  v3 = *(__int64 **)(a1 + 8);
  v4 = *v3;
  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Foundation::Collections::IPropertySet **))(v4 + 64))(
         v3,
         &v11);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x37,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v5,
      0);
  v6 = v11;
  v7 = operator new(0x28uLL);
  v8 = v7;
  v13 = v7;
  if ( v7 )
  {
    v7[2] = 1;
    v7[3] = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj<CreativeFramework::Triggers::PropertySetHelper>::`vftable';
    CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
      (CreativeFramework::Triggers::PropertySetHelper *)(v7 + 4),
      v6);
  }
  else
  {
    v8 = 0LL;
  }
  a2[1] = v8;
  *a2 = v8 + 4;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v11);
  return a2;
}
