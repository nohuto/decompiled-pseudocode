/*
 * XREFs of MiUnlockMultipleZeroChunks @ 0x140332CF0
 * Callers:
 *     MiBackgroundZeroLocalPages @ 0x140332260 (MiBackgroundZeroLocalPages.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiDereferenceHugeContext @ 0x1404C8E3C (MiDereferenceHugeContext.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall MiUnlockMultipleZeroChunks(unsigned __int8 *a1)
{
  int v1; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // r14d
  __int64 v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  char v9; // r9
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdi

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
    return;
  v3 = *((_QWORD *)a1 + 7);
  v4 = *((_QWORD *)a1 + 8);
  v5 = 0;
  if ( !*(_DWORD *)(v4 + 280) )
    goto LABEL_17;
  while ( 1 )
  {
    v6 = v4 + 8LL * v5;
    v7 = *(_QWORD *)(v6 + 24);
    if ( (v7 & 0x20) != 0 )
      break;
LABEL_24:
    if ( ++v5 >= *(_DWORD *)(v4 + 280) )
      goto LABEL_17;
  }
  v8 = *((_QWORD *)a1 + 7);
  if ( v8 && *(_BYTE *)(v8 + 324) )
  {
    v9 = 0;
    v10 = qword_140E30100 + 8 * ((v7 >> 12) & 0x3FFFFF);
  }
  else
  {
    v9 = 1;
    v10 = 48 * ((v7 >> 12) & 0x3FFFFFFFFFLL) - 0x220000000000LL;
  }
  if ( (v7 & 0x80u) != 0LL )
  {
    a1[3] = 1;
    v7 &= ~0x80uLL;
  }
  v11 = v7 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( !v3 || (v11 & 0x40) != 0 )
    v11 &= ~8uLL;
  --v1;
  *(_QWORD *)(v6 + 24) = v11 & 0xFFFFFFFFFFFFFF9FuLL;
  if ( !v9 )
  {
    _InterlockedAnd(
      (volatile signed __int32 *)(qword_140E30108 + 4 * ((((v10 - qword_140E30100) >> 3) & 0x3FFFFFuLL) >> 5)),
      ~(1 << (((v10 - qword_140E30100) >> 3) & 0x1F)));
    goto LABEL_22;
  }
  if ( v1 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
    if ( !v3 )
      goto LABEL_23;
    goto LABEL_28;
  }
  if ( v3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_28:
    if ( (v11 & 1) != 0 || *(_DWORD *)(v3 + 576) == 512 )
      MiDereferenceHugeContext(*((_QWORD *)a1 + 5));
    MiReleaseSpinLockExclusive(
      (_DWORD *)(57216LL * *((unsigned int *)a1 + 4) + *(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL) + 15224LL),
      a1[1]);
LABEL_23:
    if ( !v1 )
      goto LABEL_17;
    goto LABEL_24;
  }
  v12 = *a1;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (unsigned __int8)v12 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v12);
    __writecr8(v12);
  }
LABEL_17:
  *((_DWORD *)a1 + 2) = 0;
}
