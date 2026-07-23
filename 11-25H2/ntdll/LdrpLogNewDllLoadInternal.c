/*
 * XREFs of LdrpLogNewDllLoadInternal @ 0x18006EE20
 * Callers:
 *     LdrpLogNewDllLoad @ 0x18006E350 (LdrpLogNewDllLoad.c)
 *     LdrLogNewDataDllLoad @ 0x18006EC90 (LdrLogNewDataDllLoad.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

int __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // esi
  _WORD *Heap; // rax
  _WORD *v11; // rbx
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v11 = Heap;
  if ( Heap )
  {
    v12 = 5297;
    if ( (unsigned int)(a3 - 5) > 1 )
      v12 = 5296;
    v11[3] = v12;
    *((_QWORD *)v11 + 4) = a1;
    *((_QWORD *)v11 + 5) = a2;
    *((_DWORD *)v11 + 12) = a3;
    memmove(v11 + 26, Src, (unsigned int)v6);
    v11[(v6 >> 1) + 26] = 0;
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v13, 0x403u, v9 - 32, v11);
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
  }
  return (int)Heap;
}
