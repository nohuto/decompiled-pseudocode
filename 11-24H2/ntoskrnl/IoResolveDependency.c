/*
 * XREFs of IoResolveDependency @ 0x1404B4110
 * Callers:
 *     <none>
 * Callees:
 *     PipAddBindingId @ 0x14071BF24 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x14071C21C (PipCreateDependencyNode.c)
 *     PipDeleteBindingId @ 0x14071C30C (PipDeleteBindingId.c)
 *     PipIsProviderStarted @ 0x14071C3E0 (PipIsProviderStarted.c)
 *     PipLinkDeviceObjectAndDependencyNode @ 0x14071C440 (PipLinkDeviceObjectAndDependencyNode.c)
 *     PipMergeDependencyNodes @ 0x14071C5C8 (PipMergeDependencyNodes.c)
 *     PipAttemptDependentsStart @ 0x140979A94 (PipAttemptDependentsStart.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1409BD598 (PnpAcquireDependencyRelationsLock.c)
 *     PipAddDependentsToRebuildPowerRelationsQueue @ 0x1409BD5E8 (PipAddDependentsToRebuildPowerRelationsQueue.c)
 *     PipProcessRebuildPowerRelationsQueue @ 0x1409BD654 (PipProcessRebuildPowerRelationsQueue.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1409BDC24 (PnpReleaseDependencyRelationsLock.c)
 *     PipAddtoRebuildPowerRelationsQueue @ 0x1409BDF84 (PipAddtoRebuildPowerRelationsQueue.c)
 *     PipQueryBindingResolution @ 0x140A67300 (PipQueryBindingResolution.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x140AAF8E0 (PipUnlinkDeviceObjectAndDependencyNode.c)
 *     PipDereferenceDependencyNode @ 0x140AAF930 (PipDereferenceDependencyNode.c)
 */

__int64 __fastcall IoResolveDependency(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  v2 = a1;
  v18 = 1LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  v19 = v2;
  v4 = PipQueryBindingResolution(&v18);
  v7 = v4;
  if ( !v4 )
    goto LABEL_6;
  v8 = *(_QWORD *)(v4 + 48);
  if ( !v8 )
  {
    v9 = 0;
    if ( a2 )
    {
      v11 = *(_QWORD *)(a2 + 312);
      if ( *(_QWORD *)(v11 + 80) )
      {
        PipMergeDependencyNodes(*(_QWORD *)(v11 + 80), v7);
        goto LABEL_21;
      }
    }
    PipLinkDeviceObjectAndDependencyNode(a2, v7);
LABEL_20:
    if ( !a2 )
    {
LABEL_25:
      PipAddtoRebuildPowerRelationsQueue(a2);
      PipAddDependentsToRebuildPowerRelationsQueue(a2);
      ((void (*)(void))PnpReleaseDependencyRelationsLock)();
      PipProcessRebuildPowerRelationsQueue();
      return (unsigned int)v9;
    }
LABEL_21:
    v14 = *(_QWORD *)(a2 + 312);
    v15 = *(_QWORD *)(v14 + 40);
    if ( v15 && (*(_DWORD *)(v15 + 396) & 0x20000) == 0 && (unsigned __int8)PipIsProviderStarted(*(_QWORD *)(v14 + 40)) )
      PipAttemptDependentsStart(v16);
    goto LABEL_25;
  }
  if ( v8 != a2 )
  {
    PipDeleteBindingId(v7, v2);
LABEL_6:
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 312);
      if ( *(_QWORD *)(v10 + 80) )
      {
        v9 = PipAddBindingId(*(_QWORD *)(v10 + 80), v2);
        if ( v9 < 0 )
          goto LABEL_18;
        goto LABEL_21;
      }
    }
    LODWORD(v18) = 0;
    v19 = a2;
    v12 = PipCreateDependencyNode(&v18, v5, v7);
    v13 = v12;
    if ( !v12 )
    {
      v9 = -1073741670;
      goto LABEL_18;
    }
    v9 = PipAddBindingId(v12, v2);
    if ( v9 < 0 )
    {
      PipUnlinkDeviceObjectAndDependencyNode(a2, v13);
      PipDereferenceDependencyNode(v13);
      goto LABEL_18;
    }
    PipDereferenceDependencyNode(v13);
    goto LABEL_20;
  }
  v9 = 0;
LABEL_18:
  PnpReleaseDependencyRelationsLock(v6, v5, v7);
  return (unsigned int)v9;
}
