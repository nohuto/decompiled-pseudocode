/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x1800D96C0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D95CC (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpAllocateModuleEntry @ 0x180010680 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     LdrpLogEtwEvent @ 0x18009B2F0 (LdrpLogEtwEvent.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall LdrpAllocatePlaceHolder(
        const void **a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // edx
  __int64 Heap; // rax
  unsigned __int64 v14; // rsi
  __int64 ModuleEntry; // rax
  _DWORD *SharedData; // rcx
  __int64 v17; // rcx
  char *v19; // rcx

  v10 = 0;
  v11 = (NtdllBaseTag + 0x40000) | 8;
  *(_QWORD *)a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v11, *(unsigned __int16 *)a1 + 210LL);
  v14 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 16) = a2;
    *(_QWORD *)(Heap + 184) = -1LL;
    *(_DWORD *)(Heap + 32) = a3 | 0x8000;
    *(_QWORD *)(Heap + 40) = a7;
    *(_QWORD *)(Heap + 48) = a5;
    *(_QWORD *)(Heap + 8) = Heap + 208;
    *(_WORD *)Heap = *(_WORD *)a1;
    *(_WORD *)(Heap + 2) = *(_WORD *)a1 + 2;
    memmove((void *)(Heap + 208), a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v14);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *(_DWORD *)(ModuleEntry + 268) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v17 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v17 = 2147353476LL;
      if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v19 = (unsigned int)RtlGetCurrentServiceSessionId()
            ? (char *)NtCurrentPeb()->SharedData + 555
            : (char *)2147353477;
        if ( (*v19 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v14, 0LL);
      }
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v14);
    }
  }
  if ( !*(_QWORD *)a6 )
    return (unsigned int)-1073741801;
  return v10;
}
