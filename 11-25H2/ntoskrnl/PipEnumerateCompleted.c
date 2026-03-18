/*
 * XREFs of PipEnumerateCompleted @ 0x14083619C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408355F8 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x140493D48 (PipSetDevNodeState.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PnpRequestDeviceRemoval @ 0x140832268 (PnpRequestDeviceRemoval.c)
 *     PipProcessEnumeratedChildDevice @ 0x1408330E8 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1408331E8 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1408350BC (PipClearDevNodeFlags.c)
 *     PiSwFindChildren @ 0x140836178 (PiSwFindChildren.c)
 *     PiSwLock @ 0x1408363D0 (PiSwLock.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlBeginOperation @ 0x1408D0818 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408D09F8 (PiPnpRtlEndOperation.c)
 *     PiSwGetChildPdo @ 0x140AC044C (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *MaxDataSize)
{
  _QWORD *v1; // rdi
  _QWORD **Children; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rdi
  char v6; // bp
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int i; // edi
  unsigned int *v15; // rcx
  ULONG_PTR v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // rdx
  ULONG_PTR ChildPdo; // rax
  bool v20; // zf
  __int64 v21; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)MaxDataSize[1];
  P = 0LL;
  if ( MaxDataSize[66] )
  {
    while ( v1 )
    {
      PipClearDevNodeFlags((__int64)v1, 16);
      v1 = (_QWORD *)*v1;
    }
  }
  else
  {
    while ( v1 )
    {
      if ( *(PDRIVER_OBJECT *)(v1[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags((__int64)v1, 16);
      v1 = (_QWORD *)*v1;
    }
  }
  if ( MaxDataSize[66] )
  {
    for ( i = 0; ; ++i )
    {
      v15 = (unsigned int *)MaxDataSize[66];
      if ( i >= *v15 )
        break;
      v16 = *(_QWORD *)&v15[2 * i + 2];
      if ( !v16 )
      {
        IoAddTriageDumpDataBlock((ULONG)MaxDataSize, (PVOID)0x388);
        if ( *((_WORD *)MaxDataSize + 20) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[6], (PVOID)*((unsigned __int16 *)MaxDataSize + 20));
        }
        if ( *((_WORD *)MaxDataSize + 28) )
        {
          IoAddTriageDumpDataBlock((_DWORD)MaxDataSize + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(MaxDataSize[8], (PVOID)*((unsigned __int16 *)MaxDataSize + 28));
        }
        v21 = MaxDataSize[2];
        if ( v21 && *(_WORD *)(v21 + 56) )
        {
          IoAddTriageDumpDataBlock(v21 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(MaxDataSize[2] + 64LL),
            (PVOID)*(unsigned __int16 *)(MaxDataSize[2] + 56LL));
        }
        KeBugCheckEx(0xCAu, 8uLL, MaxDataSize[4], *(unsigned int *)MaxDataSize[66], i);
      }
      PipProcessEnumeratedChildDevice((__int64)MaxDataSize, v16);
    }
    ExFreePoolWithTag(v15, 0);
    MaxDataSize[66] = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren((__int64)(MaxDataSize + 5));
  v4 = Children;
  if ( Children )
  {
    v17 = *Children;
    while ( v17 != v4 )
    {
      v18 = v17;
      v17 = (_QWORD *)*v17;
      ChildPdo = PiSwGetChildPdo(MaxDataSize[4], v18);
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice((__int64)MaxDataSize, ChildPdo);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v5 = MaxDataSize[1];
  v6 = 0;
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)v5;
      if ( (*(_DWORD *)(v5 + 396) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v5, 0x10000u);
        PnpRequestDeviceRemoval(v5, 1, 24, 0);
        v6 = 1;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  PipSetDevNodeState((__int64)MaxDataSize, 778);
  if ( !v6 || (v20 = MaxDataSize == IopRootDeviceNode, v10 = -1073741106, v20) )
    v10 = 0;
  PiPnpRtlBeginOperation(&P, v8, v9);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v10;
}
