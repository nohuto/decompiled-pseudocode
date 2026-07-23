/*
 * XREFs of EtwpRegisterProvider @ 0x18004A730
 * Callers:
 *     EtwNotificationRegister @ 0x180049E50 (EtwNotificationRegister.c)
 * Callees:
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x18002DA70 (RtlRunOnceComplete.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x180049020 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18004B390 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800E54C4 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpRunOnceWaitForInit @ 0x1800E5590 (RtlpRunOnceWaitForInit.c)
 *     NtTraceControl @ 0x180163B00 (NtTraceControl.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  ULONG v6; // r14d
  _QWORD *v7; // rdi
  ULONG OutputBufferLength; // r12d
  signed __int64 Value; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rcx
  NTSTATUS v12; // esi
  int v13; // ebp
  char v14; // si
  __int128 v15; // xmm0
  NTSTATUS v16; // eax
  __int64 v17; // rax
  _QWORD *Heap; // rax
  char v20[4]; // [rsp+30h] [rbp-D8h] BYREF
  ULONG ReturnLength; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  ReturnLength = 0;
  memset_thunk_772440563353939046(InputBuffer, 0, 0xA0uLL);
  v7 = InputBuffer;
  OutputBufferLength = 160;
  if ( !byte_1801D1908 )
  {
    Value = EtwpRegisterTpInitOnce.Value;
    v20[0] = 0;
    if ( ((__int64)EtwpRegisterTpInitOnce.Ptr & 3) == 2 )
    {
LABEL_7:
      v13 = 0;
    }
    else
    {
      do
      {
        while ( 1 )
        {
          v10 = Value & 3;
          if ( (Value & 3) == 0 )
            break;
          if ( v10 != 1 )
          {
            if ( v10 != 3 )
              goto LABEL_7;
            v12 = -1073741584;
            goto LABEL_12;
          }
          Value = RtlpRunOnceWaitForInit(Value, &EtwpRegisterTpInitOnce);
        }
        v11 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)&EtwpRegisterTpInitOnce, 1LL, Value);
      }
      while ( Value != v11 );
      if ( (unsigned int)EtwpRegisterTpNotificationOnce(&EtwpRegisterTpInitOnce, 0LL, 0LL) )
      {
        v12 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 0, 0LL);
        if ( v12 >= 0 )
          goto LABEL_7;
        v20[0] = 1;
        goto LABEL_12;
      }
      v13 = -1073741823;
      v12 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 4u, 0LL);
      if ( v12 < 0 )
      {
        v20[0] = 2;
LABEL_12:
        RtlReportCriticalFailure(v12, (__int64)v20, 1);
        goto LABEL_13;
      }
    }
    v12 = v13;
LABEL_13:
    if ( v12 )
      return RtlNtStatusToDosError(v12);
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v7 + 4) = a3;
    *(_OWORD *)v7 = v15;
    *((_DWORD *)v7 + 5) = *(unsigned __int16 *)(a1 + 84);
    v7[4] = a2;
    v16 = NtTraceControl(EtwRegisterGuidsCode, v7, 0xA0u, v7, OutputBufferLength, &ReturnLength);
    if ( v16 != -1073741789 )
      break;
    if ( v14 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v14 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v7 = Heap;
    if ( !Heap )
    {
      v16 = -1073741801;
      goto LABEL_30;
    }
  }
  if ( !v16 )
    goto LABEL_17;
LABEL_30:
  v6 = RtlNtStatusToDosError(v16);
  if ( v6 )
    goto LABEL_23;
LABEL_17:
  *(_QWORD *)(a1 + 88) = v7[3];
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, v7 + 5);
  v17 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( !v17 )
    PrivateLoggerNotificationEntry = a1;
LABEL_23:
  if ( v14 )
  {
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return v6;
}
