/*
 * XREFs of PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484
 * Callers:
 *     PopAdaptiveStandbyPolicyTimerWorker @ 0x1407611B0 (PopAdaptiveStandbyPolicyTimerWorker.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbyWnfCallback @ 0x140762640 (PopAdaptiveStandbyWnfCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x14075F4C0 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC (PopAdaptiveStandbyCheckHibernateBudgetAction.c)
 *     PopAdaptiveStandbyCheckHibernateReserveAction @ 0x14075FAF4 (PopAdaptiveStandbyCheckHibernateReserveAction.c)
 *     PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4 (PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction.c)
 *     PopAdaptiveStandbySessionStart @ 0x140761630 (PopAdaptiveStandbySessionStart.c)
 *     PopAdaptiveStandbySessionStop @ 0x1407619D0 (PopAdaptiveStandbySessionStop.c)
 *     PopAdaptiveStandbyTraceBatteryUpdate @ 0x140761CB0 (PopAdaptiveStandbyTraceBatteryUpdate.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbyHandleBatteryUpdate(__int64 a1, __int64 a2)
{
  NTSTATUS *v4; // rsi
  NTSTATUS result; // eax
  char v6; // al
  struct _LIST_ENTRY *ActivityIdThread; // rax
  int v8; // edi
  unsigned __int64 v9; // rsi
  int v10; // edi
  int v11; // eax
  unsigned __int8 v12; // al
  int v13; // eax
  int v14; // r8d
  __int64 v15; // r9
  int v16; // esi
  unsigned __int8 v17; // al
  unsigned __int8 v18; // al
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rax
  char v21; // [rsp+30h] [rbp-A9h] BYREF
  int v22; // [rsp+34h] [rbp-A5h] BYREF
  int v23; // [rsp+38h] [rbp-A1h] BYREF
  int v24; // [rsp+3Ch] [rbp-9Dh] BYREF
  int v25; // [rsp+40h] [rbp-99h] BYREF
  int v26; // [rsp+44h] [rbp-95h] BYREF
  int v27; // [rsp+48h] [rbp-91h] BYREF
  int v28; // [rsp+4Ch] [rbp-8Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+50h] [rbp-89h] BYREF
  ULONG v30; // [rsp+60h] [rbp-79h]
  signed int v31; // [rsp+64h] [rbp-75h]
  int *v32; // [rsp+70h] [rbp-69h]
  __int64 v33; // [rsp+78h] [rbp-61h]
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+80h] [rbp-59h] BYREF
  char *v35; // [rsp+A0h] [rbp-39h]
  __int64 v36; // [rsp+A8h] [rbp-31h]
  int *v37; // [rsp+B0h] [rbp-29h]
  __int64 v38; // [rsp+B8h] [rbp-21h]
  int *v39; // [rsp+C0h] [rbp-19h]
  __int64 v40; // [rsp+C8h] [rbp-11h]
  int *v41; // [rsp+D0h] [rbp-9h]
  __int64 v42; // [rsp+D8h] [rbp-1h]
  int *v43; // [rsp+E0h] [rbp+7h]
  __int64 v44; // [rsp+E8h] [rbp+Fh]

  v25 = 0;
  v24 = 0;
  v27 = 0;
  v4 = (NTSTATUS *)(a1 + 136);
  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( result )
  {
    LODWORD(a2) = (_DWORD)v4;
  }
  else
  {
    *(_OWORD *)v4 = *(_OWORD *)a2;
    result = *(_DWORD *)(a2 + 16);
    v4[4] = result;
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      v6 = *(_BYTE *)a2 & 1;
      v36 = 1LL;
      v21 = v6;
      v35 = &v21;
      v23 = *(_DWORD *)(a2 + 4);
      v37 = &v23;
      v22 = *(_DWORD *)(a2 + 8);
      v39 = &v22;
      v28 = *(_DWORD *)(a2 + 12);
      v41 = &v28;
      v26 = *(_DWORD *)(a2 + 16);
      v43 = &v26;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 4LL;
      v44 = 4LL;
      ActivityIdThread = IoGetActivityIdThread();
      result = tlgWriteTransfer_EtwWriteTransfer(
                 (__int64)&dword_140E08218,
                 (unsigned __int8 *)&byte_14004E20F,
                 (const GUID *)ActivityIdThread,
                 0LL,
                 7u,
                 &v34);
    }
  }
  v8 = 0;
  v22 = 0;
  v23 = 0;
  if ( *(_QWORD *)(a1 + 200) )
  {
    if ( ((*(_BYTE *)v4 ^ *(_BYTE *)(a1 + 176)) & 1) != 0 )
    {
      PopAdaptiveStandbySessionStop(a1, 2LL);
      PopAdaptiveStandbySessionStart(a1, 2LL);
    }
    if ( *(_DWORD *)(a1 + 140) != *(_DWORD *)(a1 + 180) )
    {
      PopAdaptiveStandbySessionStop(a1, 3LL);
      PopAdaptiveStandbySessionStart(a1, 3LL);
    }
    result = *v4;
    if ( (*v4 & 1) == 0 )
    {
      HIDWORD(v29.Ptr) = 0;
      v31 = 0;
      v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      v10 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
      if ( MEMORY[0xFFFFF78000000008] / 0x989680uLL - *(_QWORD *)(a1 + 200) <= 0xFFFFFFFF )
        LODWORD(v29.Ptr) = v9 - *(_DWORD *)(a1 + 200);
      else
        LODWORD(v29.Ptr) = -1;
      v11 = *(_DWORD *)(a1 + 152);
      v29.Size = *(_DWORD *)(a1 + 192);
      v30 = v29.Size - v11;
      v29.Reserved = v11;
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
      {
        PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(a1, (unsigned int *)&v29, &v25, &v22);
        v31 = *(_DWORD *)(a1 + 232) - v29.Reserved;
        if ( v9 - *(_QWORD *)(a1 + 224) <= 0xFFFFFFFF )
          HIDWORD(v29.Ptr) = v10 - *(_DWORD *)(a1 + 224);
        else
          HIDWORD(v29.Ptr) = -1;
        v12 = PopAdaptiveStandbyCheckHibernateBudgetAction(a1, (unsigned int *)&v29, &v24, &v23);
        v8 = v22;
        if ( v12 )
          v8 = v23;
        v13 = PopAdaptiveStandbyCalculateBatteryRegion(v29.Reserved);
        if ( v13 != (_DWORD)v15 && v31 >= *((_DWORD *)&PopAdaptiveStandbyRegions + 5 * v15 + 2) )
        {
          *(_DWORD *)(a1 + 232) = v14;
          *(_DWORD *)(a1 + 216) = v13;
          *(_QWORD *)(a1 + 224) = v9;
        }
        v16 = 5;
      }
      else
      {
        v17 = PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(a1, (unsigned int *)&v29, &v25, 0LL);
        v8 = v22;
        if ( v17 )
          v8 = 3;
        if ( PopAdaptiveStandbyCheckHibernateReserveAction(a1, (unsigned int *)&v29, &v27) )
          v8 = 2;
        v18 = PopAdaptiveStandbyCheckHibernateBudgetAction(a1, (unsigned int *)&v29, &v24, 0LL);
        v16 = v27;
        if ( v18 )
          v8 = 1;
      }
      if ( !v8 )
        goto LABEL_43;
      if ( v8 != 1 && v8 != 2 )
      {
        if ( v8 == 3 )
          goto LABEL_37;
        if ( v8 != 4 )
        {
          if ( v8 == 5 && (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          {
LABEL_37:
            if ( *(_DWORD *)(a1 + 548) )
              goto LABEL_39;
            goto LABEL_38;
          }
LABEL_39:
          if ( !*(_BYTE *)(a1 + 544) )
          {
            if ( (unsigned int)dword_140E08218 > 5 )
            {
              v19 = IoGetActivityIdThread();
              tlgWriteTransfer_EtwWriteTransfer(
                (__int64)&dword_140E08218,
                (unsigned __int8 *)byte_14004DE0D,
                (const GUID *)v19,
                0LL,
                2u,
                &v29);
            }
            *(_BYTE *)(a1 + 544) = 1;
            ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 512), DelayedWorkQueue);
          }
LABEL_43:
          ++*(_DWORD *)(a1 + 236);
          result = PopAdaptiveStandbyTraceBatteryUpdate(a1, a2, v25, v24, v16);
          goto LABEL_44;
        }
        if ( !(unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_39;
      }
LABEL_38:
      *(_DWORD *)(a1 + 548) = v8;
      goto LABEL_39;
    }
  }
LABEL_44:
  if ( (unsigned int)dword_140E08218 > 5 )
  {
    v26 = v8;
    v32 = &v26;
    v33 = 4LL;
    v20 = IoGetActivityIdThread();
    return tlgWriteTransfer_EtwWriteTransfer(
             (__int64)&dword_140E08218,
             (unsigned __int8 *)&dword_14004DDDC,
             (const GUID *)v20,
             0LL,
             3u,
             &v29);
  }
  return result;
}
