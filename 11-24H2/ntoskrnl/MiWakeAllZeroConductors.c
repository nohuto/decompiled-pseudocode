/*
 * XREFs of MiWakeAllZeroConductors @ 0x140690FE4
 * Callers:
 *     MiDeleteHardwareAccelerators @ 0x140691B9C (MiDeleteHardwareAccelerators.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     PsGetNextPartition @ 0x14026227C (PsGetNextPartition.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 */

_QWORD *MiWakeAllZeroConductors()
{
  _QWORD *result; // rax
  unsigned int v1; // ebx
  __int64 i; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  KIRQL v5; // di
  _QWORD *v6; // r14

  for ( result = PsGetNextPartition(0LL); ; result = PsGetNextPartition(v6) )
  {
    v6 = result;
    if ( !result )
      break;
    v1 = 0;
    for ( i = *result; v1 < (unsigned __int16)KeNumberNodes; ++v1 )
    {
      v3 = *(_QWORD *)(i + 16) + 57216LL * v1;
      v4 = *(_QWORD *)(v3 + 15272);
      if ( v4 )
      {
        v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 15280));
        KeSetEvent((PRKEVENT)(v4 + 88), 0, 0);
        MiReleaseSpinLockExclusive((_DWORD *)(v3 + 15280), v5);
      }
    }
  }
  return result;
}
