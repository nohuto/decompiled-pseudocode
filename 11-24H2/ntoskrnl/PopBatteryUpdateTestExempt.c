/*
 * XREFs of PopBatteryUpdateTestExempt @ 0x140759914
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoCancelIrp @ 0x140408D50 (IoCancelIrp.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x14049F07C (PopBatteryQueueWork.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopBatteryTestExemptPolicyRegKeyAccess @ 0x1407597C4 (PopBatteryTestExemptPolicyRegKeyAccess.c)
 *     PopPowerAdapterReinitialize @ 0x14075AA58 (PopPowerAdapterReinitialize.c)
 *     PopBatteryWaitTag @ 0x140AB4CB0 (PopBatteryWaitTag.c)
 */

__int64 __fastcall PopBatteryUpdateTestExempt(unsigned __int8 a1)
{
  int v1; // ebx
  __int64 v2; // rbx
  __int64 *v3; // rdi
  __int64 *v4; // rcx
  __int64 **v5; // rax
  unsigned __int8 *v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  __int64 i; // rbx
  int v10; // eax
  __int64 *j; // rbx
  int v13; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14[2]; // [rsp+38h] [rbp-38h] BYREF
  int *v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  v1 = a1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PopCB);
  if ( PopBatteryTestExemptPolicy != v1 )
  {
    PopBatteryTestExemptPolicy = v1;
    PopBatteryTestExemptPolicyRegKeyAccess(1);
    if ( PopBatteryTestExemptPolicy )
    {
      v2 = qword_140F0BCB0;
      if ( (__int64 *)qword_140F0BCB0 != &qword_140F0BCB0 )
      {
        while ( 1 )
        {
          v3 = *(__int64 **)v2;
          if ( (*(_DWORD *)(v2 + 48) & 0x10) == 0 )
            break;
          if ( (unsigned int)dword_140E07680 > 5 )
          {
            v6 = (unsigned __int8 *)&dword_14004CDBC;
LABEL_11:
            v7 = *(_DWORD *)(v2 + 44);
            v17 = 0;
            v13 = v7;
            v16 = 4;
            v15 = &v13;
            tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E07680, v6, 0LL, 0LL, 3u, v14);
          }
LABEL_12:
          v2 = (__int64)v3;
          if ( v3 == &qword_140F0BCB0 )
            goto LABEL_13;
        }
        IoCancelIrp(*(PIRP *)(v2 - 8));
        KeWaitForSingleObject((PVOID)(v2 + 16), Executive, 0, 0, 0LL);
        v4 = *(__int64 **)v2;
        if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *(__int64 ***)(v2 + 8), *v5 != (__int64 *)v2) )
          __fastfail(3u);
        *v5 = v4;
        v4[1] = (__int64)v5;
        *(_QWORD *)v2 = 0LL;
        --dword_140F0BC94;
        byte_140F0BC98 = 1;
        if ( (unsigned int)dword_140E07680 <= 5 )
          goto LABEL_12;
        v6 = (unsigned __int8 *)&byte_14004CD7F;
        goto LABEL_11;
      }
LABEL_13:
      v8 = qword_140F0BF30;
      if ( qword_140F0BF30 )
      {
        if ( *(_DWORD *)(qword_140F0BF30 + 128) == 1 )
        {
          IoCancelIrp(*(PIRP *)(qword_140F0BF30 + 56));
          KeWaitForSingleObject((PVOID)(v8 + 104), Executive, 0, 0, 0LL);
          qword_140F0BF30 = 0LL;
          if ( (unsigned int)dword_140E07680 > 5 )
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07680,
              (unsigned __int8 *)word_14004CDEA,
              0LL,
              0LL,
              2u,
              v14);
        }
      }
    }
    else
    {
      for ( i = qword_140F0BCA0; (__int64 *)i != &qword_140F0BCA0; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 112) & 0x10) == 0 && !*(_QWORD *)(i + 64) )
        {
          PopBatteryWaitTag(i);
          if ( (unsigned int)dword_140E07680 > 5 )
          {
            v10 = *(_DWORD *)(i + 108);
            v17 = 0;
            v13 = v10;
            v16 = 4;
            v15 = &v13;
            tlgWriteTransfer_EtwWriteTransfer(
              (__int64)&dword_140E07680,
              (unsigned __int8 *)byte_14004CB90,
              0LL,
              0LL,
              3u,
              v14);
          }
        }
      }
      for ( j = (__int64 *)qword_140F0BF20; j != &qword_140F0BF20; j = (__int64 *)*j )
        PopPowerAdapterReinitialize(j);
    }
    PopBatteryQueueWork(8u);
  }
  PopReleaseRwLock((signed __int64 *)&PopCB);
  return 0LL;
}
