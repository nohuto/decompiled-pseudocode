/*
 * XREFs of ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x14007B7A0
 * Callers:
 *     NdisFreeSharedMemory @ 0x14007B4A0 (NdisFreeSharedMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14008DAF0 (_tlgKeywordOn.c)
 */

NdisFreeSharedMemoryTelemetry *__fastcall NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry(
        NdisFreeSharedMemoryTelemetry *this,
        const struct _NDIS_SHARED_MEMORY_BLOCK *a2,
        __int64 a3,
        __int64 a4)
{
  bool v6; // al
  unsigned int Flags; // eax
  bool v8; // al
  char v9; // al
  char v10; // al
  char v11; // al
  NdisFreeSharedMemoryTelemetry *result; // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx

  v6 = (a2->Flags & 0x10) != 0
    && (unsigned int)dword_1401247B0 > 4
    && (unsigned __int8)tlgKeywordOn(&dword_1401247B0, 2112LL, a3, a4);
  *(_BYTE *)this = v6;
  Flags = a2->Flags;
  v8 = (Flags & 0x10) != 0 && (Flags & 0x20) == 0;
  *((_BYTE *)this + 1) = v8;
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v9 = *(_BYTE *)this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = v9;
  *((_QWORD *)this + 11) = 0LL;
  v10 = *(_BYTE *)this;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = v10;
  *((_QWORD *)this + 17) = 0LL;
  v11 = *(_BYTE *)this;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = v11;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 8) = a2->SharedMemoryParameters.Length;
  if ( !*(_BYTE *)this )
    return this;
  *((_QWORD *)this + 1) = MEMORY[0xFFFFF78000000014];
  if ( *((_BYTE *)this + 80) )
    *((LARGE_INTEGER *)this + 7) = KeQueryPerformanceCounter((PLARGE_INTEGER)this + 8);
  *((_DWORD *)this + 9) = a2->SharedMemoryParameters.PreferredNode;
  *((_DWORD *)this + 10) = a2->SharedMemoryParameters.QueueId;
  if ( a2->SharedMemoryParameters.Header.Size >= 0x44u )
    *((_DWORD *)this + 11) = a2->SharedMemoryParameters.VPortId;
  if ( (a2->Flags & 0x10) != 0 )
    Miniport = (_NDIS_MINIPORT_BLOCK *)*((_QWORD *)a2->ProviderAllocationContext + 1);
  else
    Miniport = a2->Miniport;
  result = this;
  if ( Miniport )
    *((_OWORD *)this + 1) = Miniport->InterfaceGuid;
  return result;
}
