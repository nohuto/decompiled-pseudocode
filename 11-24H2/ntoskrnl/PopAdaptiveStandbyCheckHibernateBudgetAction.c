/*
 * XREFs of PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x1407604EC
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403C0960 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x140760BC0 (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x140760C84 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x140760CD8 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x14076247C (PopAdaptiveStandbySetPolicyTimer.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckHibernateBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v5; // r15
  unsigned __int8 v9; // r14
  __int64 v10; // rdx
  int v11; // edi
  __int64 v12; // r9
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v14; // r8
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v25; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  int *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  unsigned int *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  unsigned int *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  int *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  int *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  __int64 *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  int *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  unsigned int *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  __int64 *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  int *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  __int64 *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]

  v5 = a1 + 4;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_OWORD *)(v5 + 20) = *(__int128 *)((char *)&PopAdaptiveStandbyRegions + 20 * *(int *)(a1 + 200) + 4);
    PopAdaptiveStandbySetPolicyTimer(a1, *a2, *(unsigned int *)(v5 + 20));
    if ( (unsigned __int8)PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v5, a2, a3) )
    {
      if ( (int)a2[3] <= 10 )
      {
        v10 = *a2;
        if ( (unsigned int)v10 >= 0x708 )
        {
          v11 = 1;
          *(_BYTE *)v5 = 1;
          v9 = 1;
          *a3 = 0;
          *a4 = 4;
          goto LABEL_12;
        }
        PopAdaptiveStandbySetPolicyTimer(a1, v10, 1800LL);
      }
      v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v5, a2[5], a2[1], a3);
      if ( v9 )
        *a4 = 1;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = PopAdaptiveStandbyCheckRefreshableBudgetAction(a1, v5, a2, a3);
  }
  v11 = 0;
LABEL_12:
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v9 && *(_BYTE *)(a1 + 308) )
    {
      *(_BYTE *)(a1 + 308) = 0;
      KeCancelTimer2(a1 + 320, 0LL, 0LL, v12);
    }
    if ( (unsigned int)dword_140E08258 > 5 && tlgKeywordOn((__int64)&dword_140E08258, 0x400000000000LL) )
    {
      v26 = *a2;
      v30 = &v26;
      v24 = *(_DWORD *)(v5 + 20);
      v32 = &v24;
      v25 = a2[3];
      v34 = &v25;
      v16 = a2[4];
      v36 = &v16;
      v17 = *(_DWORD *)(v5 + 24);
      v38 = &v17;
      v18 = v9;
      v40 = &v18;
      v19 = *a3;
      v42 = &v19;
      v27 = *(_QWORD *)(a1 + 224);
      v44 = &v27;
      v20 = *(_DWORD *)(v5 + 28);
      v46 = &v20;
      v21 = *(_DWORD *)(v5 + 32);
      v48 = &v21;
      v22 = *(_DWORD *)(a1 + 200);
      v50 = (__int64 *)&v22;
      v52 = &v23;
      v54 = &v28;
      v31 = 8LL;
      v33 = 4LL;
      v35 = 4LL;
      v37 = 4LL;
      v39 = 4LL;
      v41 = 4LL;
      v43 = 4LL;
      v45 = 8LL;
      v47 = 4LL;
      v49 = 4LL;
      v51 = 4LL;
      v23 = v11;
      v53 = 4LL;
      v28 = 0x1000000LL;
      v55 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08258,
        (unsigned __int8 *)byte_14004E06D,
        (const GUID *)ActivityIdThread,
        0LL,
        0xFu,
        v29);
    }
  }
  else if ( (unsigned int)dword_140E08258 > 5 && tlgKeywordOn((__int64)&dword_140E08258, 0x400000000000LL) )
  {
    v28 = *a2;
    v30 = &v28;
    v23 = *(_DWORD *)(v5 + 4);
    v32 = &v23;
    v22 = a2[3];
    v34 = &v22;
    v21 = a2[4];
    v36 = &v21;
    v20 = *(_DWORD *)(v5 + 8);
    v38 = &v20;
    v19 = v9;
    v40 = &v19;
    v18 = *a3;
    v42 = &v18;
    v27 = *(_QWORD *)(a1 + 224);
    v44 = &v27;
    v17 = *(_DWORD *)(v5 + 12);
    v46 = &v17;
    v16 = *(_DWORD *)(v5 + 16);
    v48 = &v16;
    v50 = &v26;
    v31 = 8LL;
    v33 = 4LL;
    v35 = 4LL;
    v37 = 4LL;
    v39 = 4LL;
    v41 = 4LL;
    v43 = 4LL;
    v45 = 8LL;
    v47 = 4LL;
    v49 = 4LL;
    v26 = 0x1000000LL;
    v51 = 8LL;
    v14 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004DF6B,
      (const GUID *)v14,
      0LL,
      0xDu,
      v29);
  }
  return v9;
}
