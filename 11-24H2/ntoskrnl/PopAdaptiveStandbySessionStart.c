/*
 * XREFs of PopAdaptiveStandbySessionStart @ 0x140762088
 * Callers:
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 *     PopAdaptiveStandbyNotifyShellPhaseState @ 0x140761CA4 (PopAdaptiveStandbyNotifyShellPhaseState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140426AF0 (_tlgKeywordOn.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline @ 0x1405D787C (Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline.c)
 *     PopAdaptiveStandbyQueryReserveConfiguration @ 0x1405DB334 (PopAdaptiveStandbyQueryReserveConfiguration.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PopAdaptiveStandbyCalculateBatteryRegion @ 0x1407604C0 (PopAdaptiveStandbyCalculateBatteryRegion.c)
 *     PopAdaptiveStandbyHandleBatteryUpdate @ 0x140761118 (PopAdaptiveStandbyHandleBatteryUpdate.c)
 */

NTSTATUS __fastcall PopAdaptiveStandbySessionStart(__int64 a1, int a2)
{
  unsigned __int64 v4; // rdi
  __int128 v5; // xmm0
  int v6; // eax
  int v7; // ecx
  char v8; // al
  struct _LIST_ENTRY *ActivityIdThread; // rax
  NTSTATUS result; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // r9d
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 *v24; // [rsp+88h] [rbp-80h]
  int v25; // [rsp+90h] [rbp-78h]
  int v26; // [rsp+94h] [rbp-74h]
  int *v27; // [rsp+98h] [rbp-70h]
  int v28; // [rsp+A0h] [rbp-68h]
  int v29; // [rsp+A4h] [rbp-64h]
  __int64 *v30; // [rsp+A8h] [rbp-60h]
  int v31; // [rsp+B0h] [rbp-58h]
  int v32; // [rsp+B4h] [rbp-54h]
  int *v33; // [rsp+B8h] [rbp-50h]
  int v34; // [rsp+C0h] [rbp-48h]
  int v35; // [rsp+C4h] [rbp-44h]
  int *v36; // [rsp+C8h] [rbp-40h]
  int v37; // [rsp+D0h] [rbp-38h]
  int v38; // [rsp+D4h] [rbp-34h]
  int *v39; // [rsp+D8h] [rbp-30h]
  int v40; // [rsp+E0h] [rbp-28h]
  int v41; // [rsp+E4h] [rbp-24h]
  int *v42; // [rsp+E8h] [rbp-20h]
  int v43; // [rsp+F0h] [rbp-18h]
  int v44; // [rsp+F4h] [rbp-14h]
  int *v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  __int64 *v48; // [rsp+108h] [rbp+0h]
  int v49; // [rsp+110h] [rbp+8h]
  int v50; // [rsp+114h] [rbp+Ch]

  v4 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  *(_QWORD *)(a1 + 184) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v5 = *(_OWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 192) = MEMORY[0xFFFFF78000000014];
  v6 = *(_DWORD *)(a1 + 152);
  *(_OWORD *)(a1 + 156) = v5;
  *(_DWORD *)(a1 + 172) = v6;
  if ( (unsigned int)Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline() )
  {
    *(_DWORD *)(a1 + 200) = PopAdaptiveStandbyCalculateBatteryRegion(*(_DWORD *)(a1 + 152));
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a1 + 184);
    *(_DWORD *)(a1 + 216) = v7;
  }
  if ( (unsigned int)dword_140E08258 > 5 && tlgKeywordOn((__int64)&dword_140E08258, 0x400000000000LL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v44 = 0;
    v47 = 0;
    v50 = 0;
    v24 = &v20;
    v27 = &v15;
    v21 = *(_QWORD *)(a1 + 224);
    v30 = &v21;
    v8 = *(_BYTE *)(a1 + 156) & 1;
    v20 = v4;
    LOBYTE(v14) = v8;
    v33 = &v14;
    v16 = *(_DWORD *)(a1 + 160);
    v36 = &v16;
    v17 = *(_DWORD *)(a1 + 164);
    v39 = &v17;
    v18 = *(_DWORD *)(a1 + 168);
    v42 = &v18;
    v19 = *(_DWORD *)(a1 + 172);
    v45 = &v19;
    v48 = &v22;
    v25 = 8;
    v15 = a2;
    v28 = 4;
    v31 = 8;
    v34 = 1;
    v37 = 4;
    v40 = 4;
    v43 = 4;
    v46 = 4;
    v22 = 0x1000000LL;
    v49 = 8;
    ActivityIdThread = IoGetActivityIdThread();
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E08258,
      (unsigned __int8 *)byte_14004D5F3,
      (const GUID *)ActivityIdThread,
      0LL,
      0xBu,
      &v23);
  }
  result = Feature_AdaptiveHibernateEnhancements__private_IsEnabledDeviceUsageNoInline();
  if ( !result )
    return PopAdaptiveStandbyQueryReserveConfiguration(a1, v11, v12, v13);
  if ( *(_BYTE *)a1 )
    return PopAdaptiveStandbyHandleBatteryUpdate(a1, 0LL);
  return result;
}
