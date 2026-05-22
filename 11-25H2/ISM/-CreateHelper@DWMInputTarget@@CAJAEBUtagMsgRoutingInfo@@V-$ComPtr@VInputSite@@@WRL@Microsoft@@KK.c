/*
 * XREFs of ?CreateHelper@DWMInputTarget@@CAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@KKPEAPEAUIInputTarget@@@Z @ 0x18003EE5C
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x18003EA30 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::CreateHelper(__int64 a1, _QWORD *a2, int a3, int a4, _QWORD *a5)
{
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !a5 )
  {
    v14 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x80004003LL,
      v17);
    v15 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return v14;
  }
  *a5 = 0LL;
  v9 = malloc(0x88uLL);
  v10 = v9;
  if ( !v9 )
  {
    v14 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x8007000ELL,
      v17);
    v16 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    return v14;
  }
  memset_0(v9, 0, 0x88uLL);
  v11 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*a2);
  v10[16] = 1;
  *(_QWORD *)v10 = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)v10 + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)v10 + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)v10 + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)v10 + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)v10 + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
  *((_QWORD *)v10 + 6) = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
  *((_QWORD *)v10 + 7) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  v10[18] = 0;
  *((_OWORD *)v10 + 5) = *(_OWORD *)a1;
  *((_OWORD *)v10 + 6) = *(_OWORD *)(a1 + 16);
  *((_QWORD *)v10 + 14) = *(_QWORD *)(a1 + 32);
  *((_QWORD *)v10 + 15) = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v10[32] = a3;
  v10[33] = a4;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *a5 = v10;
  v12 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return 0LL;
}
