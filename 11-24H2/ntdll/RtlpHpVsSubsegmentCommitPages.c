/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x180064D78
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1800697A0 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegLfhVsCommit @ 0x1800DB380 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegLfhVsDecommit @ 0x1800DF710 (RtlpHpSegLfhVsDecommit.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        unsigned __int64 a3,
        unsigned int a4,
        int a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r14
  char *v8; // rdi
  unsigned __int64 v9; // rax
  unsigned int v11; // r15d
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(__int64, char *, _QWORD, _QWORD); // rax
  int v15; // eax
  unsigned int v16; // edi
  unsigned __int64 v17; // rax
  void (__fastcall *v19)(__int64, char *, _QWORD); // rax
  PRTL_SRWLOCK SRWLock[2]; // [rsp+30h] [rbp-48h]

  _BitScanForward64(&v5, a3);
  v6 = a4;
  *(_OWORD *)SRWLock = 0LL;
  v8 = (char *)a2 + (unsigned int)((_DWORD)v5 << 12);
  _BitScanReverse64(&v9, a3);
  LODWORD(v9) = v9 - v5;
  v11 = ((_DWORD)v9 + 1) << 12;
  v12 = ((1LL << ((unsigned __int8)v9 + 1)) - 1) << v5;
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
  {
    SRWLock[1] = a2 + 3;
    RtlAcquireSRWLockExclusive(a2 + 3);
  }
  v13 = a1 ^ *(_QWORD *)(a1 + 8);
  if ( a5 )
  {
    v14 = (__int64 (__fastcall *)(__int64, char *, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 32));
    if ( (char *)v14 == (char *)RtlpHpSegLfhVsCommit )
      v15 = RtlpHpSegLfhVsCommit(v13, v8, v11, 0LL);
    else
      v15 = v14(v13, v8, v11, 0LL);
    v16 = v15;
    if ( v15 < 0 )
      goto LABEL_9;
    a2[2].Value |= v12;
    v17 = v6;
  }
  else
  {
    v19 = (void (__fastcall *)(__int64, char *, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 40));
    if ( (char *)v19 == (char *)RtlpHpSegLfhVsDecommit )
      RtlpHpSegLfhVsDecommit(v13, v8, v11);
    else
      v19(v13, v8, v11);
    a2[2].Value &= ~v12;
    v17 = -(int)v6;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 80), v17);
  v16 = 0;
LABEL_9:
  if ( (*(_BYTE *)(a1 + 5) & 1) == 0 )
    RtlReleaseSRWLockExclusive(SRWLock[1]);
  return v16;
}
