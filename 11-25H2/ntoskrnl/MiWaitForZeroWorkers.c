/*
 * XREFs of MiWaitForZeroWorkers @ 0x140418074
 * Callers:
 *     MiZeroInParallel @ 0x140418028 (MiZeroInParallel.c)
 * Callees:
 *     MiDeleteAcceleratorDescriptor @ 0x140418610 (MiDeleteAcceleratorDescriptor.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
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
