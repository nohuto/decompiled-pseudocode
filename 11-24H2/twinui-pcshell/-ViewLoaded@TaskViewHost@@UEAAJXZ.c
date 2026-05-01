/*
 * XREFs of ?ViewLoaded@TaskViewHost@@UEAAJXZ @ 0x1800D3440
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800D25C0 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800D2A64 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z @ 0x18011B76C (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXI_N0@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x18011C760 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?complete_without_lock@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180288ABC (-complete_without_lock@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028A6E4 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x18028B450 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028C5EC (-ensure_data@-$tip_test@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@@t.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802CE7F0 (--1-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_return.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806A61D8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_TaskViewShowTest@SwitcherTip@@U12@@details@tip2@@Uerr_re.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TaskViewHost::ViewLoaded(TaskViewHost *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  const char *v3; // r9
  int v4; // r14d
  TabletModeHelpers *v5; // rcx
  _DWORD *v6; // r8
  _QWORD *v7; // rsi
  _QWORD *v8; // r12
  int v9; // eax
  bool IsTabletMode; // al
  _QWORD *v11; // r15
  __int64 v12; // rsi
  __int64 result; // rax
  _OWORD v14[3]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-38h]
  int v16; // [rsp+78h] [rbp-30h]
  __int64 v17; // [rsp+80h] [rbp-28h]
  char v18; // [rsp+88h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v20; // [rsp+B0h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this - 96) & -(__int64)(this != (TaskViewHost *)120));
  try
  {
    v4 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
    v5 = (TabletModeHelpers *)(*((_QWORD *)this + 28) + 1LL);
    *((_QWORD *)this + 28) = v5;
    if ( v5 == (TabletModeHelpers *)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3) )
    {
      v6 = (_DWORD *)*((_QWORD *)this + 64);
      if ( *v6 == 1 )
      {
        wil::ActivityThreadWatcher::ActivityThreadWatcher(
          (wil::ActivityThreadWatcher *)v14,
          (TaskViewHost *)((char *)this + 240),
          (const struct wil::details::StoredCallContextInfo *)(v6 + 10));
      }
      else
      {
        memset(v14, 0, sizeof(v14));
        v15 = 0LL;
        v16 = 0;
        v17 = 0LL;
        v18 = 0;
      }
      v7 = (_QWORD *)*((_QWORD *)this + 25);
      v8 = (_QWORD *)*((_QWORD *)this + 26);
      while ( v7 != v8 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *((_QWORD *)this + 15)) )
        {
          v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 72LL))(*v7);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x1AE,
              (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
              (const char *)(unsigned int)v9,
              (int)v2);
        }
        ++v7;
      }
      *((_DWORD *)this + 158) = 1;
      wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v14);
    }
    if ( *((_QWORD *)this + 28) == (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3 )
    {
      IsTabletMode = TabletModeHelpers::IsTabletMode(v5);
      XamlSwitcherTelemetry::ShowXamlTaskView::Stop(
        (TaskViewHost *)((char *)this + 240),
        (__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 3,
        IsTabletMode,
        1);
      v11 = (_QWORD *)((char *)this + 640);
      v12 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>>::ensure_data((char *)this + 640);
      v20 = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 288));
      tip2::details::shared_data<0,0,1>::begin_update(v12 + 8);
      *(_BYTE *)(v12 + 272) = 1;
      tip2::details::shared_data<0,0,0>::end_update(v12 + 8);
      wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::reset(&v20);
      wil::com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<SwitcherTip::_tip_TaskViewShowTest,SwitcherTip::_tip_TaskViewShowTest>,wil::err_returncode_policy>(&v20);
      if ( *v11 )
        tip2::details::shared_data<0,0,0>::complete_without_lock(*v11 + 8LL);
    }
    if ( v4 >= 0 )
      LeaveCriticalSection(v2);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v20) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x1BD,
                     (unsigned int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\taskviewhost.cpp",
                     v3);
    return (unsigned int)v20;
  }
  return result;
}
