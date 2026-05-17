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
  unsigned __int64 v11; // [rsp+50h] [rbp-20h] BYREF
  __int128 v12; // [rsp+58h] [rbp-18h]
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  unsigned __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  v14 = a2;
  v11 = 0LL;
  v13 = 0LL;
  v5 = a2 >> 15;
  v7 = a2;
  if ( !_bittest64((const signed __int64 *)(a1 + 56), a2 >> 15) )
  {
    v13 = 4096LL;
    v11 = *(_QWORD *)a1 + (v5 << 12);
    v9 = RtlpHpEnvAllocVA((unsigned int)&v11, (unsigned int)&v13, 0, 1073745920, 4);
    if ( v9 < 0 )
      return (unsigned int)v9;
    _interlockedbittestandset64((volatile signed __int32 *)(a1 + 56), v5);
    v7 = v14;
  }
  v12 = 0LL;
  *a4 = 0LL;
  while ( 1 )
  {
    RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 24));
    *(_DWORD *)a3 = 0;
    *(_BYTE *)(a3 + 4) = -1;
    *(_QWORD *)(a3 + 8) = a1;
    if ( *(_QWORD *)(a1 + 32) != v7 )
      break;
    RtlpCSparseBitmapUnlock(a3);
    RtlpWaitOnAddress(a1 + 32, &v14, 8LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
  }
  if ( !_bittest64(*(const signed __int64 **)a1, v7) )
  {
    v13 = 4096LL;
    v11 = *(_QWORD *)(a1 + 8) + (v7 << 12);
    v9 = RtlpHpEnvAllocVA((unsigned int)&v11, (unsigned int)&v13, 0, 1073745920, 4);
    if ( v9 < 0 )
    {
      RtlpCSparseBitmapUnlock(a3);
      return (unsigned int)v9;
    }
    _interlockedbittestandset64(*(volatile signed __int32 **)a1, v7);
  }
  return 0;
}
