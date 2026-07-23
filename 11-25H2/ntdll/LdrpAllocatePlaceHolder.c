/*
 * XREFs of LdrpAllocatePlaceHolder @ 0x1800D9660
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrpCreatePendingEnclaveModule @ 0x1800D956C (LdrpCreatePendingEnclaveModule.c)
 * Callees:
 *     LdrpLogEtwEvent @ 0x180006960 (LdrpLogEtwEvent.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     LdrpAllocateModuleEntry @ 0x18004F520 (LdrpAllocateModuleEntry.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     memmove @ 0x180168980 (memmove.c)
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
  ULONG v11; // edx
  _QWORD *Heap; // rax
  __int64 v14; // rsi
  char *ModuleEntry; // rax
  _DWORD *SharedData; // rcx
  __int64 v17; // rcx
  char *v19; // rcx

  v10 = 0;
  v11 = (NtdllBaseTag + 0x40000) | 8;
  *(_QWORD *)a6 = 0LL;
  Heap = RtlAllocateHeap(LdrpHeap, v11, *(unsigned __int16 *)a1 + 210LL);
  v14 = (__int64)Heap;
  if ( Heap )
  {
    Heap[2] = a2;
    Heap[23] = -1LL;
    *((_DWORD *)Heap + 8) = a3 | 0x8000;
    Heap[5] = a7;
    Heap[6] = a5;
    Heap[1] = Heap + 26;
    *(_WORD *)Heap = *(_WORD *)a1;
    *((_WORD *)Heap + 1) = *(_WORD *)a1 + 2;
    memmove(Heap + 26, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(*(_QWORD *)(v14 + 8) + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    ModuleEntry = LdrpAllocateModuleEntry(v14);
    *(_QWORD *)a6 = ModuleEntry;
    if ( ModuleEntry )
    {
      *((_DWORD *)ModuleEntry + 67) = a4;
      if ( a4 == 9 )
        *(_DWORD *)(*(_QWORD *)a6 + 304LL) = 1;
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && *SharedData )
        v17 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v17 = 2147353476LL;
      if ( *(_BYTE *)v17 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v19 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 555 : (char *)2147353477;
        if ( (*v19 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v14, 0LL);
      }
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, (PVOID)v14);
    }
  }
  if ( !*(_QWORD *)a6 )
    return (unsigned int)-1073741801;
  return v10;
}
