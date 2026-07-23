/*
 * XREFs of ObGetProcessHandleCount @ 0x14085E360
 * Callers:
 *     ExpCopyProcessInfo @ 0x14085DF24 (ExpCopyProcessInfo.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1408F0418 (EtwpProcessPerfCtrsRundown.c)
 *     EtwTraceAppStateChange @ 0x1408F057C (EtwTraceAppStateChange.c)
 *     EtwpPsProvTraceProcess @ 0x1408F1570 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x140995530 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x140ADC640 (ExpGetProcessInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 */

__int64 __fastcall ObGetProcessHandleCount(struct _EX_RUNDOWN_REF *a1, _DWORD *a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  unsigned __int64 v5; // rtt
  unsigned int *Count; // rbx
  unsigned int *v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // r11
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r8
  signed __int64 v13; // rbx
  unsigned __int64 v14; // rtt
  __int64 result; // rax

  v3 = a1 + 61;
  _m_prefetchw(&a1[61]);
  v5 = a1[61].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64((volatile signed __int64 *)&a1[61], v5 + 2, v5)
    && !ExfAcquireRundownProtection(a1 + 61) )
  {
LABEL_24:
    result = 0LL;
    if ( a2 )
      *a2 = 0;
    return result;
  }
  Count = (unsigned int *)a1[96].Count;
  if ( !Count )
  {
    ExReleaseRundownProtection_0(v3);
    goto LABEL_24;
  }
  v7 = Count + 16;
  v8 = 0LL;
  v9 = (unsigned __int64)&Count[16 * (unsigned __int64)(unsigned int)ExpFreeListCount + 16];
  v10 = 0LL;
  v11 = 0LL;
  if ( (unsigned __int64)(Count + 16) < v9 )
  {
    do
    {
      v12 = (int)v7[6];
      v10 += v12;
      if ( (int)v12 <= (int)v7[7] )
        LODWORD(v12) = v7[7];
      v7 += 16;
      v11 += (unsigned int)v12;
    }
    while ( (unsigned __int64)v7 < v9 );
  }
  if ( v10 >= 0 )
    v8 = v10;
  if ( v8 > 0xFFFFFFFFLL )
    v8 = 0xFFFFFFFFLL;
  if ( v11 > 0xFFFFFFFFLL )
    v11 = 0xFFFFFFFFLL;
  v13 = (255 * ((unsigned __int64)*Count >> 2)) >> 8;
  if ( v8 <= v13 )
    v13 = v8;
  if ( v11 > v13 )
    LODWORD(v11) = v13;
  if ( a2 )
    *a2 = v11;
  _m_prefetchw(v3);
  v14 = v3->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v14 - 2, v14) )
    ExfReleaseRundownProtection(v3);
  return (unsigned int)v13;
}
