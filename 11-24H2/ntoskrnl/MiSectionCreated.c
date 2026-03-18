/*
 * XREFs of MiSectionCreated @ 0x140312C30
 * Callers:
 *     MiCreateNewSection @ 0x1409433C0 (MiCreateNewSection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     MiInitializeNewImageSectionProtos @ 0x140312D98 (MiInitializeNewImageSectionProtos.c)
 */

__int64 __fastcall MiSectionCreated(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r14
  int v9; // ebp
  KIRQL v10; // r13
  __int64 *v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rsi
  char v14; // dl
  __int64 v16; // rcx

  v8 = 0LL;
  v9 = 0;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 72));
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    *(_DWORD *)(a3 + 56) |= 0x200u;
  v11 = *(__int64 **)(a2 + 40);
  if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
  {
    v12 = v11[2];
    v9 = 1;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    *(_QWORD *)(a3 + 80) = *(_QWORD *)(v12 + 80);
  }
  else
  {
    v12 = *v11;
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
    v8 = *(_QWORD *)(v12 + 80);
  }
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(v12 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E2CC00);
  v13 = *(_QWORD **)(a2 + 40);
  if ( v9 )
  {
    v13[2] = a3;
    v13 = 0LL;
  }
  else
  {
    v14 = *(_BYTE *)(a3 + 62);
    if ( (v14 & 0xC) != 0 && (*a1 & 0x8000) == 0 )
    {
      v16 = v13[2];
      if ( v16 )
      {
        if ( (*(_DWORD *)(v16 + 56) & 3) != 0 || (*(_BYTE *)(v16 + 62) & 0xC) == 4 )
          *(_BYTE *)(a3 + 62) = v14 & 0xF3 | 8;
      }
    }
    *v13 = a3;
    *(_DWORD *)(a3 + 56) &= ~2u;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E2CC00);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v12 + 72));
  MiReleaseSpinLockExclusive((_DWORD *)(a3 + 72), v10);
  if ( v9 )
    MiInitializeNewImageSectionProtos(a3, a4);
  else
    KeAbPostRelease((ULONG_PTR)v13);
  return v8;
}
