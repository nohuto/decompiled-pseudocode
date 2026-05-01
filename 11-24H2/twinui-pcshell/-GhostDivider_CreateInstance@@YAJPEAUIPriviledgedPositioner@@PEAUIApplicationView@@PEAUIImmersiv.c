/*
 * XREFs of ?GhostDivider_CreateInstance@@YAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@PEAUIImmersiveMonitorManager@@PEAUHWND__@@W4GhostDividerPlacement@@W4GhostDividerSize@@AEBU_GUID@@PEAPEAX@Z @ 0x1802A32C8
 * Callers:
 *     ?CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z @ 0x1801C0E74 (-CreateGhostDivider@JointResize@@AEAAJW4GhostDividerShowFlags@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     InlineIsEqualGUID @ 0x180038D10 (InlineIsEqualGUID.c)
 *     ?InternalRelease@?$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ @ 0x1801D4578 (-InternalRelease@-$ComPtr@VGhostDivider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UIPWSLayoutItemInternal@@UIPenWorkspaceLayoutItem@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801D46D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_1801D46D0.c)
 *     ??$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Details@WRL@Microsoft@@YAJPEAPEAVGhostDivider@@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@AEAPEAUIImmersiveMonitorManager@@AEAPEAUHWND__@@AEAW4GhostDividerPlacement@@AEAW4GhostDividerSize@@@Z @ 0x1802A33F0 (--$MakeAndInitialize@VGhostDivider@@V1@AEAPEAUIPriviledgedPositioner@@AEAPEAUIApplicationView@@A.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GhostDivider_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _QWORD *v8; // rbx
  int v9; // r9d
  int v10; // eax
  unsigned int v11; // edi
  volatile int *v12; // rdx
  __int64 v13; // rcx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 v18; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]
  __int64 v20; // [rsp+50h] [rbp+10h] BYREF
  __int64 v21; // [rsp+58h] [rbp+18h] BYREF

  v21 = a2;
  v20 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease((__int64 *)&a8);
  v10 = Microsoft::WRL::Details::MakeAndInitialize<GhostDivider,GhostDivider,IPriviledgedPositioner * &,IApplicationView * &,IImmersiveMonitorManager * &,HWND__ * &,enum GhostDividerPlacement &,enum GhostDividerSize &>(
          (unsigned int)&a8,
          (unsigned int)&v20,
          (unsigned int)&v21,
          v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    *v8 = 0LL;
    if ( InlineIsEqualGUID(&GUID_7b6fb5ff_f28e_4cb4_b5a2_b48301faca38, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v18 = (__int64)a8;
      *v8 = a8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
      v17 = 0;
    }
    else if ( InlineIsEqualGUID(v15, v15) )
    {
      v16 = (__int64)a8;
      *v8 = a8;
      v17 = 0;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    }
    else
    {
      v17 = -2147467262;
    }
    if ( v17 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A8,
        (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
        (const char *)(unsigned int)v17);
    Microsoft::WRL::ComPtr<GhostDivider>::InternalRelease((__int64 *)&a8);
    return (unsigned int)v17;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A7,
      (int)"pcshell\\twinui\\jointresize\\lib\\ghostdivider.cpp",
      (const char *)(unsigned int)v10);
    v13 = (__int64)a8;
    if ( a8 )
    {
      a8 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<IPWSLayoutItemInternal,IPenWorkspaceLayoutItem,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
        v13,
        v12);
    }
    return v11;
  }
}
