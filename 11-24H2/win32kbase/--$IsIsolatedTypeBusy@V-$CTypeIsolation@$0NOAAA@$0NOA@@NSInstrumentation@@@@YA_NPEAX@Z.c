/*
 * XREFs of ??$IsIsolatedTypeBusy@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YA_NPEAX@Z @ 0x1400CDF60
 * Callers:
 *     GreCreateDisplayDC @ 0x14000E640 (GreCreateDisplayDC.c)
 * Callees:
 *     ?W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140041080 (-W32ReleasePushLockShared@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

char __fastcall IsIsolatedTypeBusy<NSInstrumentation::CTypeIsolation<909312,3552>>(unsigned __int64 a1)
{
  char v2; // bl
  _QWORD *v3; // r14
  struct W32_PUSH_LOCK *v4; // rsi
  _QWORD *i; // rcx
  _QWORD *v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r9

  v2 = 0;
  v3 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL) + 48LL);
  if ( !v3 )
    return 0;
  if ( a1 )
  {
    v4 = (struct W32_PUSH_LOCK *)v3[2];
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
    {
      if ( i == v3 )
        goto LABEL_9;
      v6 = (_QWORD *)i[4];
      v7 = v6[1] ^ v6[2];
      if ( a1 >= v7 && a1 < v7 + 909312 )
        break;
    }
    v8 = ((a1 & 0xFFF) * (unsigned __int128)0x27350B88127350B9uLL) >> 64;
    v9 = (v8 + (((a1 & 0xFFF) - v8) >> 1)) >> 11;
    if ( (a1 & 0xFFF) != 3552 * v9
      || !RtlTestBit(
            (PRTL_BITMAP)(v6[3] ^ v6[2]),
            v9 + (((unsigned int)a1 - (*((_DWORD *)v6 + 2) ^ (unsigned int)v6[2])) >> 12)) )
    {
LABEL_9:
      W32ReleasePushLockShared(v4);
      return v2;
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    return 1;
  }
  return v2;
}
