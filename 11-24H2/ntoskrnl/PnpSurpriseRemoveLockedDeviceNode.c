/*
 * XREFs of PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140A6B71C (PnpDeleteLockedDeviceNode.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x140492B28 (PipSetDevNodeState.c)
 *     PnpMarkDeviceForRemove @ 0x1404BE49C (PnpMarkDeviceForRemove.c)
 *     PiIommuUninitializeDeviceAts @ 0x1404C1094 (PiIommuUninitializeDeviceAts.c)
 *     PnpUnlockMountableDevice @ 0x1404C1E7C (PnpUnlockMountableDevice.c)
 *     PipRestoreDevNodeState @ 0x1404E6BC4 (PipRestoreDevNodeState.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x140595FD4 (IopDecrementDeviceObjectHandleCount.c)
 *     PiIommuBlockDevice @ 0x140735F28 (PiIommuBlockDevice.c)
 *     PipClearDevNodeFlags @ 0x1408BB57C (PipClearDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PipDmgDestroyIommuExtension @ 0x1409C45C8 (PipDmgDestroyIommuExtension.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PnpSurpriseRemovedDeviceNodeDependencyCheck @ 0x140A10C98 (PnpSurpriseRemovedDeviceNodeDependencyCheck.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PnpDisableDeviceInterfaces @ 0x140A10ED8 (PnpDisableDeviceInterfaces.c)
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
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  ULONG_PTR v21; // rsi
  __int64 v22; // rax
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(struct _DEVICE_OBJECT **)(MaxDataSize + 32);
  v5 = *(_DWORD *)(MaxDataSize + 300);
  v23 = 0LL;
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
    PnpMarkDeviceForRemove((ULONG_PTR)v3, 1, (ULONG_PTR *)&v23);
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
    v16 = (void *)*((_QWORD *)&v23 + 1);
    if ( *((_QWORD *)&v23 + 1) )
    {
      IopDecrementDeviceObjectHandleCount(*((ULONG_PTR *)&v23 + 1));
      ObfDereferenceObject(v16);
    }
  }
  if ( a2 && (*(_DWORD *)(MaxDataSize + 396) & 0x6000) == 0 )
    PipSetDevNodeProblem(MaxDataSize, a2, a3);
  PnpSurpriseRemovedDeviceNodeDependencyCheck(MaxDataSize);
  if ( *(_QWORD *)(MaxDataSize + 720) != v10 )
  {
    PiIommuUninitializeDeviceAts(MaxDataSize);
    v20 = PiIommuBlockDevice(*(_QWORD *)(MaxDataSize + 720), v17, v18, v19);
    v21 = v20;
    if ( v20 < 0 )
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
      v22 = *(_QWORD *)(MaxDataSize + 16);
      if ( v22 )
      {
        if ( *(_WORD *)(v22 + 56) != (_WORD)v10 )
        {
          IoAddTriageDumpDataBlock(v22 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v21, MaxDataSize);
    }
    PipDmgDestroyIommuExtension(MaxDataSize);
  }
  *(_DWORD *)(MaxDataSize + 704) &= ~0x20000u;
}
