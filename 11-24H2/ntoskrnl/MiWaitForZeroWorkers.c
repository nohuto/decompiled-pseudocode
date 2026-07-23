/*
 * XREFs of MiWaitForZeroWorkers @ 0x14027147C
 * Callers:
 *     MiZeroInParallel @ 0x140271430 (MiZeroInParallel.c)
 * Callees:
 *     MiDeleteAcceleratorDescriptor @ 0x140271A18 (MiDeleteAcceleratorDescriptor.c)
 *     KeWaitForGate @ 0x140271C4C (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForZeroWorkers(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rcx

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    result = KeWaitForGate(a1 + 120, 0LL);
  while ( 1 )
  {
    v3 = *(_QWORD **)(a1 + 80);
    if ( !v3 )
      break;
    *(_QWORD *)(a1 + 80) = *v3;
    result = MiDeleteAcceleratorDescriptor(v3 + 4);
  }
  return result;
}
