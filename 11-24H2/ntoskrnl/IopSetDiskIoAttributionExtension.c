/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1403743E4
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140374A90 (IopSetDiskIoAttributionFromProcess.c)
 *     IoMakeAssociatedIrpPriv @ 0x140374CE8 (IoMakeAssociatedIrpPriv.c)
 *     IoUpdateIrpIoAttributionHandle @ 0x140375350 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPropagateIrpExtensionEx @ 0x1403756E0 (IoPropagateIrpExtensionEx.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x14043F740 (IopReferenceIoAttributionFromProcess.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _WORD *v4; // rbx
  __int64 v8; // rcx
  _WORD *v10; // rax
  __int64 Pool2; // rax
  char v12; // al
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v4 = *(_WORD **)(a1 + 200);
  if ( v4 )
  {
    if ( *(char *)(a1 + 71) >= 0 )
    {
      v4[1] |= 0x40u;
      goto LABEL_5;
    }
    Pool2 = ExAllocatePool2(0x40uLL);
    v4 = (_WORD *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 2) = 68;
      *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(a1 + 200);
      v12 = *(_BYTE *)(a1 + 71) & 0x3F;
      *(_QWORD *)(a1 + 200) = v4;
      *(_BYTE *)(a1 + 71) = v12 | 0x40;
      *v4 |= 1u;
      goto LABEL_5;
    }
  }
  else
  {
    v10 = (_WORD *)ExAllocatePool2(0x40uLL);
    v4 = v10;
    if ( v10 )
    {
      v10[1] = 64;
      *(_BYTE *)(a1 + 71) |= 0x40u;
      *(_QWORD *)(a1 + 200) = v10;
      *v10 |= 1u;
      goto LABEL_5;
    }
  }
  if ( !v4 )
    return 3221225626LL;
LABEL_5:
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 1532) & 0x1000) != 0
    && *(_QWORD *)(v8 + 672)
    && *(_QWORD *)(*(_QWORD *)(v8 + 672) + 1584LL)
    && (a4 & 1) == 0 )
  {
    LOBYTE(a2) = 1;
    IopReferenceIoAttributionFromProcess(v8, a2, &v13);
  }
  *((_QWORD *)v4 + 2) = v13;
  return 0LL;
}
