/*
 * XREFs of PopDirectedDripsDiagNotifySessionStop @ 0x140A62A2C
 * Callers:
 *     PopDirectedDripsSendSessionData @ 0x140A629B8 (PopDirectedDripsSendSessionData.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopDirectedDripsDiagQueryAndResetPnpAccounting @ 0x14049FCC8 (PopDirectedDripsDiagQueryAndResetPnpAccounting.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopDirectedDripsDiagRundownBroadcastTrees @ 0x140A62C8C (PopDirectedDripsDiagRundownBroadcastTrees.c)
 *     PopDirectedDripsDiagRundownDevices @ 0x140A62D68 (PopDirectedDripsDiagRundownDevices.c)
 */

__int64 __fastcall PopDirectedDripsDiagNotifySessionStop(__int64 a1, int a2, int a3)
{
  int v5; // r15d
  __int64 result; // rax
  int v7; // ett
  char v8; // bl
  __int64 v9; // r12
  char *v10; // rax
  char *v11; // rdi
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v20; // [rsp+88h] [rbp-80h]
  int v21; // [rsp+90h] [rbp-78h]
  int v22; // [rsp+94h] [rbp-74h]
  int *v23; // [rsp+98h] [rbp-70h]
  int v24; // [rsp+A0h] [rbp-68h]
  int v25; // [rsp+A4h] [rbp-64h]
  int *v26; // [rsp+A8h] [rbp-60h]
  int v27; // [rsp+B0h] [rbp-58h]
  int v28; // [rsp+B4h] [rbp-54h]
  __int64 *v29; // [rsp+B8h] [rbp-50h]
  int v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C4h] [rbp-44h]
  __int64 *v32; // [rsp+C8h] [rbp-40h]
  int v33; // [rsp+D0h] [rbp-38h]
  int v34; // [rsp+D4h] [rbp-34h]
  __int128 *v35; // [rsp+D8h] [rbp-30h]
  int v36; // [rsp+E0h] [rbp-28h]
  int v37; // [rsp+E4h] [rbp-24h]
  _OWORD *v38; // [rsp+E8h] [rbp-20h]
  int v39; // [rsp+F0h] [rbp-18h]
  int v40; // [rsp+F4h] [rbp-14h]
  __int64 *v41; // [rsp+F8h] [rbp-10h]
  int v42; // [rsp+100h] [rbp-8h]
  int v43; // [rsp+104h] [rbp-4h]
  __int128 v44[7]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v45[14]; // [rsp+178h] [rbp+70h] BYREF

  v15 = 0LL;
  v5 = a1;
  _m_prefetchw(&PopDirectedDripsState);
  LODWORD(result) = PopDirectedDripsState.HandleAttributes;
  do
  {
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)&PopDirectedDripsState,
                             result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  v8 = 1;
  if ( (result & 1) != 0 )
  {
    PopDirectedDripsDiagQueryAndResetPnpAccounting(a1, &v15, v44, v45);
    v9 = PopWnfCsEnterScenarioId;
    v10 = (char *)KeAbPreAcquire((__int64)&PopDirectedDripsDiagLock, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopDirectedDripsDiagLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&PopDirectedDripsDiagLock, v10, (__int64)&PopDirectedDripsDiagLock);
    if ( v11 )
      v11[10] = 1;
    if ( (unsigned int)dword_140FD8900 > 5 && PopDirectedDripsDiagTraceHandleRegistered )
    {
      if ( (qword_140FD8910 & 0x400000000000LL) == 0 || (qword_140FD8918 & 0x400000000000LL) != qword_140FD8918 )
        v8 = 0;
      if ( v8 )
      {
        v22 = 0;
        v25 = 0;
        v28 = 0;
        v31 = 0;
        v34 = 0;
        v37 = 0;
        v40 = 0;
        v43 = 0;
        v20 = &v16;
        v23 = &v12;
        v26 = &v13;
        v29 = &v14;
        v17 = v15;
        v32 = &v17;
        v35 = v44;
        v38 = v45;
        v41 = &v18;
        v21 = 8;
        v24 = 4;
        v27 = 4;
        v30 = 4;
        v33 = 8;
        v42 = 8;
        v16 = v9;
        v12 = v5;
        v13 = a2;
        LODWORD(v14) = a3;
        v36 = 112;
        v39 = 224;
        v18 = 0x1000000LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140FD8900,
          (unsigned __int8 *)byte_14004F1E3,
          0LL,
          0LL,
          0xAu,
          &v19);
      }
    }
    PopDirectedDripsDiagRundownBroadcastTrees();
    PopDirectedDripsDiagRundownDevices();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    return KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  return result;
}
