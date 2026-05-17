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
  __int64 v15; // [rsp+80h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+10h] BYREF
  int v17; // [rsp+98h] [rbp+20h]

  v6 = 8LL * a4;
  v15 = v6;
  v8 = a4;
  v17 = 0;
  v16 = a2;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 144));
  if ( *(_QWORD *)(8LL * a5 + a2) != *(_QWORD *)(8LL * a5 + a3)
    && (int)ZwProtectVirtualMemory(-1LL, &v16, &v15, 4LL) >= 0 )
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
    ZwProtectVirtualMemory(-1LL, &v16, &v15, 2LL);
    if ( LdrControlFlowGuardEnforcedWithExportSuppression() )
    {
      LdrpUnsuppressAddressTakenIat(
        *(_QWORD *)(a1 + 48),
        (unsigned int)(a2 - *(_DWORD *)(a1 + 48)),
        (unsigned int)a2 + 8 * a4 - *(_DWORD *)(a1 + 48) - 8);
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
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 144));
}
