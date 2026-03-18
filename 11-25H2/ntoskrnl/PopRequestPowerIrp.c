/*
 * XREFs of PopRequestPowerIrp @ 0x140359B00
 * Callers:
 *     PopFxReleasePowerIrp @ 0x1403588E0 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x140359740 (PoRequestPowerIrp.c)
 *     PopScanIdleList @ 0x14048872C (PopScanIdleList.c)
 *     DifPoRequestPowerIrpWrapper @ 0x14062C440 (DifPoRequestPowerIrpWrapper.c)
 * Callees:
 *     PopQueueQuerySetIrp @ 0x14034DCB8 (PopQueueQuerySetIrp.c)
 *     PopFxGetDeviceDStateReason @ 0x140357078 (PopFxGetDeviceDStateReason.c)
 *     PopPepUpdateConstraints @ 0x140357F10 (PopPepUpdateConstraints.c)
 *     PopFxDereferenceDevice @ 0x1403589F8 (PopFxDereferenceDevice.c)
 *     PopDiagTraceIrpStart @ 0x140358B14 (PopDiagTraceIrpStart.c)
 *     PopLogNotifyDevice @ 0x140359770 (PopLogNotifyDevice.c)
 *     PopAllocateIrp @ 0x140359E20 (PopAllocateIrp.c)
 *     PopFxNotifyPreDIrpIssue @ 0x140443630 (PopFxNotifyPreDIrpIssue.c)
 *     IofCallDriverSpecifyReturn @ 0x14049FA00 (IofCallDriverSpecifyReturn.c)
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
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  signed __int32 v23; // eax
  signed __int32 v24; // ett
  __int64 *v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  __int64 *v28; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

  v28 = 0LL;
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
  result = PopAllocateIrp(a1, a2, a3, a2 != 0, v8, v11, a6, a4, a5, (__int64)&a7, (__int64)&v28);
  if ( (int)result >= 0 && (_DWORD)result != 259 )
  {
    v13 = a7;
    if ( a7 )
    {
      v14 = v28;
      p_CurrentStackLocation = (__int64)&a7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = a7->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopRequestCompletion;
      CurrentStackLocation[-1].Context = v14;
      CurrentStackLocation[-1].Control = -32;
      if ( p_Type )
      {
        _InterlockedExchange64(p_Type, (__int64)v13);
        v13 = a7;
        v14 = v28;
      }
      v17 = *(_QWORD *)p_CurrentStackLocation;
      if ( a2 )
      {
        *(_DWORD *)(v17 - 56) = 1;
        *(_DWORD *)(v17 - 48) = v8;
        if ( (_BYTE)PopCurrentBroadcast )
        {
          v19 = v14[25];
          if ( !v19 || (unsigned int)PopFxGetDeviceDStateReason(v19) == 1 )
          {
            v20 = 3;
            v21 = WORD2(PopCurrentBroadcast) >> 12;
            if ( DWORD2(PopCurrentBroadcast) == 7 )
            {
              v20 = 3 - (v21 != 5);
            }
            else if ( v21 != 5 )
            {
              v20 = DWORD2(PopCurrentBroadcast);
            }
            *(_DWORD *)(v17 - 40) = v20;
            *(_DWORD *)(v17 - 64) = DWORD1(PopCurrentBroadcast);
          }
        }
        if ( (xmmword_140FC5B10 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, (__int64)v13);
        v18 = v14[25];
        if ( !v18 || a2 != 2 || (unsigned __int8)PopFxNotifyPreDIrpIssue(v18, v13) )
          PopQueueQuerySetIrp(v13);
      }
      else
      {
        v22 = v14[25];
        if ( v22 )
        {
          _m_prefetchw((const void *)(v22 + 32));
          v23 = *(_DWORD *)(v22 + 32);
          do
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 32), v23, v23);
          }
          while ( v24 != v23 );
          v25 = v28;
          v26 = v23 & 1;
          *((_BYTE *)v28 + 208) = v26;
          v26 ^= 1u;
          *((_BYTE *)v25 + 209) = v26;
          v27 = v14[25];
          if ( v26 )
          {
            p_CurrentStackLocation = *(_QWORD *)(v27 + 56);
            if ( _InterlockedIncrement((volatile signed __int32 *)(p_CurrentStackLocation + 128)) == 1 )
              PopPepUpdateConstraints(p_CurrentStackLocation, 5, 0);
          }
          else
          {
            PopFxDereferenceDevice(v27, 0);
            v14[25] = 0LL;
          }
          v13 = a7;
        }
        *(_DWORD *)(v17 - 64) = v8;
        PopDiagTraceIrpStart(p_CurrentStackLocation, (__int64)v13);
        IofCallDriverSpecifyReturn(*(_QWORD *)(v17 - 32), v13, retaddr);
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
