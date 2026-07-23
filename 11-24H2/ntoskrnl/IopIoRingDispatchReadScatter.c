/*
 * XREFs of IopIoRingDispatchReadScatter @ 0x1407142CC
 * Callers:
 *     IopProcessIoRingEntry @ 0x1406F5A58 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x1403B4AE0 (IopCompleteIoRingEntry.c)
 *     IopReadFileScatter @ 0x140A8AFD8 (IopReadFileScatter.c)
 *     IopIoRingReferenceFileObject @ 0x140AB5C7C (IopIoRingReferenceFileObject.c)
 */

int __fastcall IopIoRingDispatchReadScatter(PVOID a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int result; // eax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10[2]; // [rsp+60h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+10h] BYREF

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
  LOBYTE(v4) = v4 & 1;
  BugCheckParameter2 = 0LL;
  result = IopIoRingReferenceFileObject(a1, v8, v4, a4, 0, 1, &BugCheckParameter2, 0LL);
  if ( result < 0 )
    goto LABEL_5;
  result = IopReadFileScatter(
             BugCheckParameter2,
             (__int64)v10,
             *(_DWORD *)(a2 + 32),
             *(void **)(a2 + 40),
             *(_DWORD *)(a2 + 56),
             a2 + 48,
             a2 + 60,
             a1,
             *(_QWORD *)(a2 + 8));
  if ( result != 259 )
    goto LABEL_5;
  return result;
}
