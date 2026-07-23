/*
 * XREFs of RtlpInheritAcl @ 0x1800C3320
 * Callers:
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpInheritAcl2 @ 0x1800C3540 (RtlpInheritAcl2.c)
 */

__int64 __fastcall RtlpInheritAcl(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int8 a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        PVOID *a15,
        _BYTE *a16,
        _DWORD *a17)
{
  unsigned int v17; // edi
  int v21; // ebp
  void *ProcessHeap; // rsi
  unsigned int v23; // eax
  unsigned int v24; // r13d
  PVOID *v25; // r14
  PVOID Heap; // rax
  int v28; // [rsp+D0h] [rbp+18h] BYREF

  v17 = 0;
  v21 = a1;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( a3 || a1 )
  {
    v23 = 200;
    v24 = 0;
    v25 = a15;
    v28 = 200;
    while ( 1 )
    {
      if ( v24 >= 2 )
        return v17;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v23);
      *v25 = Heap;
      if ( !Heap )
        break;
      v17 = RtlpInheritAcl2(
              v21,
              a2,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11,
              a12,
              a13,
              a14,
              (__int64)&v28,
              (__int64)Heap,
              (__int64)a16,
              (__int64)a17);
      if ( (v17 & 0x80000000) == 0 )
      {
        if ( !v28 )
        {
          RtlFreeHeap(ProcessHeap, 0, *v25);
          *v25 = 0LL;
        }
        return v17;
      }
      RtlFreeHeap(ProcessHeap, 0, *v25);
      *v25 = 0LL;
      if ( v17 != -1073741789 )
        return v17;
      v23 = v28;
      ++v24;
    }
    return 3221225495LL;
  }
  else
  {
    *a16 = 0;
    *a17 = a5 != 0 ? 0x400 : 0;
    *a15 = 0LL;
    return 2147483659LL;
  }
}
