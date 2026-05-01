/*
 * XREFs of ?CVirtualDesktopLock_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180097888
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ @ 0x180096284 (-RuntimeClassInitialize@CVirtualDesktopComponent@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1800389B0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ChainInterfaces@UITaskbarLayoutParserTest@@UITaskbarLayoutParser@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180095E20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$C_ea_180095E20.c)
 *     ??$MakeAndInitialize@VCVirtualDesktopLock@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCVirtualDesktopLock@@@WRL@Microsoft@@@012@@Z @ 0x1801E4EC8 (--$MakeAndInitialize@VCVirtualDesktopLock@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComP.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualDesktopLock_CreateInstance(const struct _GUID *a1, void **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const struct _GUID *v5; // rcx
  volatile int *v6; // rdx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopLock,CVirtualDesktopLock,>(&v12);
  if ( v3 >= 0 )
  {
    *a2 = 0LL;
    if ( InlineIsEqualGUID(&GUID_6f0436fc_29bf_4c71_b476_87fbdcf1e75a, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v8 = v12;
      *a2 = v12;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      v3 = 0;
    }
    else if ( InlineIsEqualGUID(v5, v5) )
    {
      v7 = v12;
      *a2 = v12;
      v3 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v3 = -2147467262;
    }
    if ( v3 >= 0 )
      goto LABEL_11;
    v4 = 41LL;
  }
  else
  {
    v4 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoplock.cpp",
    (const char *)(unsigned int)v3);
LABEL_11:
  v9 = (__int64)v12;
  if ( v12 )
  {
    v12 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::ChainInterfaces<ITaskbarLayoutParserTest,ITaskbarLayoutParser,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::Release(
      v9,
      v6);
  }
  return (unsigned int)v3;
}
