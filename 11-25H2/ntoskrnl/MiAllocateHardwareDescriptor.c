/*
 * XREFs of MiAllocateHardwareDescriptor @ 0x140683CB4
 * Callers:
 *     MiTryZeroMemory @ 0x140210860 (MiTryZeroMemory.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 */

__int64 *__fastcall MiAllocateHardwareDescriptor(_QWORD *a1)
{
  __int64 *v2; // rdi
  volatile LONG *v3; // rcx
  KIRQL v4; // si
  __int64 *v5; // rcx
  __int64 *i; // rax
  __int64 *v7; // rdx
  __int64 **v8; // r8
  __int64 **v9; // rdx

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
    v7 = (__int64 *)*i;
    if ( !*((_BYTE *)i + 16) )
    {
      if ( (__int64 *)v7[1] != i
        || (v8 = (__int64 **)i[1], *v8 != i)
        || (*v8 = v7, v2 = i + 4, v7[1] = (__int64)v8, *((_BYTE *)i + 16) = 1, v9 = (__int64 **)a1[16], *v9 != v5) )
      {
        __fastfail(3u);
      }
      *i = (__int64)v5;
      i[1] = (__int64)v9;
      *v9 = i;
      a1[16] = i;
      break;
    }
  }
  MiReleaseSpinLockExclusive((_DWORD *)(a1[26] + 15280LL), v4);
  return v2;
}
