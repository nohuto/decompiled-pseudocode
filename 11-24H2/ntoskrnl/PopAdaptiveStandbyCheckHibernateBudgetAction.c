/*
 * XREFs of PopAdaptiveStandbyCheckHibernateBudgetAction @ 0x14075F4EC
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeCancelTimer2 @ 0x1403AF520 (KeCancelTimer2.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetAction @ 0x14075FD6C (PopAdaptiveStandbyCheckRefreshableBudgetAction.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions @ 0x14075FE30 (PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions.c)
 *     PopAdaptiveStandbyCheckRefreshableBudgetActionV2 @ 0x14075FE84 (PopAdaptiveStandbyCheckRefreshableBudgetActionV2.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x140761C4C (PopAdaptiveStandbySetPolicyTimer.c)
 */

unsigned __int8 __fastcall PopAdaptiveStandbyCheckHibernateBudgetAction(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        _DWORD *a4)
{
  __int64 v5; // rsi
  unsigned __int8 v9; // r14
  __int64 v10; // rdx
  int v11; // r12d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rcx
  char v17; // al
  char v18; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  struct _LIST_ENTRY *v20; // r8
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23; // [rsp+31h] [rbp-CFh] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  int v25; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v30; // [rsp+4Ch] [rbp-B4h] BYREF
  int v31; // [rsp+50h] [rbp-B0h] BYREF
  int v32; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v33; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-A4h] BYREF
  int v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+64h] [rbp-9Ch] BYREF
  int v37; // [rsp+68h] [rbp-98h] BYREF
  int v38; // [rsp+6Ch] [rbp-94h] BYREF
  int v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+74h] [rbp-8Ch] BYREF
  int v41; // [rsp+78h] [rbp-88h] BYREF
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+98h] [rbp-68h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  int *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  unsigned int *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  unsigned int *v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  int *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  int *v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  int *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int64 *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  __int64 *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  int *v67; // [rsp+160h] [rbp+60h]
  __int64 v68; // [rsp+168h] [rbp+68h]
  __int64 *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  int *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  __int64 *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  int *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  int *v77; // [rsp+1B0h] [rbp+B0h]
  __int64 v78; // [rsp+1B8h] [rbp+B8h]
  char *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  int *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  int *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  int *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  int *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  char *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  int *v91; // [rsp+220h] [rbp+120h]
  __int64 v92; // [rsp+228h] [rbp+128h]
  unsigned int *v93; // [rsp+230h] [rbp+130h]
  __int64 v94; // [rsp+238h] [rbp+138h]
  unsigned int *v95; // [rsp+240h] [rbp+140h]
  __int64 v96; // [rsp+248h] [rbp+148h]
  int *v97; // [rsp+250h] [rbp+150h]
  __int64 v98; // [rsp+258h] [rbp+158h]
  __int64 *v99; // [rsp+260h] [rbp+160h]
  __int64 v100; // [rsp+268h] [rbp+168h]

  v5 = a1 + 4;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_OWORD *)(v5 + 20) = *(__int128 *)((char *)&PopAdaptiveStandbyRegions + 20 * *(int *)(a1 + 216) + 4);
    PopAdaptiveStandbySetPolicyTimer(a1, *a2, *(unsigned int *)(v5 + 20));
    if ( (unsigned __int8)PopAdaptiveStandbyCheckRefreshableBudgetActionPreconditions(a1, v5, a2, a3) )
    {
      if ( (int)a2[3] <= 10 )
      {
        v10 = *a2;
        if ( (unsigned int)v10 >= 0x708 )
        {
          v9 = 1;
          *(_BYTE *)v5 = 1;
          *a3 = 0;
          *a4 = 4;
          v11 = 1;
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
    if ( v9 && *(_BYTE *)(a1 + 324) )
    {
      *(_BYTE *)(a1 + 324) = 0;
      KeCancelTimer2(a1 + 336, 0LL, v12, v13);
    }
    if ( (unsigned int)dword_140E08218 > 5 && tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL) )
    {
      v14 = *(_QWORD *)(a1 + 240);
      v15 = *(_DWORD *)(a1 + 248) == 2;
      v46 = *a2;
      v49 = &v46;
      v16 = v14 - 1;
      v32 = *(_DWORD *)(v5 + 20);
      if ( !v15 )
        v16 = v14;
      v43 = v16;
      v51 = &v32;
      v33 = a2[3];
      v53 = &v33;
      v34 = a2[4];
      v55 = &v34;
      v35 = *(_DWORD *)(v5 + 24);
      v57 = &v35;
      v36 = v9;
      v59 = &v36;
      v37 = *a3;
      v61 = &v37;
      v63 = &v47;
      v65 = &v43;
      v38 = *(_DWORD *)(v5 + 28);
      v67 = &v38;
      v39 = *(_DWORD *)(v5 + 32);
      v69 = (__int64 *)&v39;
      v40 = *(_DWORD *)(a1 + 216);
      v71 = &v40;
      v44 = a2[1];
      v73 = &v44;
      v75 = &v41;
      v42 = *(_DWORD *)(a1 + 236);
      v77 = &v42;
      v17 = *(_BYTE *)(a1 + 136) & 1;
      v50 = 8LL;
      v22 = v17;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      v62 = 4LL;
      v47 = v14;
      v64 = 8LL;
      v66 = 8LL;
      v68 = 4LL;
      v70 = 4LL;
      v72 = 4LL;
      v74 = 8LL;
      v41 = v11;
      v76 = 4LL;
      v78 = 4LL;
      v79 = &v22;
      v24 = *(_DWORD *)(a1 + 140);
      v81 = &v24;
      v25 = *(_DWORD *)(a1 + 144);
      v83 = &v25;
      v26 = *(_DWORD *)(a1 + 148);
      v85 = &v26;
      v27 = *(_DWORD *)(a1 + 152);
      v87 = &v27;
      v18 = *(_BYTE *)(a1 + 156) & 1;
      v80 = 1LL;
      v23 = v18;
      v89 = &v23;
      v28 = *(_DWORD *)(a1 + 160);
      v91 = &v28;
      v29 = *(_DWORD *)(a1 + 164);
      v93 = &v29;
      v30 = *(_DWORD *)(a1 + 168);
      v95 = &v30;
      v31 = *(_DWORD *)(a1 + 172);
      v97 = &v31;
      v99 = &v45;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 4LL;
      v90 = 1LL;
      v92 = 4LL;
      v94 = 4LL;
      v96 = 4LL;
      v98 = 4LL;
      v45 = 0x1000000LL;
      v100 = 8LL;
      ActivityIdThread = IoGetActivityIdThread();
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140E08218,
        (unsigned __int8 *)byte_14004E6F9,
        (const GUID *)ActivityIdThread,
        0LL,
        0x1Cu,
        v48);
    }
  }
  else if ( (unsigned int)dword_140E08218 > 5 && tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL) )
  {
    v45 = *a2;
    v49 = &v45;
    v31 = *(_DWORD *)(v5 + 4);
    v51 = &v31;
    v30 = a2[3];
    v53 = &v30;
    v29 = a2[4];
    v55 = &v29;
    v28 = *(_DWORD *)(v5 + 8);
    v57 = &v28;
    v27 = v9;
    v59 = &v27;
    v26 = *a3;
    v61 = &v26;
    v44 = *(_QWORD *)(a1 + 240);
    v63 = &v44;
    v25 = *(_DWORD *)(v5 + 12);
    v65 = (__int64 *)&v25;
    v24 = *(_DWORD *)(v5 + 16);
    v67 = &v24;
    v69 = &v43;
    v50 = 8LL;
    v52 = 4LL;
    v54 = 4LL;
    v56 = 4LL;
    v58 = 4LL;
    v60 = 4LL;
    v62 = 4LL;
    v64 = 8LL;
    v66 = 4LL;
    v68 = 4LL;
    v43 = 0x1000000LL;
    v70 = 8LL;
    v20 = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08218,
      (unsigned __int8 *)&byte_14004E5F7,
      (const GUID *)v20,
      0LL,
      0xDu,
      v48);
  }
  return v9;
}
