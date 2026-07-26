/*
 * XREFs of ndisDmaTelemetryBucketizeTimeInUs @ 0x1400E3748
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x14007B8E0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x140098F80 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x14015DF70 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x14016C1E0 (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 */

unsigned __int8 __fastcall ndisDmaTelemetryBucketizeTimeInUs(unsigned __int64 a1)
{
  unsigned __int8 i; // bl
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v4, &stru_140126BA8);
  for ( i = 0; i < (unsigned __int8)byte_140127848; ++i )
  {
    if ( qword_140127648[i] > a1 )
      goto LABEL_6;
  }
  i = byte_140127848;
LABEL_6:
  KLockHolder::~KLockHolder(&v4);
  return i;
}
