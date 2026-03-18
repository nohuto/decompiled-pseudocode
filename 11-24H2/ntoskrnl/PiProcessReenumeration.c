/*
 * XREFs of PiProcessReenumeration @ 0x140A437D8
 * Callers:
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     PipProcessDevNodeTree @ 0x1408BA630 (PipProcessDevNodeTree.c)
 *     PipClearDevNodeFlags @ 0x1408BB57C (PipClearDevNodeFlags.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140A438A0 (PiMarkDeviceTreeForReenumeration.c)
 */

__int64 __fastcall PiProcessReenumeration(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rdi
  int v6; // esi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(v3[39] + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v4 + 300) - 789) > 1 )
  {
    if ( *(_DWORD *)(a1 + 24) == 8 )
    {
      if ( *(_BYTE *)(a1 + 40) )
        PipClearDevNodeFlags(*(_QWORD *)(v3[39] + 40LL), 0x80000000);
      v6 = 1;
    }
    else
    {
      v6 = 2;
    }
    LOBYTE(a2) = v6 != 1;
    PiMarkDeviceTreeForReenumeration(v4, a2);
    BYTE4(v7) = PnPBootDriversInitialized;
    LODWORD(v7) = 3;
    PipProcessDevNodeTree(v4, a1, (int)&v7, v6, 0, 0, 0);
    return 0LL;
  }
  else
  {
    ObfDereferenceObject(v3);
    return 3221225558LL;
  }
}
