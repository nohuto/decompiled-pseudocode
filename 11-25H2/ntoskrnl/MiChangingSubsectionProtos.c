/*
 * XREFs of MiChangingSubsectionProtos @ 0x14066EB8C
 * Callers:
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiPurgeFileOnlyPfn @ 0x1406703DC (MiPurgeFileOnlyPfn.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14027D430 (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x14029D460 (KeAbPreWait.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1406705CC (MiUnlinkSubsectionWaitBlock.c)
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
  __int64 *v16; // rax
  __int64 *v18; // rax
  int *v19; // [rsp+20h] [rbp-48h]
  int v21; // [rsp+88h] [rbp+20h]

  v3 = *BugCheckParameter2;
  v4 = (int *)(a3 + 8);
  v19 = (int *)(a3 + 8);
  v5 = a2 & 0x10;
  v6 = (_DWORD *)(a3 + 12);
  v21 = v5;
  while ( 1 )
  {
    v9 = v4;
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
    if ( v5 )
    {
      MiUnlinkSubsectionWaitBlock(BugCheckParameter2, a3, 1LL);
      *v19 = 0;
      if ( *v6 == 2 )
      {
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
        return 3221226548LL;
      }
    }
    v11 = a2 & 8;
    v19 = v9;
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
            KeAbPreWait(v16);
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
      v18 = KeAbPreAcquire((__int64)BugCheckParameter2, 0LL);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      break;
    }
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
    KeWaitForGate(a3 + 16, 18, 0);
    if ( v14 )
    {
      KeAbPreAcquire((__int64)BugCheckParameter2, v14);
      KeAbPostReleaseEx((ULONG_PTR)BugCheckParameter2, v14);
    }
    v5 = v21;
    v4 = v19;
  }
  MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v10);
  return 0LL;
}
