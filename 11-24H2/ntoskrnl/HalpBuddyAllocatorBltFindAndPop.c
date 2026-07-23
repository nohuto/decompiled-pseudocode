/*
 * XREFs of HalpBuddyAllocatorBltFindAndPop @ 0x14039AC3C
 * Callers:
 *     HalpBuddyAllocatorAllocateLogicalAddress @ 0x14039B7B0 (HalpBuddyAllocatorAllocateLogicalAddress.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpBuddyAllocatorBltRemoveInternal @ 0x14039AD8C (HalpBuddyAllocatorBltRemoveInternal.c)
 */

_QWORD *__fastcall HalpBuddyAllocatorBltFindAndPop(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // r9
  _QWORD *v12; // rdx
  _QWORD *i; // rbx
  unsigned __int64 v14; // r8

  v4 = a2[5];
  if ( v4 == -1 )
    LODWORD(v9) = 63;
  else
    _BitScanForward64((unsigned __int64 *)&v9, v4 + 1);
  _BitScanForward64((unsigned __int64 *)&v10, a1);
  LOBYTE(v11) = KeAcquireSpinLockRaiseToDpc(a2 + 13);
LABEL_4:
  if ( (unsigned int)v10 > (unsigned int)v9 )
  {
    i = 0LL;
  }
  else
  {
    v12 = (_QWORD *)(a2[12] + 16LL * (unsigned int)(v10 - 12));
    for ( i = (_QWORD *)*v12; ; i = (_QWORD *)*i )
    {
      if ( i == v12 )
      {
        LODWORD(v10) = v10 + 1;
        goto LABEL_4;
      }
      v14 = i[6];
      if ( v14 + i[7] - 1LL >= a1 + a3 - 1 && v14 <= a4 - a1 + 1 )
        break;
    }
    HalpBuddyAllocatorBltRemoveInternal(i, v12, v14, v11);
  }
  KeReleaseSpinLock(a2 + 13, v11);
  return i;
}
