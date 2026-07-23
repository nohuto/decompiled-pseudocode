/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180034300
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800360B0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x180033EAC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180036070 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x180160A50 (ZwProtectVirtualMemory.c)
 */

void __fastcall LdrpWriteBackProtectedDelayLoad(__int64 a1, char *a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  ULONG_PTR v6; // rsi
  unsigned int v8; // ebx
  char *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+10h] BYREF
  ULONG OldProtect; // [rsp+98h] [rbp+20h] BYREF

  v6 = 8LL * a4;
  RegionSize = v6;
  v8 = a4;
  OldProtect = 0;
  BaseAddress = a2;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
  if ( *(_QWORD *)&a2[8 * a5] != *(_QWORD *)(8LL * a5 + a3)
    && ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &OldProtect) >= 0 )
  {
    if ( v8 )
    {
      v11 = &a2[v6];
      v12 = a3 - (_QWORD)a2;
      do
      {
        v13 = *(_QWORD *)&v11[v12 - 8];
        v11 -= 8;
        --v8;
        if ( v13 )
          *(_QWORD *)v11 = v13;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &OldProtect);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      v14 = LdrpUnsuppressAddressTakenIat(
              *(char **)(a1 + 48),
              (int)a2 - *(_DWORD *)(a1 + 48),
              (unsigned int)a2 + 8 * a4 - *(_DWORD *)(a1 + 48) - 8);
      LdrpLogInternal(
        "minkernel\\ldr\\ldrdload.c",
        850LL,
        "LdrpWriteBackProtectedDelayLoad",
        0LL,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        *(const void **)(a1 + 48),
        v14);
    }
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 144));
}
