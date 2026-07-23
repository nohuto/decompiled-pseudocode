/*
 * XREFs of PiProcessResourceRequirementsChanged @ 0x140721BF4
 * Callers:
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PoFxActivateDevice @ 0x1404909F4 (PoFxActivateDevice.c)
 *     PnpReallocateResources @ 0x140732604 (PnpReallocateResources.c)
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
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
