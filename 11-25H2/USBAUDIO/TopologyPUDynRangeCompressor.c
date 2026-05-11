/*
 * XREFs of TopologyPUDynRangeCompressor @ 0x140031380
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x140032DA4 (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUDynRangeCompressor(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  int v4; // edi
  NTSTATUS ProcessControlRange; // ebx
  __int64 Pool2; // rax
  void *v9; // rsi
  __int64 v10; // r13
  _DWORD *v11; // r15

  *(_DWORD *)(a3 + 76) = 22;
  v3 = (_DWORD *)(a2 + 76);
  v4 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_DYN_RANGE_COMPRESSOR;
  ProcessControlRange = -1073741670;
  if ( (*(_DWORD *)(a2 + 76) & 0x3E) == 0 )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 120LL, 1096972357LL);
  v9 = (void *)Pool2;
  if ( Pool2 )
  {
    v10 = Pool2 + 20;
    v11 = v3;
    if ( (*v3 & 2) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 2, 2, 0x10000, v10);
      if ( ProcessControlRange < 0 )
      {
LABEL_15:
        ExFreePool(v9);
        return (unsigned int)ProcessControlRange;
      }
      v11 = (_DWORD *)(a2 + 76);
    }
    if ( (*v3 & 4) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 3, 2, 0x10000, v10 + 20);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
    }
    if ( (*v11 & 8) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 4, 2, 0x10000, v10 + 40);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
    }
    if ( (*v11 & 0x10) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 5, 1, 1, v10 + 60);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
    }
    if ( (*(_DWORD *)(a2 + 76) & 0x20) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 6, 1, 1, v10 + 80);
      if ( ProcessControlRange < 0 )
        goto LABEL_15;
    }
    ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v9, ExFreePool);
    if ( ProcessControlRange < 0 )
      goto LABEL_15;
  }
  return (unsigned int)ProcessControlRange;
}
