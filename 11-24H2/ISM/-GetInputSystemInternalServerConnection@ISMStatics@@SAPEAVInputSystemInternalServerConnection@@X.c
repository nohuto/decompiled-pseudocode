/*
 * XREFs of ?GetInputSystemInternalServerConnection@ISMStatics@@SAPEAVInputSystemInternalServerConnection@@XZ @ 0x18000C34C
 * Callers:
 *     ?Broadcast@InputConfigContextProvider@@AEAAXXZ @ 0x18000C178 (-Broadcast@InputConfigContextProvider@@AEAAXXZ.c)
 *     ?OnDisconnected@InputProcessProxy@@MEAAJXZ @ 0x18019B040 (-OnDisconnected@InputProcessProxy@@MEAAJXZ.c)
 *     ?OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A137C (-OnTouchpadAdded@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z @ 0x1801A14C4 (-OnTouchpadRemoved@VirtualTouchpadContextProvider@@QEAAJ_K@Z.c)
 *     ?OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z @ 0x1801A15F4 (-OnTouchpadUpdated@VirtualTouchpadContextProvider@@QEAAJAEBUVirtualTouchpadRect@@@Z.c)
 *     ?OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOcclusionRect@@@Z @ 0x1801A1E54 (-OnOcclusionRectAdded@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUDisplayOc.c)
 *     ?OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z @ 0x1801A1FF8 (-OnOcclusionRectRemoved@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@@Z.c)
 *     ?OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT@@@Z @ 0x1801A2108 (-OnOcclusionRectUpdated@DisplayOcclusionContextProvider@@QEAAJAEBUDockInputIdentity@@AEBUtagRECT.c)
 *     ??1HeatProcessor@@MEAA@XZ @ 0x1801B8EE0 (--1HeatProcessor@@MEAA@XZ.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801B9188 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ?Create@InputSystemInternalServerConnection@@SA?AV?$ComPtr@VInputSystemInternalServerConnection@@@WRL@Microsoft@@PEAUIMessageSession@@@Z @ 0x18000CD64 (-Create@InputSystemInternalServerConnection@@SA-AV-$ComPtr@VInputSystemInternalServerConnection@.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18008DEC0 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
struct InputSystemInternalServerConnection *ISMStatics::GetInputSystemInternalServerConnection(void)
{
  int v1; // eax
  struct InputSystemInternalServerConnection **v2; // rax
  struct InputSystemInternalServerConnection *v3; // rcx
  Microsoft::Bamo::BaseBamoConnection *v4; // rcx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::Bamo::BaseBamoConnection *v9; // [rsp+38h] [rbp+10h] BYREF

  if ( !ISMStatics::s_inputSystemInternalServerConnection )
  {
    v8 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v8);
    v1 = CoreUICreate(&v8);
    if ( v1 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\ismstatics.cpp",
        (const char *)(unsigned int)v1,
        v6);
    v2 = (struct InputSystemInternalServerConnection **)InputSystemInternalServerConnection::Create((unsigned int)&v9);
    v3 = *v2;
    *v2 = 0LL;
    ISMStatics::s_inputSystemInternalServerConnection = v3;
    v4 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      Microsoft::Bamo::BaseBamoConnection::Release(v4);
    }
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  return ISMStatics::s_inputSystemInternalServerConnection;
}
