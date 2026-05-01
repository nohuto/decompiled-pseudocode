/*
 * XREFs of ?RmpOfferLazyDecommitWorkerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180003C50
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180003F78 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x1800100E0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     CempListEntryRemoveAndClear @ 0x180027644 (CempListEntryRemoveAndClear.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180027680 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180054434 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180060D18 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

void __fastcall RmpOfferLazyDecommitWorkerCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_WORK *a3)
{
  unsigned __int64 v4; // rsi
  int v5; // r12d
  int **v6; // r13
  int *v7; // r14
  int *v8; // rdi
  int *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  bool v12; // cc
  int v13; // r8d
  int v14; // r9d
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v20[64]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int128 v22; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v23; // [rsp+D0h] [rbp-30h]
  _BYTE v24[144]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(v24, 0, 0x88uLL);
  memset_0(v20, 0, 0x50uLL);
  v17 = 0LL;
  v16 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 17LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      &dword_1800E8278,
      &unk_1800DA910);
  RtlQueryUnbiasedInterruptTime(&v17);
  v4 = 0LL;
  v5 = 0;
  RmpAcquireGlobalLock();
  v6 = (int **)(a2 + 1);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (int *)v6 )
      break;
    v8 = v7 - 324;
    CempListEntryRemoveAndClear(*v6);
    if ( *(v7 - 318) >= 0 && (*(_BYTE *)(*((_QWORD *)v8 + 6) + 3528LL) & 1) == 0 )
    {
      v9 = v7 - 8;
      if ( (v8[317] & 0x10) != 0 )
        *v9 |= 2u;
      v23 = 0LL;
      v22 = 0xFFFFFFFFFFFFFFFFuLL;
      LODWORD(v23) = (v8[317] & 0x10 | 0x20u) >> 4;
      RmpReleaseGlobalLock();
      if ( (int)RmpActivityHostDecommitOfferedMemory(
                  (struct _RM_ACTIVITY_HOST *)(v7 - 324),
                  (struct _RM_OFFERED_DECOMMIT_INFO *)&v22) >= 0 )
      {
        v4 += *((_QWORD *)&v22 + 1);
        ++v5;
        RmpSystemMemoryMetricsQuery(*((struct _RM_PARTITION **)v8 + 7), (struct _RM_SYSTEM_MEMORY_METRICS *)v20);
        *((_QWORD *)v7 - 6) = v21;
      }
      RmpAcquireGlobalLock();
      if ( (*v9 & 2) != 0 )
      {
        *v9 &= ~2u;
        RmpActivityHostCheckQueueWork((struct _RM_ACTIVITY_HOST *)(v7 - 324));
      }
    }
    RmpObjectRelease(v7 - 324);
  }
  RtlQueryUnbiasedInterruptTime(&v16);
  if ( (unsigned int)dword_1800E8278 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E8278, 25LL) )
  {
    v18 = v16 - v17;
    v15 = v5;
    v19 = v4;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800DA965,
      v13,
      v14,
      (__int64)&v19,
      (__int64)&v15,
      (__int64)&v18);
  }
  a2[7] += v4;
  v10 = v4;
  v11 = v16;
  if ( v4 >= a2[8] )
    v10 = a2[8];
  v12 = v4 <= a2[9];
  a2[8] = v10;
  if ( v12 )
    v4 = a2[9];
  a2[10] += v11 - v17;
  *((_DWORD *)a2 + 22) += v5;
  ++*((_DWORD *)a2 + 23);
  *((_DWORD *)a2 + 6) &= ~1u;
  a2[9] = v4;
  a2[4] = v11;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
}
