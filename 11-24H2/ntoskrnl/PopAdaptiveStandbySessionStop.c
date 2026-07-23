/*
 * XREFs of PopAdaptiveStandbySessionStop @ 0x1407619D0
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761068 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

char __fastcall PopAdaptiveStandbySessionStop(__int64 a1, int a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rcx
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v13; // r8
  int v15; // [rsp+30h] [rbp-69h] BYREF
  __int64 v16; // [rsp+38h] [rbp-61h] BYREF
  __int64 v17; // [rsp+40h] [rbp-59h] BYREF
  __int64 v18; // [rsp+48h] [rbp-51h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+60h] [rbp-39h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  int *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  __int64 *v25; // [rsp+A0h] [rbp+7h]
  __int64 v26; // [rsp+A8h] [rbp+Fh]
  __int64 *v27; // [rsp+B0h] [rbp+17h]
  __int64 v28; // [rsp+B8h] [rbp+1Fh]
  __int64 *v29; // [rsp+C0h] [rbp+27h]
  __int64 v30; // [rsp+C8h] [rbp+2Fh]

  v4 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_OWORD *)(a1 + 176) = 0LL;
  v5 = v4 / 0x989680;
  *(_DWORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 548) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  IsEnabledDeviceUsageNoInline = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
  {
    *(_DWORD *)(a1 + 216) = 3;
    *(_DWORD *)(a1 + 232) = 0;
    *(_QWORD *)(a1 + 224) = 0LL;
    if ( *(_BYTE *)a1 )
    {
      *(_BYTE *)(a1 + 324) = 0;
      LOBYTE(IsEnabledDeviceUsageNoInline) = KeCancelTimer2(a1 + 336, 0LL, v7, v8);
    }
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL);
      if ( (_BYTE)IsEnabledDeviceUsageNoInline )
      {
        v9 = *(_QWORD *)(a1 + 240);
        v10 = *(_DWORD *)(a1 + 248) == 2;
        v21 = (__int64 *)&v19;
        v23 = &v15;
        v25 = &v16;
        v11 = v9 - 1;
        v19 = v5;
        v27 = &v17;
        if ( !v10 )
          v11 = v9;
        v22 = 8LL;
        v29 = &v18;
        v15 = a2;
        v24 = 4LL;
        v16 = v9;
        v26 = 8LL;
        v17 = v11;
        v28 = 8LL;
        v18 = 0x1000000LL;
        v30 = 8LL;
        ActivityIdThread = IoGetActivityIdThread();
        LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                                 (__int64)&dword_140E08218,
                                                 (unsigned __int8 *)&word_14004EBDE,
                                                 (const GUID *)ActivityIdThread,
                                                 0LL,
                                                 7u,
                                                 v20);
      }
    }
  }
  else if ( (unsigned int)dword_140E08218 > 5 )
  {
    LOBYTE(IsEnabledDeviceUsageNoInline) = tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL);
    if ( (_BYTE)IsEnabledDeviceUsageNoInline )
    {
      v18 = v5;
      v21 = &v18;
      v23 = &v15;
      v17 = *(_QWORD *)(a1 + 240);
      v25 = &v17;
      v27 = &v16;
      v22 = 8LL;
      v15 = a2;
      v24 = 4LL;
      v26 = 8LL;
      v16 = 0x1000000LL;
      v28 = 8LL;
      v13 = IoGetActivityIdThread();
      LOBYTE(IsEnabledDeviceUsageNoInline) = tlgWriteTransfer_EtwWriteTransfer(
                                               (__int64)&dword_140E08218,
                                               (unsigned __int8 *)&word_14004ED2E,
                                               (const GUID *)v13,
                                               0LL,
                                               6u,
                                               v20);
    }
  }
  return IsEnabledDeviceUsageNoInline;
}
