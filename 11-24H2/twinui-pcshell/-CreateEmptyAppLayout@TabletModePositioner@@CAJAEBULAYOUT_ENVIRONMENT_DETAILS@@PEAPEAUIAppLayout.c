/*
 * XREFs of ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18007721C
 * Callers:
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x180076EA0 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ @ 0x18051B87C (-InitializeAppLayoutForTabletModeEntry@TabletModePositioner@@AEAAJXZ.c)
 *     ?SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z @ 0x18051CBA8 (-SetTabletMode@TabletModePositioner@@AEAAXW4_TABLETMODESTATE@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z @ 0x180077634 (-CAppLayout_CreateInstance@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1802AB3E4 (-s_CreateInstance_Buffer@CAppLayoutItem@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall TabletModePositioner::CreateEmptyAppLayout(
        const struct LAYOUT_ENVIRONMENT_DETAILS *a1,
        struct IAppLayout **a2)
{
  const struct _GUID *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  void *v7; // rcx
  int v9; // eax
  __int64 v10; // rdx
  void *v11; // rcx
  void *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  void *v14; // [rsp+58h] [rbp+28h] BYREF
  void *v15; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v5 = CAppLayout_CreateInstance(a1, v4, &v14);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6D9,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v5);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v6;
  }
  v15 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  v9 = CAppLayoutItem::s_CreateInstance_Buffer(&GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, &v15);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = 1757LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
    return v6;
  }
  (*(void (__fastcall **)(void *, _QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *))(*(_QWORD *)v15 + 104LL))(
    v15,
    0LL,
    a1);
  (*(void (__fastcall **)(void *, __int64, const struct LAYOUT_ENVIRONMENT_DETAILS *))(*(_QWORD *)v15 + 104LL))(
    v15,
    1LL,
    a1);
  v9 = (*(__int64 (__fastcall **)(void *, void *, _QWORD, _QWORD))(*(_QWORD *)v14 + 224LL))(v14, v15, 0LL, 0LL);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = 1760LL;
    goto LABEL_11;
  }
  v9 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IAppLayout **))v14)(
         v14,
         &GUID_7baad876_2fc5_4561_93e1_17e868a174ed,
         a2);
  v6 = v9;
  if ( v9 < 0 )
  {
    v10 = 1763LL;
    goto LABEL_11;
  }
  v11 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  v12 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
