/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x14026C384
 * Callers:
 *     MiReturnSystemVa @ 0x14020AB44 (MiReturnSystemVa.c)
 * Callees:
 *     MiNonPagedPoolToNode @ 0x14026B8BC (MiNonPagedPoolToNode.c)
 *     MiSystemVaToDynamicBitmap @ 0x14026CB38 (MiSystemVaToDynamicBitmap.c)
 *     MiReduceSystemRegionType @ 0x14026D544 (MiReduceSystemRegionType.c)
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v4; // rbp
  _QWORD *v7; // rbx
  ULONG_PTR *v8; // r14
  ULONG_PTR v9; // rdi
  volatile LONG *v10; // rcx
  __int64 v11; // rdx
  ULONG_PTR v13; // rcx
  __int64 *v14; // rdx
  __int64 v15; // r9
  __int64 *v16; // r10
  bool v17; // zf
  bool i; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v22; // [rsp+80h] [rbp+18h]

  BugCheckParameter4 = (int)a3;
  v4 = BugCheckParameter3 >> 21;
  v21 = 0LL;
  if ( a3 == 4 )
    v7 = (_QWORD *)(qword_140E2DC38 + 384LL * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2));
  else
    v7 = (_QWORD *)MiSystemVaToDynamicBitmap(a3);
  v8 = v7;
  v9 = (BugCheckParameter2 - v7[4]) >> 21;
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) == 0 )
  {
    v8 = (ULONG_PTR *)&v21;
    v20 = v7[2];
    *((_QWORD *)&v21 + 1) = v7[1];
    *(_QWORD *)&v21 = v20;
  }
  v10 = (volatile LONG *)(v7 + 8);
  if ( KeGetCurrentIrql() == 2 )
  {
    v22 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v22 = ExAcquireSpinLockExclusive(v10);
  }
  if ( v9 >= *v8 )
    goto LABEL_21;
  if ( v4 <= 1 )
  {
    if ( v4 == 1 && _bittest64((const signed __int64 *)(v8[1] + 8 * (v9 >> 6)), v9 & 0x3F) )
      goto LABEL_11;
LABEL_21:
    KeBugCheckEx(0x1Au, 0x101CuLL, BugCheckParameter2, BugCheckParameter3, BugCheckParameter4);
  }
  if ( *v8 - v9 < v4 )
    goto LABEL_21;
  v13 = v8[1];
  v14 = (__int64 *)(v13 + 8 * (v9 >> 6));
  v15 = *v14;
  v16 = (__int64 *)(v13 + 8 * ((v9 + v4 - 1) >> 6));
  if ( v14 == v16 )
  {
    v17 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9) & v15) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9;
  }
  else
  {
    for ( i = ((-1LL << v9) & v15) == -1LL << v9; ; i = v19 == -1 )
    {
      if ( !i )
        goto LABEL_21;
      v19 = *++v14;
      if ( v14 == v16 )
        break;
    }
    v17 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1)) & v19) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1);
  }
  if ( !v17 )
    goto LABEL_21;
LABEL_11:
  RtlClearBitsEx(v8, v9, v4);
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 < v7[3] && ((_DWORD)BugCheckParameter4 != 11 || (KiFeatureSettings & 0x20000) != 0) )
      v7[3] = v9;
  }
  else
  {
    LODWORD(BugCheckParameter4) = MiReduceSystemRegionType((unsigned int)BugCheckParameter4);
    if ( v9 < v7[6] )
      v7[6] = v9;
  }
  _InterlockedAdd64(&qword_140E38A48[(int)BugCheckParameter4], -(__int64)v4);
  if ( (_DWORD)BugCheckParameter4 == 7 )
    qword_140E2EF08 += BugCheckParameter3;
  LOBYTE(v11) = v22;
  return MiReleaseSpinLockExclusive(v7 + 8, v11);
}
