/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180005C40
 * Callers:
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 * Callees:
 *     LdrpGetDllPath @ 0x180005DA0 (LdrpGetDllPath.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
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
        1587LL,
        "LdrpComputeLazyDllPath",
        0LL,
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
          1604LL,
          "LdrpComputeLazyDllPath",
          2LL,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v4,
          0LL);
      else
        LdrpLogInternal(
          "minkernel\\ldr\\ldrutil.c",
          1598LL,
          "LdrpComputeLazyDllPath",
          2LL,
          "DLL search path computed: %ws\n",
          0LL);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
