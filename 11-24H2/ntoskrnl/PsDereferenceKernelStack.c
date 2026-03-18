/*
 * XREFs of PsDereferenceKernelStack @ 0x140A8B500
 * Callers:
 *     <none>
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x140269F48 (KeEnumerateKernelStackSegments.c)
 */

__int64 __fastcall PsDereferenceKernelStack(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1516), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    result = KeEnumerateKernelStackSegments(
               a1,
               (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))PspDeleteKernelStack,
               0LL,
               a4);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  return result;
}
