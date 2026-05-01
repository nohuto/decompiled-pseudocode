/*
 * XREFs of ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x18016CA58
 * Callers:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x18009D4C0 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z @ 0x18025B670 (-Clone@PositionerPriority@@UEAAJPEAPEAUIShellPositionerPriority@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PositionerPriority@@QEAA@XZ @ 0x18016CBB4 (--0PositionerPriority@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??A?$array@_N$0L@@std@@QEAAAEA_N_K@Z @ 0x180510794 (--A-$array@_N$0L@@std@@QEAAAEA_N_K@Z.c)
 *     ?fill@?$array@_N$0L@@std@@QEAAXAEB_N@Z @ 0x180510B10 (-fill@-$array@_N$0L@@std@@QEAAXAEB_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PositionerPriority_CreateInstance(int a1, __int64 a2, _QWORD *a3)
{
  PositionerPriority *v5; // rax
  PositionerPriority *v6; // rbx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF
  PositionerPriority *v14; // [rsp+50h] [rbp+18h] BYREF

  v13 = a2;
  *a3 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  v14 = 0LL;
  v5 = (PositionerPriority *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = PositionerPriority::PositionerPriority(v5);
    LOBYTE(v13) = 0;
    std::array<bool,11>::fill((char *)v6 + 64, &v13);
    *(_BYTE *)std::array<bool,11>::operator[]((char *)v6 + 64, a1 == 1) = 1;
    if ( v6 )
      (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v6 + 8LL))(v6);
    v14 = v6;
    if ( v6 )
    {
      (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v6 + 16LL))(v6);
      v6 = v14;
    }
    v7 = (**(__int64 (__fastcall ***)(PositionerPriority *, GUID *, _QWORD *))v6)(
           v6,
           &GUID_9579607f_b1e9_4350_b203_d2784a62a5cb,
           a3);
    v8 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x135,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
        (const char *)(unsigned int)v7);
    v9 = (__int64)v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x134,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\positionerpriority.cpp",
      (const char *)0x8007000ELL);
    v11 = (__int64)v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  return v8;
}
