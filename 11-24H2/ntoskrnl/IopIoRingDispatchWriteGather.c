/*
 * XREFs of IopIoRingDispatchWriteGather @ 0x140714BB0
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 */

int __fastcall IopIoRingDispatchWriteGather(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10[2]; // [rsp+70h] [rbp-18h] BYREF
  __int64 v11; // [rsp+98h] [rbp+10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+18h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  LOBYTE(a4) = KeGetCurrentThread()->PreviousMode;
  *(_OWORD *)v10 = 0LL;
  if ( (v4 & 0xFFFFFFFE) != 0 )
  {
    result = -1069154303;
LABEL_5:
    v10[1] = 0LL;
    v9 = *(_QWORD *)(a2 + 8);
    LODWORD(v10[0]) = result;
    return IopCompleteIoRingEntry((__int64)a1, v9, v10, 0);
  }
  v8 = *(_QWORD *)(a2 + 24);
  BugCheckParameter2 = 0LL;
  LOBYTE(v4) = v4 & 1;
  v11 = 0LL;
  result = IopIoRingReferenceFileObject(a1, v8, v4, a4, 0, 0, &BugCheckParameter2, &v11);
  if ( result < 0 )
    goto LABEL_5;
  *(_BYTE *)(a2 + 23) = 0;
  result = IopWriteFileGather(
             BugCheckParameter2,
             (__int64)v10,
             *(_DWORD *)(a2 + 32),
             *(void **)(a2 + 40),
             *(_DWORD *)(a2 + 56),
             a2 + 48,
             a2 + 60,
             SHIDWORD(v11),
             a1,
             *(_QWORD *)(a2 + 8),
             *(_DWORD *)(a2 + 20) | 0x80000000);
  if ( result != 259 )
    goto LABEL_5;
  return result;
}
