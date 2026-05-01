/*
 * XREFs of ?GetViewForSwitchByHostId@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x1801FDA10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180017474 (-_GetViewForSwitchInternalByHostId@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@_KPEAUIImme.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$CopyTo@UIImmersiveApplication@@@?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBAJPEAPEAUIImmersiveApplication@@@Z @ 0x1802F063C (--$CopyTo@UIImmersiveApplication@@@-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEBA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::GetViewForSwitchByHostId(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  _QWORD *v7; // r14
  CAppViewManager *v8; // rbx
  int ViewForSwitchInternalByHostId; // eax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v7 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v8 = (CAppViewManager *)(a1 - 32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  ViewForSwitchInternalByHostId = CAppViewManager::_GetViewForSwitchInternalByHostId(v8, a2, a3);
  v10 = ViewForSwitchInternalByHostId;
  if ( ViewForSwitchInternalByHostId >= 0 )
  {
    v12 = Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>::CopyTo<IImmersiveApplication>(&a5, v7);
    v10 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x35C,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v12);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35B,
      (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)ViewForSwitchInternalByHostId);
    v11 = (__int64)a5;
    if ( a5 )
    {
      a5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v10;
}
