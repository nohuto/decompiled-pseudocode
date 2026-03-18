/*
 * XREFs of PopRequestPowerIrp @ 0x140377360
 * Callers:
 *     PopFxReleasePowerIrp @ 0x140376768 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140377330 (PoRequestPowerIrp.c)
 *     PopScanIdleList @ 0x1404EAE90 (PopScanIdleList.c)
 *     DifPoRequestPowerIrpWrapper @ 0x140638400 (DifPoRequestPowerIrpWrapper.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1403128A0 (PopPepUpdateConstraints.c)
 *     IofCallDriverSpecifyReturn @ 0x140375990 (IofCallDriverSpecifyReturn.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403765BC (PopFxNotifyPreDIrpIssue.c)
 *     PopFxDereferenceDevice @ 0x140376880 (PopFxDereferenceDevice.c)
 *     PopQueueQuerySetIrp @ 0x140376E74 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x14037712C (PopDiagTraceIrpStart.c)
 *     PopAllocateIrp @ 0x1403775F8 (PopAllocateIrp.c)
 *     PopLogNotifyDevice @ 0x140377AB4 (PopLogNotifyDevice.c)
 *     PopFxGetDeviceDStateReason @ 0x140486D58 (PopFxGetDeviceDStateReason.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, IRP *a7)
{
  volatile __int64 *p_Type; // rsi
  int v8; // ebx
  char v11; // cl
  __int64 result; // rax
  IRP *v13; // rdi
  __int64 *v14; // r14
  __int64 p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 *v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  __int64 *v27; // [rsp+60h] [rbp-10h] BYREF

  v27 = 0LL;
  p_Type = (volatile __int64 *)&a7->Type;
  v8 = a3;
  if ( a7 )
    _InterlockedExchange64((volatile __int64 *)&a7->Type, 0LL);
  a7 = 0LL;
  if ( !a2 )
    goto LABEL_4;
  if ( (unsigned __int8)(a2 - 2) > 1u )
    return 3221225712LL;
  if ( (_BYTE)PopCurrentBroadcast )
    v11 = 1;
  else
LABEL_4:
    v11 = 0;
  LOBYTE(a3) = a2;
  result = PopAllocateIrp(a1, a2, a3, a2 != 0, v8, v11, a6, a4, a5, (__int64)&a7, (__int64)&v27);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = a7;
    if ( a7 )
    {
      v14 = v27;
      p_CurrentStackLocation = (__int64)&a7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = a7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = a7;
        v14 = v27;
      }
      v17 = *(_QWORD *)p_CurrentStackLocation;
      if ( a2 )
      {
        *(_DWORD *)(v17 - 56) = 1;
        *(_DWORD *)(v17 - 48) = v8;
        if ( (_BYTE)PopCurrentBroadcast && (!v14[25] || (unsigned int)PopFxGetDeviceDStateReason() == 1) )
        {
          v19 = 3;
          v20 = WORD2(PopCurrentBroadcast) >> 12;
          if ( DWORD2(PopCurrentBroadcast) == 7 )
          {
            v19 = 3 - (v20 != 5);
          }
          else if ( v20 != 5 )
          {
            v19 = DWORD2(PopCurrentBroadcast);
          }
          *(_DWORD *)(v17 - 40) = v19;
          *(_DWORD *)(v17 - 64) = DWORD1(PopCurrentBroadcast);
        }
        if ( (xmmword_140FC5B10 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v13);
        v18 = v14[25];
        if ( !v18 || a2 != 2 || PopFxNotifyPreDIrpIssue(v18, (__int64)v13) )
          PopQueueQuerySetIrp(v13);
      }
      else
      {
        v21 = v14[25];
        if ( v21 )
        {
          _m_prefetchw((const void *)(v21 + 32));
          v22 = *(_DWORD *)(v21 + 32);
          do
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 32), v22, v22);
          }
          while ( v23 != v22 );
          v24 = v27;
          v25 = v22 & 1;
          *((_BYTE *)v27 + 208) = v25;
          v25 ^= 1u;
          *((_BYTE *)v24 + 209) = v25;
          v26 = v14[25];
          if ( v25 )
          {
            p_CurrentStackLocation = *(_QWORD *)(v26 + 56);
            if ( _InterlockedIncrement((volatile signed __int32 *)(p_CurrentStackLocation + 128)) == 1 )
              PopPepUpdateConstraints((_DWORD *)p_CurrentStackLocation, 5, 0);
          }
          else
          {
            PopFxDereferenceDevice(v26, 0);
            v14[25] = 0LL;
          }
          v13 = a7;
        }
        *(_DWORD *)(v17 - 64) = v8;
        PopDiagTraceIrpStart(p_CurrentStackLocation, (__int64)v13);
        IofCallDriverSpecifyReturn(*(void **)(v17 - 32), (ULONG_PTR)v13);
      }
      return 259LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
