/*
 * XREFs of UMPDGetThreadClientThread @ 0x14020C0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UMPDGetThreadClientThread(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 64);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)v1;
  return result;
}
