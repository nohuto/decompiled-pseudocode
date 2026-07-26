/*
 * XREFs of ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140065EE0
 * Callers:
 *     ndisWnfPdcCallback @ 0x14007D060 (ndisWnfPdcCallback.c)
 * Callees:
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x140017620 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x140065B40 (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 *     ?ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1400665A0 (-ndisAoAcWriteRefcountRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140066680 (-ndisNicAutoPowerSaverResetTelemetryData@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x140066740 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140066770 (-ndisTraceNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@5@Z @ 0x140066CC0 (-NdisTraceLoggingCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_AOAC@@_KPEAU_NDI.c)
 *     McTemplateK0qxxq_EtwWriteTransfer @ 0x140097590 (McTemplateK0qxxq_EtwWriteTransfer.c)
 *     ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140098DD0 (-NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     McTemplateK0ujjpx_EtwWriteTransfer @ 0x14009B4B0 (McTemplateK0ujjpx_EtwWriteTransfer.c)
 *     McTemplateK0ujqzr2jxxx_EtwWriteTransfer @ 0x14009B564 (McTemplateK0ujqzr2jxxx_EtwWriteTransfer.c)
 *     McTemplateK0xqx_EtwWriteTransfer @ 0x14009B6D0 (McTemplateK0xqx_EtwWriteTransfer.c)
 *     ?ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1400CB880 (-ndisWdfCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x14016EF40 (-ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x14016F030 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 *     ?ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS@@PEAU_NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX@@@Z @ 0x140173850 (-ndisPublishSleepStudyCustomDataCsSpuriousWakeStats@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_SPURI.c)
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x140175C00 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 */

void __fastcall ndisCsStateChange(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned __int8 v1; // si
  struct _NDIS_MINIPORT_BLOCK *v2; // r13
  unsigned int v3; // ebx
  struct _NDIS_MINIPORT_AOAC *AoAc; // rdi
  unsigned int Flags; // eax
  KIRQL v6; // r14
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // cc
  __int64 v12; // rax
  int v13; // eax
  unsigned __int64 *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int128 v19; // xmm1
  unsigned int v20; // r14d
  unsigned int v21; // r15d
  unsigned int v22; // r12d
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int128 v24; // xmm0
  int v25; // eax
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm0
  GUID v33; // xmm0
  struct _NDIS_MINIPORT_BLOCK *v34; // r15
  unsigned __int64 v35; // rcx
  wchar_t *v36; // r13
  int v37; // edx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *Value; // [rsp+20h] [rbp-E0h]
  KIRQL v42; // [rsp+60h] [rbp-A0h]
  int v43; // [rsp+64h] [rbp-9Ch]
  unsigned int v44; // [rsp+6Ch] [rbp-94h]
  unsigned __int64 v45; // [rsp+78h] [rbp-88h]
  __int128 v47; // [rsp+88h] [rbp-78h] BYREF
  __int128 v48; // [rsp+98h] [rbp-68h]
  __int128 v49; // [rsp+A8h] [rbp-58h]
  __int128 v50; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v51; // [rsp+C8h] [rbp-38h]
  __int128 v52; // [rsp+D8h] [rbp-28h]
  struct _GUID v53; // [rsp+E8h] [rbp-18h] BYREF
  GUID v54; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v55; // [rsp+108h] [rbp+8h] BYREF
  int v56; // [rsp+118h] [rbp+18h]
  __int128 v57; // [rsp+120h] [rbp+20h] BYREF
  __int128 v58; // [rsp+130h] [rbp+30h]
  __int128 v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+150h] [rbp+50h]
  int v61; // [rsp+158h] [rbp+58h]

  v1 = ndisConnectedStandby;
  v2 = a1;
  *(_QWORD *)v53.Data4 = 0LL;
  v3 = 0;
  v60 = 0LL;
  v61 = 0;
  AoAc = a1->AoAc;
  v56 = 0;
  Flags = a1->Flags;
  v45 = ndisLastCsScenarioInstanceId;
  *(_QWORD *)&v53.Data1 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v55 = 0LL;
  if ( (Flags & 0x80u) == 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    v42 = v6;
    ndisAoAcWriteRefcountRundown(v2, AoAc);
    if ( v1 )
    {
      ndisTraceNicAutoPowerSaver(v2, 1u);
      v7 = (_DWORD *)((char *)AoAc + 468);
      v8 = 0LL;
      v9 = 17LL;
      v10 = MEMORY[0xFFFFF78000000008];
      do
      {
        *(_QWORD *)((char *)AoAc + v8 + 536) = 0LL;
        v8 += 16LL;
        v11 = *v7++ <= 0;
        v12 = 0LL;
        if ( !v11 )
          v12 = v10;
        *(_QWORD *)((char *)AoAc + v8 + 528) = v12;
        --v9;
      }
      while ( v9 );
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
      v13 = *((_DWORD *)AoAc + 94);
      if ( (v13 & 0xFFFFFFFC) == 0 && v13 != 2 )
        *((_QWORD *)AoAc + 104) = v10;
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v6);
      ndisUpdateMiniportCsTrafficStatistics(v2, 0);
    }
    else
    {
      v14 = (unsigned __int64 *)((char *)AoAc + 544);
      v15 = 17LL;
      do
      {
        if ( *v14 )
          ndisCloseTimeInterval(v14, v14 - 1);
        v14 += 2;
        --v15;
      }
      while ( v15 );
      ndisCloseTimeInterval((unsigned __int64 *)AoAc + 105, (unsigned __int64 *)AoAc + 103);
      ndisCloseTimeInterval((unsigned __int64 *)AoAc + 104, (unsigned __int64 *)AoAc + 102);
      if ( (byte_140125103 & 4) != 0 )
      {
        Value = (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)v2->NetLuid.Value;
        McTemplateK0qxxq_EtwWriteTransfer(v17, *v16 / 0x989680uLL, &v2->InterfaceGuid, v2->IfIndex);
      }
      v18 = *((_DWORD *)AoAc + 264);
      v19 = *(_OWORD *)((char *)AoAc + 920);
      v20 = *((_DWORD *)AoAc + 212);
      v21 = *((_DWORD *)AoAc + 213);
      v22 = *((_DWORD *)AoAc + 202);
      PhysicalDeviceObject = v2->PhysicalDeviceObject;
      v50 = *(_OWORD *)((char *)AoAc + 904);
      v61 = v18;
      v24 = *(_OWORD *)((char *)AoAc + 936);
      v25 = *((_DWORD *)AoAc + 269);
      v51 = v19;
      v26 = *(_OWORD *)((char *)AoAc + 952);
      v44 = v21;
      v52 = v24;
      v56 = v25;
      v27 = *(_OWORD *)((char *)AoAc + 968);
      v47 = v26;
      v28 = *(_OWORD *)((char *)AoAc + 984);
      v48 = v27;
      v29 = *(_OWORD *)((char *)AoAc + 1000);
      v49 = v28;
      v30 = *(_OWORD *)((char *)AoAc + 1016);
      v57 = v29;
      v31 = *(_OWORD *)((char *)AoAc + 1032);
      v58 = v30;
      *(_QWORD *)&v30 = *((_QWORD *)AoAc + 131);
      v59 = v31;
      v32 = *(_OWORD *)((char *)AoAc + 1060);
      *(_QWORD *)&v53.Data1 = PhysicalDeviceObject;
      v60 = v30;
      v55 = v32;
      if ( *((_QWORD *)AoAc + 103) )
      {
        v54 = 0LL;
        if ( (byte_140125105 & 0x10) != 0 )
          McTemplateK0ujjpx_EtwWriteTransfer(
            (_DWORD)PhysicalDeviceObject,
            (_DWORD)v16,
            (_DWORD)v2 + 4008,
            (unsigned __int8)v45,
            (_DWORD)Value,
            (__int64)&v2->InterfaceGuid,
            (char)PhysicalDeviceObject,
            v45);
        v33 = GUID_CS_BLOCKER_GEN;
        v34 = v2;
        do
        {
          v35 = *((_QWORD *)AoAc + 2 * v3 + 67);
          if ( v35 )
          {
            v54 = v33;
            v54.Data4[0] = v3;
            v36 = (&off_1400FD1D0)[2 * (int)v3];
            v37 = *((_DWORD *)&off_1400FD1D0 + 4 * (int)v3 + 2);
            v54.Data3 = v34->IfIndex;
            v38 = *((_QWORD *)AoAc + 103);
            v43 = v37;
            if ( v35 > v38 )
            {
              *((_QWORD *)AoAc + 2 * v3 + 67) = v38;
              v35 = v38;
            }
            if ( (byte_140125103 & 4) != 0 )
            {
              McTemplateK0xqx_EtwWriteTransfer(
                v35,
                v35 / 0x989680,
                (_DWORD)v34 + 4008,
                v34->NetLuid.Value,
                v3,
                v35 / 0x989680);
              v33 = GUID_CS_BLOCKER_GEN;
              v37 = v43;
            }
            if ( (Microsoft_Windows_SleepStudyEnableBits & 1) != 0 )
            {
              McTemplateK0ujqzr2jxxx_EtwWriteTransfer(
                v35,
                v37,
                (_DWORD)v34 + 4008,
                (unsigned __int8)v45,
                (__int64)&v53,
                v37,
                (__int64)v36,
                (__int64)&v54,
                *((_QWORD *)AoAc + 2 * v3 + 67),
                v45);
              v33 = GUID_CS_BLOCKER_GEN;
            }
          }
          ++v3;
        }
        while ( v3 < 0x11 );
        v21 = v44;
        v2 = a1;
      }
      ndisTraceNicAutoPowerSaver(v2, 0);
      NdisTraceLoggingPowerOnStatistics(v2);
      NdisTraceLoggingCsStateChange(
        v2,
        AoAc,
        v45,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v57,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v55,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v50,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v47);
      KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v42);
      ndisPublishSleepStudyCustomData(v45, &v53, L"Power Transitions", v22);
      ndisPublishSleepStudyCustomData(v45, &v53, L"Surprise Wakes", v20);
      ndisPublishSleepStudyCustomData(v45, &v53, L"Spurious Wakes", v21);
      ndisPublishSleepStudyCustomDataCsSpuriousWakeStats(
        v45,
        &v53,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS *)&v57,
        (struct _NDIS_MINIPORT_CS_SPURIOUS_WAKE_STATS_EX *)&v55);
      ndisPublishSleepStudyCustomDataCsTraffic(
        v45,
        &v53,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v50,
        (struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *)&v47);
      ndisPublishSleepStudyCustomData(v45, &v53, L"Last Wake IRP Latency (ms)", *((_QWORD *)AoAc + 138));
      ndisPublishSleepStudyCustomData(v45, &v53, L"Max Wake IRP Latency (ms)", *((_QWORD *)AoAc + 139));
      v39 = ComputeRoundedAverage(*((_QWORD *)AoAc + 140), *((unsigned int *)AoAc + 272));
      ndisPublishSleepStudyCustomData(v45, &v53, L"Avg Wake IRP Latency (ms)", v39);
      ndisPublishSleepStudyCustomData(v45, &v53, L"Last SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 142));
      ndisPublishSleepStudyCustomData(v45, &v53, L"Max SetPowerOid Latency (ms)", *((_QWORD *)AoAc + 143));
      v40 = ComputeRoundedAverage(*((_QWORD *)AoAc + 144), *((unsigned int *)AoAc + 282));
      ndisPublishSleepStudyCustomData(v45, &v53, L"Avg SetPowerOid Latency (ms)", v40);
      ndisPublishSleepStudyNicAutoPowerSaverStats(v2, v45, &v53);
    }
    ndisNicAutoPowerSaverResetTelemetryData(v2);
  }
  else
  {
    ndisWdfCsStateChange(a1, ndisConnectedStandby, ndisLastCsScenarioInstanceId);
  }
}
