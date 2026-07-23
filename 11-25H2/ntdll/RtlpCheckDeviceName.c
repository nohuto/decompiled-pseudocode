/*
 * XREFs of RtlpCheckDeviceName @ 0x1800A0BCC
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x180017680 (RtlGetFullPathName_Ustr.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDoesFileExists_UEx @ 0x1800A24A0 (RtlDoesFileExists_UEx.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlpCheckDeviceName(const void **a1, unsigned int a2, bool *a3)
{
  unsigned __int64 v5; // rbp
  void *ProcessHeap; // r15
  _WORD *Heap; // rax
  unsigned int v8; // ebx
  _WORD *v9; // rdi
  __int64 v10; // rdx

  v5 = a2;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = RtlAllocateHeap(ProcessHeap, 0, *(unsigned __int16 *)a1);
  v8 = 0;
  v9 = Heap;
  if ( Heap )
  {
    *a3 = 1;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    LOBYTE(v10) = 1;
    v9[v5 >> 1] = 46;
    v9[((unsigned int)v5 >> 1) + 1] = 0;
    *a3 = (unsigned __int8)RtlDoesFileExists_UEx(v9, v10) == 0;
    RtlFreeHeap(ProcessHeap, 0, v9);
  }
  else
  {
    *a3 = 0;
    return (unsigned int)-1073741801;
  }
  return v8;
}
