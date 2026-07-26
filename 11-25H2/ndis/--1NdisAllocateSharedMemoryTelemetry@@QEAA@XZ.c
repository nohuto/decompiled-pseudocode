/*
 * XREFs of ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x140098F80
 * Callers:
 *     NdisAllocateSharedMemory @ 0x140077CD0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     ?Stop@KStopwatch@@QEAA_KXZ @ 0x140091420 (-Stop@KStopwatch@@QEAA_KXZ.c)
 *     ??$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1400E2C98 (--$AggregateEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1400E2E7C (--$AggregateEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1400E3060 (--$WriteEvent@$01@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ??$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ @ 0x1400E31DC (--$WriteEvent@$03@NdisAllocateSharedMemoryTelemetry@@AEBAXXZ.c)
 *     ?GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ @ 0x1400E34F8 (-GetElapsedTimeInMicroseconds@KStopwatch@@QEBA_KXZ.c)
 *     ndisDmaTelemetryBucketizeTimeInUs @ 0x1400E3748 (ndisDmaTelemetryBucketizeTimeInUs.c)
 */

void __fastcall NdisAllocateSharedMemoryTelemetry::~NdisAllocateSharedMemoryTelemetry(LARGE_INTEGER *this)
{
  unsigned __int64 LowPart; // rax
  LARGE_INTEGER v3; // rsi
  int v4; // ecx
  int v5; // eax
  char v6; // al
  bool v7; // zf

  if ( this[25].LowPart )
  {
    _InterlockedIncrement64(&qword_1401270A0);
    LowPart = this[4].LowPart;
    if ( this[25].LowPart == 1 )
      _InterlockedAdd64(&qword_1401270A8, LowPart);
    else
      _InterlockedAdd64(&qword_1401270B0, LowPart);
  }
  if ( LOBYTE(this->LowPart) || BYTE1(this->LowPart) )
  {
    v3.QuadPart = 0LL;
    this[7].LowPart = (this[6].LowPart != 0) + 1;
    if ( LOBYTE(this[11].LowPart) )
    {
      KStopwatch::Stop(this + 8);
      this[12].QuadPart = KStopwatch::GetElapsedTimeInMicroseconds((KStopwatch *)&this[8]);
    }
    v4 = this[6].HighPart ^ (this[7].LowPart ^ this[6].HighPart) & 3;
    v5 = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(4 * this[13].LowPart)) & 0xC;
    this[6].HighPart = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(16 * this[19].LowPart)) & 0x30 ^ ((unsigned __int8)(v5 ^ (v5 ^ (16 * this[19].LowPart)) & 0x30) ^ (unsigned __int8)((unsigned __int8)this[25].LowPart << 6)) & 0xC0;
    if ( LOBYTE(this[11].LowPart) )
      v3 = this[12];
    v6 = ((__int64 (__fastcall *)(_QWORD))ndisDmaTelemetryBucketizeTimeInUs)((LARGE_INTEGER)v3.QuadPart);
    v7 = LOBYTE(this->LowPart) == 0;
    HIBYTE(this[6].QuadPart) = v6;
    if ( !v7 )
    {
      if ( (this[6].HighPart & 3) == 2 )
        NdisAllocateSharedMemoryTelemetry::AggregateEvent<2>(this);
      else
        NdisAllocateSharedMemoryTelemetry::AggregateEvent<4>(this);
      if ( (this[6].HighPart & 3) == 2 )
        NdisAllocateSharedMemoryTelemetry::WriteEvent<2>(this);
      else
        NdisAllocateSharedMemoryTelemetry::WriteEvent<4>(this);
    }
  }
}
