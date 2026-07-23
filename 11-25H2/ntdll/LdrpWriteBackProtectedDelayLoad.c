/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180023540
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180022ED0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180022E90 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x18002422C (LdrpUnsuppressAddressTakenIat.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(
        _RTL_SRWLOCK *a1,
        char *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  ULONG_PTR v6; // rsi
  unsigned int v8; // ebx
  char *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  int v13; // eax
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v6 = 8LL * a4;
  RegionSize = v6;
  v8 = a4;
  OldProtect = 0;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive(a1 + 18);
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(8LL * a5 + a3)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v10 = &a2[v6];
      v11 = a3 - (_QWORD)a2;
      do
      {
        v12 = *(_QWORD *)&v10[v11 - 8];
        v10 -= 8;
        --v8;
        if ( v12 )
          *(_QWORD *)v10 = v12;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v13 = LdrpUnsuppressAddressTakenIat(a1[6].Ptr);
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        850LL,
        "LdrpWriteBackProtectedDelayLoad",
        0LL,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        a1[6].Ptr,
        v13);
    }
  }
  RtlReleaseSRWLockExclusive(a1 + 18);
}
