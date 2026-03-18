/*
 * XREFs of rimEndAllActiveContactsWorker @ 0x1400568CC
 * Callers:
 *     RIMIDERemoveInjectionDevice @ 0x14005B144 (RIMIDERemoveInjectionDevice.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x1400C6FC8 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     RIMEndAllActiveContacts @ 0x1400C7A70 (RIMEndAllActiveContacts.c)
 *     _lambda_511ac2b97c1247323f798affe6b4aaf6_::_lambda_invoker_cdecl_ @ 0x1401D2880 (_lambda_511ac2b97c1247323f798affe6b4aaf6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x140057B0C (RIMAbArbitratePointerDeviceFrame.c)
 *     RIMCompletePointerDeviceFrame @ 0x140058A68 (RIMCompletePointerDeviceFrame.c)
 *     RIMCmActiveContactsEnd @ 0x140059FD4 (RIMCmActiveContactsEnd.c)
 *     RIMCmActiveContactsBegin @ 0x14005A030 (RIMCmActiveContactsBegin.c)
 *     RIMCmActiveContactsNext @ 0x14005A08C (RIMCmActiveContactsNext.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x140180484 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1401807E4 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMCmDeactivateContact @ 0x1401822F4 (RIMCmDeactivateContact.c)
 *     RIMCmIsContactDeliveringAnyData @ 0x1401F1BA0 (RIMCmIsContactDeliveringAnyData.c)
 */

__int64 __fastcall rimEndAllActiveContactsWorker(struct RawInputManagerObject *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r14
  __int64 v5; // r12
  int v6; // r13d
  int v9; // r15d
  __int64 active; // rax
  __int64 v11; // xmm1_8
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int64 v14; // xmm0_8
  __int64 v15; // rax
  __int64 result; // rax
  __int64 v17; // rbx
  bool v18; // bl
  bool v19; // di
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  bool v23; // bl
  bool v24; // di
  __int64 UserSessionState; // rax
  int v26; // r8d
  int v27; // edx
  __int128 v28; // [rsp+40h] [rbp-29h] BYREF
  __int64 v29; // [rsp+50h] [rbp-19h]
  __int128 v30; // [rsp+58h] [rbp-11h] BYREF
  __int64 v31; // [rsp+68h] [rbp-1h]
  _BYTE v32[80]; // [rsp+70h] [rbp+7h] BYREF
  int v33; // [rsp+D8h] [rbp+6Fh]
  LARGE_INTEGER PerformanceCounter; // [rsp+E0h] [rbp+77h]

  v4 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 872);
  v6 = *(_DWORD *)(a2 + 844) + 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v33 = 0;
  v9 = 0;
  if ( a3 )
    *a3 = 0;
  RIMAbandonPointerDeviceFrame(a1, v4);
  active = RIMCmActiveContactsBegin(&v30, a2);
  v11 = *(_QWORD *)(active + 16);
  v28 = *(_OWORD *)active;
  v29 = v11;
  while ( 1 )
  {
    v12 = RIMCmActiveContactsEnd(v32, a2);
    v13 = *(_OWORD *)v12;
    v14 = *(_QWORD *)(v12 + 16);
    v15 = *(_QWORD *)v12;
    v31 = v14;
    v30 = v13;
    if ( (_QWORD)v28 == v15 )
    {
      result = DWORD2(v30);
      if ( DWORD2(v28) == DWORD2(v30) && v29 == v31 )
        break;
    }
    v17 = v29 - 16;
    if ( (*(_DWORD *)(v29 + 16) & 2) == 0 )
      __int2c();
    RIMCmActiveContactsNext(a2, &v28);
    if ( (unsigned int)RIMCmIsContactDeliveringAnyData(v17) )
    {
      if ( !v9 )
      {
        v9 = 1;
        result = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))RIMStartPointerDeviceFrame)(
                   a1,
                   v4,
                   (LARGE_INTEGER)PerformanceCounter.QuadPart);
        if ( !(_DWORD)result )
        {
          v23 = 0;
          if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
          {
            result = *((unsigned int *)WPP_GLOBAL_Control + 11);
            if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
              v23 = 1;
          }
          v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
            LOBYTE(v26) = v24;
            LOBYTE(v27) = v23;
            result = WPP_RECORDER_AND_TRACE_SF_(
                       *((_QWORD *)WPP_GLOBAL_Control + 3),
                       v27,
                       v26,
                       *(_QWORD *)(UserSessionState + 19392),
                       4,
                       1,
                       42,
                       (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
          }
          goto LABEL_30;
        }
      }
      RIMInsertSimulatedContactEndStateInFrame((_DWORD)a1, v4, v17, v5 + 1, v6, 1);
      *(_DWORD *)(v17 + 2364) |= 4u;
    }
    else
    {
      RIMCmDeactivateContact(a2, v17);
      v33 = 1;
    }
  }
  if ( v9 )
  {
    RIMAbArbitratePointerDeviceFrame(a1, v4);
    result = RIMCompletePointerDeviceFrame(a1);
    goto LABEL_13;
  }
LABEL_30:
  if ( v33 )
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1);
LABEL_13:
  v18 = 0;
  if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control )
  {
    result = *((unsigned int *)WPP_GLOBAL_Control + 11);
    if ( (result & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
      v18 = 1;
  }
  v19 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v20 = W32GetUserSessionState(WPP_GLOBAL_Control);
    LOBYTE(v21) = v19;
    LOBYTE(v22) = v18;
    return WPP_RECORDER_AND_TRACE_SF_(
             *((_QWORD *)WPP_GLOBAL_Control + 3),
             v22,
             v21,
             *(_QWORD *)(v20 + 19392),
             4,
             1,
             43,
             (__int64)&WPP_0506f230af1236dcb1827f6a44be6f8f_Traceguids);
  }
  return result;
}
