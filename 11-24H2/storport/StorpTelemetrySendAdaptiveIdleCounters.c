/*
 * XREFs of StorpTelemetrySendAdaptiveIdleCounters @ 0x1400BA4EC
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x14003C190 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x14001DA00 (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitGetMinimumPowerCyclePeriod @ 0x140033870 (RaidUnitGetMinimumPowerCyclePeriod.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140035110 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14003D27C (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetrySendAdaptiveIdleCounters(__int64 a1)
{
  signed __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // r10d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  char v9; // [rsp+30h] [rbp-D0h] BYREF
  char v10; // [rsp+31h] [rbp-CFh] BYREF
  char v11; // [rsp+32h] [rbp-CEh] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+44h] [rbp-BCh] BYREF
  int v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+80h] [rbp-80h]
  __int64 v22; // [rsp+88h] [rbp-78h]
  __int64 v23; // [rsp+90h] [rbp-70h]
  __int64 v24; // [rsp+98h] [rbp-68h]
  int *v25; // [rsp+A0h] [rbp-60h]
  __int64 v26; // [rsp+A8h] [rbp-58h]
  char *v27; // [rsp+B0h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-48h]
  char *v29; // [rsp+C0h] [rbp-40h]
  __int64 v30; // [rsp+C8h] [rbp-38h]
  char *v31; // [rsp+D0h] [rbp-30h]
  __int64 v32; // [rsp+D8h] [rbp-28h]
  int *v33; // [rsp+E0h] [rbp-20h]
  __int64 v34; // [rsp+E8h] [rbp-18h]
  int *v35; // [rsp+F0h] [rbp-10h]
  __int64 v36; // [rsp+F8h] [rbp-8h]
  int *v37; // [rsp+100h] [rbp+0h]
  __int64 v38; // [rsp+108h] [rbp+8h]
  int *v39; // [rsp+110h] [rbp+10h]
  __int64 v40; // [rsp+118h] [rbp+18h]
  int *v41; // [rsp+120h] [rbp+20h]
  __int64 v42; // [rsp+128h] [rbp+28h]
  __int64 *v43; // [rsp+130h] [rbp+30h]
  __int64 v44; // [rsp+138h] [rbp+38h]
  __int64 *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]

  if ( RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1872) + 32LL) & 0x100) != 0 )
    {
      RaidUnitGetMinimumPowerCyclePeriod(a1);
      v2 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 3360);
      if ( v2 > 0 )
        v2 = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
      if ( (unsigned int)dword_140170178 > 5 )
      {
        if ( tlgKeywordOn(v2, 0x400000000000LL) )
        {
          v6 = *(_QWORD *)(a1 + 1872);
          v7 = *(_QWORD *)(a1 + 24);
          v22 = 16LL;
          v24 = 16LL;
          v21 = v7 + 5064;
          v23 = a1 + 2104;
          v12 = *(_DWORD *)(v7 + 56);
          v25 = &v12;
          v9 = *(_BYTE *)(a1 + 104);
          v27 = &v9;
          v10 = *(_BYTE *)(a1 + 105);
          v29 = &v10;
          v11 = *(_BYTE *)(a1 + 106);
          v31 = &v11;
          v26 = 4LL;
          v28 = 1LL;
          v30 = 1LL;
          v32 = 1LL;
          v8 = *(unsigned int *)(*(_QWORD *)(v6 + 8) + 12LL);
          v33 = &v13;
          v13 = v8;
          v34 = 4LL;
          v14 = *(_DWORD *)(v6 + 24);
          v35 = &v14;
          v15 = *(_DWORD *)(a1 + 3352);
          v37 = &v15;
          v39 = &v16;
          v41 = &v17;
          v36 = 4LL;
          v38 = 4LL;
          v16 = v5;
          v40 = 4LL;
          v17 = v4;
          v42 = 4LL;
          v18 = *(_QWORD *)(v6 + 56);
          v43 = &v18;
          v44 = 8LL;
          v19 = *(_QWORD *)(v6 + 48);
          v45 = &v19;
          v46 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(v8, (unsigned __int8 *)dword_140160000, v3, v4, 0xFu, &v20);
        }
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 56LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)(a1 + 1872) + 48LL) = 0LL;
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
  }
}
