/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x1800BA858
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x1800BA6D0 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x1800BA7B4 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpEnvAllocVA @ 0x1800BB710 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x1800BBE80 (RtlpCSparseBitmapUnlock.c)
 */

__int64 __fastcall RtlpCSparseBitmapPageCommit(__int64 a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rsi
  int v9; // edi
  int v11; // [rsp+28h] [rbp-48h]
  PVOID BaseAddress; // [rsp+50h] [rbp-20h] BYREF
  __int128 v13; // [rsp+58h] [rbp-18h]
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  v15 = a2;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)a1 + (v5 << 12));
    v9 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 4u, v11, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v15;
  }
  v13 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 24));
    *(_DWORD *)a3 = 0;
    *(_BYTE *)(a3 + 4) = -1;
    *(_QWORD *)(a3 + 8) = a1;
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress(a1 + 32, &v15, 8LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    RegionSize = 4096LL;
    BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v7 << 12));
    v9 = RtlpHpEnvAllocVA(&BaseAddress, &RegionSize, 4u, v11, *(unsigned __int8 *)(a1 + 50), 0LL);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
