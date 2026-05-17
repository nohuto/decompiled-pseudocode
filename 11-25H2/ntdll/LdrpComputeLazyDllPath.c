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
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0LL;
  v7 = 0LL;
  v9 = 0LL;
  v2 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpPathLock);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                (unsigned int)&v7,
                (unsigned int)&v8,
                a1 + 120,
                a1 + 40,
                (__int64)&v9);
    v2 = DllPath;
    if ( DllPath < 0 )
    {
      LdrpLogInternal(
        (__int64)"minkernel\\ldr\\ldrutil.c",
        1587,
        (__int64)"LdrpComputeLazyDllPath",
        0,
        "Lazy DLL search path computation failed with status: 0x%08lx.\n",
        DllPath);
    }
    else
    {
      v4 = v7;
      *(_QWORD *)(a1 + 8) = v8;
      v5 = v9;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 16) = v5;
      if ( v5 )
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrutil.c",
          1604,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v5);
      else
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrutil.c",
          1598,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v4);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v2;
}
