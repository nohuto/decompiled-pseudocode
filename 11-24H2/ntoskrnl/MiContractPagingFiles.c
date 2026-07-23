/*
 * XREFs of MiContractPagingFiles @ 0x1403EF5FC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x1403EF6CC (MiOkToShrinkPageFiles.c)
 *     MiQueuePageFileExtension @ 0x1403EF6FC (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiContractPagingFiles(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // r9
  _DWORD *v6; // r10
  __int64 v7; // rdx

  result = MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 19264), *(_QWORD *)(a1 + 19608));
  if ( (_DWORD)result )
  {
    v3 = *(_DWORD *)(a1 + 18520);
    v4 = 0;
    if ( v3 )
    {
      v5 = a1 + 18528;
      do
      {
        v6 = *(_DWORD **)v5;
        if ( (*(_BYTE *)(*(_QWORD *)v5 + 172LL) & 0x50) == 0 )
        {
          result = (unsigned int)v6[2];
          if ( *v6 != (_DWORD)result )
          {
            result = (unsigned int)v6[3];
            if ( (unsigned int)result > 0x4000 )
              break;
          }
        }
        ++v4;
        v5 += 8LL;
      }
      while ( v4 < v3 );
    }
    if ( v4 != v3 )
    {
      LOBYTE(v7) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
      if ( *(_QWORD *)(a1 + 600) == -1LL )
      {
        return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v7);
      }
      else
      {
        *(_QWORD *)(a1 + 568) = 0LL;
        *(_BYTE *)(a1 + 647) |= 0x10u;
        *(_QWORD *)(a1 + 600) = -1LL;
        *(_QWORD *)(a1 + 592) = a1;
        return MiQueuePageFileExtension(a1 + 568, v7);
      }
    }
  }
  return result;
}
