/*
 * XREFs of MiMakeSystemRangeAvailable @ 0x14038E334
 * Callers:
 *     MiReturnSystemVa @ 0x1402C0B88 (MiReturnSystemVa.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402A9FB0 (RtlClearBitsEx.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiSystemVaToDynamicBitmap @ 0x14038EAE8 (MiSystemVaToDynamicBitmap.c)
 *     MiReduceSystemRegionType @ 0x14038F4F0 (MiReduceSystemRegionType.c)
 *     MiNonPagedPoolToNode @ 0x14048BCC8 (MiNonPagedPoolToNode.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMakeSystemRangeAvailable(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3)
{
  ULONG_PTR BugCheckParameter4; // rsi
  ULONG_PTR v4; // rbp
  __int64 v7; // rbx
  ULONG_PTR *v8; // r14
  ULONG_PTR v9; // rdi
  volatile LONG *v10; // rcx
  ULONG_PTR v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 *v15; // r10
  bool v16; // zf
  bool i; // zf
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF
  KIRQL v21; // [rsp+80h] [rbp+18h]

  BugCheckParameter4 = (int)a3;
  v4 = BugCheckParameter3 >> 21;
  v20 = 0LL;
  if ( a3 == 4 )
    v7 = qword_140E2D8B8 + 384LL * (unsigned int)MiNonPagedPoolToNode(BugCheckParameter2);
  else
    v7 = MiSystemVaToDynamicBitmap(a3);
  v8 = (ULONG_PTR *)v7;
  v9 = (BugCheckParameter2 - *(_QWORD *)(v7 + 32)) >> 21;
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) == 0 )
  {
    v8 = (ULONG_PTR *)&v20;
    v19 = *(_QWORD *)(v7 + 16);
    *((_QWORD *)&v20 + 1) = *(_QWORD *)(v7 + 8);
    *(_QWORD *)&v20 = v19;
  }
  v10 = (volatile LONG *)(v7 + 64);
  if ( KeGetCurrentIrql() == 2 )
  {
    v21 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v21 = ExAcquireSpinLockExclusive(v10);
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
  v12 = v8[1];
  v13 = (__int64 *)(v12 + 8 * (v9 >> 6));
  v14 = *v13;
  v15 = (__int64 *)(v12 + 8 * ((v9 + v4 - 1) >> 6));
  if ( v13 == v15 )
  {
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9) & v14) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v9;
  }
  else
  {
    for ( i = ((-1LL << v9) & v14) == -1LL << v9; ; i = v18 == -1 )
    {
      if ( !i )
        goto LABEL_21;
      v18 = *++v13;
      if ( v13 == v15 )
        break;
    }
    v16 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1)) & v18) == 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v4 - 1);
  }
  if ( !v16 )
    goto LABEL_21;
LABEL_11:
  RtlClearBitsEx((__int64)v8, v9, v4);
  if ( (((_DWORD)BugCheckParameter4 - 10) & 0xFFFFFFFD) != 0 )
  {
    if ( v9 < *(_QWORD *)(v7 + 24) && ((_DWORD)BugCheckParameter4 != 11 || (KiFeatureSettings & 0x20000) != 0) )
      *(_QWORD *)(v7 + 24) = v9;
  }
  else
  {
    LODWORD(BugCheckParameter4) = MiReduceSystemRegionType((unsigned int)BugCheckParameter4);
    if ( v9 < *(_QWORD *)(v7 + 48) )
      *(_QWORD *)(v7 + 48) = v9;
  }
  _InterlockedAdd64(&qword_140E386C8[(int)BugCheckParameter4], -(__int64)v4);
  if ( (_DWORD)BugCheckParameter4 == 7 )
    qword_140E2EB88 += BugCheckParameter3;
  return MiReleaseSpinLockExclusive((_DWORD *)(v7 + 64), v21);
}
