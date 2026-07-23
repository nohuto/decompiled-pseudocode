/*
 * XREFs of PipEnumerateCompleted @ 0x1408B6C08
 * Callers:
 *     PipProcessDevNodeTree @ 0x1408B7FE0 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     PipSetDevNodeState @ 0x14048D998 (PipSetDevNodeState.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PiSwLock @ 0x1408B6E3C (PiSwLock.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B6E6C (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiSwFindChildren @ 0x1408B7F90 (PiSwFindChildren.c)
 *     PipClearDevNodeFlags @ 0x1408B8F2C (PipClearDevNodeFlags.c)
 *     PiPnpRtlBeginOperation @ 0x1408C99A8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x1408C9B88 (PiPnpRtlEndOperation.c)
 *     PipProcessEnumeratedChildDevice @ 0x14097B4F8 (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x14097B5F8 (PipSetDevNodeFlags.c)
 *     PnpRequestDeviceRemoval @ 0x1409BF73C (PnpRequestDeviceRemoval.c)
 *     PiSwGetChildPdo @ 0x140AC1360 (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(_QWORD *MaxDataSize)
{
  _QWORD *v1; // rdi
  _QWORD **Children; // rax
  _QWORD *v4; // rdi
  __int64 *v5; // rdi
  char v6; // bp
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int i; // edi
  unsigned int *v15; // rcx
  _QWORD *v16; // rsi
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rax
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_QWORD *)MaxDataSize[1];
  P = 0LL;
  if ( MaxDataSize[66] )
  {
    while ( v1 )
    {
      PipClearDevNodeFlags(v1, 16LL);
      v1 = (_QWORD *)*v1;
    }
  }
  else
  {
    while ( v1 )
    {
      if ( *(PDRIVER_OBJECT *)(v1[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v1, 16LL);
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
      if ( !*(_QWORD *)&v15[2 * i + 2] )
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
        v20 = MaxDataSize[2];
        if ( v20 && *(_WORD *)(v20 + 56) )
        {
          IoAddTriageDumpDataBlock(v20 + 56, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(MaxDataSize[2] + 64LL),
            (PVOID)*(unsigned __int16 *)(MaxDataSize[2] + 56LL));
        }
        KeBugCheckEx(0xCAu, 8uLL, MaxDataSize[4], *(unsigned int *)MaxDataSize[66], i);
      }
      PipProcessEnumeratedChildDevice(MaxDataSize);
    }
    ExFreePoolWithTag(v15, 0);
    MaxDataSize[66] = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren(MaxDataSize + 5);
  v4 = Children;
  if ( Children )
  {
    v16 = *Children;
    while ( v16 != v4 )
    {
      v17 = v16;
      v16 = (_QWORD *)*v16;
      if ( PiSwGetChildPdo(MaxDataSize[4], v17) )
        PipProcessEnumeratedChildDevice(MaxDataSize);
    }
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v5 = (__int64 *)MaxDataSize[1];
  v6 = 0;
  if ( v5 )
  {
    do
    {
      v7 = (__int64 *)*v5;
      if ( (*((_DWORD *)v5 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v5, 0x10000LL);
        LOBYTE(v18) = 1;
        PnpRequestDeviceRemoval(v5, v18, 24LL);
        v6 = 1;
      }
      v5 = v7;
    }
    while ( v7 );
  }
  PipSetDevNodeState((__int64)MaxDataSize, 778);
  if ( !v6 || (v19 = MaxDataSize == IopRootDeviceNode, v10 = -1073741106, v19) )
    v10 = 0;
  PiPnpRtlBeginOperation(&P, v8, v9);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v12, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation(P);
  return v10;
}
