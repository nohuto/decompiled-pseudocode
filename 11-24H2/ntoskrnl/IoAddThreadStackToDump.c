/*
 * XREFs of IoAddThreadStackToDump @ 0x1405A0220
 * Callers:
 *     <none>
 * Callees:
 *     IopAddStackSegmentKernelShadowStackToDump @ 0x1405A0894 (IopAddStackSegmentKernelShadowStackToDump.c)
 *     MmAddRangeToCrashDump @ 0x140677990 (MmAddRangeToCrashDump.c)
 */

void __fastcall IoAddThreadStackToDump(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax

  if ( *(int *)(a3 + 8) >= 0 )
  {
    v5 = MmAddRangeToCrashDump(*(_QWORD *)a3, a2[1], *a2 - a2[1]);
    *(_DWORD *)(a3 + 8) = v5;
    if ( v5 >= 0 )
      *(_DWORD *)(a3 + 8) = IopAddStackSegmentKernelShadowStackToDump(*(_QWORD *)a3, a2);
  }
}
