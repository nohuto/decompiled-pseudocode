/*
 * XREFs of ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0
 * Callers:
 *     NdisFreeSharedMemory @ 0x140049470 (NdisFreeSharedMemory.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ?AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1400DC148 (-AggregateEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1400DC2E8 (-GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ.c)
 *     ?WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ @ 0x1400DC3E0 (-WriteEvent@NdisFreeSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1400DC538 (ndisDmaTelemetryBucketizeTimeInUs.c)
 */

void __fastcall NdisFreeSharedMemoryTelemetry::~NdisFreeSharedMemoryTelemetry(NdisFreeSharedMemoryTelemetry *this)
{
  bool v2; // zf
  __int64 v3; // rcx

  if ( *((_DWORD *)this + 24) == 1 && *((_BYTE *)this + 1) )
  {
    _InterlockedIncrement64(&qword_14011D008);
    _InterlockedAdd64(&qword_14011D010, *((unsigned int *)this + 8));
  }
  if ( *(_BYTE *)this )
  {
    v2 = *((_BYTE *)this + 80) == 0;
    *((_DWORD *)this + 12) = 1;
    if ( !v2 )
    {
      KStopwatch::Stop((NdisFreeSharedMemoryTelemetry *)((char *)this + 56));
      *((_QWORD *)this + 11) = KStopwatch::GetElapsedTimeInMicroseconds((NdisFreeSharedMemoryTelemetry *)((char *)this + 56));
    }
    *((_DWORD *)this + 48) ^= (*((_DWORD *)this + 12) ^ *((_DWORD *)this + 48)) & 3 ^ (*((_BYTE *)this + 192) ^ (*((_BYTE *)this + 48) ^ *((_BYTE *)this + 192)) & 3 ^ (unsigned __int8)(4 * *((_DWORD *)this + 24))) & 0xC ^ (*((_BYTE *)this + 192) ^ (*((_BYTE *)this + 48) ^ *((_BYTE *)this + 192)) & 3 ^ (*((_BYTE *)this + 192) ^ (*((_BYTE *)this + 48) ^ *((_BYTE *)this + 192)) & 3 ^ (unsigned __int8)(4 * *((_DWORD *)this + 24))) & 0xC ^ (unsigned __int8)(16 * *((_DWORD *)this + 36))) & 0x30;
    if ( *((_BYTE *)this + 80) )
      v3 = *((_QWORD *)this + 11);
    else
      v3 = 0LL;
    *((_BYTE *)this + 195) = ndisDmaTelemetryBucketizeTimeInUs(v3);
    NdisFreeSharedMemoryTelemetry::AggregateEvent(this);
    NdisFreeSharedMemoryTelemetry::WriteEvent(this);
  }
}
