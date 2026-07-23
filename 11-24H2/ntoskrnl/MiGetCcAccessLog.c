/*
 * XREFs of MiGetCcAccessLog @ 0x14093A7A4
 * Callers:
 *     MmPrefetchForCacheManager @ 0x140939B54 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x14020D250 (MiQueuePageAccessLog.c)
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     MiInitializePageAccessLogging @ 0x140469B1C (MiInitializePageAccessLogging.c)
 */

__int64 __fastcall MiGetCcAccessLog(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  _QWORD *i; // rcx
  char *AnyMultiplexedVm; // rax
  __int64 v14; // rdx

  if ( qword_140E3D140 )
  {
    v5 = _InterlockedExchange64(&qword_140E3D140, 0LL);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      if ( *(_QWORD *)(v5 + 32) + 8 * a3 <= v6 && (__int64)((*(_QWORD *)(v5 + 48) - v6) & 0xFFFFFFFFFFFFFFF8uLL) < 4096 )
        goto LABEL_8;
      MiQueuePageAccessLog((__int64)&MiSystemPartition, v5);
    }
  }
  v7 = (8 * a3 + 4175) & 0xFFFFFFFFFFFFF000uLL;
  result = MiAllocatePool(0x40uLL, v7, 1665232205);
  if ( !result )
    return result;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(0);
  MiInitializePageAccessLogging((__int64)AnyMultiplexedVm, v14, v7);
  *(_DWORD *)(v5 + 8) = 1;
LABEL_8:
  v9 = *(_QWORD *)(v5 + 40);
  v10 = *(_QWORD *)(a2 + 24);
  v11 = *(_QWORD *)(v5 + 48);
  for ( i = (_QWORD *)(v9 + 8); (unsigned __int64)i < v11; ++i )
  {
    if ( *i == v10 )
      goto LABEL_13;
  }
  i = *(_QWORD **)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v9 - 8;
  *i = v10;
LABEL_13:
  *(_QWORD *)(v5 + 24) = *(_QWORD *)(v5 + 32);
  result = v5;
  *(_DWORD *)(v5 + 12) = (__int64)(v11 - (_QWORD)i) >> 3;
  return result;
}
