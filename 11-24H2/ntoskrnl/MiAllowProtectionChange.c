/*
 * XREFs of MiAllowProtectionChange @ 0x1404389E8
 * Callers:
 *     MiResetVirtualMemory @ 0x1404388A4 (MiResetVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1408DAC60 (MmProtectVirtualMemory.c)
 *     MiAllocateVirtualMemory @ 0x1409160F0 (MiAllocateVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140241250 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     MiQueryAddressState @ 0x14030ABA0 (MiQueryAddressState.c)
 *     MiArbitraryCodeBlocked @ 0x140A0B8A0 (MiArbitraryCodeBlocked.c)
 */

__int64 __fastcall MiAllowProtectionChange(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // ebx
  char v7; // si
  ULONG_PTR v8; // r15
  int v11; // edi
  unsigned __int8 v12; // al
  unsigned __int64 v13; // rcx
  unsigned __int8 v14; // r14
  char v15; // dl
  int v17; // [rsp+50h] [rbp-38h] BYREF
  int v18; // [rsp+54h] [rbp-34h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-30h] BYREF
  __int16 v20; // [rsp+A8h] [rbp+20h] BYREF

  v6 = 0;
  v7 = a4;
  v19 = 0LL;
  v8 = a3;
  v18 = 0;
  v17 = 0;
  v20 = 0;
  if ( (a4 & 2) != 0 )
  {
    a3 = *(unsigned int *)(a3 + 48);
    if ( (a3 & 0xC00) == 3072 && (a3 & 0x380) != 0 )
      return 3221225541LL;
  }
  v11 = 0;
  v12 = MiLockWorkingSetShared(a1 + 1024, a2, a3, a4);
  v13 = a5;
  v14 = v12;
  while ( v13 <= a6 )
  {
    MiQueryAddressState(v13, a6, v14, v8, 0LL, &v17, &v18, &v20, &v19);
    v15 = v17;
    if ( v17 == -1 )
    {
      v15 = 0;
      v17 = 0;
    }
    if ( (v15 & 2) == 0 && (v7 & 2) != 0 || (v15 & 2) != 0 && (v7 & 4) != 0 )
    {
      v11 = 1;
      break;
    }
    v13 = v19;
  }
  MiUnlockWorkingSetShared(a1 + 1024, v14);
  if ( v11 )
    return (unsigned int)MiArbitraryCodeBlocked(a2);
  return v6;
}
