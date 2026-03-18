/*
 * XREFs of RIMQueueAndSignalAsyncWorkItem @ 0x1401978F8
 * Callers:
 *     rimQueueApiSetHidRawInputAsyncWorkItem @ 0x1400D7464 (rimQueueApiSetHidRawInputAsyncWorkItem.c)
 *     rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem @ 0x14011317C (rimQueueApiSetPostPointerDeviceRangeMessageAsyncWorkItem.c)
 *     rimQueueUpdateInputGlolbalsAsyncWorkItem @ 0x140116FA8 (rimQueueUpdateInputGlolbalsAsyncWorkItem.c)
 *     rimQueueRimDevChangeAsyncWorkItem @ 0x14012EC64 (rimQueueRimDevChangeAsyncWorkItem.c)
 *     rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem @ 0x1401EA080 (rimQueueHandleAnyPnpRemovePendingDevicesAsyncWorkItem.c)
 *     RIMDeviceClassNotifyUsingAsyncInputWork @ 0x1401ECBE0 (RIMDeviceClassNotifyUsingAsyncInputWork.c)
 *     RIMDeviceNotifyUsingAsyncInputWork @ 0x1401ECE9C (RIMDeviceNotifyUsingAsyncInputWork.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x14002588C (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     RIMUnlockExclusive @ 0x140046360 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005B440 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x14005DE1C (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@Z @ 0x140197BF4 (-QueueAsyncWorkItem@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMAsyncWorkItem@@@.c)
 *     RIMFreeAsyncWorkItem @ 0x140197D7C (RIMFreeAsyncWorkItem.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqqDSd @ 0x1401E15F8 (WPP_RECORDER_AND_TRACE_SF_qqqDSd.c)
 */

void __fastcall RIMQueueAndSignalAsyncWorkItem(struct RawInputManagerObject *a1, struct RIMAsyncWorkItem *a2)
{
  char v4; // r15
  char *v5; // rbx
  struct RawInputManagerObject **v6; // rax
  __int64 v7; // rcx
  bool v8; // r14
  bool v9; // r13
  __int64 v10; // rax
  int v11; // r8d
  int v12; // edx
  struct RIMAsyncWorkItem *v13; // r14
  struct RIMAsyncWorkItem **v14; // rax
  char v15; // bl
  char v16; // si
  __int64 v17; // rax
  bool v18; // r13
  __int64 v19; // rax
  __int64 v20; // r12
  int v21; // ebx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  int v28; // [rsp+28h] [rbp-80h]
  NTSTATUS v29; // [rsp+B0h] [rbp+8h]
  char *v30; // [rsp+C0h] [rbp+18h]

  v30 = (char *)a1 + 352;
  RIMLockExclusive((__int64)a1 + 352);
  v4 = 1;
  if ( *((_BYTE *)a1 + 10) )
  {
    v13 = a2;
    LOBYTE(v29) = -69;
LABEL_26:
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v4 = 0;
    }
    v18 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *((_QWORD *)a2 + 7);
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 272);
      else
        v20 = *((_QWORD *)a2 + 6);
      v21 = *((_DWORD *)a1 + 21);
      v22 = *((_QWORD *)a1 + 5);
      v23 = *((_QWORD *)a1 + 4);
      v24 = *((_QWORD *)a1 + 9);
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v26) = v18;
      LOBYTE(v27) = v4;
      WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v27,
        v26,
        *(_QWORD *)(UserSessionState + 19392),
        2,
        v28,
        12,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v24,
        v23,
        v22,
        v21,
        v20,
        v29);
    }
    goto LABEL_36;
  }
  v5 = (char *)a1 + 376;
  v6 = (struct RawInputManagerObject **)*((_QWORD *)a1 + 48);
  if ( *v6 != (struct RawInputManagerObject *)((char *)a1 + 376) )
LABEL_24:
    __fastfail(3u);
  *(_QWORD *)a2 = v5;
  *((_QWORD *)a2 + 1) = v6;
  *v6 = a2;
  *((_QWORD *)a1 + 48) = a2;
  v29 = ZwReleaseSemaphore(*((HANDLE *)a1 + 46), 1, 0LL);
  if ( v29 < 0 )
  {
    v8 = 0;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
    {
      v7 = *((unsigned int *)WPP_GLOBAL_Control + 11);
      if ( (v7 & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
        v8 = 1;
    }
    v9 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = W32GetUserSessionState(v7);
      LOBYTE(v11) = v9;
      LOBYTE(v12) = v8;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v12,
        v11,
        *(_QWORD *)(v10 + 19392),
        2,
        1,
        10,
        (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
        v29);
    }
    v13 = (struct RIMAsyncWorkItem *)*((_QWORD *)a1 + 48);
    if ( *(char **)v13 == v5 )
    {
      v14 = (struct RIMAsyncWorkItem **)*((_QWORD *)v13 + 1);
      if ( *v14 == v13 )
      {
        *((_QWORD *)a1 + 48) = v14;
        *v14 = (struct RIMAsyncWorkItem *)v5;
        goto LABEL_26;
      }
    }
    goto LABEL_24;
  }
  InputTraceLogging::RIM::QueueAsyncWorkItem(a1, a2);
  v15 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = W32GetUserSessionState(WPP_GLOBAL_Control);
    WPP_RECORDER_AND_TRACE_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v16,
      *(_QWORD *)(v17 + 19392),
      4u,
      1u,
      0xBu,
      (__int64)&WPP_c0340dd3147d303657ef2ca4cfed9609_Traceguids,
      a1,
      a2);
  }
  v13 = 0LL;
LABEL_36:
  RIMUnlockExclusive((__int64)v30);
  if ( v13 )
    RIMFreeAsyncWorkItem(v13);
}
