/*
 * XREFs of MiManagePartitionCharges @ 0x14068BE28
 * Callers:
 *     MmManagePartitionCharges @ 0x1407FD1EC (MmManagePartitionCharges.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiManagePartitionCharges(__int64 a1, char a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *v4; // rbp
  KIRQL v9; // r9
  __int64 v10; // r8
  int v11; // eax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx

  v4 = (_DWORD *)(a1 + 1728);
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  if ( a3 )
  {
    v10 = a3;
    if ( (a2 & 2) != 0 )
    {
      do
      {
        v11 = *a4;
        a4 += 10;
        *(_QWORD *)((-(__int64)(v11 != 0) & 0xFFFFFFFFFFFFFFE0uLL) + a1 + 2752) = *((_QWORD *)a4 - 2);
        --v10;
      }
      while ( v10 );
    }
    else
    {
      v12 = a4 + 8;
      do
      {
        v13 = (_QWORD *)(a1 + (-(__int64)(*((_DWORD *)v12 - 8) != 0) & 0xFFFFFFFFFFFFFFE0uLL) + 2728);
        *(v12 - 1) = v13[3];
        *v12 = v13[1];
        v12 += 5;
        *(v12 - 7) = v13[2];
        *(v12 - 8) = *v13;
        --v10;
      }
      while ( v10 );
    }
  }
  MiReleaseSpinLockExclusive(v4, v9);
  return 0LL;
}
