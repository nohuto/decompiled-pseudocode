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

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, WNF_STATE_NAME *a2)
{
  PVOID Buffer; // rdi
  NTSTATUS updated; // ebx
  ULONG v5; // r8d
  __int64 v6; // rdx
  __int64 i; // rcx
  ULONG BufferSize; // [rsp+40h] [rbp-20h] BYREF
  ULONG ChangeStamp; // [rsp+44h] [rbp-1Ch] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-18h] BYREF

  StateName = *a2;
  Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
  if ( Buffer )
  {
    do
    {
      ChangeStamp = 0;
      BufferSize = 4096;
      updated = ZwQueryWnfStateData(&StateName, 0LL, 0LL, &ChangeStamp, Buffer, &BufferSize);
      if ( updated >= 0 )
      {
        v5 = BufferSize;
        if ( (BufferSize & 7) != 0 )
        {
          v5 = 0;
          BufferSize = 0;
        }
        v6 = v5 >> 3;
        for ( i = 0LL; (unsigned int)i < (unsigned int)v6; i = (unsigned int)(i + 1) )
        {
          if ( *((_DWORD *)Buffer + 2 * i) == *(_DWORD *)a1 && *((_WORD *)Buffer + 4 * i + 2) == *(_WORD *)(a1 + 4) )
            goto LABEL_10;
        }
        if ( (unsigned __int64)v5 + 8 <= 0x1000 )
        {
          v5 += 8;
          *((_DWORD *)Buffer + 2 * v6) = *(_DWORD *)a1;
          *((_WORD *)Buffer + 4 * v6 + 2) = *(_WORD *)(a1 + 4);
          BufferSize = v5;
        }
LABEL_10:
        updated = ZwUpdateWnfStateData(&StateName, Buffer, v5, 0LL, 0LL, ChangeStamp, 1u);
      }
    }
    while ( updated == -1073741823 );
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)updated;
}
