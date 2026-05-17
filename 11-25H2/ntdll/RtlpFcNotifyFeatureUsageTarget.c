/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x1800A04D4
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x18009FC7C (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     ZwQueryWnfStateData @ 0x180166010 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x180166E30 (ZwUpdateWnfStateData.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  __int64 Heap; // rdi
  int updated; // ebx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 i; // rcx
  unsigned int v10; // [rsp+40h] [rbp-20h] BYREF
  int v11; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-18h] BYREF

  v12[0] = *a2;
  v12[1] = a2[1];
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( Heap )
  {
    do
    {
      v11 = 0;
      v10 = 4096;
      updated = ZwQueryWnfStateData(v12, 0LL, 0LL, &v11, Heap, &v10);
      if ( updated >= 0 )
      {
        v6 = v10;
        if ( (v10 & 7) != 0 )
        {
          v6 = 0LL;
          v10 = 0;
        }
        v7 = (unsigned int)v6 >> 3;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
        {
          if ( *(_DWORD *)(Heap + 8 * i) == *(_DWORD *)a1 && *(_WORD *)(Heap + 8 * i + 4) == *(_WORD *)(a1 + 4) )
            goto LABEL_10;
        }
        if ( (unsigned __int64)(unsigned int)v6 + 8 <= 0x1000 )
        {
          v6 = (unsigned int)(v6 + 8);
          *(_DWORD *)(Heap + 8 * v7) = *(_DWORD *)a1;
          *(_WORD *)(Heap + 8 * v7 + 4) = *(_WORD *)(a1 + 4);
          v10 = v6;
        }
LABEL_10:
        updated = ZwUpdateWnfStateData(v12, Heap, v6, 0LL, 0LL, v11, 1);
      }
    }
    while ( updated == -1073741823 );
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v5);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)updated;
}
