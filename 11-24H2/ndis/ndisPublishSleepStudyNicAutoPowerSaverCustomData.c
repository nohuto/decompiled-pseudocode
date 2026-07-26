/*
 * XREFs of ndisPublishSleepStudyNicAutoPowerSaverCustomData @ 0x140163740
 * Callers:
 *     ?ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z @ 0x140168D40 (-ndisPublishSleepStudyNicAutoPowerSaverStats@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_KPEBU_GUID@@@Z.c)
 * Callees:
 *     ?ComputeRoundedAverage@@YA_K_K0@Z @ 0x14006C6E0 (-ComputeRoundedAverage@@YA_K_K0@Z.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x140163990 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

void __fastcall ndisPublishSleepStudyNicAutoPowerSaverCustomData(
        __int64 a1,
        unsigned __int64 a2,
        const struct _GUID *a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned __int64 a8)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v12; // r12
  unsigned __int128 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx

  v8 = 0LL;
  v12 = 0LL;
  v13 = (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(a1 + 4456) + 816LL) + 5000LL)
      * (unsigned __int128)0x346DC5D63886594BuLL;
  v14 = 100 * a6;
  v15 = *((_QWORD *)&v13 + 1) >> 11;
  if ( a4 )
    v8 = ComputeRoundedAverage(v14, a4);
  if ( v15 )
    v12 = ComputeRoundedAverage(v14, v15);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Count", a7);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Time in CS (ms)", a4);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Idle Time (ms)", a6);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: % of CS in Idle Dx", v8);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Total Nic Active + NonResiliency Time (ms)", v15);
  ndisPublishSleepStudyCustomData(
    a2,
    a3,
    L"Nic Auto Power Saver: % of (Nic Active + NonResiliency) Time in Idle Dx",
    v12);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Last Resume Latency (ms)", a5);
  ndisPublishSleepStudyCustomData(a2, a3, L"Nic Auto Power Saver: Avg Resume Latency (ms)", a8);
}
