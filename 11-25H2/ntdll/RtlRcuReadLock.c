/*
 * XREFs of RtlRcuReadLock @ 0x180149260
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004F0C0 (RtlAcquireSRWLockShared.c)
 *     RtlpRcuCurrentThreadData @ 0x1801493F8 (RtlpRcuCurrentThreadData.c)
 */

_QWORD *__fastcall RtlRcuReadLock(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  _QWORD *v5; // rdx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (_QWORD *)RtlpRcuCurrentThreadData(a1, 1LL);
  *a2 = result;
  v5 = result;
  if ( !result )
    return (_QWORD *)RtlAcquireSRWLockShared((volatile signed __int64 *)(a1 + 120));
  if ( ++*result == 1LL )
  {
    result = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFFEuLL);
    v5[2] = result;
    _InterlockedOr(v6, 0);
  }
  else if ( !*result )
  {
    __fastfail(0xEu);
  }
  return result;
}
