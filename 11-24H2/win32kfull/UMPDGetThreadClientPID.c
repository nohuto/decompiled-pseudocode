/*
 * XREFs of UMPDGetThreadClientPID @ 0x1401FFBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDGetThreadClientPID(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  if ( v1 )
    return *(unsigned int *)(v1 + 8);
  return result;
}
