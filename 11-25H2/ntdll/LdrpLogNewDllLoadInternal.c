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

__int64 __fastcall LdrpLogNewDllLoadInternal(__int64 a1, __int64 a2, int a3, unsigned int a4, void *Src)
{
  unsigned __int64 v6; // rdi
  unsigned int v9; // esi
  __int64 result; // rax
  __int64 v11; // rbx
  __int16 v12; // ax
  __int64 v13; // rcx

  v6 = a4;
  v9 = a4 + 54;
  result = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, a4 + 54);
  v11 = result;
  if ( result )
  {
    v12 = 5297;
    if ( (unsigned int)(a3 - 5) > 1 )
      v12 = 5296;
    *(_WORD *)(v11 + 6) = v12;
    *(_QWORD *)(v11 + 32) = a1;
    *(_QWORD *)(v11 + 40) = a2;
    *(_DWORD *)(v11 + 48) = a3;
    memmove((void *)(v11 + 52), Src, (unsigned int)v6);
    *(_WORD *)(v11 + 2 * (v6 >> 1) + 52) = 0;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    NtTraceEvent(*(unsigned __int8 *)v13, 1027LL, v9 - 32, v11);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
  }
  return result;
}
