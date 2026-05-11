/*
 * XREFs of TopologyPU3DExtender @ 0x140030FA0
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x140032C34 (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPU3DExtender(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  NTSTATUS ProcessControlRange; // ebx
  __int64 Pool2; // rax
  void *v7; // rdi

  *(_DWORD *)(a3 + 76) = 18;
  v3 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_STEREO_WIDE;
  ProcessControlRange = -1073741670;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_STEREO_WIDE;
  if ( (*(_DWORD *)(a2 + 76) & 2) != 0 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1096972357LL);
    v7 = (void *)Pool2;
    if ( Pool2 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v3, 3, 2, 655, Pool2 + 20);
      if ( ProcessControlRange < 0
        || (ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v7, ExFreePool),
            ProcessControlRange < 0) )
      {
        ExFreePool(v7);
      }
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessControlRange;
}
