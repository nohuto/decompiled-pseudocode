/*
 * XREFs of RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8DD4 (W32AttachToProcessAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 *     W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___ @ 0x1401E8F3C (W32AttachToSessionAndExecute__lambda_61e9a611927d736b1494876e42be676d___.c)
 * Callees:
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005A930 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x14005AAB0 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_S @ 0x1400F0FD0 (WPP_RECORDER_AND_TRACE_SF_S.c)
 *     ?RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z @ 0x14011DD50 (-RimDeviceClassNotification@RIM@InputTraceLogging@@SAXAEBU_GUID@@PEBU_UNICODE_STRING@@@Z.c)
 *     RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8 (RIMQueueAndSignalAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 *     RIMAllocateAsyncInputWorkItem @ 0x1401EC21C (RIMAllocateAsyncInputWorkItem.c)
 */

__int64 __fastcall RIMDeviceClassNotifyUsingAsyncInputWork(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // r9d
  void *v7; // r14
  unsigned int v8; // r13d
  int v9; // r12d
  char v10; // r15
  char v11; // di
  char v12; // si
  const wchar_t *v13; // rbx
  __int64 UserSessionState; // rax
  __int64 v15; // rax
  bool v16; // bl
  bool v17; // si
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  struct RIMAsyncWorkItem *v21; // rax
  char v22; // r12
  __int64 v23; // rax
  int SourceString; // [rsp+28h] [rbp-170h]
  _BYTE v26[256]; // [rsp+70h] [rbp-128h] BYREF

  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v26);
  v7 = *(void **)a2;
  v8 = 0;
  v9 = *(_DWORD *)(a2 + 8);
  v10 = 1;
  v11 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(const wchar_t **)(*(_QWORD *)(a1 + 40) + 8LL);
    UserSessionState = W32GetUserSessionState(v4);
    WPP_RECORDER_AND_TRACE_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v12,
      *(_QWORD *)(UserSessionState + 19392),
      4u,
      1u,
      0xDu,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      v13);
  }
  InputTraceLogging::RIM::RimDeviceClassNotification(
    (const struct _GUID *)(a1 + 4),
    *(const struct _UNICODE_STRING **)(a1 + 40),
    v5,
    v6);
  v15 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( *(_QWORD *)(a1 + 4) == *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 )
    v15 = *(_QWORD *)(a1 + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v15 )
  {
    v16 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v19) = v17;
      LOBYTE(v20) = v16;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v20,
        v19,
        *(_QWORD *)(v18 + 19392),
        4,
        1,
        14,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
    }
    v21 = (struct RIMAsyncWorkItem *)RIMAllocateAsyncInputWorkItem(
                                       v7,
                                       0LL,
                                       v9,
                                       (_OWORD *)(a1 + 20),
                                       (_OWORD *)(a1 + 4),
                                       *(PCUNICODE_STRING *)(a1 + 40),
                                       0,
                                       0);
    if ( v21 )
    {
      RIMQueueAndSignalAsyncWorkItem((struct RawInputManagerObject *)v7, v21);
    }
    else
    {
      v8 = -1073741801;
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v10 = 0;
      }
      v22 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = W32GetUserSessionState(WPP_GLOBAL_Control);
        WPP_RECORDER_AND_TRACE_SF_qqqDSd(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v10,
          v22,
          *(_QWORD *)(v23 + 19392),
          2u,
          SourceString,
          0xFu,
          (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids);
      }
    }
  }
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v26);
  return v8;
}
