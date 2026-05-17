/*
 * XREFs of RtlInitBarrier @ 0x18013F630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitBarrier(__int64 a1, int a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax

  v2 = (a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v2 )
    return 3221225485LL;
  result = 0LL;
  *(_DWORD *)(v2 + 16) = a2;
  *(_QWORD *)(v2 + 8) = 0LL;
  *(_QWORD *)v2 = 0LL;
  return result;
}
