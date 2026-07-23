/*
 * XREFs of RtlpOptimizeSRWLockList @ 0x1800E3BEC
 * Callers:
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 * Callees:
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpOptimizeSRWLockList(volatile signed __int64 *a1, signed __int64 a2)
{
  volatile signed __int64 *v2; // r9
  _QWORD *v3; // rcx
  bool v4; // zf
  __int64 result; // rax
  volatile signed __int64 *v6; // rdi
  unsigned __int64 v7; // r8
  _QWORD *v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax
  signed __int64 v11; // rax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rax

  v2 = a1;
  while ( (a2 & 1) != 0 )
  {
    v3 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( !*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) )
    {
      do
      {
        v13 = v3;
        v3 = (_QWORD *)*v3;
        v3[2] = v13;
        v14 = v3[1];
      }
      while ( !v14 );
      if ( v3 != (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL) )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v14;
    }
    result = _InterlockedCompareExchange64(v2, a2 - 4, a2);
    v4 = a2 == result;
    a2 = result;
    if ( v4 )
      return result;
  }
  v6 = v2;
  while ( 1 )
  {
    while ( (a2 & 1) != 0 )
    {
      result = _InterlockedCompareExchange64(v2, a2 - 4, a2);
      v4 = a2 == result;
      a2 = result;
      if ( v4 )
        return result;
    }
    v7 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v8 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v9 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v9 )
    {
      do
      {
        v15 = v8;
        v8 = (_QWORD *)*v8;
        v8[2] = v15;
        v9 = v8[1];
      }
      while ( !v9 );
      if ( v8 != (_QWORD *)v7 )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v9;
    }
    if ( (*(_DWORD *)(v9 + 36) & 1) != 0 )
    {
      v10 = *(_QWORD *)(v9 + 16);
      if ( v10 )
        break;
    }
    v6 = 0LL;
    v11 = _InterlockedCompareExchange64(v2, 0LL, a2);
    v4 = a2 == v11;
    a2 = v11;
    if ( v4 )
      goto LABEL_14;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v10;
  *(_QWORD *)(v9 + 16) = 0LL;
  _InterlockedAnd64(v2, 0xFFFFFFFFFFFFFFFBuLL);
  do
  {
LABEL_14:
    v12 = *(_QWORD *)(v9 + 16);
    result = *(_QWORD *)(v9 + 24);
    _interlockedbittestandset((volatile signed __int32 *)(v9 + 36), 2u);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v9 + 36), 1u) )
      result = ZwAlertThreadByThreadIdEx(result, v6, v7, v2);
    v9 = v12;
  }
  while ( v12 );
  return result;
}
