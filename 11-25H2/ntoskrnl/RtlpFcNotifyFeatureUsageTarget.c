/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x140A30B14
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x140A30A74 (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14069DF40 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14069ED60 (ZwUpdateWnfStateData.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, WNF_STATE_NAME *a2)
{
  void *Buffer; // rdi
  NTSTATUS updated; // ebx
  ULONG v5; // r8d
  __int64 v6; // rdx
  __int64 i; // rcx
  ULONG BufferSize; // [rsp+40h] [rbp-20h] BYREF
  ULONG ChangeStamp; // [rsp+44h] [rbp-1Ch] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-18h] BYREF

  StateName = *a2;
  Buffer = (void *)ExAllocatePool2(0x100uLL);
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
            goto LABEL_13;
        }
        if ( (unsigned __int64)v5 + 8 <= 0x1000 )
        {
          v5 += 8;
          *((_DWORD *)Buffer + 2 * v6) = *(_DWORD *)a1;
          *((_WORD *)Buffer + 4 * v6 + 2) = *(_WORD *)(a1 + 4);
          BufferSize = v5;
        }
LABEL_13:
        updated = ZwUpdateWnfStateData(&StateName, Buffer, v5, 0LL, 0LL, ChangeStamp, 1u);
      }
    }
    while ( updated == -1073741823 );
    ExFreePoolWithTag(Buffer, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)updated;
}
