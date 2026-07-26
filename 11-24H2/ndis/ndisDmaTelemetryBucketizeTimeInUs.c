/*
 * XREFs of ndisDmaTelemetryBucketizeTimeInUs @ 0x1400DC538
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008D6E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015F730 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14015FAC0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

unsigned __int8 __fastcall ndisDmaTelemetryBucketizeTimeInUs(unsigned __int64 a1)
{
  unsigned __int8 i; // bl
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v4, &stru_14011CB08);
  for ( i = 0; i < (unsigned __int8)byte_14011D798; ++i )
  {
    if ( qword_14011D598[i] > a1 )
      goto LABEL_6;
  }
  i = byte_14011D798;
LABEL_6:
  KLockHolder::~KLockHolder(&v4);
  return i;
}
