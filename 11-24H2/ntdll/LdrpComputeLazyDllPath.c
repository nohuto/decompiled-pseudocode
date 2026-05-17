/*
 * XREFs of LdrpComputeLazyDllPath @ 0x180083D90
 * Callers:
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     LdrpGetDllPath @ 0x180083EF0 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrpComputeLazyDllPath(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  unsigned int v4; // edi
  int DllPath; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v4 = 0;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpPathLock, a2, a3);
  if ( !*(_QWORD *)a1 )
  {
    DllPath = LdrpGetDllPath(
                *(_QWORD *)(a1 + 32),
                *(_DWORD *)(a1 + 24),
                (unsigned int)&v9,
                (unsigned int)&v10,
                a1 + 120,
                a1 + 40,
                (__int64)&v11);
    v4 = DllPath;
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
      v6 = v9;
      *(_QWORD *)(a1 + 8) = v10;
      v7 = v11;
      *(_BYTE *)(a1 + 124) = 1;
      *(_QWORD *)a1 = v6;
      *(_QWORD *)(a1 + 16) = v7;
      if ( v7 )
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrutil.c",
          1604,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "Packaged DLL search path computed. Package Dirs: %ws, DllPath: %ws\n",
          v7);
      else
        LdrpLogInternal(
          (__int64)"minkernel\\ldr\\ldrutil.c",
          1598,
          (__int64)"LdrpComputeLazyDllPath",
          2,
          "DLL search path computed: %ws\n",
          v6);
    }
  }
  RtlReleaseSRWLockExclusive(&LdrpPathLock);
  return v4;
}
