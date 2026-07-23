/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1408FF228
 * Callers:
 *     PspExitThread @ 0x1408FDFF0 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     ObDereferenceObjectEx @ 0x1403B47B8 (ObDereferenceObjectEx.c)
 *     ExMapHandleToPointer @ 0x140846FB0 (ExMapHandleToPointer.c)
 */

volatile signed __int64 *__fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *result; // rax
  volatile unsigned __int64 v6; // rdx
  __int64 v7; // rcx
  signed int v8; // edi
  _QWORD *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  result = ExMapHandleToPointer(PspCidTable, a2);
  v12 = 0LL;
  v6 = *result;
  *(_QWORD *)&v12 = *result & 0xFFFFFFFFFFFE0001uLL;
  *result = v12;
  v7 = PspCidTable;
  v8 = (unsigned __int16)(v6 >> 1);
  _InterlockedIncrement64(result);
  v9 = (_QWORD *)(v7 + 48);
  _InterlockedOr(v11, 0);
  if ( *v9 )
    result = (volatile signed __int64 *)ExfUnblockPushLock((__int64)v9, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (volatile signed __int64 *)(a1 + 152);
    if ( *(volatile signed __int64 **)result != result )
      result = (volatile signed __int64 *)KiCheckForKernelApcDelivery();
  }
  if ( v8 )
    return (volatile signed __int64 *)ObDereferenceObjectEx(a3, v8);
  return result;
}
