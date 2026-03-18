/*
 * XREFs of KeUnsecureProcess @ 0x1405B8510
 * Callers:
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 * Callees:
 *     VslCloseSecureHandle @ 0x1404B1B10 (VslCloseSecureHandle.c)
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
