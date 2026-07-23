/*
 * XREFs of IopIoRingDispatchWrite @ 0x140714A08
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopFileObjectRevoked @ 0x140405E80 (IopFileObjectRevoked.c)
 *     IopMcReleaseMdl @ 0x14059FC28 (IopMcReleaseMdl.c)
 *     IopWriteFile @ 0x1408BEFF0 (IopWriteFile.c)
 *     IopIoRingGetBuffer @ 0x140A96228 (IopIoRingGetBuffer.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 */

int __fastcall IopIoRingDispatchWrite(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  char PreviousMode; // r14
  int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  int result; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  PVOID v14; // rbx
  __int64 v15; // rdx
  char v16; // [rsp+20h] [rbp-39h]
  char v17; // [rsp+28h] [rbp-31h]
  __int64 v18; // [rsp+70h] [rbp+17h] BYREF
  __int64 v19[2]; // [rsp+78h] [rbp+1Fh] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+C8h] [rbp+6Fh] BYREF
  PVOID Object; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  BugCheckParameter4 = 0LL;
  *(_OWORD *)v19 = 0LL;
  if ( (v2 & 0xFFFFFFFC) != 0 )
  {
    v6 = -1069154303;
LABEL_11:
    v19[1] = 0LL;
    v15 = *(_QWORD *)(a2 + 8);
    LODWORD(v19[0]) = v6;
    return IopCompleteIoRingEntry(a1, v15, v19, 0);
  }
  v7 = *(unsigned int *)(a2 + 48);
  v8 = *(_QWORD *)(a2 + 32);
  v18 = 0LL;
  v9 = v2 >> 1;
  v17 = 0;
  LOBYTE(v9) = v9 & 1;
  v16 = PreviousMode;
  result = IopIoRingGetBuffer(a1, v8, v9, v7, v16, v17, &v18, &BugCheckParameter4);
  v6 = result;
  if ( result >= 0 )
  {
    v13 = *(_QWORD *)(a2 + 24);
    LOBYTE(v11) = *(_BYTE *)(a2 + 16) & 1;
    Object = 0LL;
    LOBYTE(v12) = PreviousMode;
    v22 = 0LL;
    result = IopIoRingReferenceFileObject(a1, v13, v11, v12, 1, 0, &Object, &v22);
    v6 = result;
    if ( result >= 0 )
    {
      v14 = Object;
      if ( IopFileObjectRevoked((__int64)Object) )
      {
        result = ObfDereferenceObject(v14);
        v6 = -1073739504;
      }
      else
      {
        *(_BYTE *)(a2 + 23) = 0;
        result = IopWriteFile(
                   (ULONG_PTR)v14,
                   (__int64)v19,
                   v18,
                   *(_DWORD *)(a2 + 48),
                   a2 + 40,
                   a2 + 52,
                   SHIDWORD(v22),
                   a1,
                   *(_QWORD *)(a2 + 8),
                   *(_DWORD *)(a2 + 20) | 0x80000000,
                   (__int64)&BugCheckParameter4);
        v6 = result;
      }
    }
  }
  if ( BugCheckParameter4 )
    result = IopMcReleaseMdl((struct _MDL *)BugCheckParameter4, 0);
  if ( v6 != 259 )
    goto LABEL_11;
  return result;
}
