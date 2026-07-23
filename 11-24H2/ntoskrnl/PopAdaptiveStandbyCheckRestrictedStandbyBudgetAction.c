/*
 * XREFs of PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction @ 0x14075FEF4
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_GetVariant @ 0x1405D4DBC (Feature_AdaptiveHibernateEnhancements__private_GetVariant.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x14075FD6C (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x14075FE30 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x14075FE84 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckRestrictedStandbyBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v4; // rsi
  unsigned __int8 v9; // bl
  __int64 v10; // rdx
  bool v11; // zf
  __int64 v12; // rcx
  char v13; // al
  char v14; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v16; // r8
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19; // [rsp+31h] [rbp-CFh] BYREF
  int v20; // [rsp+34h] [rbp-CCh] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  int v22; // [rsp+3Ch] [rbp-C4h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  int v28; // [rsp+54h] [rbp-ACh] BYREF
  int v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+64h] [rbp-9Ch] BYREF
  int v33; // [rsp+68h] [rbp-98h] BYREF
  int v34; // [rsp+6Ch] [rbp-94h] BYREF
  int v35; // [rsp+70h] [rbp-90h] BYREF
  int v36; // [rsp+74h] [rbp-8Ch] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  __int64 v38; // [rsp+80h] [rbp-80h] BYREF
  __int64 v39; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v43; // [rsp+C0h] [rbp-40h]
  __int64 v44; // [rsp+C8h] [rbp-38h]
  int *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  unsigned int *v47; // [rsp+E0h] [rbp-20h]
  __int64 v48; // [rsp+E8h] [rbp-18h]
  unsigned int *v49; // [rsp+F0h] [rbp-10h]
  __int64 v50; // [rsp+F8h] [rbp-8h]
  int *v51; // [rsp+100h] [rbp+0h]
  __int64 v52; // [rsp+108h] [rbp+8h]
  int *v53; // [rsp+110h] [rbp+10h]
  __int64 v54; // [rsp+118h] [rbp+18h]
  int *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  __int64 *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  __int64 *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  int *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  int *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  __int64 *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  int *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  char *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]
  int *v71; // [rsp+1A0h] [rbp+A0h]
  __int64 v72; // [rsp+1A8h] [rbp+A8h]
  int *v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  int *v75; // [rsp+1C0h] [rbp+C0h]
  __int64 v76; // [rsp+1C8h] [rbp+C8h]
  int *v77; // [rsp+1D0h] [rbp+D0h]
  __int64 v78; // [rsp+1D8h] [rbp+D8h]
  char *v79; // [rsp+1E0h] [rbp+E0h]
  __int64 v80; // [rsp+1E8h] [rbp+E8h]
  int *v81; // [rsp+1F0h] [rbp+F0h]
  __int64 v82; // [rsp+1F8h] [rbp+F8h]
  unsigned int *v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  unsigned int *v85; // [rsp+210h] [rbp+110h]
  __int64 v86; // [rsp+218h] [rbp+118h]
  int *v87; // [rsp+220h] [rbp+120h]
  __int64 v88; // [rsp+228h] [rbp+128h]
  __int64 *v89; // [rsp+230h] [rbp+130h]
  __int64 v90; // [rsp+238h] [rbp+138h]

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
      if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant() == 8
        || (unsigned int)Feature_AdaptiveHibernateEnhancements__private_GetVariant() == 6
        || (int)a2[3] > 20 )
      {
        v9 = PopAdaptiveStandbyCheckRefreshableBudgetActionV2(v4, a2[4], *a2, a3);
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
    if ( (unsigned int)dword_140E08218 > 5 && tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL) )
    {
      v10 = *(_QWORD *)(a1 + 240);
      v11 = *(_DWORD *)(a1 + 248) == 2;
      v41 = *a2;
      v43 = &v41;
      v12 = v10 - 1;
      v29 = *(_DWORD *)(v4 + 20);
      if ( !v11 )
        v12 = v10;
      v39 = v12;
      v45 = &v29;
      v30 = a2[3];
      v47 = &v30;
      v31 = a2[4];
      v49 = &v31;
      v32 = *(_DWORD *)(v4 + 24);
      v51 = &v32;
      v33 = v9;
      v53 = &v33;
      v34 = *a3;
      v55 = &v34;
      v57 = &v38;
      v59 = &v39;
      v35 = *(_DWORD *)(v4 + 28);
      v61 = &v35;
      v36 = *(_DWORD *)(v4 + 32);
      v63 = &v36;
      v37 = *(_DWORD *)(a1 + 96);
      v65 = (__int64 *)&v37;
      v20 = *(_DWORD *)(a1 + 236);
      v67 = &v20;
      v13 = *(_BYTE *)(a1 + 136) & 1;
      v44 = 8LL;
      v18 = v13;
      v69 = &v18;
      v21 = *(_DWORD *)(a1 + 140);
      v71 = &v21;
      v22 = *(_DWORD *)(a1 + 144);
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v38 = v10;
      v58 = 8LL;
      v60 = 8LL;
      v62 = 4LL;
      v64 = 4LL;
      v66 = 4LL;
      v68 = 4LL;
      v70 = 1LL;
      v72 = 4LL;
      v74 = 4LL;
      v73 = &v22;
      v23 = *(_DWORD *)(a1 + 148);
      v75 = &v23;
      v24 = *(_DWORD *)(a1 + 152);
      v77 = &v24;
      v14 = *(_BYTE *)(a1 + 156) & 1;
      v76 = 4LL;
      v19 = v14;
      v79 = &v19;
      v25 = *(_DWORD *)(a1 + 160);
      v81 = &v25;
      v26 = *(_DWORD *)(a1 + 164);
      v83 = &v26;
      v27 = *(_DWORD *)(a1 + 168);
      v85 = &v27;
      v28 = *(_DWORD *)(a1 + 172);
      v87 = &v28;
      v89 = &v40;
      v78 = 4LL;
      v80 = 1LL;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v40 = 0x1000000LL;
      v90 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)&word_14004DFC6,
        (const GUID *)ActivityIdThread,
        0LL,
        0x1Au,
        v42);
    }
  }
  else if ( (unsigned int)dword_140E08218 > 5 && tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL) )
  {
    v40 = *a2;
    v43 = &v40;
    v28 = *(_DWORD *)(v4 + 4);
    v45 = &v28;
    v27 = a2[3];
    v47 = &v27;
    v26 = a2[4];
    v49 = &v26;
    v25 = *(_DWORD *)(v4 + 8);
    v51 = &v25;
    v24 = v9;
    v53 = &v24;
    v23 = *a3;
    v55 = &v23;
    v39 = *(_QWORD *)(a1 + 240);
    v57 = &v39;
    v22 = *(_DWORD *)(v4 + 12);
    v59 = (__int64 *)&v22;
    v21 = *(_DWORD *)(v4 + 16);
    v61 = &v21;
    v20 = *(_DWORD *)(a1 + 96);
    v63 = &v20;
    v65 = &v38;
    v44 = 8LL;
    v46 = 4LL;
    v48 = 4LL;
    v50 = 4LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 8LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 4LL;
    v38 = 0x1000000LL;
    v66 = 8LL;
    v16 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&byte_14004E2B7,
      (const GUID *)v16,
      0LL,
      0xEu,
      v42);
  }
  return v9;
}
