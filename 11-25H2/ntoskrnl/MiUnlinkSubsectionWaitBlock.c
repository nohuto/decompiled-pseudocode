/*
 * XREFs of MiUnlinkSubsectionWaitBlock @ 0x1406705CC
 * Callers:
 *     MiChangingSubsectionProtos @ 0x14066EB8C (MiChangingSubsectionProtos.c)
 *     MiAllocateFileExtents @ 0x140AA0C34 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

void __fastcall MiUnlinkSubsectionWaitBlock(__int64 *a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // dl
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v3 = *a1;
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 72));
  if ( !*(_DWORD *)(a2 + 12) )
  {
    v7 = 0LL;
    if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
      v8 = *(_QWORD **)(v3 + 80);
    else
      v8 = (_QWORD *)a1[3];
    if ( !v8 )
      goto LABEL_13;
    do
    {
      if ( v8 == (_QWORD *)a2 )
        break;
      v7 = v8;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 );
    if ( v7 )
    {
      *v7 = *v8;
    }
    else
    {
LABEL_13:
      v9 = *v8;
      if ( (*(_DWORD *)(v3 + 56) & 0x20) != 0 )
        *(_QWORD *)(v3 + 80) = v9;
      else
        a1[3] = v9;
    }
  }
  if ( v6 != 17 )
    MiReleaseSpinLockExclusive((_DWORD *)(v3 + 72), v6);
}
