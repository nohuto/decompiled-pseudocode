/*
 * XREFs of ??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z @ 0x14005CF10
 * Callers:
 *     NdisAllocateSharedMemory @ 0x14005CCE0 (NdisAllocateSharedMemory.c)
 * Callees:
 *     <none>
 */

NdisAllocateSharedMemoryTelemetry *__fastcall NdisAllocateSharedMemoryTelemetry::NdisAllocateSharedMemoryTelemetry(
        NdisAllocateSharedMemoryTelemetry *this,
        __int64 a2,
        const struct _NDIS_SHARED_MEMORY_PARAMETERS *a3,
        int a4)
{
  LARGE_INTEGER *v6; // rcx
  char v7; // al
  char v8; // al
  char v9; // al
  bool v11; // al

  *(_WORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = a4;
  *((_DWORD *)this + 13) = 0;
  v11 = *(_WORD *)this != 0;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  v6 = (LARGE_INTEGER *)((char *)this + 72);
  *((_QWORD *)this + 10) = 0LL;
  v6->QuadPart = 0LL;
  *((_BYTE *)this + 88) = v11;
  *((_QWORD *)this + 12) = 0LL;
  v7 = *(_BYTE *)this;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_BYTE *)this + 136) = v7;
  *((_QWORD *)this + 18) = 0LL;
  v8 = *(_BYTE *)this;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_BYTE *)this + 184) = v8;
  *((_QWORD *)this + 24) = 0LL;
  v9 = *(_BYTE *)this;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_BYTE *)this + 232) = v9;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 8) = a3->Length;
  if ( *(_BYTE *)this )
  {
    *((_QWORD *)this + 1) = MEMORY[0xFFFFF78000000014];
  }
  else if ( !*((_BYTE *)this + 1) )
  {
    return this;
  }
  if ( *((_BYTE *)this + 88) )
    *((LARGE_INTEGER *)this + 8) = KeQueryPerformanceCounter(v6);
  *((_DWORD *)this + 9) = a3->PreferredNode;
  *((_DWORD *)this + 10) = a3->QueueId;
  if ( a3->Header.Size >= 0x44u )
    *((_DWORD *)this + 11) = a3->VPortId;
  return this;
}
