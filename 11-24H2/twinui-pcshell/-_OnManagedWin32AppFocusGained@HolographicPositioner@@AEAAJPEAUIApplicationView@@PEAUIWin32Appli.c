/*
 * XREFs of ?_OnManagedWin32AppFocusGained@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIWin32ApplicationView@@@Z @ 0x18040DB1C
 * Callers:
 *     ?OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x18006FB20 (-OnApplicationViewChanged@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_C.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x180070040 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180070120 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18040D030 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040D3C8 (-_HandleControlLostForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall HolographicPositioner::_OnManagedWin32AppFocusGained(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IWin32ApplicationView *a3)
{
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  struct IWin32ApplicationView *v17; // [rsp+60h] [rbp+30h] BYREF
  int v18; // [rsp+68h] [rbp+38h] BYREF

  v17 = a3;
  HolographicPositioner::_FindViewHostItem((__int64)this, &v15);
  if ( !v15 )
    return 0LL;
  v18 = 6;
  v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 400LL))(a2, &v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        LOBYTE(v17) = 0;
        if ( (*(int (__fastcall **)(__int64, struct IWin32ApplicationView **))(*(_QWORD *)v15 + 80LL))(v15, &v17) >= 0
          && !(_BYTE)v17 )
        {
          v9 = HolographicPositioner::_RaiseRequestNavigateToView(this, a2);
          v10 = v9;
          if ( v9 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x913,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v9);
            v11 = v15;
            if ( v15 )
            {
              v15 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
            }
            return v10;
          }
        }
      }
    }
    else if ( IsHolographicWin32SlatesFeatureEnabled() )
    {
      if ( !HolographicPositioner::_IsDisplayContextHolographic(this) )
      {
        v12 = HolographicPositioner::_HandleControlLostForView(this, a2);
        v10 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x922,
            (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
            (const char *)(unsigned int)v12);
          v13 = v15;
          if ( v15 )
          {
            v15 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
          return v10;
        }
      }
    }
    v14 = v15;
    if ( v15 )
    {
      v15 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x903,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v5);
  v7 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v6;
}
