/*
 * XREFs of PopAdaptiveStandbySessionStart @ 0x140761630
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761068 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D4DFC (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x14075F4C0 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140760484 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x14076146C (PopAdaptiveStandbyQueryReserveConfiguration.c)
 */

char __fastcall PopAdaptiveStandbySessionStart(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int128 v5; // xmm0
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rcx
  char v15; // al
  struct _LIST_ENTRY *ActivityIdThread; // r8
  char v17; // al
  struct _LIST_ENTRY *v18; // r8
  _BYTE v20[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+3Ch] [rbp-C4h] BYREF
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v31; // [rsp+90h] [rbp-70h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  int *v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 *v35; // [rsp+B0h] [rbp-50h]
  __int64 v36; // [rsp+B8h] [rbp-48h]
  __int64 *v37; // [rsp+C0h] [rbp-40h]
  __int64 v38; // [rsp+C8h] [rbp-38h]
  int *v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  int *v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  int *v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  __int64 *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  __int64 *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]

  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  *(_QWORD *)(a1 + 200) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v5 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 208) = MEMORY[0xFFFFF78000000014];
  v6 = *(_DWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 176) = v5;
  *(_DWORD *)(a1 + 192) = v6;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(a1 + 216) = PopAdaptiveStandbyCalculateBatteryRegion(*(_DWORD *)(a1 + 152));
    v10 = *(_QWORD *)(a1 + 200);
    *(_QWORD *)(a1 + 224) = v10;
    *(_DWORD *)(a1 + 232) = v11;
    if ( *(_BYTE *)a1 )
      LOBYTE(v10) = PopAdaptiveStandbyHandleBatteryUpdate(a1, 0LL);
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL);
      if ( (_BYTE)v10 )
      {
        v12 = *(_QWORD *)(a1 + 240);
        v13 = *(_DWORD *)(a1 + 248) == 2;
        v31 = (__int64 *)&v29;
        v33 = &v21;
        v35 = &v26;
        v14 = v12 - 1;
        v29 = v4;
        v37 = &v27;
        if ( !v13 )
          v14 = v12;
        v15 = *(_BYTE *)(a1 + 176) & 1;
        v32 = 8LL;
        v20[0] = v15;
        v39 = (int *)v20;
        v22 = *(_DWORD *)(a1 + 180);
        v41 = &v22;
        v23 = *(_DWORD *)(a1 + 184);
        v43 = &v23;
        v24 = *(_DWORD *)(a1 + 188);
        v45 = &v24;
        v25 = *(_DWORD *)(a1 + 192);
        v47 = (__int64 *)&v25;
        v49 = &v28;
        v21 = a2;
        v34 = 4LL;
        v26 = v12;
        v36 = 8LL;
        v27 = v14;
        v38 = 8LL;
        v40 = 1LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v48 = 4LL;
        v28 = 0x1000000LL;
        v50 = 8LL;
        ActivityIdThread = IoGetActivityIdThread();
        LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08218,
                        (unsigned __int8 *)byte_14004EE63,
                        (const GUID *)ActivityIdThread,
                        0LL,
                        0xCu,
                        v30);
      }
    }
  }
  else
  {
    LOBYTE(v10) = PopAdaptiveStandbyQueryReserveConfiguration(a1, v7, v8, v9);
    if ( (unsigned int)dword_140E08218 > 5 )
    {
      LOBYTE(v10) = tlgKeywordOn((__int64)&dword_140E08218, 0x400000000000LL);
      if ( (_BYTE)v10 )
      {
        v28 = v4;
        v31 = &v28;
        v33 = &v25;
        v27 = *(_QWORD *)(a1 + 240);
        v35 = &v27;
        v17 = *(_BYTE *)(a1 + 176) & 1;
        v32 = 8LL;
        v20[0] = v17;
        v37 = (__int64 *)v20;
        v24 = *(_DWORD *)(a1 + 180);
        v39 = &v24;
        v23 = *(_DWORD *)(a1 + 184);
        v41 = &v23;
        v22 = *(_DWORD *)(a1 + 188);
        v43 = &v22;
        v21 = *(_DWORD *)(a1 + 192);
        v45 = &v21;
        v47 = &v26;
        v25 = a2;
        v34 = 4LL;
        v36 = 8LL;
        v38 = 1LL;
        v40 = 4LL;
        v42 = 4LL;
        v44 = 4LL;
        v46 = 4LL;
        v26 = 0x1000000LL;
        v48 = 8LL;
        v18 = IoGetActivityIdThread();
        LOBYTE(v10) = tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140E08218,
                        (unsigned __int8 *)byte_14004EC4B,
                        (const GUID *)v18,
                        0LL,
                        0xBu,
                        v30);
      }
    }
  }
  return v10;
}
