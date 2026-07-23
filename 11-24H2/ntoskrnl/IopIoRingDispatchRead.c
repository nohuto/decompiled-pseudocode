/*
 * XREFs of IopIoRingDispatchRead @ 0x140A912F8
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopMcReleaseMdl @ 0x14059FC28 (IopMcReleaseMdl.c)
 *     IopReadFile @ 0x1408BDFD0 (IopReadFile.c)
 *     IopIoRingGetBuffer @ 0x140A96228 (IopIoRingGetBuffer.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 */

int __fastcall IopIoRingDispatchRead(PVOID a1, __int64 a2)
{
  unsigned int v2; // r8d
  char PreviousMode; // r14
  int v6; // edi
  __int64 v7; // rdx
  int result; // eax
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15[2]; // [rsp+70h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+38h] BYREF
  PVOID VirtualAddress; // [rsp+C0h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp+48h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  *(_OWORD *)v15 = 0LL;
  if ( (v2 & 0xFFFFFFFC) != 0 )
  {
    v6 = -1069154303;
LABEL_3:
    v15[1] = 0LL;
    v7 = *(_QWORD *)(a2 + 8);
    LODWORD(v15[0]) = v6;
    return IopCompleteIoRingEntry((__int64)a1, v7, v15, 0);
  }
  v9 = *(unsigned int *)(a2 + 48);
  v10 = *(_QWORD *)(a2 + 32);
  VirtualAddress = 0LL;
  v11 = v2 >> 1;
  LOBYTE(v11) = v11 & 1;
  result = IopIoRingGetBuffer(a1, v10, v11, v9, PreviousMode, 1, &VirtualAddress, &BugCheckParameter4);
  v6 = result;
  if ( result >= 0 )
  {
    LOBYTE(v13) = PreviousMode;
    v14 = *(_QWORD *)(a2 + 24);
    LOBYTE(v12) = *(_BYTE *)(a2 + 16) & 1;
    BugCheckParameter2 = 0LL;
    result = IopIoRingReferenceFileObject(a1, v14, v12, v13, 0, 1, &BugCheckParameter2, 0LL);
    v6 = result;
    if ( result >= 0 )
    {
      result = IopReadFile(
                 (struct _FILE_OBJECT *)BugCheckParameter2,
                 0LL,
                 0LL,
                 0LL,
                 (struct _IO_STATUS_BLOCK *)v15,
                 (struct _IRP *)VirtualAddress,
                 *(_DWORD *)(a2 + 48),
                 a2 + 40,
                 (ULONG *)(a2 + 52),
                 a1,
                 *(struct _IO_STATUS_BLOCK **)(a2 + 8),
                 0x80000000,
                 (PMDL *)&BugCheckParameter4,
                 0LL);
      v6 = result;
    }
  }
  if ( BugCheckParameter4 )
    result = IopMcReleaseMdl((struct _MDL *)BugCheckParameter4, 0);
  if ( v6 != 259 )
    goto LABEL_3;
  return result;
}
