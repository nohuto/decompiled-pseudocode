/*
 * XREFs of PspClearProcessThreadCidRefs @ 0x1408A8FC8
 * Callers:
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObDereferenceObjectEx @ 0x1403C5BF8 (ObDereferenceObjectEx.c)
 *     ExMapHandleToPointer @ 0x14084ACF0 (ExMapHandleToPointer.c)
 */

volatile signed __int64 *__fastcall PspClearProcessThreadCidRefs(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  volatile signed __int64 *result; // rax
  volatile unsigned __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed int v9; // edi
  _QWORD *v10; // rcx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+20h] [rbp-18h]

  --*(_WORD *)(a1 + 486);
  result = ExMapHandleToPointer(PspCidTable, a2);
  v13 = 0LL;
  v6 = *result;
  *(_QWORD *)&v13 = *result & 0xFFFFFFFFFFFE0001uLL;
  v7 = v6 >> 1;
  *result = v13;
  v8 = PspCidTable;
  v9 = (unsigned __int16)v7;
  _InterlockedIncrement64(result);
  v10 = (_QWORD *)(v8 + 48);
  _InterlockedOr(v12, 0);
  if ( *v10 )
    result = (volatile signed __int64 *)ExfUnblockPushLock((__int64)v10, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (volatile signed __int64 *)(a1 + 152);
    if ( *(volatile signed __int64 **)result != result )
      result = (volatile signed __int64 *)KiCheckForKernelApcDelivery((__int64)v10, v7);
  }
  if ( v9 )
    return (volatile signed __int64 *)ObDereferenceObjectEx(a3, v9);
  return result;
}
