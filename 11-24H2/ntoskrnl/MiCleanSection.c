/*
 * XREFs of MiCleanSection @ 0x140417040
 * Callers:
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiAttemptSectionDelete @ 0x140314F64 (MiAttemptSectionDelete.c)
 * Callees:
 *     MiFlushSection @ 0x14023A550 (MiFlushSection.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 *     MiDestroySection @ 0x140417200 (MiDestroySection.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 */

__int64 __fastcall MiCleanSection(__int64 a1, unsigned __int8 a2, char a3)
{
  __int64 v4; // rdx
  int v6; // esi
  BOOL v7; // r12d
  _QWORD *v9; // rcx
  __int128 *v10; // rdi
  KIRQL v11; // al
  __int128 *v12; // rcx
  __int128 *v13; // rax
  __int64 inserted; // rdi
  __int64 v15; // rbx
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h] BYREF
  __int128 v19; // [rsp+60h] [rbp-20h] BYREF
  char *v20; // [rsp+70h] [rbp-10h]
  int v21; // [rsp+C0h] [rbp+40h]
  _DWORD *v22; // [rsp+D8h] [rbp+58h]

  v20 = 0LL;
  v4 = 0LL;
  v6 = 1;
  v7 = *(_QWORD *)(a1 + 64) != 0LL;
  v9 = (_QWORD *)(a1 + 40);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    if ( (*(_DWORD *)(a1 + 56) & 0x20) != 0 )
      goto LABEL_21;
    DWORD1(v19) = 0;
    v20 = (char *)&v19 + 8;
    v10 = (__int128 *)(a1 + 80);
    *((_QWORD *)&v18 + 1) = 4LL;
    *((_QWORD *)&v19 + 1) = (char *)&v19 + 8;
    *(_QWORD *)&v18 = *(_QWORD *)(a1 + 80);
    *(_QWORD *)(a1 + 80) = &v18;
    LOWORD(v19) = 263;
    BYTE2(v19) = 6;
    v22 = (_DWORD *)(a1 + 72);
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 72), a2);
    v21 = MiFlushSection(0LL, 0LL, (__int64 *)(a1 + 128), 0LL, 0LL, 0x80000000, 0LL, &v17);
    v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
    v12 = *(__int128 **)(a1 + 80);
    a2 = v11;
    v13 = *(__int128 **)v12;
    while ( v12 != &v18 )
    {
      v10 = v12;
      v12 = v13;
      v13 = *(__int128 **)v13;
    }
    v4 = 0LL;
    *(_QWORD *)v10 = v13;
    v9 = (_QWORD *)(a1 + 40);
    if ( !HIDWORD(v18) )
      break;
    if ( *v9 != 1LL || *(_QWORD *)(a1 + 24) )
      goto LABEL_12;
  }
  if ( v21 >= 0 )
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
  inserted = 0LL;
  if ( v6 == 2 && (inserted = MiInsertUnusedSegment(a1)) != 0 )
    v15 = *((_QWORD *)qword_140E2FF88 + (*(_WORD *)(a1 + 60) & 0x3FF));
  else
    v15 = 0LL;
  MiReleaseSpinLockExclusive(v22, a2);
  if ( inserted )
    MiReturnCrossPartitionSectionCharges(v15, v7, inserted);
  return 0LL;
}
