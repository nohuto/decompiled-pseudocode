/*
 * XREFs of ??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z @ 0x140049770
 * Callers:
 *     NdisFreeSharedMemory @ 0x140049470 (NdisFreeSharedMemory.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1400713E0 (_tlgKeywordOn.c)
 */

NdisFreeSharedMemoryTelemetry *__fastcall NdisFreeSharedMemoryTelemetry::NdisFreeSharedMemoryTelemetry(
        NdisFreeSharedMemoryTelemetry *this,
        const struct _NDIS_SHARED_MEMORY_BLOCK *a2)
{
  bool v4; // al
  unsigned int Flags; // eax
  bool v6; // al
  char v7; // al
  char v8; // al
  char v9; // al
  NdisFreeSharedMemoryTelemetry *result; // rax
  _NDIS_MINIPORT_BLOCK *Miniport; // rcx

  v4 = (a2->Flags & 0x10) != 0
    && (unsigned int)dword_14011A7B0 > 4
    && (unsigned __int8)tlgKeywordOn(&dword_14011A7B0, 2112LL);
  *(_BYTE *)this = v4;
  Flags = a2->Flags;
  v6 = (Flags & 0x10) != 0 && (Flags & 0x20) == 0;
  *((_BYTE *)this + 1) = v6;
  *((_QWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v7 = *(_BYTE *)this;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 80) = v7;
  *((_QWORD *)this + 11) = 0LL;
  v8 = *(_BYTE *)this;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = v8;
  *((_QWORD *)this + 17) = 0LL;
  v9 = *(_BYTE *)this;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = v9;
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
