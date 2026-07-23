/*
 * XREFs of MiChargeCrossPartitionSharedPage @ 0x140269A90
 * Callers:
 *     MiReferenceCloneProto @ 0x140294790 (MiReferenceCloneProto.c)
 * Callees:
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 */

__int64 __fastcall MiChargeCrossPartitionSharedPage(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // rdx
  __int64 result; // rax

  v6 = 0LL;
  if ( a2 != a1 && !*(_QWORD *)(a3 + 8) )
    v6 = 5LL;
  if ( a4 && (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFE0LL) == 0 )
    v6 = (unsigned int)v6 | 2;
  if ( !(_DWORD)v6 || (result = MiGetCloneCharges(a1, v6), (_DWORD)result) )
  {
    if ( a2 != a1 )
      ++*(_QWORD *)(a3 + 8);
    if ( a4 )
      *(_QWORD *)(a3 + 16) = ((*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFE0uLL) + 32) ^ (*(_QWORD *)(a3 + 16) ^ ((*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFE0uLL) + 32)) & 0xF00000000000001FuLL;
    return 1LL;
  }
  return result;
}
