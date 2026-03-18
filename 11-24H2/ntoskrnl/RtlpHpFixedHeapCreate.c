/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x1406055D0
 * Callers:
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1402B5710 (RtlpHpInitializeLock.c)
 *     RtlSetBitsEx @ 0x1403A4600 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x1404D03DC (RtlpHpVsContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x14060742C (RtlpHpVsContextStart.c)
 *     ZwQueryVirtualMemory @ 0x1406A6870 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall RtlpHpFixedHeapCreate(
        void *a1,
        NTSTATUS (__fastcall *a2)(__int64 a1, PVOID *a2, ULONG_PTR *a3),
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        _DWORD *a6)
{
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  __int64 v10; // r14
  NTSTATUS (__fastcall *v11)(__int64, PVOID *, ULONG_PTR *); // r15
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rbx
  int v14; // edx
  int v15; // edi
  int v16; // eax
  char v17; // r9
  unsigned __int64 v19; // [rsp+40h] [rbp-99h] BYREF
  _QWORD v20[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v21; // [rsp+58h] [rbp-81h] BYREF
  __int128 v22; // [rsp+68h] [rbp-71h]
  __int128 v23; // [rsp+78h] [rbp-61h]
  __int128 v24; // [rsp+88h] [rbp-51h] BYREF
  __int64 (__fastcall *v25)(__int64, __int64, unsigned int, __int64); // [rsp+98h] [rbp-41h]
  void (*v26)(); // [rsp+A0h] [rbp-39h]
  __int64 (__fastcall *v27)(); // [rsp+A8h] [rbp-31h]
  __int64 v28; // [rsp+B0h] [rbp-29h]
  __int128 MemoryInformation; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v30; // [rsp+C8h] [rbp-11h]
  __int128 v31; // [rsp+D8h] [rbp-1h]
  PVOID BaseAddress; // [rsp+130h] [rbp+57h] BYREF
  char v33; // [rsp+138h] [rbp+5Fh] BYREF

  BaseAddress = a1;
  v6 = 0LL;
  v7 = a4;
  v28 = 0LL;
  v8 = a3;
  v10 = (__int64)a1;
  MemoryInformation = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( a2 )
  {
    if ( !a4 || !a3 || a4 > a3 )
      return v6;
  }
  else
  {
    if ( ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           a1,
           (MEMORY_INFORMATION_CLASS)3,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, &v21, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (__int64)BaseAddress;
    if ( (PVOID)v21 != BaseAddress || (_DWORD)v23 == 0x10000 )
      return v6;
    v8 = v30;
    if ( (_DWORD)v23 == 4096 )
      v7 = *((_QWORD *)&v22 + 1);
  }
  v11 = RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v19 = (v13 + 4479) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 < v19 )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v10, &BaseAddress, &v19, a4) < 0 )
      return v6;
    v10 = (__int64)BaseAddress;
  }
  memset_0((void *)v10, 0, v13 + 384);
  if ( v11 )
    *(_QWORD *)(v10 + 8) = RtlpHpHeapGlobals ^ (unsigned __int64)v11;
  v14 = *a6 & 1;
  *(_BYTE *)(v10 + 32) = *a6 & 1;
  RtlpHpInitializeLock((_QWORD *)(v10 + 24), v14);
  v15 = a5;
  v16 = a5 & 0x18002002;
  *(_DWORD *)(v10 + 16) = -857879331;
  *(_DWORD *)(v10 + 20) = v16;
  *(_QWORD *)v10 = v12;
  v20[0] = v12;
  v20[1] = v10 + 384;
  RtlSetBitsEx((__int64)v20, 0LL, (v13 + 4479) >> 12);
  *(_QWORD *)(v10 + 48) = v12;
  *(_QWORD *)(v10 + 56) = v10 ^ (v10 + 384);
  v17 = *(_BYTE *)(v10 + 32);
  *(_QWORD *)&v24 = RtlpHpFixedVsAllocate;
  *((_QWORD *)&v24 + 1) = RtlpHpFixedVsFree;
  v25 = RtlpHpFixedVsCommit;
  v26 = xHalTimerWatchdogStop;
  v27 = RtlpHpFixedVsExtend;
  *(_BYTE *)(v10 + 33) = 3;
  v33 = 0;
  RtlpHpVsContextInitialize(v10 + 64, v10, &v24, v17, 1u, v15 & 0x8000000, &v33, 0LL);
  if ( (int)RtlpHpVsContextStart(v10 + 64) < 0 )
    return 0LL;
  return v10;
}
