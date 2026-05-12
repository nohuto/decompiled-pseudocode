/*
 * XREFs of RaidAdapterSetMaxOperationalPower @ 0x140077AE8
 * Callers:
 *     RaidPowerSettingCallback @ 0x140044FA0 (RaidPowerSettingCallback.c)
 *     RaidAdapterPowerCapIoctl @ 0x14005CAB0 (RaidAdapterPowerCapIoctl.c)
 *     RaidAdapterPassiveCoolingCallback @ 0x140077860 (RaidAdapterPassiveCoolingCallback.c)
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     RaCallMiniportAdapterControl @ 0x140027690 (RaCallMiniportAdapterControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     RaidAdapterEffectiveMaxOperationalPower @ 0x14007782C (RaidAdapterEffectiveMaxOperationalPower.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterSetMaxOperationalPower(__int64 a1, unsigned __int64 *a2, char a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 v6; // rbx
  __int64 v9; // r12
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  int v16; // r12d
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  int v33; // [rsp+80h] [rbp-80h]
  int v34; // [rsp+84h] [rbp-7Ch]
  unsigned __int64 v35; // [rsp+88h] [rbp-78h]
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  int *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int64 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  __int64 *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  unsigned int *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v55; // [rsp+140h] [rbp+40h]
  __int64 v56; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 *v59; // [rsp+160h] [rbp+60h]
  __int64 v60; // [rsp+168h] [rbp+68h]

  v4 = *(_QWORD **)(a1 + 4960);
  v6 = *a2;
  v23 = a4;
  if ( a4 > 2 )
    return 3221225485LL;
  v9 = a1 + 376;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 14) )
    return 3221225659LL;
  if ( !v4 )
    return 3221225659LL;
  v10 = v4[4];
  if ( !v10 )
    return 3221225659LL;
  v11 = 100LL;
  if ( a3 )
  {
    if ( *a2 <= 0x64 )
    {
      v12 = v4[5];
      if ( v10 > v12 )
      {
        v6 = v12 + (v10 - v12) * v6 / 0x64;
        goto LABEL_11;
      }
      if ( *a2 >= 0x64 )
      {
        v6 = v4[4];
        goto LABEL_11;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
LABEL_11:
  v25 = v4[(int)v23 + 6];
  v13 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v4[v14 + 6] = v6;
  v26 = v13;
  v33 = 1;
  v34 = 16;
  v27 = RaidAdapterEffectiveMaxOperationalPower((__int64)v4);
  v35 = v27;
  v16 = RaCallMiniportAdapterControl(v9);
  if ( v16 >= 0 )
  {
    if ( a3 )
    {
      v15 = v4[4];
      v17 = v4[5];
      if ( v15 > v17 && v35 >= v17 && v35 <= v15 )
      {
        v15 -= v17;
        v11 = 100 * (v35 - v17) / v15;
      }
      *a2 = v11;
    }
    else
    {
      *a2 = v35;
    }
  }
  if ( (unsigned int)dword_140170178 > 5 )
  {
    if ( tlgKeywordOn(v15, 0x400000000000LL) )
    {
      v38 = 16LL;
      v37 = a1 + 5064;
      v24 = *(_DWORD *)(a1 + 56);
      v39 = &v24;
      v22 = v23;
      v41 = &v22;
      v43 = &v25;
      v45 = &v28;
      v29 = v4[6];
      v47 = &v29;
      v30 = v4[7];
      v49 = &v30;
      v31 = v4[8];
      v51 = &v31;
      v53 = &v23;
      v55 = &v26;
      v57 = &v27;
      v59 = &v32;
      v40 = 4LL;
      v42 = 1LL;
      v44 = 8LL;
      v28 = v6;
      v46 = 8LL;
      v48 = 8LL;
      v50 = 8LL;
      v52 = 8LL;
      v23 = v16;
      v54 = 4LL;
      v56 = 8LL;
      v58 = 8LL;
      v32 = v20;
      v60 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer(v18, (unsigned __int8 *)dword_14015E268, v19, v20, 0xEu, &v36);
    }
  }
  return (unsigned int)v16;
}
