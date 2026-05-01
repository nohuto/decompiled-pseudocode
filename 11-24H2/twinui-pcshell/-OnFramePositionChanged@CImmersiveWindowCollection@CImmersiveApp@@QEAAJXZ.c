/*
 * XREFs of ?OnFramePositionChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800883DC
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x180014730 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x1802198B0 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x180036784 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180068DEC (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA?AW4SEND_DEFERRED_INFO_RESULTS@12@XZ @ 0x180088628 (-SendDeferredInfoToAllWindows@CImmersiveWindowCollection@CImmersiveApp@@QEAA-AW4SEND_DEFERRED_IN.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x1802C87A4 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::OnFramePositionChanged(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char v2; // al
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // edi
  __m128i v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // esi
  int v10; // esi
  int v11; // eax
  const RECT *v12; // rdx
  int v13; // eax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  int v17; // eax
  int v18[10]; // [rsp+20h] [rbp-99h] BYREF
  __int64 v19; // [rsp+48h] [rbp-71h]
  _BYTE v20[80]; // [rsp+60h] [rbp-59h] BYREF
  __int128 v21; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v22; // [rsp+C0h] [rbp+7h]
  __int64 v23; // [rsp+D0h] [rbp+17h]
  int v24; // [rsp+D8h] [rbp+1Fh]
  __int128 v25; // [rsp+E0h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 18) + 248LL))(*((_QWORD *)this + 18));
  if ( v2 != *((_BYTE *)this + 193) )
  {
    *((_BYTE *)this + 193) = v2;
    if ( v2 )
      CImmersiveApp::CImmersiveWindowCollection::SetVisibilityOverride(this, 0LL, 0LL);
    else
      CImmersiveApp::CImmersiveWindowCollection::ClearVisibilityOverride(this, 0);
    CImmersiveApp::_UpdateAppStateAndSendNotifications(*((CImmersiveApp **)this + 19));
  }
  v3 = *((_QWORD *)this + 18);
  v23 = 0LL;
  v24 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v3 + 120LL))(v3, &v21);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C02,
      (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
      (const char *)(unsigned int)v4);
  }
  else
  {
    v6 = *(__m128i *)((char *)this + 88);
    v19 = *((_QWORD *)this + 13);
    DWORD2(v22) = _mm_cvtsi128_si32(_mm_loadl_epi64((const __m128i *)this + 6));
    LODWORD(v23) = v19;
    LODWORD(v22) = _mm_cvtsi128_si32(v6);
    memset_0(v20, 0, sizeof(v20));
    if ( *((_DWORD *)this + 8) != -1 && *((_DWORD *)this + 18) != -1 )
      HIDWORD(v22) = HIDWORD(*((_QWORD *)this + 7));
    v7 = *((_QWORD *)this + 18);
    LOBYTE(v18[0]) = 0;
    v5 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 272LL))(v7, v18) >= 0
      && LOBYTE(v18[0]) != *((_BYTE *)this + 195) )
    {
      v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 18) + 264LL))(
              *((_QWORD *)this + 18),
              (unsigned int)-(LOBYTE(v18[0]) == 0));
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E44,
          (int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
          (const char *)(unsigned int)v17);
      *((_BYTE *)this + 195) = v18[0];
    }
    v8 = *((_QWORD *)this + 18);
    v9 = *((_DWORD *)this + 51);
    v25 = 0LL;
    v10 = v9 & 2;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v8 + 128LL))(v8, &v25);
    v12 = (const RECT *)&v25;
    if ( v11 < 0 )
      v12 = 0LL;
    if ( v12 )
      CopyRect((LPRECT)this + 1, v12);
    v13 = v24;
    v14 = v22;
    *(_OWORD *)((char *)this + 72) = v21;
    v15 = v23;
    *(_OWORD *)((char *)this + 88) = v14;
    *((_QWORD *)this + 13) = v15;
    *((_DWORD *)this + 28) = v13;
    if ( *((_QWORD *)this + 21) && !v10 )
      CImmersiveApp::CImmersiveWindowCollection::SendDeferredInfoToAllWindows(this);
  }
  return v5;
}
