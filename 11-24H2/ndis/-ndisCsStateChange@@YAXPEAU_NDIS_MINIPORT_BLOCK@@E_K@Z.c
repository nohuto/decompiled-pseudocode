/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140075740
 * Callers:
 *     ndisWnfPdcCallback @ 0x140061C70 (ndisWnfPdcCallback.c)
 * Callees:
 *     McTemplateK0jqx_EtwWriteTransfer @ 0x1400378C0 (McTemplateK0jqx_EtwWriteTransfer.c)
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140039E00 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     McTemplateK0xq_EtwWriteTransfer @ 0x140054AB0 (McTemplateK0xq_EtwWriteTransfer.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140070AA0 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140073190 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x1400752D0 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x14008BDE0 (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008D530 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x14008F794 (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x14008F848 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     McTemplateK0xqq_EtwWriteTransfer @ 0x14008F930 (McTemplateK0xqq_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14008F9B4 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1401638A0 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x140163990 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x1401670D0 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x140168D40 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  unsigned __int64 v2; // r15
  unsigned __int8 v3; // r13
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  unsigned int v5; // edi
  unsigned int Flags; // eax
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  unsigned __int16 IfIndex; // ax
  int v11; // edx
  unsigned int v12; // r14d
  _DWORD *v13; // r12
  __int64 v14; // rcx
  int *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // eax
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int128 v24; // xmm1
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int128 v26; // xmm0
  int v27; // eax
  __int128 v28; // xmm1
  int v29; // eax
  __int128 v30; // xmm0
  int v31; // eax
  __int128 v32; // xmm1
  unsigned int v33; // eax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm0
  GUID v38; // xmm0
  wchar_t **v39; // rdx
  unsigned __int64 v40; // rcx
  wchar_t *v41; // r12
  int v42; // r13d
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r9
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // r9
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *Value; // [rsp+20h] [rbp-E0h]
  KIRQL v49; // [rsp+60h] [rbp-A0h]
  unsigned int v50; // [rsp+64h] [rbp-9Ch]
  unsigned int v51; // [rsp+68h] [rbp-98h]
  _DWORD v52[5]; // [rsp+6Ch] [rbp-94h] BYREF
  __int128 v53; // [rsp+80h] [rbp-80h]
  __int128 v54; // [rsp+90h] [rbp-70h]
  __int128 v55; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v56; // [rsp+B0h] [rbp-50h]
  __int128 v57; // [rsp+C0h] [rbp-40h]
  struct _GUID v58; // [rsp+D0h] [rbp-30h] BYREF
  GUID v59; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-10h] BYREF
  int v61; // [rsp+100h] [rbp+0h]
  __int128 v62; // [rsp+108h] [rbp+8h] BYREF
  __int128 v63; // [rsp+118h] [rbp+18h]
  __int128 v64; // [rsp+128h] [rbp+28h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  int v66; // [rsp+140h] [rbp+40h]
  _QWORD v67[2]; // [rsp+148h] [rbp+48h] BYREF

  v2 = ndisLastCsScenarioInstanceId;
  v3 = ndisConnectedStandby;
  AoAc = a1->AoAc;
  v5 = 0;
  *(_QWORD *)v58.Data4 = 0LL;
  v65 = 0LL;
  v66 = 0;
  v61 = 0;
  Flags = a1->Flags;
  *(_QWORD *)&v58.Data1 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  *(_OWORD *)&v52[1] = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v60 = 0LL;
  if ( (Flags & 0x80u) == 0 )
  {
    v49 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( (byte_14011B103 & 4) != 0 )
    {
      LODWORD(Value) = a1->IfIndex;
      McTemplateK0jqx_EtwWriteTransfer(
        (unsigned int)Value,
        (__int64)&NicActiveRefRundownBegin,
        (__int64)&a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        (__int64)Value,
        a1->NetLuid.Value);
    }
    v12 = 0;
    v13 = (_DWORD *)((char *)AoAc + 468);
    do
    {
      v14 = (unsigned int)*v13;
      if ( (int)v14 > 0 && (byte_14011B103 & 4) != 0 )
        McTemplateK0xqq_EtwWriteTransfer(v14, v11, (_DWORD)a1 + 4008, a1->NetLuid.Value, v12, *v13);
      ++v12;
      ++v13;
    }
    while ( v12 < 0x11 );
    if ( (byte_14011B103 & 4) != 0 )
    {
      LODWORD(Value) = *((_DWORD *)AoAc + 95);
      McTemplateK0xq_EtwWriteTransfer(v14, &NicActiveRefRundownEnd, &a1->InterfaceGuid, a1->NetLuid.Value);
    }
    if ( v3 )
    {
      ndisTraceNicAutoPowerSaver(a1, 1u);
      v15 = (int *)((char *)AoAc + 468);
      v16 = 0LL;
      v17 = 17LL;
      v18 = MEMORY[0xFFFFF78000000008];
      do
      {
        *(_QWORD *)((char *)AoAc + v16 + 536) = 0LL;
        v19 = v18;
        if ( *v15 <= 0 )
          v19 = 0LL;
        *(_QWORD *)((char *)AoAc + v16 + 544) = v19;
        ++v15;
        v16 += 16LL;
        --v17;
      }
      while ( v17 );
      *((_QWORD *)AoAc + 102) = 0LL;
      *((_DWORD *)AoAc + 202) = 0;
      *((_QWORD *)AoAc + 106) = 0LL;
      *((_QWORD *)AoAc + 103) = 0LL;
      *((_QWORD *)AoAc + 104) = 0LL;
      *((_QWORD *)AoAc + 105) = 0LL;
      *((_DWORD *)AoAc + 272) = 0;
      *((_QWORD *)AoAc + 137) = 0LL;
      *((_QWORD *)AoAc + 138) = 0LL;
      *((_QWORD *)AoAc + 139) = 0LL;
      *((_QWORD *)AoAc + 140) = 0LL;
      *((_DWORD *)AoAc + 282) = 0;
      *((_QWORD *)AoAc + 142) = 0LL;
      *((_QWORD *)AoAc + 143) = 0LL;
      *((_QWORD *)AoAc + 144) = 0LL;
      *(_OWORD *)((char *)AoAc + 904) = 0LL;
      *(_OWORD *)((char *)AoAc + 920) = 0LL;
      *(_OWORD *)((char *)AoAc + 936) = 0LL;
      *(_OWORD *)((char *)AoAc + 952) = 0LL;
      *(_OWORD *)((char *)AoAc + 968) = 0LL;
      *(_OWORD *)((char *)AoAc + 984) = 0LL;
      *(_OWORD *)((char *)AoAc + 1000) = 0LL;
      *(_OWORD *)((char *)AoAc + 1016) = 0LL;
      *(_OWORD *)((char *)AoAc + 1032) = 0LL;
      *((_QWORD *)AoAc + 131) = 0LL;
      *((_DWORD *)AoAc + 264) = 0;
      *(_OWORD *)((char *)AoAc + 1060) = 0LL;
      *((_DWORD *)AoAc + 269) = 0;
      v20 = *((_DWORD *)AoAc + 94);
      if ( (v20 & 0xFFFFFFFC) == 0 && v20 != 2 )
        *((_QWORD *)AoAc + 104) = v18;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v49);
      ndisUpdateMiniportCsTrafficStatistics(a1, 0);
    }
    else
    {
      v21 = (_QWORD *)((char *)AoAc + 544);
      v22 = 17LL;
      do
      {
        if ( *v21 )
        {
          *(v21 - 1) += MEMORY[0xFFFFF78000000008] - *v21;
          *v21 = 0LL;
        }
        v21 += 2;
        --v22;
      }
      while ( v22 );
      if ( *((_QWORD *)AoAc + 105) )
      {
        *((_QWORD *)AoAc + 103) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 105);
        *((_QWORD *)AoAc + 105) = 0LL;
      }
      if ( *((_QWORD *)AoAc + 104) )
      {
        *((_QWORD *)AoAc + 102) += MEMORY[0xFFFFF78000000008] - *((_QWORD *)AoAc + 104);
        *((_QWORD *)AoAc + 104) = 0LL;
      }
      if ( (byte_14011B103 & 4) != 0 )
      {
        Value = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)a1->NetLuid.Value;
        McTemplateK0qxxq_EtwWriteTransfer(
          0xD6BF94D5E57A42BDuLL,
          *((_QWORD *)AoAc + 102) / 0x989680uLL,
          &a1->InterfaceGuid,
          a1->IfIndex);
      }
      v23 = *((_DWORD *)AoAc + 212);
      v24 = *(_OWORD *)((char *)AoAc + 920);
      PhysicalDeviceObject = a1->PhysicalDeviceObject;
      v55 = *(_OWORD *)((char *)AoAc + 904);
      v51 = v23;
      v26 = *(_OWORD *)((char *)AoAc + 936);
      v27 = *((_DWORD *)AoAc + 213);
      v56 = v24;
      v52[0] = v27;
      v28 = *(_OWORD *)((char *)AoAc + 952);
      v29 = *((_DWORD *)AoAc + 264);
      v57 = v26;
      v66 = v29;
      v30 = *(_OWORD *)((char *)AoAc + 968);
      v31 = *((_DWORD *)AoAc + 269);
      *(_OWORD *)&v52[1] = v28;
      v61 = v31;
      v32 = *(_OWORD *)((char *)AoAc + 984);
      v33 = *((_DWORD *)AoAc + 202);
      v53 = v30;
      v50 = v33;
      v34 = *(_OWORD *)((char *)AoAc + 1000);
      v54 = v32;
      v35 = *(_OWORD *)((char *)AoAc + 1016);
      v62 = v34;
      v36 = *(_OWORD *)((char *)AoAc + 1032);
      v63 = v35;
      *(_QWORD *)&v35 = *((_QWORD *)AoAc + 131);
      v64 = v36;
      v37 = *(_OWORD *)((char *)AoAc + 1060);
      *(_QWORD *)&v58.Data1 = PhysicalDeviceObject;
      v65 = v35;
      v60 = v37;
      if ( *((_QWORD *)AoAc + 103) )
      {
        v59 = 0LL;
        if ( (byte_14011B105 & 0x10) != 0 )
          McTemplateK0ujjpx_EtwWriteTransfer(
            (_DWORD)PhysicalDeviceObject,
            v22,
            (_DWORD)a1 + 4008,
            (unsigned __int8)v2,
            (_DWORD)Value,
            (__int64)&a1->InterfaceGuid,
            (char)PhysicalDeviceObject,
            v2);
        v38 = GUID_CS_BLOCKER_GEN;
        v39 = &off_1400F4140;
        do
        {
          v40 = *((_QWORD *)AoAc + 2 * v5 + 67);
          if ( v40 )
          {
            v59 = v38;
            v59.Data4[0] = v5;
            v41 = (&off_1400F4140)[2 * (int)v5];
            v42 = *((_DWORD *)&off_1400F4140 + 4 * (int)v5 + 2);
            v59.Data3 = a1->IfIndex;
            v43 = *((_QWORD *)AoAc + 103);
            if ( v40 > v43 )
            {
              *((_QWORD *)AoAc + 2 * v5 + 67) = v43;
              v40 = v43;
            }
            if ( (byte_14011B103 & 4) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                v40,
                v40 / 0x989680,
                (_DWORD)a1 + 4008,
                a1->NetLuid.Value,
                v5,
                v40 / 0x989680);
              v38 = GUID_CS_BLOCKER_GEN;
            }
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            {
              McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                v40,
                (_DWORD)v39,
                (_DWORD)a1 + 4008,
                (unsigned __int8)v2,
                (__int64)&v58,
                v42,
                (__int64)v41,
                (__int64)&v59,
                *((_QWORD *)AoAc + 2 * v5 + 67),
                v2);
              v38 = GUID_CS_BLOCKER_GEN;
            }
          }
          ++v5;
          v39 = &off_1400F4140;
        }
        while ( v5 < 0x11 );
      }
      ndisTraceNicAutoPowerSaver(a1, 0);
      NdisTraceLoggingPowerOnStatistics(a1);
      NdisTraceLoggingCsStateChange(
        a1,
        AoAc,
        v2,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v62,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v60,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v55,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v52[1]);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v49);
      ndisPublishSleepStudyCustomData(v2, &v58, L"Power Transitions", v50);
      ndisPublishSleepStudyCustomData(v2, &v58, L"Surprise Wakes", v51);
      ndisPublishSleepStudyCustomData(v2, &v58, L"Spurious Wakes", v52[0]);
      ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        v2,
        &v58,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v62,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v60);
      ndisPublishSleepStudyCustomDataCsTraffic(
        v2,
        &v58,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v55,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v52[1]);
      ndisPublishSleepStudyCustomData(v2, &v58, L"Last Wake IRP Latency (ms)", *((_QWORD *)AoAc + 138));
      ndisPublishSleepStudyCustomData(v2, &v58, L"Max Wake IRP Latency (ms)", *((_QWORD *)AoAc + 139));
      v44 = *((unsigned int *)AoAc + 272);
      v45 = *((_QWORD *)AoAc + 140);
      if ( v44 > 1 )
        v45 = (v45 + ((unsigned __int64)(unsigned int)v44 >> 1)) / v44;
      ndisPublishSleepStudyCustomData(v2, &v58, L"Avg Wake IRP Latency (ms)", v45);
      ndisPublishSleepStudyCustomData(v2, &v58, L"Last SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 142));
      ndisPublishSleepStudyCustomData(v2, &v58, L"Max SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 143));
      v46 = *((unsigned int *)AoAc + 282);
      v47 = *((_QWORD *)AoAc + 144);
      if ( v46 > 1 )
        v47 = (v47 + ((unsigned __int64)(unsigned int)v46 >> 1)) / v46;
      ndisPublishSleepStudyCustomData(v2, &v58, L"Avg SetPowerOid Latency (ms)", v47);
      ndisPublishSleepStudyNicAutoPowerSaverStats(a1, v2, &v58);
    }
    ndisNicAutoPowerSaverResetTelemetryData(a1);
  }
  else
  {
    v8 = (KSPIN_LOCK *)a1->AoAc;
    v67[1] = 0LL;
    if ( ndisConnectedStandby )
    {
      v9 = KeAcquireSpinLockRaiseToDpc(v8);
      v8[103] = 0LL;
      KeReleaseSpinLock(v8, v9);
    }
    else
    {
      v67[0] = a1->PhysicalDeviceObject;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          a2,
          (_DWORD)a1 + 4008,
          (unsigned __int8)ndisLastCsScenarioInstanceId,
          (__int64)v67,
          (a1->pAdapterInstanceName->Length >> 1) + 1,
          (__int64)a1->pAdapterInstanceName->Buffer,
          (__int64)&a1->InterfaceGuid,
          128,
          ndisLastCsScenarioInstanceId);
      IfIndex = a1->IfIndex;
      v59 = GUID_CS_BLOCKER_GEN;
      v59.Data3 = IfIndex;
      v59.Data4[0] = 0;
      if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
        McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
          (_DWORD)a1,
          a2,
          (_DWORD)a1 + 4008,
          (unsigned __int8)v2,
          (__int64)&a1->InterfaceGuid,
          5,
          (__int64)L"NDIS",
          (__int64)&v59,
          128,
          v2);
    }
  }
}
