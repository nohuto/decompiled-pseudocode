/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x1800049F8
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180005510 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlpDereferenceWnfUserSubscription @ 0x180004BC0 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x180004D50 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x180004F0C (RtlpWnfETWEventUnsubscribe.c)
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     NtSubscribeWnfStateChange @ 0x180166BB0 (NtSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  unsigned int v13; // edx
  int v14; // eax
  __int64 v15; // r8
  _DWORD *v16; // rdx
  unsigned int i; // ecx
  unsigned int v18; // edi
  int v19; // eax
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall *v22)(__int64); // [rsp+58h] [rbp+10h] BYREF
  __int64 v23; // [rsp+60h] [rbp+18h] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v5 = qword_1801D0200 + 8;
  v23 = 0LL;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5);
  RtlAcquireSRWLockExclusive(a1 + 64);
  if ( *(_DWORD *)(a2 + 76) )
  {
    RtlReleaseSRWLockExclusive(a1 + 64);
    RtlReleaseSRWLockExclusive(qword_1801D0200 + 8);
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v8, v7, v9, v10) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v11 = 2147353486LL;
    if ( *(_BYTE *)v11 )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 88),
        *(_QWORD *)(a2 + 40),
        *(_DWORD *)(a2 + 72));
    v12 = (_DWORD *)(a1 + 104);
    v13 = 0;
    *(_DWORD *)(a2 + 76) = 1;
    *a3 = 1;
    do
    {
      v14 = *(_DWORD *)(a2 + 72);
      if ( _bittest(&v14, v13) )
        --*v12;
      ++v13;
      ++v12;
    }
    while ( v13 < 5 );
    v15 = 0LL;
    v16 = (_DWORD *)(a1 + 104);
    for ( i = 0; i < 5; ++i )
    {
      if ( *v16 )
        v15 = (1 << i) | (unsigned int)v15;
      ++v16;
    }
    --*(_DWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
      --*(_DWORD *)(a1 + 100);
    v18 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v19 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v15, &v21);
      v18 = v19;
      if ( v19 < 0 )
      {
        if ( v19 == -1073741431 || v19 == -1073741772 )
          v18 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v21;
      }
    }
    RtlpDereferenceWnfUserSubscription(a2, &v22, &v23);
    RtlReleaseSRWLockExclusive(a1 + 64);
    RtlReleaseSRWLockExclusive(qword_1801D0200 + 8);
    if ( v22 )
      v22(v23);
    RtlpDereferenceWnfNameSubscription(a1);
    return v18;
  }
}
