/*
 * XREFs of KiFlushQueueApc @ 0x14032DD00
 * Callers:
 *     KeRundownApcQueues @ 0x1408FDCCC (KeRundownApcQueues.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 */

_QWORD *__fastcall KiFlushQueueApc(__int64 a1, char a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  unsigned __int8 v8; // [rsp+38h] [rbp+10h] BYREF

  v3 = (_QWORD *)(16LL * a2 + a1 + 152);
  v8 = 0;
  if ( a2 == 1 )
  {
    KiAcquireThreadLockRaiseToDpc(a1, &v8);
    if ( (_QWORD *)*v3 != v3 )
      goto LABEL_4;
    KiReleaseThreadLockLowerIrql(a1);
    return 0LL;
  }
  if ( (_QWORD *)*v3 == v3 )
    return 0LL;
  KiAcquireThreadLockRaiseToDpc(a1, &v8);
LABEL_4:
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
  {
    v4 = 0LL;
  }
  else
  {
    if ( (_QWORD *)v4[1] != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v3) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    v7 = v4;
    do
    {
      *((_BYTE *)v7 + 66) = 0;
      v7 = (_QWORD *)*v7;
    }
    while ( v7 != v4 );
    v3[1] = v3;
    *v3 = v3;
  }
  KiReleaseThreadLockLowerIrql(a1);
  return v4;
}
