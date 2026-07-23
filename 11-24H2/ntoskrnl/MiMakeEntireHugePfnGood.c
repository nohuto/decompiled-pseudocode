/*
 * XREFs of MiMakeEntireHugePfnGood @ 0x140671FBC
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 * Callees:
 *     MiPageToNode @ 0x140221770 (MiPageToNode.c)
 *     RtlAvlRemoveNode @ 0x1402911D0 (RtlAvlRemoveNode.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     RtlNumberOfSetBitsEx @ 0x140407FA0 (RtlNumberOfSetBitsEx.c)
 *     MiHugePfnPartition @ 0x1404D2634 (MiHugePfnPartition.c)
 *     MiUnlinkHugeRange @ 0x1404EEA38 (MiUnlinkHugeRange.c)
 */

_QWORD *__fastcall MiMakeEntireHugePfnGood(int a1)
{
  unsigned __int64 v2; // rbp
  __int64 *v3; // r14
  __int64 v4; // rbx
  __int64 v5; // r15
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *result; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1 & 0x3FFFFF;
  v9 = 0LL;
  v3 = (__int64 *)(qword_140E30100 + 8 * v2);
  v4 = *v3;
  v5 = MiHugePfnPartition(v3);
  MiPageToNode((unsigned __int64)(unsigned int)v2 << 18);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E30010);
  v6 = (_QWORD *)qword_140E30060;
  while ( v6 )
  {
    v7 = v6[3] & 0x3FFFFFLL;
    if ( v2 <= v7 )
    {
      if ( v2 >= v7 )
        break;
      v6 = (_QWORD *)*v6;
    }
    else
    {
      v6 = (_QWORD *)v6[1];
    }
  }
  if ( (v4 & 7) == 4 )
    MiUnlinkHugeRange(v5, a1);
  *((_QWORD *)&v9 + 1) = v6[4];
  *(_QWORD *)&v9 = 0x40000LL;
  qword_140E30068 -= RtlNumberOfSetBitsEx((__int64 *)&v9);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E30060, (__int64)v6);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E30010);
  result = v6;
  *v3 &= ~8uLL;
  return result;
}
