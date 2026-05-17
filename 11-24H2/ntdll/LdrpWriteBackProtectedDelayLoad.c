/*
 * XREFs of LdrpWriteBackProtectedDelayLoad @ 0x180007900
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x1800096B0 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrpUnsuppressAddressTakenIat @ 0x1800074AC (LdrpUnsuppressAddressTakenIat.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180009670 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     ZwProtectVirtualMemory @ 0x180162690 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpWriteBackProtectedDelayLoad(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  _QWORD *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h] BYREF
  int v20; // [rsp+98h] [rbp+20h] BYREF

  v6 = 8LL * a4;
  v18 = v6;
  v8 = a4;
  v20 = 0;
  v19 = a2;
  RtlAcquireSRWLockExclusive(a1 + 144);
  if ( *(_QWORD *)(8LL * a5 + a2) != *(_QWORD *)(8LL * a5 + a3)
    && (int)ZwProtectVirtualMemory(-1LL, &v19, &v18, 4LL, &v20) >= 0 )
  {
    if ( v8 )
    {
      v11 = (_QWORD *)(v6 + a2);
      v12 = a3 - a2;
      do
      {
        v13 = *(_QWORD *)((char *)v11-- + v12 - 8);
        --v8;
        if ( v13 )
          *v11 = v13;
      }
      while ( v8 );
    }
    ZwProtectVirtualMemory(-1LL, &v19, &v18, 2LL, &v20);
    if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression(v15, v14, v16) )
    {
      LdrpUnsuppressAddressTakenIat(
        *(_QWORD *)(a1 + 48),
        a2 - *(_DWORD *)(a1 + 48),
        a2 + 8 * a4 - *(_DWORD *)(a1 + 48) - 8);
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrdload.c",
        850,
        (int)"LdrpWriteBackProtectedDelayLoad",
        0,
        "LdrpWriteBackProtectedDelayLoad:Unable to unsuppress the export suppressed functions that is imported in the DLL"
        " based at 0x%p.Status = 0x%x\n",
        *(_QWORD *)(a1 + 48));
    }
  }
  return RtlReleaseSRWLockExclusive(a1 + 144);
}
