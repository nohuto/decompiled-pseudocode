/*
 * XREFs of EtwpRegisterProvider @ 0x180045330
 * Callers:
 *     EtwNotificationRegister @ 0x180045640 (EtwNotificationRegister.c)
 * Callees:
 *     EtwpRegisterTpNotificationOnce @ 0x180001008 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpRunOnceWaitForInit @ 0x180002444 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180004290 (RtlRunOnceComplete.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180044BF0 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlNtStatusToDosError @ 0x180046BD0 (RtlNtStatusToDosError.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceControl @ 0x180166CD0 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  ULONG v6; // r14d
  _BYTE *Heap; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rcx
  signed __int64 v10; // rcx
  int v11; // esi
  int v12; // ebp
  char v13; // si
  __int128 v14; // xmm0
  NTSTATUS v15; // eax
  __int64 v16; // rax
  char v18[4]; // [rsp+30h] [rbp-D8h] BYREF
  int v19; // [rsp+34h] [rbp-D4h]
  _BYTE v20[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  v19 = 0;
  memset_thunk_772440563353939046(v20, 0, 0xA0uLL);
  Heap = v20;
  if ( !byte_1801D4988 )
  {
    v8 = EtwpRegisterTpInitOnce;
    v18[0] = 0;
    if ( (EtwpRegisterTpInitOnce & 3) == 2 )
    {
LABEL_7:
      v12 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v9 = v8 & 3;
          if ( (v8 & 3) == 0 )
            break;
          if ( v9 != 1 )
          {
            if ( v9 != 3 )
              goto LABEL_7;
            v11 = -1073741584;
            goto LABEL_12;
          }
          v8 = RtlpRunOnceWaitForInit(v8, &EtwpRegisterTpInitOnce);
        }
        v10 = v8;
        v8 = _InterlockedCompareExchange64(&EtwpRegisterTpInitOnce, 1LL, v8);
      }
      while ( v8 != v10 );
      if ( (unsigned int)EtwpRegisterTpNotificationOnce() )
      {
        v11 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 0, 0LL);
        if ( v11 >= 0 )
          goto LABEL_7;
        v18[0] = 1;
        goto LABEL_12;
      }
      v12 = -1073741823;
      v11 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 4u, 0LL);
      if ( v11 < 0 )
      {
        v18[0] = 2;
LABEL_12:
        RtlReportCriticalFailure(v11, (__int64)v18, 1);
        goto LABEL_13;
      }
    }
    v11 = v12;
LABEL_13:
    if ( v11 )
      return RtlNtStatusToDosError(v11);
  }
  v13 = 0;
  while ( 1 )
  {
    v14 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)Heap + 4) = a3;
    *(_OWORD *)Heap = v14;
    *((_DWORD *)Heap + 5) = *(unsigned __int16 *)(a1 + 84);
    *((_QWORD *)Heap + 4) = a2;
    v15 = NtTraceControl(15LL, Heap, 160LL);
    if ( v15 != -1073741789 )
      break;
    if ( v13 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    v13 = 1;
    Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap);
    if ( !Heap )
    {
      v15 = -1073741801;
      goto LABEL_30;
    }
  }
  if ( !v15 )
    goto LABEL_17;
LABEL_30:
  v6 = RtlNtStatusToDosError(v15);
  if ( v6 )
    goto LABEL_23;
LABEL_17:
  *(_QWORD *)(a1 + 88) = *((_QWORD *)Heap + 3);
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, (__int64)(Heap + 40));
  v16 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( !v16 )
    v16 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( !v16 )
    PrivateLoggerNotificationEntry = a1;
LABEL_23:
  if ( v13 )
  {
    if ( Heap )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return v6;
}
