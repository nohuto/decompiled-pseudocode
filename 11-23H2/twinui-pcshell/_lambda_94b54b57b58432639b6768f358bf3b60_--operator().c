/*
 * XREFs of _lambda_94b54b57b58432639b6768f358bf3b60_::operator() @ 0x1804A33D0
 * Callers:
 *     ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802D63F0 (-Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@SmartCookie@@QEAAJPEAUISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x1804A2CBC (--$Register@UISnapComponent@@P81@EAAJPEAUIWindowSnappingEvents@@PEAK@ZP81@EAAJK@ZPEAVAppViewList.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_94b54b57b58432639b6768f358bf3b60_::operator()(__int64 **a1)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64, GUID *, GUID *, __int64); // rbp
  __int64 *v4; // rbx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64))(*(_QWORD *)v2 + 24LL);
  v4 = a1[1];
  v5 = v4[14];
  v4[14] = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = v3(
         v2,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         &GUID_4128efbd_072b_4d9c_ad0f_37a7e12dd9ab,
         (__int64)(v4 + 14));
  if ( v6 < 0 )
  {
    v8 = 56LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = SmartCookie::Register<ISnapComponent,long (ISnapComponent::*)(IWindowSnappingEvents *,unsigned long *),long (ISnapComponent::*)(unsigned long),Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *>(
         (__int64)(a1[1] + 15),
         a1[1][14],
         v7);
  if ( v6 < 0 )
  {
    v8 = 61LL;
    goto LABEL_5;
  }
  return 0LL;
}
