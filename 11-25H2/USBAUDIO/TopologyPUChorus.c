/*
 * XREFs of TopologyPUChorus @ 0x140031200
 * Callers:
 *     <none>
 * Callees:
 *     PropertyGetProcessControlRange @ 0x140032DA4 (PropertyGetProcessControlRange.c)
 */

__int64 __fastcall TopologyPUChorus(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // rsi
  int v4; // ebp
  NTSTATUS ProcessControlRange; // ebx
  __int64 Pool2; // rax
  void *v9; // rdi
  __int64 v10; // r12
  _DWORD *v11; // r15

  *(_DWORD *)(a3 + 76) = 20;
  v3 = (_DWORD *)(a2 + 76);
  v4 = a3;
  *(_QWORD *)(a3 + 8) = &KSNODETYPE_CHORUS;
  *(_QWORD *)(a3 + 16) = &KSNODETYPE_CHORUS;
  ProcessControlRange = -1073741670;
  if ( (*(_DWORD *)(a2 + 76) & 0xE) == 0 )
    return 0;
  Pool2 = ExAllocatePool2(64LL, 80LL, 1096972357LL);
  v9 = (void *)Pool2;
  if ( Pool2 )
  {
    v10 = Pool2 + 20;
    v11 = v3;
    if ( (*v3 & 2) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 2, 1, 655, v10);
      if ( ProcessControlRange < 0 )
      {
LABEL_11:
        ExFreePool(v9);
        return (unsigned int)ProcessControlRange;
      }
      v11 = (_DWORD *)(a2 + 76);
    }
    if ( (*v3 & 4) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 3, 2, 256, v10 + 20);
      if ( ProcessControlRange < 0 )
        goto LABEL_11;
    }
    if ( (*v11 & 8) != 0 )
    {
      ProcessControlRange = PropertyGetProcessControlRange(a1, v4, 4, 2, 1, v10 + 40);
      if ( ProcessControlRange < 0 )
        goto LABEL_11;
    }
    ProcessControlRange = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v9, ExFreePool);
    if ( ProcessControlRange < 0 )
      goto LABEL_11;
  }
  return (unsigned int)ProcessControlRange;
}
