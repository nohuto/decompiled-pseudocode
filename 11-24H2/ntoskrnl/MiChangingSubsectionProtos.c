/*
 * XREFs of MiChangingSubsectionProtos @ 0x14067A42C
 * Callers:
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x14067BB9C (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x140AA5B84 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14025CCE0 (KeAbPostReleaseEx.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x14067BD8C (MiUnlinkSubsectionWaitBlock.c)
 */

__int64 __fastcall MiChangingSubsectionProtos(__int64 *BugCheckParameter2, char a2, __int64 a3)
{
  __int64 v3; // r13
  int *v4; // rax
  int v5; // ebp
  _DWORD *v6; // r12
  int *v9; // r14
  KIRQL v10; // si
  int v11; // edx
  int v12; // ecx
  __int64 *v13; // rcx
  ULONG_PTR v14; // rbp
  __int64 *v15; // r14
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  _QWORD *v20; // rax
  int *v21; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = (int *)(a3 + 8);
  v21 = (int *)(a3 + 8);
  v5 = a2 & 0x10;
  v6 = (_DWORD *)(a3 + 12);
  v23 = v5;
  while ( 1 )
  {
    v9 = v4;
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( v5 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      *v21 = 0;
      if ( *v6 == 2 )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
        return 3221226548LL;
      }
    }
    v11 = a2 & 8;
    v21 = v9;
    v12 = v11 != 0 ? 0x40 : 0;
    *v9 = v12;
    if ( (a2 & 0x20) != 0 )
    {
      v12 |= 0x100u;
      *v9 = v12;
    }
    if ( v5 )
      *v9 = v12 | 0x80;
    if ( BugCheckParameter2[1] && (a2 & 1) != 0 )
    {
      MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
      return 3221225994LL;
    }
    v13 = 0LL;
    v14 = 0LL;
    if ( (a2 & 8) == 0 )
    {
      if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
        v13 = *(__int64 **)(v3 + 80);
      else
        v13 = (__int64 *)BugCheckParameter2[3];
      while ( v13 )
      {
        v15 = v13;
        if ( (v13[1] & 0x40) == 0 )
        {
          v16 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
          v14 = (ULONG_PTR)v16;
          v13 = v15;
          if ( v16 )
          {
            KeAbPreWait((__int64)v16, v17, v18);
            v13 = v15;
          }
          v11 = a2 & 8;
          break;
        }
        v13 = (__int64 *)*v13;
      }
    }
    *v6 = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_WORD *)(a3 + 16) = 263;
    *(_BYTE *)(a3 + 18) = 6;
    *(_QWORD *)(a3 + 32) = a3 + 24;
    *(_QWORD *)(a3 + 24) = a3 + 24;
    if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
    {
      *(_QWORD *)a3 = *(_QWORD *)(v3 + 80);
      *(_QWORD *)(v3 + 80) = a3;
    }
    else
    {
      *(_QWORD *)a3 = BugCheckParameter2[3];
      BugCheckParameter2[3] = a3;
    }
    if ( v11 )
      break;
    if ( !v13 )
    {
      v20 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      if ( v20 )
        *((_BYTE *)v20 + 10) = 1;
      break;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
    KeWaitForGate(a3 + 16, 18LL, 0);
    if ( v14 )
    {
      KeAbPreAcquire((__int64)BugCheckParameter2, v14);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v14);
    }
    v5 = v23;
    v4 = v21;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
  return 0LL;
}
