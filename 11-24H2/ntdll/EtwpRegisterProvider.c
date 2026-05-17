/*
 * XREFs of EtwpRegisterProvider @ 0x18001DD30
 * Callers:
 *     EtwNotificationRegister @ 0x18001D450 (EtwNotificationRegister.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x18001C620 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x18001E990 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     EtwpRegisterTpNotificationOnce @ 0x180095B08 (EtwpRegisterTpNotificationOnce.c)
 *     RtlpRunOnceWaitForInit @ 0x180096DD8 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlRunOnceComplete @ 0x180098C20 (RtlRunOnceComplete.c)
 *     NtTraceControl @ 0x180165740 (NtTraceControl.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

ULONG __fastcall EtwpRegisterProvider(__int64 a1, __int64 a2, int a3)
{
  ULONG v6; // r14d
  _BYTE *v7; // rdi
  int v8; // r12d
  signed __int64 v9; // rax
  signed __int64 v10; // rcx
  signed __int64 v11; // rcx
  NTSTATUS v12; // esi
  int v13; // ebp
  char v14; // si
  __int128 v15; // xmm0
  NTSTATUS v16; // eax
  __int64 v17; // rax
  __int64 Heap; // rax
  char v20[4]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v22[160]; // [rsp+38h] [rbp-D0h] BYREF

  v6 = 0;
  v21 = 0;
  memset_thunk_772440563353939046(v22, 0, 0xA0uLL);
  v7 = v22;
  v8 = 160;
  if ( !byte_1801D2908 )
  {
    v9 = EtwpRegisterTpInitOnce;
    v20[0] = 0;
    if ( (EtwpRegisterTpInitOnce & 3) == 2 )
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
          v10 = v9 & 3;
          if ( (v9 & 3) == 0 )
            break;
          if ( v10 != 1 )
          {
            if ( v10 != 3 )
              goto LABEL_7;
            v12 = -1073741584;
            goto LABEL_12;
          }
          v9 = RtlpRunOnceWaitForInit(v9, &EtwpRegisterTpInitOnce);
        }
        v11 = v9;
        v9 = _InterlockedCompareExchange64(&EtwpRegisterTpInitOnce, 1LL, v9);
      }
      while ( v9 != v11 );
      if ( (unsigned int)EtwpRegisterTpNotificationOnce(&EtwpRegisterTpInitOnce, 0LL, 0LL) )
      {
        v12 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 0LL, 0LL);
        if ( v12 >= 0 )
          goto LABEL_7;
        v20[0] = 1;
        goto LABEL_12;
      }
      v13 = -1073741823;
      v12 = RtlRunOnceComplete(&EtwpRegisterTpInitOnce, 4LL, 0LL);
      if ( v12 < 0 )
      {
        v20[0] = 2;
LABEL_12:
        RtlReportCriticalFailure((unsigned int)v12, v20, 1LL);
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
    *((_QWORD *)v7 + 4) = a2;
    v16 = NtTraceControl(15LL, v7, 160LL, v7, v8, &v21);
    if ( v16 != -1073741789 )
      break;
    if ( v14 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
    v14 = 1;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v21);
    v8 = v21;
    v7 = (_BYTE *)Heap;
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
  *(_QWORD *)(a1 + 88) = *((_QWORD *)v7 + 3);
  if ( (unsigned int)(a3 - 2) <= 1 )
    EtwpUpdateEnableInfoAndCallback(a1, v7 + 40);
  v17 = *(_QWORD *)(a1 + 32) - *(_QWORD *)&PrivateLoggerNotificationGuid.Data1;
  if ( !v17 )
    v17 = *(_QWORD *)(a1 + 40) - *(_QWORD *)PrivateLoggerNotificationGuid.Data4;
  if ( !v17 )
    PrivateLoggerNotificationEntry = a1;
LABEL_23:
  if ( v14 )
  {
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v7);
  }
  return v6;
}
