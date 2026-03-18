/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A68CA8 (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1404BFB50 (PnpMarkDeviceForRemove.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404C2898 (PiIommuUninitializeDeviceAts.c)
 *     PnpUnlockMountableDevice @ 0x1404C3480 (PnpUnlockMountableDevice.c)
 *     PipRestoreDevNodeState @ 0x1404E6DA0 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140592974 (IopDecrementDeviceObjectHandleCount.c)
 *     PiIommuBlockDevice @ 0x140729C98 (PiIommuBlockDevice.c)
 *     PipDmgDestroyIommuExtension @ 0x14082C4C0 (PipDmgDestroyIommuExtension.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409A0C30 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 *     PnpDisableDeviceInterfaces @ 0x1409A18E0 (PnpDisableDeviceInterfaces.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v4; // r12
  int v6; // ecx
  unsigned int v7; // r13d
  unsigned int v8; // r15d
  int v9; // ebp
  int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rbx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  void *v16; // rbx
  int v17; // eax
  ULONG_PTR v18; // rsi
  __int64 v19; // rax
  __int128 v20; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v6 = *(_DWORD *)(MaxDataSize + 300);
  v20 = 0LL;
  v7 = a3;
  v8 = a2;
  v9 = 768;
  if ( (unsigned int)(v6 - 784) <= 1 )
  {
    v9 = v6;
    PipRestoreDevNodeState(MaxDataSize);
  }
  v10 = *(_DWORD *)(MaxDataSize + 300);
  v11 = 0LL;
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v10 == 787 && v9 == 784 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 789);
    return;
  }
  v12 = *(_QWORD *)(MaxDataSize + 8);
  if ( v12 )
  {
    do
    {
      v13 = *(_DWORD *)(v12 + 396);
      v11 = *(_QWORD *)v12;
      if ( (v13 & 0x10) != 0 )
      {
        v13 &= ~0x10u;
        *(_DWORD *)(v12 + 396) = v13;
      }
      if ( *(_QWORD *)(v12 + 416) || *(_QWORD *)(v12 + 544) || (v13 & 0x40) != 0 )
        IopReleaseDeviceResources(v12, 0LL);
      PipSetDevNodeState(v12, 789);
      v12 = v11;
    }
    while ( v11 );
  }
  if ( v10 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v4, 1, (ULONG_PTR *)&v20);
    PnpUnlockMountableDevice((__int64)v4);
    PipClearDevNodeFlags(MaxDataSize, 0x1000000);
  }
  switch ( *(_DWORD *)(MaxDataSize + 300) )
  {
    case 0x301:
    case 0x302:
    case 0x303:
    case 0x304:
    case 0x313:
    case 0x314:
    case 0x315:
    case 0x316:
      break;
    default:
      v14 = IopRemoveDevice(v4);
      PnpDisableDeviceInterfaces(MaxDataSize + 40);
      if ( v14 >= 0 )
        IopReleaseDeviceResources(MaxDataSize, 0LL);
      v15 = MaxDataSize;
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) != 0 )
      {
        PipSetDevNodeState(MaxDataSize, 787);
        a2 = 784LL;
        if ( v9 != 784 )
          break;
        v15 = MaxDataSize;
      }
      else
      {
        LODWORD(a2) = 789;
      }
      PipSetDevNodeState(v15, a2);
      break;
  }
  if ( v10 == 780 )
  {
    v16 = (void *)*((_QWORD *)&v20 + 1);
    if ( *((_QWORD *)&v20 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v20 + 1), a2, a3, a4);
      ObfDereferenceObject(v16);
    }
  }
  if ( v8 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, v8, v7);
  PnpSurpriseRemovedDeviceNodeDependencyCheck(MaxDataSize);
  if ( *(_QWORD *)(MaxDataSize + 720) != v11 )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v17 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720));
    v18 = v17;
    if ( v17 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) != (_WORD)v11 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) != (_WORD)v11 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v19 = *(_QWORD *)(MaxDataSize + 16);
      if ( v19 )
      {
        if ( *(_WORD *)(v19 + 56) != (_WORD)v11 )
        {
          IoAddTriageDumpDataBlock(v19 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v18, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
}
