/*
 * XREFs of LdrpCreateSoftwareEnclave @ 0x180114CD4
 * Callers:
 *     LdrCreateEnclave @ 0x180114BD0 (LdrCreateEnclave.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall LdrpCreateSoftwareEnclave(__int64 a1, __int64 a2, int a3)
{
  __int64 Heap; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 *v12; // rax

  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 0, 0x88uLL);
  v8 = Heap;
  if ( !Heap )
    return 3221225626LL;
  *(_QWORD *)(Heap + 88) = 0LL;
  v10 = Heap + 16;
  *(_QWORD *)(Heap + 112) = 0LL;
  *(_QWORD *)(Heap + 72) = a1;
  *(_QWORD *)(Heap + 80) = a2;
  *(_DWORD *)(Heap + 56) = a3;
  v11 = (_QWORD *)(Heap + 96);
  v11[1] = v11;
  *v11 = v11;
  RtlInitializeCriticalSectionEx(v10, 0, 0LL, v7);
  *(_DWORD *)(v8 + 64) = 0;
  *(_QWORD *)(v8 + 120) = 0LL;
  *(_QWORD *)(v8 + 128) = 0LL;
  *(_DWORD *)(v8 + 60) = 1;
  RtlEnterCriticalSection((__int64)&LdrpEnclaveListLock);
  v12 = (__int64 *)qword_1801D62C8;
  if ( *(__int64 **)qword_1801D62C8 != &LdrpEnclaveList )
    __fastfail(3u);
  *(_QWORD *)v8 = &LdrpEnclaveList;
  *(_QWORD *)(v8 + 8) = v12;
  *v12 = v8;
  qword_1801D62C8 = v8;
  RtlLeaveCriticalSection((__int64)&LdrpEnclaveListLock);
  return 0LL;
}
