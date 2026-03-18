/*
 * XREFs of KiFlushQueueApc @ 0x140206720
 * Callers:
 *     KeRundownApcQueues @ 0x1408A7A74 (KeRundownApcQueues.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_QWORD *)(16LL * a2 + a1 + 152);
  v9 = 0;
  if ( a2 == 1 )
  {
    KiAcquireThreadLockRaiseToDpc(a1, &v9);
    if ( (_QWORD *)*v3 != v3 )
      goto LABEL_4;
    LOBYTE(v4) = v9;
    KiReleaseThreadLockLowerIrql(a1, v4);
    return 0LL;
  }
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v9);
LABEL_4:
  v5 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
  {
    v5 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v5[1] != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v5;
    v5[1] = v7;
    v8 = v5;
    do
    {
      *((_BYTE *)v8 + 66) = 0;
      v8 = (_QWORD *)*v8;
    }
    while ( v8 != v5 );
    v3[1] = v3;
    *v3 = v3;
  }
  LOBYTE(v4) = v9;
  KiReleaseThreadLockLowerIrql(a1, v4);
  return v5;
}
