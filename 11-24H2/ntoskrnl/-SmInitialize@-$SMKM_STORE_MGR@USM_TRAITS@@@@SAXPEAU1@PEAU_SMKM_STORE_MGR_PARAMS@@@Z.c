/*
 * XREFs of ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140608C4C
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A30D0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 *     SmPartitionInitialize @ 0x140797794 (SmPartitionInitialize.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiInitializeTimer2 @ 0x1403AE058 (KiInitializeTimer2.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     SmKmInitialize @ 0x140799DC8 (SmKmInitialize.c)
 */

__int64 (__fastcall *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmInitialize(
        __int64 a1,
        __int64 a2))(__int64 a1, __int64 a2)
{
  __int64 v4; // xmm1_8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int16 v7; // ax
  __int64 v8; // r8
  __int64 (__fastcall *result)(__int64, __int64); // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0((void *)a1, 0, 0x800uLL);
  v4 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)(a1 + 2000) = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 2016) = v4;
  SmKmInitialize(a1);
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 448) = 0LL;
  memset_0((void *)(a1 + 1584), 0, 0x78uLL);
  *(_BYTE *)(a1 + 1594) = 6;
  *(_DWORD *)(a1 + 1596) = 0;
  *(_WORD *)(a1 + 1592) = 1;
  *(_QWORD *)(a1 + 1608) = a1 + 1600;
  *(_QWORD *)(a1 + 1600) = a1 + 1600;
  *(_QWORD *)(a1 + 1616) = a1;
  memset_0((void *)(a1 + 1704), 0, 0x78uLL);
  *(_WORD *)(a1 + 1712) = 1;
  *(_BYTE *)(a1 + 1714) = 6;
  *(_DWORD *)(a1 + 1716) = 0;
  *(_QWORD *)(a1 + 1728) = a1 + 1720;
  *(_QWORD *)(a1 + 1720) = a1 + 1720;
  *(_QWORD *)(a1 + 1736) = a1;
  memset_0((void *)(a1 + 464), 0, 0x308uLL);
  v5 = (_QWORD *)(a1 + 464);
  v6 = 32LL;
  do
  {
    v5[1] = v5;
    *v5 = 0LL;
    v5 += 3;
    --v6;
  }
  while ( v6 );
  *(_QWORD *)(a1 + 1232) = 0LL;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1248));
  memset_0((void *)(a1 + 1272), 0, 0x138uLL);
  *(_QWORD *)(a1 + 1264) = a1;
  *(_DWORD *)(a1 + 1580) = 7;
  v7 = KiMaximumGroups;
  v8 = (unsigned __int16)KiMaximumGroups;
  *(_WORD *)(a1 + 1312) = 1;
  *(_WORD *)(a1 + 1314) = v7;
  *(_DWORD *)(a1 + 1316) = 0;
  memset_0((void *)(a1 + 1320), 0, 8 * v8);
  *(_DWORD *)(a1 + 1304) = *(_DWORD *)(a1 + 2004);
  KeQueryPerformanceCounter(&PerformanceFrequency);
  *(_DWORD *)(a1 + 2032) = (signed int)(10000 * PerformanceFrequency.LowPart) / 1000000;
  *(_WORD *)(a1 + 1826) = 0;
  KiInitializeTimer2(a1 + 1824, (__int64)SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback, a1, 8);
  result = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  *(_QWORD *)(a1 + 1984) = 0LL;
  *(_QWORD *)(a1 + 1960) = 0LL;
  *(_QWORD *)(a1 + 1976) = SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker;
  return result;
}
