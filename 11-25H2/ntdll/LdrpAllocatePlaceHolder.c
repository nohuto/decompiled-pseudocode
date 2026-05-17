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
  unsigned int v11; // edx
  __int64 Heap; // rax
  __int64 v14; // rsi
  __int64 ModuleEntry; // rax
  __int64 v16; // r9
  _DWORD *SharedData; // rcx
  __int64 v18; // rcx
  char *v20; // rcx

  v10 = 0;
  v11 = (NtdllBaseTag + 0x40000) | 8;
  *(_QWORD *)a6 = 0LL;
  Heap = RtlAllocateHeap((char *)LdrpHeap, v11, *(unsigned __int16 *)a1 + 210LL);
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
        v18 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v18 = 2147353476LL;
      if ( *(_BYTE *)v18 && (NtCurrentPeb()->TracingFlags & 4) != 0 )
      {
        v20 = (unsigned int)RtlGetCurrentServiceSessionId()
            ? (char *)NtCurrentPeb()->SharedData + 555
            : (char *)2147353477;
        if ( (*v20 & 0x20) != 0 )
          LdrpLogEtwEvent(5292, 0LL, 0, 0, (unsigned __int16 *)v14, 0LL);
      }
    }
    else
    {
      RtlFreeHeap(LdrpHeap, 0, v14, v16);
    }
  }
  if ( !*(_QWORD *)a6 )
    return (unsigned int)-1073741801;
  return v10;
}
