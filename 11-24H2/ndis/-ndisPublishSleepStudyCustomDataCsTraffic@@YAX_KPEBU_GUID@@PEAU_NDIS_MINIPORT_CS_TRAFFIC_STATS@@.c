/*
 * XREFs of ?ndisPublishSleepStudyCustomDataCsTraffic@@YAX_KPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@2@Z @ 0x1401638A0
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x140075740 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z @ 0x140163990 (-ndisPublishSleepStudyCustomData@@YAX_KPEBU_GUID@@PEB_W0@Z.c)
 */

void __fastcall ndisPublishSleepStudyCustomDataCsTraffic(
        unsigned __int64 a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a3,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8[12]; // [rsp+20h] [rbp-88h]

  v8[0] = *(_QWORD *)a3;
  v4 = 0LL;
  v8[1] = *((_QWORD *)a3 + 1);
  v8[2] = *((_QWORD *)a3 + 2);
  v7 = 12LL;
  v8[3] = *((_QWORD *)a3 + 3);
  v8[4] = *((_QWORD *)a3 + 4);
  v8[5] = *((_QWORD *)a3 + 5);
  v8[6] = *(_QWORD *)a4;
  v8[7] = *((_QWORD *)a4 + 1);
  v8[8] = *((_QWORD *)a4 + 2);
  v8[9] = *((_QWORD *)a4 + 3);
  v8[10] = *((_QWORD *)a4 + 4);
  v8[11] = *((_QWORD *)a4 + 5);
  do
  {
    ndisPublishSleepStudyCustomData(a1, a2, off_1400F2F90[v4], v8[v4]);
    ++v4;
    --v7;
  }
  while ( v7 );
}
