/*
 * XREFs of RtlpWakeSRWLock @ 0x1800D84B0
 * Callers:
 *     RtlConvertSRWLockExclusiveToShared @ 0x180138C90 (RtlConvertSRWLockExclusiveToShared.c)
 * Callees:
 *     ZwAlertThreadByThreadIdEx @ 0x180160E80 (ZwAlertThreadByThreadIdEx.c)
 */

__int64 __fastcall RtlpWakeSRWLock(volatile signed __int64 *a1, signed __int64 a2, char a3)
{
  volatile signed __int64 *v5; // rdi
  unsigned __int64 v6; // r8
  _QWORD *v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // rax
  bool v11; // zf
  signed __int64 v12; // rax
  __int64 v13; // rbx
  _QWORD *v14; // rax

  v5 = a1;
  while ( 1 )
  {
    if ( !a3 )
    {
      while ( (a2 & 1) != 0 )
      {
        result = _InterlockedCompareExchange64(a1, a2 - 4, a2);
        v11 = a2 == result;
        a2 = result;
        if ( v11 )
          return result;
      }
    }
    v6 = a2 & 0xFFFFFFFFFFFFFFF0uLL;
    v7 = (_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8);
    if ( !v8 )
    {
      do
      {
        v14 = v7;
        v7 = (_QWORD *)*v7;
        v7[2] = v14;
        v8 = v7[1];
      }
      while ( !v8 );
      if ( v7 != (_QWORD *)v6 )
        *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v8;
    }
    result = *(unsigned int *)(v8 + 36);
    if ( (result & 1) != 0 )
    {
      if ( a3 )
      {
        _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
        return result;
      }
      v10 = *(_QWORD *)(v8 + 16);
      if ( v10 )
        break;
    }
    v5 = 0LL;
    v6 = a3 != 0 ? 0x11 : 0;
    v12 = _InterlockedCompareExchange64(a1, v6, a2);
    v11 = a2 == v12;
    a2 = v12;
    if ( v11 )
      goto LABEL_13;
  }
  *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF0uLL) + 8) = v10;
  *(_QWORD *)(v8 + 16) = 0LL;
  _InterlockedAnd64(a1, 0xFFFFFFFFFFFFFFFBuLL);
  do
  {
LABEL_13:
    v13 = *(_QWORD *)(v8 + 16);
    result = *(_QWORD *)(v8 + 24);
    _interlockedbittestandset((volatile signed __int32 *)(v8 + 36), 2u);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 36), 1u) )
      result = ZwAlertThreadByThreadIdEx(result, v5, v6, v7);
    v8 = v13;
  }
  while ( v13 );
  return result;
}
