/*
 * XREFs of MiUnlockMultipleZeroChunks @ 0x14020FC10
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x14020F1F0 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDereferenceHugeContext @ 0x1404CFC80 (MiDereferenceHugeContext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUnlockMultipleZeroChunks(unsigned __int8 *a1)
{
  int v1; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // r14
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // r10
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdi

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
    return;
  v3 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 8);
  v5 = 0LL;
  if ( !*(_DWORD *)(v4 + 280) )
    goto LABEL_17;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 8 * v5 + 24);
    if ( (v6 & 0x20) != 0 )
      break;
LABEL_24:
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 280) )
      goto LABEL_17;
  }
  v7 = *((_QWORD *)a1 + 7);
  if ( v7 && *(_BYTE *)(v7 + 324) )
  {
    v8 = 0;
    v9 = qword_140E2FD80 + 8 * ((v6 >> 12) & 0x3FFFFF);
  }
  else
  {
    v8 = 1;
    v9 = 48 * ((v6 >> 12) & 0x3FFFFFFFFFLL) - 0x220000000000LL;
  }
  if ( (v6 & 0x80u) != 0LL )
  {
    a1[3] = 1;
    v6 &= ~0x80uLL;
  }
  v10 = v6 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v3 || (v10 & 0x40) != 0 )
    v10 &= ~8uLL;
  --v1;
  *(_QWORD *)(v4 + 8 * v5 + 24) = v10 & 0xFFFFFFFFFFFFFF9FuLL;
  if ( !v8 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E2FD88 + 4 * ((((v9 - qword_140E2FD80) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((v9 - qword_140E2FD80) >> 3) & 0x1F)));
    goto LABEL_22;
  }
  if ( v1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
    if ( !v3 )
      goto LABEL_23;
    goto LABEL_28;
  }
  if ( v3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
    if ( (v10 & 1) != 0 || *(_DWORD *)(v3 + 576) == 512 )
      MiDereferenceHugeContext(*((_QWORD *)a1 + 5));
    MiReleaseSpinLockExclusive(
      57216LL * *((unsigned int *)a1 + 4) + *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL) + 15224LL,
      a1[1]);
LABEL_23:
    if ( !v1 )
      goto LABEL_17;
    goto LABEL_24;
  }
  v11 = *a1;
  _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v11 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v11);
    __writecr8(v11);
  }
LABEL_17:
  *((_DWORD *)a1 + 2) = 0;
}
