/*
 * XREFs of PoFxSetTargetDripsDevicePowerState @ 0x140A6AD30
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PopFxTryReferenceDevice @ 0x1403A6408 (PopFxTryReferenceDevice.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     PopPepGetMinimumDevicePowerState @ 0x14049CCB4 (PopPepGetMinimumDevicePowerState.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxSetTargetDripsDevicePowerState(__int64 a1, int a2)
{
  char v4; // r15
  int v6; // ebx
  __int64 v7; // rcx
  __int64 Pool2; // rax
  unsigned __int16 *v10; // r8
  int v11; // [rsp+30h] [rbp-79h] BYREF
  int v12; // [rsp+34h] [rbp-75h] BYREF
  int v13; // [rsp+38h] [rbp-71h] BYREF
  int v14; // [rsp+3Ch] [rbp-6Dh] BYREF
  __int64 v15; // [rsp+40h] [rbp-69h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-49h] BYREF
  _DWORD *v18; // [rsp+80h] [rbp-29h]
  __int64 v19; // [rsp+88h] [rbp-21h]
  __int64 v20; // [rsp+90h] [rbp-19h]
  _DWORD v21[2]; // [rsp+98h] [rbp-11h] BYREF
  int *v22; // [rsp+A0h] [rbp-9h]
  __int64 v23; // [rsp+A8h] [rbp-1h]
  int *v24; // [rsp+B0h] [rbp+7h]
  __int64 v25; // [rsp+B8h] [rbp+Fh]
  __int64 *v26; // [rsp+C0h] [rbp+17h]
  __int64 v27; // [rsp+C8h] [rbp+1Fh]

  v11 = 0;
  v12 = 0;
  DestinationString = 0LL;
  if ( !PopFxBasicAccountingDisabled )
  {
    v6 = -1073741637;
    goto LABEL_14;
  }
  if ( a2 == 1 || a2 > 4 )
    goto LABEL_15;
  v4 = dword_140E27F00;
  if ( dword_140E27F00 == -1 )
  {
    v6 = -1073741823;
    goto LABEL_14;
  }
  if ( !a1 )
  {
LABEL_15:
    v6 = -1073741811;
    goto LABEL_14;
  }
  v6 = PopFxTryReferenceDevice(a1, 2);
  if ( v6 >= 0 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 864), 0, 0) & 0x10) != 0 )
    {
      v7 = *(_QWORD *)(a1 + 56);
      if ( v7 )
      {
        if ( PopPepGetMinimumDevicePowerState(v7, v4, 1, &v11, &v12) )
        {
          if ( !a2 && v11 == v12 || a2 == v11 )
          {
            v6 = 0;
            goto LABEL_16;
          }
          if ( v12 <= 1 || !a2 || a2 > v12 )
          {
            Pool2 = ExAllocatePool2(0x40uLL, 0x40uLL, 0x4D584650u);
            if ( Pool2 )
            {
              *(_QWORD *)(Pool2 + 8) = Pool2;
              *(_QWORD *)Pool2 = Pool2;
              *(_QWORD *)(Pool2 + 16) = a1;
              *(_DWORD *)(Pool2 + 24) = a2;
              *(_QWORD *)(Pool2 + 48) = PopFxUpdateVetoMaskWork;
              *(_QWORD *)(Pool2 + 56) = Pool2;
              *(_QWORD *)(Pool2 + 32) = 0LL;
              ExQueueWorkItem((PWORK_QUEUE_ITEM)(Pool2 + 32), DelayedWorkQueue);
              return (unsigned int)v6;
            }
            v6 = -1073741670;
LABEL_16:
            PopFxDereferenceDevice(a1, 2);
            if ( v6 >= 0 )
              return (unsigned int)v6;
            goto LABEL_14;
          }
        }
      }
    }
    v6 = -1073741823;
    goto LABEL_16;
  }
LABEL_14:
  RtlInitUnicodeString(&DestinationString, &word_140AEDAC0);
  if ( (unsigned int)dword_140E07680 > 5 && tlgKeywordOn((__int64)&dword_140E07680, 0x400000000000LL) )
  {
    v19 = 2LL;
    v18 = v21;
    v20 = *((_QWORD *)v10 + 1);
    v21[0] = *v10;
    v22 = &v14;
    v24 = &v13;
    v26 = &v15;
    v21[1] = 0;
    v14 = a2;
    v23 = 4LL;
    v13 = v6;
    v25 = 4LL;
    v15 = 0x1000000LL;
    v27 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, (unsigned __int8 *)byte_140048B93, 0LL, 0LL, 7u, &v17);
  }
  return (unsigned int)v6;
}
