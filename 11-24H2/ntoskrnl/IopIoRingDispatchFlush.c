/*
 * XREFs of IopIoRingDispatchFlush @ 0x1407141EC
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopFlushBuffersFile @ 0x140957794 (IopFlushBuffersFile.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 */

int __fastcall IopIoRingDispatchFlush(PVOID Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF
  PFILE_OBJECT FileObject; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  if ( (v4 & 0xFFFFFFFC) != 0 )
  {
    result = -1069154303;
LABEL_5:
    v9 = *(_QWORD *)(a2 + 8);
    v10 = (unsigned int)result;
    return IopCompleteIoRingEntry((__int64)Object, v9, &v10, 0);
  }
  LOBYTE(v4) = v4 & 1;
  v8 = *(_QWORD *)(a2 + 24);
  FileObject = 0LL;
  v11 = 0LL;
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  result = IopIoRingReferenceFileObject(Object, v8, v4, a4, 0, 0, &FileObject, &v11, v10, *((_QWORD *)&v10 + 1));
  if ( result < 0 )
    goto LABEL_5;
  result = IopFlushBuffersFile(FileObject, SBYTE4(v11), Object, *(_QWORD *)(a2 + 8), 0LL);
  if ( result != 259 )
    goto LABEL_5;
  return result;
}
