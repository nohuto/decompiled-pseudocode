/*
 * XREFs of MiCleanSection @ 0x140270170
 * Callers:
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x1403F25B4 (MiAttemptSectionDelete.c)
 * Callees:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiFlushSection @ 0x140272630 (MiFlushSection.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, KIRQL a2, char a3)
{
  __int64 v4; // rdx
  int v6; // esi
  BOOL v7; // r12d
  _QWORD *v9; // rcx
  __int128 *v10; // rdi
  KIRQL v11; // al
  __int128 *v12; // rcx
  __int128 *v13; // rax
  __int64 v14; // rdi
  __int64 inserted; // rax
  __int64 v16; // rbx
  __int128 v18; // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  char *v21; // [rsp+70h] [rbp-10h]
  int v22; // [rsp+C0h] [rbp+40h]
  __int64 v23; // [rsp+D8h] [rbp+58h]

  v21 = 0LL;
  v4 = 0LL;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 64) != 0LL;
  v9 = (_QWORD *)(a1 + 40);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_21;
    DWORD1(v20) = 0;
    v21 = (char *)&v20 + 8;
    v10 = (__int128 *)(a1 + 80);
    *((_QWORD *)&v19 + 1) = 4LL;
    *((_QWORD *)&v20 + 1) = (char *)&v20 + 8;
    LOBYTE(v4) = a2;
    *(_QWORD *)&v19 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v19;
    LOWORD(v20) = 263;
    BYTE2(v20) = 6;
    v23 = a1 + 72;
    MiReleaseSpinLockExclusive(a1 + 72, v4);
    v22 = MiFlushSection(0, 0, (int)a1 + 128, 0, 0LL, 0x80000000, 0LL, (__int64)&v18);
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v12 = *(__int128 **)(a1 + 80);
    a2 = v11;
    v13 = *(__int128 **)v12;
    while ( v12 != &v19 )
    {
      v10 = v12;
      v12 = v13;
      v13 = *(__int128 **)v13;
    }
    v4 = 0LL;
    *(_QWORD *)v10 = v13;
    v9 = (_QWORD *)(a1 + 40);
    if ( !HIDWORD(v19) )
      break;
    if ( *v9 != 1LL || *(_QWORD *)(a1 + 24) )
      goto LABEL_12;
  }
  if ( v22 >= 0 )
  {
LABEL_21:
    *v9 = 0LL;
    LOBYTE(v4) = a2;
    MiDestroySection(a1, v4);
    return 1LL;
  }
  v6 = 2;
  v9 = (_QWORD *)(a1 + 40);
LABEL_12:
  --*v9;
  if ( a3 )
    *(_DWORD *)(a1 + 56) |= 0x40000u;
  v14 = 0LL;
  if ( v6 == 2 && (inserted = MiInsertUnusedSegment(a1), v4 = 0LL, (v14 = inserted) != 0) )
    v16 = *((_QWORD *)qword_140E300C8 + (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v16 = 0LL;
  LOBYTE(v4) = a2;
  MiReleaseSpinLockExclusive(v23, v4);
  if ( v14 )
    MiReturnCrossPartitionSectionCharges(v16, v7, v14);
  return 0LL;
}
