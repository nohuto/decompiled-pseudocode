/*
 * XREFs of ?SetPosition@DWMCursor@@UEAAJJJ@Z @ 0x1801C1280
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z @ 0x180071230 (-CheckAndUpdateRasterizationScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18007F974 (-ArbitrateCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z @ 0x1801C005C (-GetDCompDevice@DWMCursorBroker@@AEAAJPEAPEAUIDCompositionDevice@@@Z.c)
 *     ?SetPosition@Cursor@InputTraceLogging@@SAX_KHH@Z @ 0x1801C1200 (-SetPosition@Cursor@InputTraceLogging@@SAX_KHH@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::SetPosition(DWMCursor *this, unsigned int a2, unsigned int a3)
{
  const char *v6; // r9
  int v7; // ebx
  int v8; // r14d
  DWMCursorBroker *v9; // rbx
  int DCompDevice; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IDCompositionDevice *v18; // [rsp+70h] [rbp+8h] BYREF

  InputTraceLogging::Cursor::SetPosition(*((unsigned int *)this + 10), a2, a3);
  v7 = *((_DWORD *)this + 20);
  v8 = *((_DWORD *)this + 21);
  *((_DWORD *)this + 20) = a2;
  *((_DWORD *)this + 21) = a3;
  if ( *((_DWORD *)this + 10) == 1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), a2, a3);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v6);
  if ( !*(_BYTE *)ISMTestMode::s_instance && (v7 != a2 || v8 != a3 || byte_1802460F4) )
  {
    if ( *((_QWORD *)this + 7) )
    {
      v18 = 0LL;
      v9 = (DWMCursorBroker *)*((_QWORD *)this + 4);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
      DCompDevice = DWMCursorBroker::GetDCompDevice(v9, &v18);
      v11 = DCompDevice;
      if ( DCompDevice < 0 )
      {
        v12 = 263LL;
LABEL_18:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v12,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
          (const char *)(unsigned int)DCompDevice);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
        return v11;
      }
      DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 7) + 40LL))(
                      *((_QWORD *)this + 7),
                      2LL);
      v11 = DCompDevice;
      if ( DCompDevice < 0 )
      {
        v12 = 264LL;
        goto LABEL_18;
      }
      DCompDevice = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 7) + 40LL))(
                      *((_QWORD *)this + 7),
                      2LL,
                      1LL);
      v11 = DCompDevice;
      if ( DCompDevice < 0 )
      {
        v12 = 265LL;
        goto LABEL_18;
      }
      DCompDevice = (*(__int64 (__fastcall **)(struct IDCompositionDevice *))(*(_QWORD *)v18 + 24LL))(v18);
      v11 = DCompDevice;
      if ( DCompDevice < 0 )
      {
        v12 = 267LL;
        goto LABEL_18;
      }
      byte_1802460F4 = 0;
      if ( (unsigned int)(*((_DWORD *)this + 10) - 1) <= 1 )
      {
        v14 = DWMCursorBroker::ArbitrateCursor(*((DWMCursorBroker **)this + 4), this);
        if ( v14 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x113,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
            (const char *)(unsigned int)v14);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v18);
    }
    v15 = *((_QWORD *)this + 9);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 64LL))(v15);
      byte_1802460F4 = 0;
    }
  }
  v16 = DWMCursor::CheckAndUpdateRasterizationScale((POINT *)this, 1);
  v11 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v16);
    return v11;
  }
  return 0LL;
}
