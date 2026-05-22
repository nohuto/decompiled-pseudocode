/*
 * XREFs of ?GetHwnd@BamoWindowsMessageDeliveryProxy@@UEAA_KXZ @ 0x1800252B0
 * Callers:
 *     ?PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ @ 0x1800250C0 (-PopulateInputSiteFromWindowId@DWMLegacyInputTarget@@AEAAXXZ.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800AFD6C (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoWindowsMessageDeliveryProxy::GetHwnd(BamoWindowsMessageDeliveryProxy *this)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rbp
  DWORD CurrentThreadId; // eax
  const char *v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  const char *v11; // r9
  signed __int32 v12; // edx
  bool v13; // sf
  signed __int32 v14; // edx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v17; // [rsp+30h] [rbp+8h]

  v2 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  v3 = 0LL;
  v17 = 0LL;
  v4 = *(_QWORD *)(v2 + 32);
  CurrentThreadId = GetCurrentThreadId();
  v7 = 0LL;
  v8 = 0LL;
  if ( *(_DWORD *)(v4 + 184) != CurrentThreadId )
  {
    v17 = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v4 + 16) + 24LL))(*(_QWORD *)(v4 + 16), 0LL);
    *(_DWORD *)(v4 + 184) = GetCurrentThreadId();
    v7 = v2;
    v8 = v2;
    v3 = v2;
  }
  v9 = *((_QWORD *)this + 5);
  if ( v7 )
  {
    v10 = *(_QWORD *)(v8 + 32);
    if ( *(_DWORD *)(v10 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x9A3,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v11);
    *(_DWORD *)(v10 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 16) + 32LL))(*(_QWORD *)(v10 + 16));
  }
  if ( v3 )
  {
    v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF);
    v13 = v12 - 1 < 0;
    v14 = v12 - 1;
    if ( v13 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoImplObject.inl",
        v6);
    if ( !v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
  }
  return v9;
}
