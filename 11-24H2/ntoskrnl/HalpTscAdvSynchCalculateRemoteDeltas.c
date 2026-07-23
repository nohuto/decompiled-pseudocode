/*
 * XREFs of HalpTscAdvSynchCalculateRemoteDeltas @ 0x140546740
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x140546820 (HalpTscAdvSynchLeader.c)
 * Callees:
 *     HalpTscAdvSynchCalculateRemoteDelta @ 0x140483974 (HalpTscAdvSynchCalculateRemoteDelta.c)
 *     HalpTscTraceProcessorDelta @ 0x140547314 (HalpTscTraceProcessorDelta.c)
 */

struct _KPRCB *__fastcall HalpTscAdvSynchCalculateRemoteDeltas(
        __int64 *a1,
        __int64 *a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  struct _KPRCB *result; // rax
  __int64 v7; // rbx
  __int64 *v11; // rsi
  __int64 v12; // r12
  _DWORD *v13; // rdi
  __int64 v14; // rax

  result = KeGetCurrentPrcb();
  v7 = 0LL;
  *a1 = 0LL;
  *a2 = 0LL;
  v11 = (__int64 *)HalpTscDeltas;
  v12 = HalpTscNopCycles;
  *a3 = result->Number;
  if ( a6 )
  {
    v13 = (_DWORD *)v12;
    do
    {
      result = KeGetCurrentPrcb();
      if ( (_DWORD)v7 == result->Number )
      {
        *v11 = 0LL;
        *v13 = 0;
      }
      else
      {
        v14 = HalpTscAdvSynchCalculateRemoteDelta(v7, (_DWORD *)(v12 + 4 * v7));
        *v11 = v14;
        if ( v14 < *a1 )
          *a1 = v14;
        if ( v14 > *a2 )
        {
          *a2 = v14;
          *a3 = v7;
        }
        result = (struct _KPRCB *)HalpTscTraceProcessorDelta(
                                    KeGetCurrentPrcb()->Number,
                                    (unsigned int)v7,
                                    v14,
                                    (unsigned int)*v13);
      }
      v7 = (unsigned int)(v7 + 1);
      ++v11;
      ++v13;
    }
    while ( (unsigned int)v7 < a6 );
  }
  return result;
}
