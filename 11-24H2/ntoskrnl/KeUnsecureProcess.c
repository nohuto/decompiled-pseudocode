/*
 * XREFs of KeUnsecureProcess @ 0x1405B5AF0
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x1404AC3A0 (VslCloseSecureHandle.c)
 */

__int64 __fastcall KeUnsecureProcess(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0LL;
  if ( result )
    return VslCloseSecureHandle(result);
  return result;
}
