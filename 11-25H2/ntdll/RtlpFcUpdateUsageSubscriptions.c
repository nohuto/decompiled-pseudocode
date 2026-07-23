/*
 * XREFs of RtlpFcUpdateUsageSubscriptions @ 0x1801171A0
 * Callers:
 *     RtlSubscribeForFeatureUsageNotification @ 0x180148A00 (RtlSubscribeForFeatureUsageNotification.c)
 *     RtlUnsubscribeFromFeatureUsageNotifications @ 0x180148A10 (RtlUnsubscribeFromFeatureUsageNotifications.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwSetSystemInformation @ 0x180166990 (ZwSetSystemInformation.c)
 */

__int64 __fastcall RtlpFcUpdateUsageSubscriptions(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v4; // r15d
  unsigned int v6; // edi
  int v7; // r14d
  unsigned __int64 v8; // rax
  unsigned int v9; // eax
  ULONG v10; // ebp
  _DWORD *Heap; // rax
  _DWORD *v12; // rsi
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm0
  NTSTATUS v17; // ebx

  v4 = a3;
  if ( a2 <= 0xFFFFFFFF )
  {
    v7 = a2;
    v8 = 20LL * (unsigned int)a2;
    if ( v8 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
    v9 = v8 + 4;
    if ( v9 < 4 )
    {
      return (unsigned int)-1073741675;
    }
    else
    {
      v10 = v9;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
      v6 = 0;
      v12 = Heap;
      if ( Heap )
      {
        *Heap = v7;
        v13 = 0;
        if ( a2 )
        {
          v14 = 0LL;
          do
          {
            v15 = 5 * v14;
            ++v13;
            v12[v15 + 1] = v4;
            v16 = *(_OWORD *)(a1 + 16 * v14);
            v14 = v13;
            *(_OWORD *)&v12[v15 + 2] = v16;
          }
          while ( v13 < a2 );
        }
        v17 = ZwSetSystemInformation(SystemFeatureUsageSubscriptionInformation, v12, v10);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v12);
        if ( v17 < 0 )
          return (unsigned int)v17;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
