/*
 * XREFs of ?SnapWindowWithZOrder@CShellSnapComponent@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A0F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z @ 0x180239180 (--$SetDeferredZOrderOnSnap@AEA_KAEA_K@CSnapComponentTelemetry@@SAXAEA_K0@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@UDeferredZOrder@CShellSnapComponent@@@?$vector@UDeferredZOrder@CShellSnapComponent@@V?$allocator@UDeferredZOrder@CShellSnapComponent@@@std@@@std@@AEAAPEAUDeferredZOrder@CShellSnapComponent@@QEAU23@$$QEAU23@@Z @ 0x18059ACF8 (--$_Emplace_reallocate@UDeferredZOrder@CShellSnapComponent@@@-$vector@UDeferredZOrder@CShellSnap.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShellSnapComponent::SnapWindowWithZOrder(_QWORD *a1, __int64 a2, __int64 a3, float *a4, int a5)
{
  float v5; // xmm0_4
  float v6; // xmm1_4
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rsi
  float v11; // xmm0_4
  int v12; // eax
  float v13; // xmm1_4
  char *v14; // rdx
  int v15; // eax
  unsigned int v16; // ebx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v21[4]; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v5 = *a4;
  v6 = a4[1];
  v8 = (int)*a4;
  v19 = a2;
  v9 = 2;
  v18 = a3;
  v10 = (int)a2;
  v11 = v5 + a4[2];
  v21[0] = v8;
  v12 = (int)v6;
  v13 = v6 + a4[3];
  v21[1] = v12;
  v21[2] = (int)v11;
  v21[3] = (int)v13;
  if ( a5 == 2 )
  {
    v9 = 1;
  }
  else if ( a5 != 4 )
  {
    v9 = 3;
    if ( a5 != 8 )
      v9 = 0;
  }
  if ( (_DWORD)a3 && (v9 & 1) != 0 )
  {
    v14 = (char *)a1[80];
    *(_QWORD *)&v20 = v10;
    *((_QWORD *)&v20 + 1) = (int)a3;
    if ( v14 == (char *)a1[81] )
    {
      std::vector<CShellSnapComponent::DeferredZOrder>::_Emplace_reallocate<CShellSnapComponent::DeferredZOrder>(
        (__int64)(a1 + 79),
        v14,
        &v20);
    }
    else
    {
      *(_OWORD *)v14 = v20;
      a1[80] += 16LL;
    }
  }
  CSnapComponentTelemetry::SetDeferredZOrderOnSnap<unsigned __int64 &,unsigned __int64 &>(&v19, &v18);
  v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64, _DWORD *, _QWORD))(a1[1] + 24LL))(a1 + 1, v10, v21, v9);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36E,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v15);
  return v16;
}
