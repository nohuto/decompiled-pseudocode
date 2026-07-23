/*
 * XREFs of TppCleanupGroupMemberCallbackProlog @ 0x180040C30
 * Callers:
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     TppExecuteWaitCallback @ 0x180040740 (TppExecuteWaitCallback.c)
 *     TppJobpExecuteCallback @ 0x1800D5D60 (TppJobpExecuteCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180074EB0 (RtlActivateActivationContextUnsafeFast.c)
 *     NtSetInformationThread @ 0x1801633C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     NtAlpcSetInformation @ 0x1801643F0 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x180166830 (NtSetInformationWorkerFactory.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

int __fastcall TppCleanupGroupMemberCallbackProlog(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rsi
  signed __int32 v7; // r14d
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rbp
  __int64 v11; // rax
  signed __int32 v12; // r8d
  int v13; // eax
  signed __int32 v14; // edx
  signed __int32 v15; // r9d
  void *v16; // rcx
  __int64 v17; // rsi
  struct _TEB *v18; // rax
  void *SubProcessTag; // r8
  _DWORD *SharedData; // rdx
  __int64 v21; // rdx
  struct _TEB *v22; // rax
  struct _TEB **v23; // rbx
  void *v24; // rcx
  int WorkerFactoryInformation; // [rsp+20h] [rbp-68h] BYREF
  signed __int64 v27; // [rsp+28h] [rbp-60h]
  int PortInformation; // [rsp+30h] [rbp-58h] BYREF
  _OWORD Fields[2]; // [rsp+38h] [rbp-50h] BYREF
  int v30; // [rsp+58h] [rbp-30h]
  int v31; // [rsp+5Ch] [rbp-2Ch]

  if ( (unsigned __int64)(*(_QWORD *)(a2 + 96) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    *(_QWORD *)a1 = 72LL;
    *(_DWORD *)(a1 + 8) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_QWORD *)(a2 + 96));
    *(_BYTE *)(a1 + 76) |= 1u;
  }
  *(_DWORD *)(a1 + 144) |= 0x240u;
  *(_QWORD *)(a1 + 184) = a2;
  if ( (*(_DWORD *)(a2 + 168) & 3) == 1 )
  {
    v4 = *(_DWORD *)(a1 + 72) == 0;
    WorkerFactoryInformation = 0;
    if ( v4 )
    {
      v5 = *(_QWORD *)(a1 + 184);
      if ( v5 )
        v6 = *(_QWORD *)(v5 + 144);
      else
        v6 = *(_QWORD *)(a1 + 128);
      if ( v6 && TppPoolpSerializedPool != (PVOID)v6 )
      {
        v7 = _InterlockedDecrement((volatile signed __int32 *)(v6 + 416));
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 420));
        _m_prefetchw((const void *)(v6 + 8));
        v8 = *(_QWORD *)(v6 + 8);
        v27 = v8;
        do
        {
          LODWORD(v27) = ((__int16)v8 + 1) ^ (v8 ^ ((__int16)v8 + 1)) & 0xFFFF0000;
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v27, v8);
          v27 = v8;
        }
        while ( v9 != v8 );
        *(_DWORD *)(a1 + 144) |= 0x10u;
        v10 = *(_QWORD *)(a1 + 136);
        *(_DWORD *)(a1 + 72) = 1;
        if ( v10 && (*(_BYTE *)(v10 + 288) & 3) == 3 )
        {
          while ( 1 )
          {
            v11 = *(_QWORD *)(v10 + 216);
            v12 = *(_DWORD *)(v10 + 284);
            if ( !v11 || (v13 = *(_DWORD *)(v11 + 440)) == 0 )
              v13 = MEMORY[0x7FFE03C0];
            v14 = v13 + *(_DWORD *)(*(_QWORD *)(v10 + 216) + 420LL);
            v15 = v13 + v14;
            if ( v12 >= v14 && v12 <= v13 + v15 )
              break;
            if ( v12 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 284), v15, v12) )
            {
              v24 = *(void **)(v10 + 272);
              PortInformation = v13 + v14;
              NtAlpcSetInformation(v24, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
            }
          }
        }
        if ( !v7 )
        {
          WorkerFactoryInformation = 1;
          NtSetInformationWorkerFactory(*(HANDLE *)(v6 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
        }
      }
    }
    else
    {
      TppRaiseInvalidParameter();
    }
  }
  v16 = *(void **)(a2 + 104);
  if ( v16 )
  {
    *(_QWORD *)(a1 + 80) = v16;
    v17 = 2147353488LL;
    v18 = NtCurrentTeb();
    SubProcessTag = v18->SubProcessTag;
    v18->SubProcessTag = v16;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v21 = (__int64)NtCurrentPeb()->SharedData + 566;
    else
      v21 = 2147353488LL;
    if ( *(_BYTE *)v21 && v16 != SubProcessTag )
    {
      memset(Fields, 0, sizeof(Fields));
      WORD3(Fields[0]) = 1349;
      v30 = (int)SubProcessTag;
      v31 = (int)v16;
      if ( RtlGetCurrentServiceSessionId() )
        v17 = (__int64)NtCurrentPeb()->SharedData + 566;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v17, 0x402u, 8u, Fields);
    }
  }
  v22 = NtCurrentTeb();
  v22->ActivityId = *(_GUID *)(a2 + 112);
  v23 = (struct _TEB **)(a2 + 128);
  if ( v23 )
  {
    if ( *(struct _TEB **)NtCurrentTeb()->WorkingOnBehalfTicket == *v23 )
    {
LABEL_28:
      v22 = *v23;
      *(_QWORD *)(a1 + 248) = *v23;
      return (int)v22;
    }
    LODWORD(v22) = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, v23, 8u);
    if ( (int)v22 >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = *v23;
      goto LABEL_28;
    }
  }
  return (int)v22;
}
