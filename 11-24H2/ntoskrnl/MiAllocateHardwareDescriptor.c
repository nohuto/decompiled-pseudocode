/*
 * XREFs of MiAllocateHardwareDescriptor @ 0x1404A8DD8
 * Callers:
 *     MiTryZeroMemory @ 0x140331A60 (MiTryZeroMemory.c)
 *     MiComputeCacheAttributeSpeeds @ 0x1406942A8 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 *__fastcall MiAllocateHardwareDescriptor(_QWORD *a1)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // rcx
  KIRQL v4; // si
  __int64 *v5; // rcx
  __int64 *i; // rax
  __int64 *v8; // rdx
  __int64 **v9; // r8
  __int64 **v10; // rdx

  v2 = 0LL;
  v3 = (volatile LONG *)(a1[26] + 15280LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v4 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v3);
  }
  else
  {
    v4 = ExAcquireSpinLockExclusive(v3);
  }
  v5 = a1 + 15;
  for ( i = (__int64 *)a1[15]; i != v5; i = (__int64 *)*i )
  {
    v8 = (__int64 *)*i;
    if ( !*((_BYTE *)i + 16) )
    {
      if ( (__int64 *)v8[1] != i
        || (v9 = (__int64 **)i[1], *v9 != i)
        || (*v9 = v8, v2 = i + 4, v8[1] = (__int64)v9, *((_BYTE *)i + 16) = 1, v10 = (__int64 **)a1[16], *v10 != v5) )
      {
        __fastfail(3u);
      }
      *i = (__int64)v5;
      i[1] = (__int64)v10;
      *v10 = i;
      a1[16] = i;
      break;
    }
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1[26] + 15280LL), v4);
  return v2;
}
