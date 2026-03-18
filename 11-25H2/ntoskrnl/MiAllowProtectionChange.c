/*
 * XREFs of MiAllowProtectionChange @ 0x140246230
 * Callers:
 *     MiResetVirtualMemory @ 0x14044B240 (MiResetVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408F78C8 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1408FE2C0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140212A90 (MiLockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x140244320 (MiQueryAddressState.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     MiArbitraryCodeBlocked @ 0x140902858 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  int v11; // edi
  unsigned __int8 v12; // al
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int8 v15; // r14
  unsigned int v17; // [rsp+50h] [rbp-38h] BYREF
  int v18; // [rsp+54h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  __int16 v20; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  v19 = 0LL;
  v18 = 0;
  v17 = 0;
  v20 = 0;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v11 = 0;
  v12 = MiLockWorkingSetShared(a1 + 1024);
  v14 = a5;
  v15 = v12;
  while ( v14 <= a6 )
  {
    MiQueryAddressState(v14, a6, v15, a3, 0LL, (int *)&v17, &v18, &v20, (__int64 *)&v19);
    v13 = v17;
    if ( v17 == -1 )
    {
      v13 = 0LL;
      v17 = 0;
    }
    if ( (v13 & 2) == 0 && (a4 & 2) != 0 || (v13 & 2) != 0 && (a4 & 4) != 0 )
    {
      v11 = 1;
      break;
    }
    v14 = v19;
  }
  LOBYTE(v13) = v15;
  MiUnlockWorkingSetShared(a1 + 1024, v13);
  if ( v11 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v6;
}
