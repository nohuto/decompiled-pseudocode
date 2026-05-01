/*
 * XREFs of ?ApplyPrependDefaultTaskbarLayout@CPinnedList@@UEAAJXZ @ 0x18068BCC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800B9040 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?to_wstring@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180298340 (-to_wstring@std@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@1@H@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvider@ProgrammableTaskbarTelemetry@@SAX$$QEAW4FailureCases@1@@Z @ 0x18068A290 (--$FailureEvent@W4FailureCases@ProgrammableTaskbarTelemetry@@@ProgrammableTaskbarTelemetryProvid.c)
 *     ??0?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18068A8C0 (--0-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProv.c)
 *     ??1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ @ 0x18068B094 (--1TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAA@XZ.c)
 *     GetPidlsFromTaskbarLayout @ 0x18068ED6C (GetPidlsFromTaskbarLayout.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 *     ?StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ @ 0x180695854 (-StartActivity@TaskbarLayoutPrependDefaultActivity@TaskbarFlexibleLayoutTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1806959A4 (-Stop@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     _CacheAppOrderInIDList @ 0x180696E4C (_CacheAppOrderInIDList.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPinnedList::ApplyPrependDefaultTaskbarLayout(CPinnedList *this)
{
  int PidlsFromTaskbarLayout; // eax
  unsigned int v3; // ebx
  int v5; // ebx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r15
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  LPVOID v15[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h]
  __int64 v18; // [rsp+68h] [rbp-A0h]
  int v19; // [rsp+70h] [rbp-98h] BYREF
  void *v20[4]; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v21[42]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  memset_0(v21, 0, sizeof(v21));
  wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TaskbarLayoutPrependDefaultActivity");
  v21[0] = (volatile signed __int32 *)&TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::`vftable';
  TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::StartActivity((TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity *)v21);
  v19 = 0;
  pv[1] = 0LL;
  v17 = 0uLL;
  v18 = 0LL;
  PidlsFromTaskbarLayout = GetPidlsFromTaskbarLayout(3LL, &pv[1], &v19, 0LL);
  v3 = PidlsFromTaskbarLayout;
  if ( PidlsFromTaskbarLayout >= 0 )
  {
    v15[1] = &pv[1];
    LOBYTE(pv[0]) = 1;
    if ( v19 )
    {
      v5 = v17 - 1;
      if ( (int)v17 - 1 >= 0 )
      {
        v6 = 8LL * v5;
        v7 = v6;
        do
        {
          std::to_wstring((char **)v20, v5 + 1);
          CacheAppOrderInIDList(*(_QWORD *)((char *)pv[1] + v6), v20, (char *)pv[1] + v7);
          v8 = *(_QWORD *)((char *)pv[1] + v6);
          if ( !(*(unsigned int (__fastcall **)(CPinnedList *, __int64))(*(_QWORD *)this + 72LL))(this, v8) )
          {
            v9 = CPinnedList::InternalModify((char *)this - 16, v8, 0LL, 37LL);
            if ( v9 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA04,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v9);
          }
          if ( (unsigned int)CPinnedList::InternalModify((char *)this - 16, 0LL, v8, 37LL) )
          {
            LODWORD(v15[0]) = 7;
            ProgrammableTaskbarTelemetry::ProgrammableTaskbarTelemetryProvider::FailureEvent<enum ProgrammableTaskbarTelemetry::FailureCases>((char *)v15);
          }
          else
          {
            v10 = CPinnedList::InternalModify((char *)this - 16, v8, 1LL, 37LL);
            if ( v10 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xA0B,
                (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
                (const char *)(unsigned int)v10);
          }
          std::wstring::_Tidy_deallocate(v20);
          v7 -= 8LL;
          v6 -= 8LL;
          --v5;
        }
        while ( v5 >= 0 );
      }
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(v21);
      v11 = 0;
      if ( (_QWORD)v17 )
      {
        v12 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[1] + v12));
          v12 = ++v11;
        }
        while ( v11 < (unsigned __int64)v17 );
      }
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      *(_QWORD *)&v17 = 0LL;
      v18 = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v21);
      return 0LL;
    }
    else
    {
      v13 = 0;
      if ( (_QWORD)v17 )
      {
        v14 = 0LL;
        do
        {
          ILFree(*((LPITEMIDLIST *)pv[1] + v14));
          v14 = ++v13;
        }
        while ( v13 < (unsigned __int64)v17 );
      }
      if ( pv[1] )
      {
        CoTaskMemFree(pv[1]);
        pv[1] = 0LL;
      }
      *(_QWORD *)&v17 = 0LL;
      v18 = 0LL;
      TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v21);
      return 2147947423LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9E8,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)PidlsFromTaskbarLayout);
    if ( pv[1] )
    {
      CoTaskMemFree(pv[1]);
      pv[1] = 0LL;
    }
    *(_QWORD *)&v17 = 0LL;
    v18 = 0LL;
    TaskbarFlexibleLayoutTelemetry::TaskbarLayoutPrependDefaultActivity::~TaskbarLayoutPrependDefaultActivity(v21);
    return v3;
  }
}
