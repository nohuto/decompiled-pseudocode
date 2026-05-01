/*
 * XREFs of _lambda_b77313e954014d84b78f3886c1783ac6_::operator() @ 0x180285E9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___::Run @ 0x180286120 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b77313e954014d84b78f3886c1783ac6___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9624 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflector.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800DEB90 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x1801B2AF4 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_b77313e954014d84b78f3886c1783ac6_::operator()(Microsoft::WRL::WeakRef *this)
{
  _DWORD *v2; // r8
  int v3; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v5; // rbp
  HSTRING *v6; // rcx
  HSTRING *v7; // rcx
  int v8; // edx
  int v10[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v11; // [rsp+30h] [rbp-48h]
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-28h]
  int v14; // [rsp+58h] [rbp-20h]
  __int64 v15; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct IInspectable *v17; // [rsp+80h] [rbp+8h] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 10);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v10,
      (Microsoft::WRL::WeakRef *)((char *)this + 32),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    *(_OWORD *)v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  v3 = *((_DWORD *)this + 6);
  if ( v3 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v17, this);
    if ( v17 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
      v5 = StringRawBuffer;
      v6 = (HSTRING *)*((_QWORD *)this + 1);
      if ( !v6[21]
        || (v3 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v6, v6 + 21, StringRawBuffer),
            v3 < 0) )
      {
        v7 = (HSTRING *)*((_QWORD *)this + 1);
        if ( !v7[23]
          || (v3 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v7, v7 + 23, v5), v3 < 0) )
        {
          v3 = CSingleViewShellExperience::LaunchCore(
                 *((CSingleViewShellExperience **)this + 1),
                 (HSTRING *)(*((_QWORD *)this + 1) + 8LL),
                 v5);
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 88LL) + 104LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 88LL),
        *((_QWORD *)this + 1),
        (unsigned int)v3);
      if ( v3 < 0 )
        goto LABEL_15;
      wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
        (__int64 *)this + 4,
        v8);
    }
    v3 = 0;
LABEL_15:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11B,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v3);
LABEL_16:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v10);
  return (unsigned int)v3;
}
