/*
 * XREFs of ?Create@DWMInputTarget@@SAJAEBUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x180053080
 * Callers:
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAPEAUIInputTarget@@@Z @ 0x18003AA58 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJUtagMsgRoutingInfo@@V-$ComPtr@VInputSite@@@WRL@Mic.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801A7510 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801AC024 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::Create(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  _DWORD *v8; // rdi
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*a2);
  if ( a3 )
  {
    *a3 = 0LL;
    v7 = malloc(0x88uLL);
    v8 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x88uLL);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v8[16] = 1;
      *(_QWORD *)v8 = &DWMInputTarget::`vftable'{for `IInputTarget'};
      *((_QWORD *)v8 + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
      *((_QWORD *)v8 + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
      *((_QWORD *)v8 + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
      *((_QWORD *)v8 + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
      *((_QWORD *)v8 + 5) = &DWMInputTarget::`vftable'{for `IDWMSupportedInputTarget'};
      *((_QWORD *)v8 + 6) = &DWMInputTarget::`vftable'{for `IInputSiteTarget'};
      *((_QWORD *)v8 + 7) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
      v8[18] = 0;
      *((_OWORD *)v8 + 5) = *(_OWORD *)a1;
      *((_OWORD *)v8 + 6) = *(_OWORD *)(a1 + 16);
      *((_QWORD *)v8 + 14) = *(_QWORD *)(a1 + 32);
      *((_QWORD *)v8 + 15) = v6;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v8[32] = 0;
      v8[33] = 0;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      *a3 = v8;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v9 = 0;
    }
    else
    {
      v9 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
        (const char *)0x8007000ELL,
        v12);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  else
  {
    v9 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x80004003LL,
      v12);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v10 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v9;
}
