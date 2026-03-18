/*
 * XREFs of PiIommuGetInterface @ 0x1409C45FC
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1409C455C (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PiIommuPutInterface @ 0x14073601C (PiIommuPutInterface.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  int Interface; // ebx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rcx
  _WORD *v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 *v13; // rdi
  _WORD *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_6;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v10 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v10 )
    {
      IoAddTriageDumpDataBlock(v10, (PVOID)(unsigned int)*(__int16 *)(v10 + 2));
      v11 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v12 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v12 )
    {
      v13 = (unsigned __int16 *)(v12 + 40);
      IoAddTriageDumpDataBlock(v12, (PVOID)0x388);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v13 + 1), (PVOID)*v13);
      }
      v14 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v15 && *(_WORD *)(v15 + 56) )
      {
        IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
        v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v16 + 64), (PVOID)*(unsigned __int16 *)(v16 + 56));
      }
    }
LABEL_6:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  Interface = PnpQueryInterface((PVOID)BugCheckParameter2, BugCheckParameter2, a2);
  if ( Interface >= 0 )
  {
    if ( a2[2] && a2[3] && a2[8] && a2[7] )
    {
      return 0;
    }
    else
    {
      Interface = -1073741637;
      PiIommuPutInterface((__int64)a2, v5, v7, v8);
    }
  }
  return (unsigned int)Interface;
}
