/*
 * XREFs of PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x140760D48
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x140760BC0 (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x140760C84 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x140760CD8 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v4; // r14
  unsigned __int8 v9; // bl
  int *v10; // r9
  struct _LIST_ENTRY *ActivityIdThread; // rax
  char *v12; // rdx
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v16; // [rsp+38h] [rbp-C8h] BYREF
  int v17; // [rsp+3Ch] [rbp-C4h] BYREF
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v21; // [rsp+4Ch] [rbp-B4h] BYREF
  int v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  int *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  unsigned int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  unsigned int *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int *v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  int *v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+F8h] [rbp-8h]
  __int64 *v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+108h] [rbp+8h]
  unsigned int *v43; // [rsp+110h] [rbp+10h]
  __int64 v44; // [rsp+118h] [rbp+18h]
  unsigned int *v45; // [rsp+120h] [rbp+20h]
  __int64 v46; // [rsp+128h] [rbp+28h]
  int *v47; // [rsp+130h] [rbp+30h]
  __int64 v48; // [rsp+138h] [rbp+38h]
  __int64 *v49; // [rsp+140h] [rbp+40h]
  __int64 v50; // [rsp+148h] [rbp+48h]

  v4 = a1 + 56;
  if ( *(_BYTE *)(a1 + 92) )
  {
    v9 = 0;
    *a3 = 15;
  }
  else if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v4, a2, a3) )
    {
      if ( (int)a2[3] > 20 )
      {
        v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v4, a2[4], *a2, v10);
        if ( v9 )
          *a4 = 3;
      }
      else
      {
        v9 = 1;
        *(_BYTE *)v4 = 1;
        *a3 = 0;
        *a4 = 5;
      }
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = PopAdaptiveStandbyCheckRefreshableBudgetAction(a1, v4, a2, a3);
  }
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( (unsigned int)dword_140E08258 > 5 && tlgKeywordOn((__int64)&dword_140E08258, 0x400000000000LL) )
    {
      v23 = *a2;
      v27 = &v23;
      v14 = *(_DWORD *)(v4 + 20);
      v29 = &v14;
      v15 = a2[3];
      v31 = &v15;
      v16 = a2[4];
      v33 = &v16;
      v17 = *(_DWORD *)(v4 + 24);
      v35 = &v17;
      v18 = v9;
      v37 = &v18;
      v19 = *a3;
      v39 = &v19;
      v24 = *(_QWORD *)(a1 + 224);
      v41 = &v24;
      v20 = *(_DWORD *)(v4 + 28);
      v43 = &v20;
      v21 = *(_DWORD *)(v4 + 32);
      v45 = &v21;
      v22 = *(_DWORD *)(a1 + 96);
      v47 = &v22;
      v49 = &v25;
      v28 = 8LL;
      v30 = 4LL;
      v32 = 4LL;
      v34 = 4LL;
      v36 = 4LL;
      v38 = 4LL;
      v40 = 4LL;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v25 = 0x1000000LL;
      v50 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      v12 = &byte_14004DA5F;
LABEL_18:
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08258,
        (unsigned __int8 *)v12,
        (const GUID *)ActivityIdThread,
        0LL,
        0xEu,
        &v26);
    }
  }
  else if ( (unsigned int)dword_140E08258 > 5 && tlgKeywordOn((__int64)&dword_140E08258, 0x400000000000LL) )
  {
    v25 = *a2;
    v27 = &v25;
    v22 = *(_DWORD *)(v4 + 4);
    v29 = &v22;
    v21 = a2[3];
    v31 = &v21;
    v20 = a2[4];
    v33 = &v20;
    v19 = *(_DWORD *)(v4 + 8);
    v35 = &v19;
    v18 = v9;
    v37 = &v18;
    v17 = *a3;
    v39 = &v17;
    v24 = *(_QWORD *)(a1 + 224);
    v41 = &v24;
    v16 = *(_DWORD *)(v4 + 12);
    v43 = &v16;
    v15 = *(_DWORD *)(v4 + 16);
    v45 = &v15;
    v14 = *(_DWORD *)(a1 + 96);
    v47 = &v14;
    v49 = &v23;
    v28 = 8LL;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 4LL;
    v36 = 4LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 8LL;
    v44 = 4LL;
    v46 = 4LL;
    v48 = 4LL;
    v23 = 0x1000000LL;
    v50 = 8LL;
    ActivityIdThread = IoGetActivityIdThread();
    v12 = byte_14004D945;
    goto LABEL_18;
  }
  return v9;
}
