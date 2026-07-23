/*
 * XREFs of MiAddPartitionHugeRange @ 0x140663C58
 * Callers:
 *     MiHotAddHugeRange @ 0x1407DB13C (MiHotAddHugeRange.c)
 *     MiCreateHugeIoRanges @ 0x140C423CC (MiCreateHugeIoRanges.c)
 * Callees:
 *     MiLockHugePfnInternal @ 0x14020DE6C (MiLockHugePfnInternal.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     RtlSetBitsEx @ 0x14038E280 (RtlSetBitsEx.c)
 *     MiUnlockDynamicMemoryShared @ 0x140393038 (MiUnlockDynamicMemoryShared.c)
 *     MiLockDynamicMemoryShared @ 0x140393098 (MiLockDynamicMemoryShared.c)
 *     MiInsertHugeRangeInList @ 0x1404ED4E4 (MiInsertHugeRangeInList.c)
 *     MiMemoryRangeAlreadyExists @ 0x140662500 (MiMemoryRangeAlreadyExists.c)
 *     MiUpdateHugePageCounts @ 0x14066624C (MiUpdateHugePageCounts.c)
 */

__int64 __fastcall MiAddPartitionHugeRange(_WORD *a1, __int64 a2, int a3, int a4)
{
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 *v14; // rdx
  unsigned __int64 v15; // r9
  unsigned __int64 *v16; // r10
  bool v17; // zf
  bool i; // zf
  __int64 v19; // rax
  __int64 *v20; // r15
  __int64 v21; // rbx
  KIRQL v23; // [rsp+78h] [rbp+20h]

  v4 = *(_QWORD *)(a2 + 32);
  CurrentThread = KeGetCurrentThread();
  v7 = v4 + *(_QWORD *)(a2 + 40);
  if ( !a4 )
    MiLockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  if ( (unsigned int)MiMemoryRangeAlreadyExists(v4, v7) )
    goto LABEL_9;
  v11 = (*(_QWORD *)(a2 + 32) >> 18) & 0x3FFFFFLL;
  v12 = (*(_QWORD *)(a2 + 40) >> 18) & 0x3FFFFFLL;
  v23 = ExAcquireSpinLockExclusive(&dword_140E2FDC0);
  if ( v11 >= stru_140E2FD70.SizeOfBitMap )
    goto LABEL_8;
  if ( v12 > 1 )
  {
    if ( stru_140E2FD70.SizeOfBitMap - v11 >= v12 )
    {
      v14 = &stru_140E2FD70.Buffer[v11 >> 6];
      v15 = *v14;
      v16 = &stru_140E2FD70.Buffer[(v11 + v12 - 1) >> 6];
      if ( v14 != v16 )
      {
        for ( i = (v15 & (-1LL << v11)) == 0; i; i = v19 == 0 )
        {
          v19 = *++v14;
          if ( v14 == v16 )
          {
            v17 = (v19 & (0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v11 + (unsigned __int8)v12 - 1))) == 0;
            goto LABEL_20;
          }
        }
        goto LABEL_8;
      }
      v17 = (v15 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v12) << v11)) == 0;
LABEL_20:
      if ( v17 )
        goto LABEL_21;
    }
LABEL_8:
    MiReleaseSpinLockExclusive(&dword_140E2FDC0, v23);
LABEL_9:
    if ( !a4 )
      MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
    return 3221225496LL;
  }
  if ( v12 != 1
    || _bittest64((const signed __int64 *)&stru_140E2FD70.Buffer[(unsigned __int64)(unsigned int)v11 >> 6], v11 & 0x3F) )
  {
    goto LABEL_8;
  }
LABEL_21:
  v20 = (__int64 *)(qword_140E2FD80 + 8 * v11);
  if ( a3 == 3 )
    v21 = (16LL * (*a1 & 0x7FF)) | 3;
  else
    v21 = 16403LL;
  do
  {
    MiLockHugePfnInternal((__int64)v20);
    RtlSetBitsEx((__int64)&stru_140E2FD70, v11 & 0x3FFFFF, 1uLL);
    *v20 = v21;
    if ( a3 == 3 )
      MiUpdateHugePageCounts(a1, v11, 1LL, 1LL);
    else
      MiInsertHugeRangeInList((__int64)a1, v11, a3 == 1);
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * (((((__int64)v20 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << ((((__int64)v20 - qword_140E2FD80) >> 3) & 0x1F)));
    ++v20;
    v11 = (v11 + 1) ^ ((v11 + 1) ^ v11) & 0xFFFFFFFFFFC00000uLL;
    --v12;
  }
  while ( v12 );
  MiReleaseSpinLockExclusive(&dword_140E2FDC0, v23);
  if ( !a4 )
    MiUnlockDynamicMemoryShared((__int64)&MiSystemPartition, (__int64)CurrentThread);
  return 0LL;
}
