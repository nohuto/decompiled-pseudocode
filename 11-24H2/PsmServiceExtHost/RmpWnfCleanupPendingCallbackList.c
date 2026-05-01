/*
 * XREFs of RmpWnfCleanupPendingCallbackList @ 0x180066434
 * Callers:
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DAB8 (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x1800412CC (-HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     CempListRemoveHeadAndClear @ 0x18006374C (CempListRemoveHeadAndClear.c)
 */

BOOLEAN __fastcall RmpWnfCleanupPendingCallbackList(_QWORD *P)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx
  char v4; // bl
  BOOLEAN result; // al
  _QWORD *v6; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  RtlAcquireSRWLockExclusive(P + 3);
  v2 = (_QWORD *)*P;
  if ( (_QWORD *)*P != P )
  {
    *((_QWORD *)&v7 + 1) = P[1];
    *(_QWORD *)&v7 = v2;
    v2[1] = &v7;
    **((_QWORD **)&v7 + 1) = &v7;
    P[1] = P;
    *P = P;
    while ( (__int128 *)v7 != &v7 )
    {
      v6 = CempListRemoveHeadAndClear((_QWORD **)&v7);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
    }
  }
  v3 = P[2];
  *((_BYTE *)P + 33) = 1;
  TpReleaseWork(v3);
  v4 = *((_BYTE *)P + 32);
  result = RtlReleaseSRWLockExclusive(P + 3);
  if ( !v4 )
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return result;
}
