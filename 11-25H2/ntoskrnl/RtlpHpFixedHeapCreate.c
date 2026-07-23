/*
 * XREFs of RtlpHpFixedHeapCreate @ 0x1405F9290
 * Callers:
 *     RtlpCreateHeap @ 0x1404D8494 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpHpInitializeLock @ 0x1402F78D4 (RtlpHpInitializeLock.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     RtlpHpVsContextInitialize @ 0x1404D044C (RtlpHpVsContextInitialize.c)
 *     RtlpHpVsContextStart @ 0x1405FB0EC (RtlpHpVsContextStart.c)
 *     ZwQueryVirtualMemory @ 0x14069B5A0 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  _QWORD v19[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v20; // [rsp+58h] [rbp-81h] BYREF
  __int128 v21; // [rsp+68h] [rbp-71h]
  __int128 v22; // [rsp+78h] [rbp-61h]
  __int128 v23; // [rsp+88h] [rbp-51h] BYREF
  __int64 (__fastcall *v24)(__int64, __int64); // [rsp+98h] [rbp-41h]
  void (*v25)(); // [rsp+A0h] [rbp-39h]
  __int64 (__fastcall *v26)(); // [rsp+A8h] [rbp-31h]
  __int64 v27; // [rsp+B0h] [rbp-29h]
  __int128 MemoryInformation; // [rsp+B8h] [rbp-21h] BYREF
  __int128 v29; // [rsp+C8h] [rbp-11h]
  __int128 v30; // [rsp+D8h] [rbp-1h]
  char v32; // [rsp+138h] [rbp+5Fh] BYREF

  v6 = 0LL;
  v7 = a4;
  v27 = 0LL;
  v8 = a3;
  v10 = (__int64)a1;
  MemoryInformation = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
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
           MemoryRegionInformation,
           &MemoryInformation,
           0x30uLL,
           0LL) < 0 )
      return v6;
    if ( ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a1, MemoryBasicInformation, &v20, 0x30uLL, 0LL) < 0 )
      return v6;
    v10 = (__int64)a1;
    if ( (void *)v20 != a1 || (_DWORD)v22 == 0x10000 )
      return v6;
    v8 = v29;
    if ( (_DWORD)v22 == 4096 )
      v7 = *((_QWORD *)&v21 + 1);
  }
  v11 = RtlpHpFixedHeapCommitRoutine;
  if ( a2 )
    v11 = a2;
  v12 = v8 >> 12;
  v13 = ((v12 >> 3) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v7 < ((v13 + 4479) & 0xFFFFFFFFFFFFF000uLL) )
  {
    if ( (int)guard_dispatch_icall_no_overrides(v10) < 0 )
      return v6;
    v10 = (__int64)a1;
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
  v19[0] = v12;
  v19[1] = v10 + 384;
  RtlSetBitsEx((__int64)v19, 0LL, (v13 + 4479) >> 12);
  *(_QWORD *)(v10 + 48) = v12;
  *(_QWORD *)(v10 + 56) = v10 ^ (v10 + 384);
  v17 = *(_BYTE *)(v10 + 32);
  *(_QWORD *)&v23 = RtlpHpFixedVsAllocate;
  *((_QWORD *)&v23 + 1) = RtlpHpFixedVsFree;
  v24 = RtlpHpFixedVsCommit;
  v25 = xHalTimerWatchdogStop;
  v26 = RtlpHpFixedVsExtend;
  *(_BYTE *)(v10 + 33) = 3;
  v32 = 0;
  RtlpHpVsContextInitialize(v10 + 64, v10, &v23, v17, 1u, v15 & 0x8000000, &v32, 0LL);
  if ( (int)RtlpHpVsContextStart(v10 + 64) < 0 )
    return 0LL;
  return v10;
}
