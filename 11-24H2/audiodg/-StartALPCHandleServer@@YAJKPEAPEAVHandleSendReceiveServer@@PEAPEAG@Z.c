/*
 * XREFs of ?StartALPCHandleServer@@YAJKPEAPEAVHandleSendReceiveServer@@PEAPEAG@Z @ 0x1400383AC
 * Callers:
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053C50 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UControlData_V0@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x1400836A0 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V0@@UVolatileControlData_V0@@UC.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140090820 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140038494 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ?reset@?$unique_ptr@VHandleSendReceiveServer@@U?$default_delete@VHandleSendReceiveServer@@@wistd@@@wistd@@QEAAXPEAVHandleSendReceiveServer@@@Z @ 0x140043FA4 (-reset@-$unique_ptr@VHandleSendReceiveServer@@U-$default_delete@VHandleSendReceiveServer@@@wistd.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall StartALPCHandleServer(int a1, struct HandleSendReceiveServer **a2, unsigned __int16 **a3)
{
  _QWORD *v6; // rbx
  unsigned int v7; // edi
  int v8; // eax
  unsigned int v9; // esi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v12; // [rsp+58h] [rbp+20h] BYREF

  v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v6;
  v7 = 0;
  if ( v6 )
  {
    *v6 = &HandleSendReceiveServer::`vftable';
    v6[1] = 0LL;
    *((_DWORD *)v6 + 4) = a1;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
    *((_DWORD *)v6 + 12) = 0;
    *((_BYTE *)v6 + 52) = 0;
  }
  else
  {
    v6 = 0LL;
  }
  v12 = v6;
  if ( !v6 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      (const char *)0x8007000ELL);
    return v7;
  }
  v8 = HandleSendReceiveServer::Initialize((HandleSendReceiveServer *)v6, a3);
  v9 = v8;
  if ( v8 >= 0 )
  {
    *a2 = (struct HandleSendReceiveServer *)v6;
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2A,
    (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
    (const char *)(unsigned int)v8);
  wistd::unique_ptr<HandleSendReceiveServer,wistd::default_delete<HandleSendReceiveServer>>::reset(&v12, 0LL);
  return v9;
}
