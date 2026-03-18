/*
 * XREFs of ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x1403DC890
 * Callers:
 *     ?ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ @ 0x1403DC7F8 (-ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x14005915C (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140060D9C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _DXGKCALLONEXIT__lambda_ab20bd11cb5e847b50387722fd71407e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x14006473C (_DXGKCALLONEXIT__lambda_ab20bd11cb5e847b50387722fd71407e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??0DispBrokerClientHandle@@QEAA@PEAX@Z @ 0x14006CE2C (--0DispBrokerClientHandle@@QEAA@PEAX@Z.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     _lambda_ab20bd11cb5e847b50387722fd71407e_::operator() @ 0x1401BD670 (_lambda_ab20bd11cb5e847b50387722fd71407e_--operator().c)
 */

__int64 __fastcall DispBrokerClient::EnsureConnected(DispBrokerClient *this)
{
  unsigned __int64 v2; // rax
  int v3; // eax
  const unsigned __int16 *v4; // r8
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  DispBrokerClientHandle *v8; // rax
  __int64 v10; // [rsp+68h] [rbp-A0h] BYREF
  DispBrokerClientHandle *v11; // [rsp+70h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v13; // [rsp+80h] [rbp-88h] BYREF
  __int64 v14; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v17; // [rsp+C0h] [rbp-48h]
  __int128 v18; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v19; // [rsp+E8h] [rbp-20h]
  unsigned __int64 *v20; // [rsp+F0h] [rbp-18h]
  unsigned int **v21[4]; // [rsp+F8h] [rbp-10h] BYREF
  char v22; // [rsp+118h] [rbp+10h]
  _QWORD v23[10]; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int16 v24[56]; // [rsp+178h] [rbp+70h] BYREF
  WCHAR SourceString[56]; // [rsp+1E8h] [rbp+E0h] BYREF

  LODWORD(v10) = 0;
  v2 = KeQueryInterruptTimePrecise(&v13);
  v11 = 0LL;
  *(_QWORD *)&v18 = this;
  *((_QWORD *)&v18 + 1) = &v11;
  v19 = &v10;
  v13 = v2 / 0xA;
  v20 = &v13;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v21, &v18);
  memset(v24, 0, 0x6CuLL);
  memset(SourceString, 0, 0x6CuLL);
  if ( **(_DWORD **)this )
  {
    v3 = RtlStringCchPrintfW(v24, 54LL, L"\\Sessions\\%d");
    LODWORD(v10) = v3;
    if ( v3 < 0 )
    {
      WdLogSingleEntry2(2LL, v3, 0LL);
      WdLogGlobalForLineNumber = 218;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to build the session directory path (Status = 0x%I64x).",
        (int)v10,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_14;
    }
  }
  v4 = L"%s\\BaseNamedObjects\\DispBrokerPort";
  if ( !*((_BYTE *)this + 9) )
    v4 = L"%s\\Windows\\DispBrokerPort";
  v5 = RtlStringCchPrintfW(SourceString, 54LL, v4, v24);
  LODWORD(v10) = v5;
  if ( v5 >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v16[0] = 48LL;
    v16[3] = 512LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
    v17 = 0LL;
    memset(v23, 0, 0x48uLL);
    v23[2] = 65280LL;
    LODWORD(v23[0]) = 0x100000;
    v14 = -150000000LL;
    Handle = 0LL;
    v7 = ZwAlpcConnectPort(&Handle, &DestinationString, v16, v23, 1179648, 0LL, 0LL, 0LL, 0LL, 0LL, &v14);
    LODWORD(v10) = v7;
    if ( v7 != 258 )
    {
      if ( v7 == 192 )
      {
        LODWORD(v10) = -1073741749;
        WdLogSingleEntry2(2LL, -1073741749LL, 3LL);
        WdLogGlobalForLineNumber = 263;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to connect the display broker ALPC port as current thread is being terminating, returning 0x%I64x.",
          (int)v10,
          3LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        if ( v7 >= 0 )
        {
          v8 = (DispBrokerClientHandle *)operator new(0x18uLL, 0x4B677844u, 256LL);
          if ( v8 )
          {
            v11 = DispBrokerClientHandle::DispBrokerClientHandle(v8, Handle);
            if ( v11 )
              goto LABEL_14;
          }
          else
          {
            v11 = 0LL;
          }
          ZwClose(Handle);
          WdLogSingleEntry0(6LL);
          WdLogGlobalForLineNumber = 281;
          DxgkLogInternalTriageEvent(
            0LL,
            262145LL,
            0xFFFFFFFFLL,
            L"Failed to allocate DispBrokerClientHandle for a new ALPC port.",
            281LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v6 = -1073741801;
          goto LABEL_22;
        }
        WdLogSingleEntry2(2LL, v7, 2LL);
        WdLogGlobalForLineNumber = 270;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to connect the display broker ALPC port (Status = 0x%I64x).",
          (int)v10,
          2LL,
          0LL,
          0LL,
          0LL);
      }
LABEL_14:
      v6 = v10;
LABEL_22:
      DXGKCALLONEXIT__lambda_ab20bd11cb5e847b50387722fd71407e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v21);
      return v6;
    }
    LODWORD(v10) = -1073741505;
    WdLogSingleEntry1(2LL, -1073741505LL);
    WdLogGlobalForLineNumber = 255;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Timeout to connect display broker ALPC port, returning 0x%I64x.",
      (int)v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    WdLogSingleEntry2(2LL, v5, 1LL);
    WdLogGlobalForLineNumber = 229;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to build the display broker ALPC port object path (Status = 0x%I64x).",
      (int)v10,
      1LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = v10;
  if ( v22 )
    lambda_ab20bd11cb5e847b50387722fd71407e_::operator()(v21);
  return v6;
}
