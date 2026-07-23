/*
 * XREFs of PsDereferenceKernelStack @ 0x140A879F0
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14021F4D8 (KeEnumerateKernelStackSegments.c)
 */

void __fastcall PsDereferenceKernelStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1516), 0xFFFFFFFF) == 1 )
  {
    KeEnumerateKernelStackSegments(a1, (void (__fastcall *)(__int64, _QWORD *, __int64))PspDeleteKernelStack, 0LL, a4);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
}
