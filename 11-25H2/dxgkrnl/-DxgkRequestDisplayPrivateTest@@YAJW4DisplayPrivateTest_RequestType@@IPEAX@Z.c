/*
 * XREFs of ?DxgkRequestDisplayPrivateTest@@YAJW4DisplayPrivateTest_RequestType@@IPEAX@Z @ 0x1401BB630
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x14041AC88 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?reset@?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z @ 0x140058B34 (-reset@-$unique_ptr@$$BY0A@EU-$default_delete@$$BY0A@E@wistd@@@wistd@@QEAAX$$T@Z.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__&DxgkSampleDisplayState_ @ 0x14006CF20 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9__-.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E8070 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 */

__int64 __fastcall DxgkRequestDisplayPrivateTest(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _PORT_MESSAGE *v5; // rax
  __int64 v6; // rdx
  struct _PORT_MESSAGE *v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  int v10; // [rsp+58h] [rbp-B0h] BYREF
  int v11; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v12; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER v13; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  struct _PORT_MESSAGE *v15; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v17[88]; // [rsp+B8h] [rbp-50h] BYREF

  v10 = 1;
  v12 = 0LL;
  v11 = 0;
  if ( !g_OSTestSigningEnabled )
    return 3221225506LL;
  v5 = (struct _PORT_MESSAGE *)operator new[](0x60uLL, 0x4B677844u, 256LL, a4);
  v15 = v5;
  v7 = v5;
  if ( v5 )
  {
    v16[0] = &v10;
    v16[1] = &v11;
    v16[2] = &v12;
    InitDisplayBrokerMessage_DispBroker::AlpcRequest_11___lambda_177d5f7aa933a3df5c8fb6d046728fa9___DxgkSampleDisplayState_(
      v5,
      v6,
      (__int64)v16,
      8);
    v13.QuadPart = -100000000LL;
    memset(v17, 0, sizeof(v17));
    v14 = 88LL;
    v9 = DxgkSendDisplayBrokerMessage(0x120000u, v7, 0LL, (struct _PORT_MESSAGE *)v17, &v14, 0LL, &v13);
    v8 = v9;
    if ( v9 >= 0 )
    {
      LODWORD(v8) = *(_DWORD *)&v17[80];
    }
    else
    {
      WdLogSingleEntry1(2LL, v9);
      WdLogGlobalForLineNumber = 2387;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DxgkSendDisplayBrokerMessage failed to send the display private test request (status = 0x%I64x).",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(6LL, 96LL);
    WdLogGlobalForLineNumber = 2337;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      0xFFFFFFFFLL,
      L"Cannot allocate buffer to hold the DisplayPrivateTest ALPC message (size = %d",
      96LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v8) = -1073741801;
  }
  wistd::unique_ptr<unsigned char [0],wistd::default_delete<unsigned char [0]>>::reset((void **)&v15);
  return (unsigned int)v8;
}
