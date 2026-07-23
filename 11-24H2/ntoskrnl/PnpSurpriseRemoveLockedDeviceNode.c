/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x1409BEDFC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A64C7C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1404B965C (PnpMarkDeviceForRemove.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404BC67C (PiIommuUninitializeDeviceAts.c)
 *     PnpUnlockMountableDevice @ 0x1404BD46C (PnpUnlockMountableDevice.c)
 *     PipRestoreDevNodeState @ 0x1404DD2C0 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140593004 (IopDecrementDeviceObjectHandleCount.c)
 *     PiIommuBlockDevice @ 0x140733E58 (PiIommuBlockDevice.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipDmgDestroyIommuExtension @ 0x14098237C (PipDmgDestroyIommuExtension.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x1409BF0A8 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x1409BF2E8 (PnpDisableDeviceInterfaces.c)
 */

void __fastcall PnpSurpriseRemoveLockedDeviceNode(ULONG_PTR MaxDataSize, int a2, int a3)
{
  struct _DEVICE_OBJECT *v3; // r12
  int v5; // ecx
  int v8; // ebp
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // edx
  void *v16; // rbx
  __int64 v17; // rdx
  int v18; // eax
  ULONG_PTR v19; // rsi
  __int64 v20; // rax
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v5 = *(_DWORD *)(MaxDataSize + 300);
  v21 = 0LL;
  v8 = 768;
  if ( (unsigned int)(v5 - 784) <= 1 )
  {
    v8 = v5;
    PipRestoreDevNodeState(MaxDataSize);
  }
  v9 = *(_DWORD *)(MaxDataSize + 300);
  v10 = 0LL;
  *(_WORD *)(MaxDataSize + 466) = 0;
  if ( v9 == 787 && v8 == 784 )
  {
    PipClearDevNodeFlags(MaxDataSize, 16);
    PipSetDevNodeState(MaxDataSize, 789);
    return;
  }
  v11 = *(_QWORD *)(MaxDataSize + 8);
  if ( v11 )
  {
    do
    {
      v12 = *(_DWORD *)(v11 + 396);
      v10 = *(_QWORD *)v11;
      if ( (v12 & 0x10) != 0 )
      {
        v12 &= ~0x10u;
        *(_DWORD *)(v11 + 396) = v12;
      }
      if ( *(_QWORD *)(v11 + 416) || *(_QWORD *)(v11 + 544) || (v12 & 0x40) != 0 )
        IopReleaseDeviceResources(v11, 0LL);
      PipSetDevNodeState(v11, 789);
      v11 = v10;
    }
    while ( v10 );
  }
  if ( v9 == 780 && (*(_DWORD *)(MaxDataSize + 396) & 0x1000000) != 0 )
  {
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, (ULONG_PTR *)&v21);
    PnpUnlockMountableDevice((__int64)v3);
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
      v13 = IopRemoveDevice(v3, 23);
      PnpDisableDeviceInterfaces(MaxDataSize + 40);
      if ( v13 >= 0 )
        IopReleaseDeviceResources(MaxDataSize, 0LL);
      v14 = MaxDataSize;
      if ( (*(_DWORD *)(MaxDataSize + 396) & 0x10) != 0 )
      {
        PipSetDevNodeState(MaxDataSize, 787);
        v15 = 784;
        if ( v8 != 784 )
          break;
        v14 = MaxDataSize;
      }
      else
      {
        v15 = 789;
      }
      PipSetDevNodeState(v14, v15);
      break;
  }
  if ( v9 == 780 )
  {
    v16 = (void *)*((_QWORD *)&v21 + 1);
    if ( *((_QWORD *)&v21 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v21 + 1));
      ObfDereferenceObject(v16);
    }
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  PnpSurpriseRemovedDeviceNodeDependencyCheck(MaxDataSize);
  if ( *(_QWORD *)(MaxDataSize + 720) != v10 )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v18 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720), v17);
    v19 = v18;
    if ( v18 < 0 )
    {
      IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)0x388);
      if ( *(_WORD *)(MaxDataSize + 40) != (_WORD)v10 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 40, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) != (_WORD)v10 )
      {
        IoAddTriageDumpDataBlock(MaxDataSize + 56, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v20 = *(_QWORD *)(MaxDataSize + 16);
      if ( v20 )
      {
        if ( *(_WORD *)(v20 + 56) != (_WORD)v10 )
        {
          IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v19, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
}
