/*
 * XREFs of RtlpCSparseBitmapPageCommit @ 0x1800914D8
 * Callers:
 *     RtlCSparseBitmapBitmaskWrite @ 0x180091350 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlSparseArrayElementAllocate @ 0x180091434 (RtlSparseArrayElementAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlpHpEnvAllocVA @ 0x180092390 (RtlpHpEnvAllocVA.c)
 *     RtlpCSparseBitmapUnlock @ 0x180092B00 (RtlpCSparseBitmapUnlock.c)
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
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
    RtlpWaitOnAddress(a1 + 32, (unsigned int)&v14, 8, 0, (_DWORD)RtlpWaitOnAddressSpinCycleCount, 0LL);
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
