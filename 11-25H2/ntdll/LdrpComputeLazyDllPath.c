/*
 * XREFs of LdrpComputeLazyDllPath @ 0x1800AC120
 * Callers:
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpGetDllPath @ 0x1800AC280 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1)
{
  unsigned int v2; // edi
  int DllPath; // eax
  __int64 v4; // rax
  __int64 v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  v2 = 0;
  RtlAcquireSRWLockExclusive(&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(*(PCWSTR *)(a1 + 32), a1 + 120, a1 + 40, (__int64)&v6);
    v2 = DllPath;
    if ( DllPath < 0 )
    {
      LdrpLogInternal(
        "minkernel\\ldr\\ldrutil.c",
        1587,
        (__int64)"LdrpComputeLazyDllPath",
        0,
        "Lazy DLL search path computation failed with status: 0x%08lx.\n",
        DllPath);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0LL;
      v4 = v6;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 16) = v4;
      if ( v4 )
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1604,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v4,
          0LL);
      else
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1598,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          0LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
