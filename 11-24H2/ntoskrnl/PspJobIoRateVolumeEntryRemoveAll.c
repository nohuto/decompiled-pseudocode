/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x140488DD4
 * Callers:
 *     PspJobIoRateControlDisable @ 0x140A56A68 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rsi
  __int64 v4; // rbx
  KIRQL v5; // r10
  unsigned __int64 v6; // rcx
  int v7; // r8d
  unsigned __int64 **v8; // r9
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 *v11; // rdx
  _QWORD *v12; // rdx
  char v13; // al

  v2 = (volatile LONG *)(a1 + 1688);
  v4 = a1 + 1696;
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v6 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v6 )
    v6 ^= v4;
  v7 = *(_BYTE *)(v4 + 8) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *(_QWORD *)v6 )
        {
          v12 = (_QWORD *)v6;
          if ( v7 )
            v6 ^= *(_QWORD *)v6;
          else
            v6 = *(_QWORD *)v6;
          *v12 = 0LL;
        }
        v8 = (unsigned __int64 **)(v6 + 8);
        v9 = *(_QWORD *)(v6 + 8);
        if ( !v9 )
          break;
        if ( v7 )
          v6 ^= v9;
        else
          v6 = *(_QWORD *)(v6 + 8);
        *v8 = 0LL;
      }
      v10 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v7 && v10 )
        v10 ^= v6;
      v11 = *(unsigned __int64 **)(a2 + 8);
      if ( *v11 != a2 )
        __fastfail(3u);
      *(_QWORD *)v6 = a2;
      *v8 = v11;
      *v11 = v6;
      *(_QWORD *)(a2 + 8) = v6;
      *(_QWORD *)(v6 + 16) = -1LL;
      if ( !v10 )
        break;
      v6 = v10;
    }
  }
  v13 = *(_BYTE *)(v4 + 8);
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = 0LL;
  if ( (v13 & 1) != 0 )
    *(_BYTE *)(v4 + 8) = 1;
  ExReleaseSpinLockExclusive(v2, v5);
}
