/*
 * XREFs of PiIommuGetInterface @ 0x14082C4F4
 * Callers:
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     PiIommuPutInterface @ 0x140729D8C (PiIommuPutInterface.c)
 *     PnpQueryInterface @ 0x14082CC7C (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  __int64 v4; // rax
  int Interface; // ebx
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdi
  _WORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_6;
  v4 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, (PVOID)*(unsigned __int16 *)(BugCheckParameter2 + 2));
    v7 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v7 )
    {
      IoAddTriageDumpDataBlock(v7, (PVOID)(unsigned int)*(__int16 *)(v7 + 2));
      v8 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v9 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v9 )
    {
      v10 = (unsigned __int16 *)(v9 + 40);
      IoAddTriageDumpDataBlock(v9, (PVOID)0x388);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v10 + 1), (PVOID)*v10);
      }
      v11 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v11 )
      {
        IoAddTriageDumpDataBlock((ULONG)v11, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v12 && *(_WORD *)(v12 + 56) )
      {
        IoAddTriageDumpDataBlock(v12 + 56, (PVOID)2);
        v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v13 + 64), (PVOID)*(unsigned __int16 *)(v13 + 56));
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
      PiIommuPutInterface((__int64)a2);
    }
  }
  return (unsigned int)Interface;
}
