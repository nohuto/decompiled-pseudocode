/*
 * XREFs of PopRequestPowerIrp @ 0x1403A7FD0
 * Callers:
 *     PopFxReleasePowerIrp @ 0x1403A7E40 (PopFxReleasePowerIrp.c)
 *     PoRequestPowerIrp @ 0x1403A7FA0 (PoRequestPowerIrp.c)
 *     PopScanIdleList @ 0x1404E1E10 (PopScanIdleList.c)
 *     DifPoRequestPowerIrpWrapper @ 0x1406369C0 (DifPoRequestPowerIrpWrapper.c)
 * Callees:
 *     PopPepUpdateConstraints @ 0x1403A750C (PopPepUpdateConstraints.c)
 *     PopFxNotifyPreDIrpIssue @ 0x1403A7CC8 (PopFxNotifyPreDIrpIssue.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     PopAllocateIrp @ 0x1403A8268 (PopAllocateIrp.c)
 *     PopLogNotifyDevice @ 0x1403A8724 (PopLogNotifyDevice.c)
 *     PopQueueQuerySetIrp @ 0x1403A96B4 (PopQueueQuerySetIrp.c)
 *     PopDiagTraceIrpStart @ 0x14046B350 (PopDiagTraceIrpStart.c)
 *     PopFxGetDeviceDStateReason @ 0x140481C7C (PopFxGetDeviceDStateReason.c)
 *     IofCallDriverSpecifyReturn @ 0x1404999F0 (IofCallDriverSpecifyReturn.c)
 */

__int64 __fastcall PopRequestPowerIrp(__int64 a1, char a2, int a3, int a4, __int64 a5, char a6, __int64 a7)
{
  volatile __int64 *v7; // rsi
  int v8; // ebx
  char v11; // cl
  __int64 result; // rax
  __int64 v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  signed __int32 v22; // eax
  signed __int32 v23; // ett
  __int64 v24; // rcx
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+18h]

  v27 = 0LL;
  v7 = (volatile __int64 *)a7;
  v8 = a3;
  if ( a7 )
    _InterlockedExchange64((volatile __int64 *)a7, 0LL);
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
      v15 = a7 + 184;
      v16 = *(_QWORD *)(a7 + 184);
      *(_QWORD *)(v16 - 16) = PopRequestCompletion;
      *(_QWORD *)(v16 - 8) = v14;
      *(_BYTE *)(v16 - 69) = -32;
      if ( v7 )
      {
        _InterlockedExchange64(v7, v13);
        v13 = a7;
        v14 = v27;
      }
      v17 = *(_QWORD *)v15;
      if ( a2 )
      {
        *(_DWORD *)(v17 - 56) = 1;
        *(_DWORD *)(v17 - 48) = v8;
        if ( (_BYTE)PopCurrentBroadcast && (!*(_QWORD *)(v14 + 200) || (unsigned int)PopFxGetDeviceDStateReason() == 1) )
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
        if ( (xmmword_140FC6B50 & 0x8000) != 0 )
          PopLogNotifyDevice(a1, 0LL, v13);
        v18 = *(_QWORD *)(v14 + 200);
        if ( !v18 || a2 != 2 || PopFxNotifyPreDIrpIssue(v18, v13) )
          PopQueueQuerySetIrp(v13);
      }
      else
      {
        v21 = *(_QWORD *)(v14 + 200);
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
          *(_BYTE *)(v27 + 208) = v25;
          v25 ^= 1u;
          *(_BYTE *)(v24 + 209) = v25;
          v26 = *(_QWORD *)(v14 + 200);
          if ( v25 )
          {
            v15 = *(_QWORD *)(v26 + 56);
            if ( _InterlockedIncrement((volatile signed __int32 *)(v15 + 128)) == 1 )
              PopPepUpdateConstraints(v15, 5, 0);
          }
          else
          {
            PopFxDereferenceDevice(v26, 0);
            *(_QWORD *)(v14 + 200) = 0LL;
          }
          v13 = a7;
        }
        *(_DWORD *)(v17 - 64) = v8;
        PopDiagTraceIrpStart(v15, v13);
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
