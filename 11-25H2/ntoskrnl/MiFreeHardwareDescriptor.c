/*
 * XREFs of MiFreeHardwareDescriptor @ 0x140684100
 * Callers:
 *     MiZeroThreadContextPrepareToWait @ 0x14020EEC4 (MiZeroThreadContextPrepareToWait.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140687D78 (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
 */

__int64 __fastcall MiFreeHardwareDescriptor(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  volatile LONG *v5; // rcx
  KIRQL v6; // si
  __int64 v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 result; // rax

  v2 = a2;
  v3 = a2 - 32;
  v5 = (volatile LONG *)(*(_QWORD *)(a1 + 208) + 15280LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
  }
  v7 = *(_QWORD *)(v3 + 24);
  *(_BYTE *)(v3 + 16) = 0;
  if ( (*(_DWORD *)(v7 + 52) & 1) != 0 || byte_140E37214 )
  {
    v8 = *(_QWORD *)v3;
    if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v9 = *(_QWORD **)(v3 + 8), *v9 != v3) )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
  }
  else
  {
    v2 = 0LL;
  }
  result = MiReleaseSpinLockExclusive((_DWORD *)(*(_QWORD *)(a1 + 208) + 15280LL), v6);
  if ( v2 )
    return MiDeleteAcceleratorDescriptor(v2);
  return result;
}
