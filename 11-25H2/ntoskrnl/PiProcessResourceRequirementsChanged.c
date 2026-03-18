/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x140717F64
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14047D544 (PoFxActivateDevice.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 */

__int64 __fastcall PiProcessResourceRequirementsChanged(__int64 a1)
{
  unsigned int v1; // esi
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  _DWORD *v5; // r14
  __int64 v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v3 = *(_QWORD **)(a1 + 16);
  v9 = 0LL;
  if ( v3 )
    v4 = *(_QWORD *)(v3[39] + 40LL);
  else
    v4 = 0LL;
  ObfReferenceObjectWithTag(v3, 0x65706E50u);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 789) <= 1 )
  {
    v1 = -1073741738;
    v5 = (_DWORD *)(v4 + 704);
  }
  else
  {
    PoFxActivateDevice(*(_QWORD *)(a1 + 16));
    v5 = (_DWORD *)(v4 + 704);
    *(_DWORD *)(v4 + 704) |= 0x40u;
    PipClearDevNodeFlags(v4, 256LL);
    PipSetDevNodeFlags(v4, 1024LL);
    PipClearDevNodeProblem(v4);
    if ( *(_DWORD *)(v4 + 300) == 778 )
    {
      if ( *(_BYTE *)(a1 + 40) )
        PipClearDevNodeFlags(v4, 2048LL);
      else
        PipSetDevNodeFlags(v4, 2048LL);
      PnpReallocateResources(v4);
      v6 = *(_QWORD *)(a1 + 48);
      LODWORD(v9) = 3;
      BYTE4(v9) = PnPBootDriversInitialized;
      PsReferenceSiloContext(*((void **)IopRootDeviceNode + 4));
      v7 = PipProcessDevNodeTree((_DWORD)IopRootDeviceNode, a1, (unsigned int)&v9, 0, 0, v6 != 0, 0);
      if ( v7 >= 0 )
        v1 = v7;
    }
    else
    {
      v1 = -1073741823;
    }
  }
  if ( (*v5 & 0x40) != 0 )
  {
    PoFxIdleDevice(*(_QWORD *)(v4 + 32));
    *v5 &= ~0x40u;
  }
  ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x65706E50u);
  return v1;
}
