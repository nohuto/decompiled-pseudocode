/*
 * XREFs of PspInheritQuota @ 0x140A4F96C
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall PspInheritQuota(__int64 a1, __int64 a2)
{
  __int64 *result; // rax

  if ( a2 )
    result = *(__int64 **)(a2 + 760);
  else
    result = &PspSystemQuotaBlock;
  _InterlockedIncrement((volatile signed __int32 *)result + 128);
  _InterlockedIncrement((volatile signed __int32 *)result + 129);
  *(_QWORD *)(a1 + 760) = result;
  return result;
}
