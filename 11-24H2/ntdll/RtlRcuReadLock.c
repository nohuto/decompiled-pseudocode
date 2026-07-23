/*
 * XREFs of RtlRcuReadLock @ 0x180146060
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlpRcuCurrentThreadData @ 0x1801461F8 (RtlpRcuCurrentThreadData.c)
 */

void __fastcall RtlRcuReadLock(_RTL_SRWLOCK *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = (_QWORD *)RtlpRcuCurrentThreadData(a1, 1LL);
  *a2 = v4;
  if ( v4 )
  {
    if ( ++*v4 == 1LL )
    {
      v4[2] = a1[2].Value & 0xFFFFFFFFFFFFFFFEuLL;
      _InterlockedOr(v5, 0);
    }
    else if ( !*v4 )
    {
      __fastfail(0xEu);
    }
  }
  else
  {
    RtlAcquireSRWLockShared(a1 + 15);
  }
}
