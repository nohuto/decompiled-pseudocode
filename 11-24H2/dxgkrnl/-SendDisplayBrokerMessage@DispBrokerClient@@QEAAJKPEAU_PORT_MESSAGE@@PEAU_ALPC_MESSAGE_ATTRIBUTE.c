/*
 * XREFs of ?SendDisplayBrokerMessage@DispBrokerClient@@QEAAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1840
 * Callers:
 *     ?SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ @ 0x1401BE408 (-SendCachedAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAJXZ.c)
 *     ?DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_LARGE_INTEGER@@@Z @ 0x1403E1720 (-DxgkSendDisplayBrokerMessage@@YAJKPEAU_PORT_MESSAGE@@PEAU_ALPC_MESSAGE_ATTRIBUTES@@0PEA_K1PEAT_.c)
 *     ?SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ @ 0x1403ED588 (-SendCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x140052D60 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140057FF0 (_DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___ @ 0x14005915C (DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297___.c)
 *     ?CacheAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAXAEAU?$AlpcDatagram@$04@DispBroker@@@Z @ 0x1401BDF40 (-CacheAsyncRefreshOrientation@DXGSESSIONDATA@@QEAAXAEAU-$AlpcDatagram@$04@DispBroker@@@Z.c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403DBB1C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 */

__int64 __fastcall DispBrokerClient::SendDisplayBrokerMessage(
        DispBrokerClient *this,
        unsigned int a2,
        struct _PORT_MESSAGE *a3,
        struct _ALPC_MESSAGE_ATTRIBUTES *a4,
        struct _PORT_MESSAGE *a5,
        unsigned __int64 *a6,
        struct _ALPC_MESSAGE_ATTRIBUTES *a7,
        union _LARGE_INTEGER *a8)
{
  int v10; // r8d
  int v11; // r8d
  __int64 v12; // rax
  const wchar_t *v13; // r9
  unsigned __int64 TotalLength; // rdx
  struct _PORT_MESSAGE *v15; // r15
  struct _ALPC_MESSAGE_ATTRIBUTES *v16; // r13
  unsigned __int64 *v17; // r14
  unsigned int v18; // ebx
  ULONG Length; // ecx
  union _LARGE_INTEGER *v21; // r12
  int v22; // eax
  unsigned int v23; // esi
  unsigned int *v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-91h]
  DispBrokerClientHandle *v27; // [rsp+50h] [rbp-61h] BYREF
  ULONG *v28; // [rsp+58h] [rbp-59h] BYREF
  __int128 v29; // [rsp+60h] [rbp-51h] BYREF
  DispBrokerClient *v30; // [rsp+70h] [rbp-41h]
  ULONG **v31; // [rsp+78h] [rbp-39h]
  _BYTE v32[112]; // [rsp+80h] [rbp-31h] BYREF
  int v33; // [rsp+100h] [rbp+4Fh] BYREF
  unsigned int v34; // [rsp+108h] [rbp+57h]
  int v35; // [rsp+110h] [rbp+5Fh] BYREF
  struct _ALPC_MESSAGE_ATTRIBUTES *v36; // [rsp+118h] [rbp+67h]

  v36 = a4;
  v34 = a2;
  v30 = this;
  *(_QWORD *)&v29 = &v33;
  v33 = -1073741811;
  *((_QWORD *)&v29 + 1) = &v35;
  v35 = 0;
  v31 = &v28;
  v28 = 0LL;
  DXGKCALLONEXIT__lambda_fe0a1c8bb5d899668299a10802864297_((__int64)v32, &v29);
  v11 = v10 & 0x20000;
  if ( !a3 )
  {
    WdLogSingleEntry0(2LL);
    v12 = 425LL;
    v13 = L"Caller did not specified the message to be sent to display broker.";
LABEL_8:
    WdLogGlobalForLineNumber = v12;
    goto LABEL_9;
  }
  TotalLength = a3->u1.s1.TotalLength;
  if ( TotalLength < 0x50 )
  {
    WdLogSingleEntry1(2LL, TotalLength);
    v12 = a3->u1.s1.TotalLength;
    v13 = L"The message is smaller than AlpcMessage (size = 0x%I64x).";
    WdLogGlobalForLineNumber = 435;
LABEL_9:
    DxgkLogInternalTriageEvent(0LL, 0x40000LL, 0xFFFFFFFFLL, v13, v12, 0LL, 0LL, 0LL, 0LL);
LABEL_10:
    v18 = v33;
    goto LABEL_11;
  }
  v15 = a5;
  v16 = a7;
  v17 = a6;
  v28 = (ULONG *)a3;
  if ( a5 )
  {
    if ( !a6 )
    {
LABEL_7:
      WdLogSingleEntry0(2LL);
      v12 = 444LL;
      v13 = L"The parameters of the receiving message are not consistent.";
      goto LABEL_8;
    }
  }
  else if ( a6 || a7 )
  {
    goto LABEL_7;
  }
  if ( !*((_BYTE *)this + 8) )
  {
    Length = a3[1].u1.Length;
    if ( ((Length - 1) & 0xFFFFFFF6) != 0 || Length == 2 )
    {
      WdLogSingleEntry1(2LL, a3[1].u1.Length);
      v26 = v28[10];
      WdLogGlobalForLineNumber = 460;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"DisplayBroker is disabled so failing type 0x%I64x",
        v26,
        0LL,
        0LL,
        0LL,
        0LL);
      v18 = -1073741637;
      goto LABEL_11;
    }
  }
  v21 = a8;
  if ( !v11 )
  {
    if ( a5 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 471;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Receiving message does not mean anything when senting async message.",
        471LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
    if ( a8 )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 480;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Timeout does not mean anything when senting async message.",
        480LL,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_10;
    }
  }
  DispBrokerClient::ReferencePort((struct _KTHREAD **)this, &v27);
  if ( v27 )
  {
    v35 |= 2u;
    v22 = ZwAlpcSendWaitReceivePort(*((_QWORD *)v27 + 1), v34, a3, v36, v15, v17, v16, v21);
    v23 = v22;
    v33 = v22;
    if ( v22 == -1073740031 )
    {
      v33 = -1073741772;
      WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
      WdLogGlobalForLineNumber = 555;
    }
    else if ( v22 == 258 )
    {
      v35 |= 4u;
      v33 = -1073741505;
      WdLogSingleEntry3(2LL, **(unsigned int **)this, -1073741505LL, 0LL);
      v24 = *(unsigned int **)this;
      WdLogGlobalForLineNumber = 565;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Timeout to send ALPC message to display broker in session 0x%I64x, returning 0x%I64x.",
        *v24,
        v33,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      if ( v22 >= 0 )
      {
        DispBrokerClientReference::Assign(&v27, 0LL);
        v18 = v23;
        goto LABEL_11;
      }
      WdLogSingleEntry3(2LL, **(unsigned int **)this, v22, 1LL);
      v25 = *(unsigned int **)this;
      WdLogGlobalForLineNumber = 573;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to send ALPC message to display broker in session 0x%I64x (Status = 0x%I64x).",
        *v25,
        v33,
        1LL,
        0LL,
        0LL);
    }
  }
  else
  {
    if ( v28[10] == 5 && a3->u1.s1.TotalLength >= 0x60u )
      DXGSESSIONDATA::CacheAsyncRefreshOrientation(*(_QWORD *)this, v28);
    v33 = -1073741772;
    WdLogSingleEntry2(3LL, **(unsigned int **)this, -1073741772LL);
    WdLogGlobalForLineNumber = 531;
  }
  v18 = v33;
  DispBrokerClientReference::Assign(&v27, 0LL);
LABEL_11:
  DXGKCALLONEXIT__lambda_4d2358d7a59f9862d39587a9c5c8147c____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v32);
  return v18;
}
