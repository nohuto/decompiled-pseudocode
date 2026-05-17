/*
 * XREFs of RtlpRemoveUserSubFromNameSub @ 0x180099388
 * Callers:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180099EA0 (RtlUnsubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpDereferenceWnfUserSubscription @ 0x180099550 (RtlpDereferenceWnfUserSubscription.c)
 *     RtlpDereferenceWnfNameSubscription @ 0x1800996E0 (RtlpDereferenceWnfNameSubscription.c)
 *     RtlpWnfETWEventUnsubscribe @ 0x18009989C (RtlpWnfETWEventUnsubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x180165620 (NtSubscribeWnfStateChange.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RtlpRemoveUserSubFromNameSub(__int64 a1, __int64 a2, _DWORD *a3)
{
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 **v7; // rdx
  unsigned __int64 v8; // r8
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  __int64 v13; // r8
  _DWORD *v14; // rdx
  unsigned int i; // ecx
  unsigned int v16; // edi
  int v17; // eax
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  void (__fastcall *v20)(__int64); // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v5 = (volatile signed __int32 *)(qword_1801CE200 + 8);
  v21 = 0LL;
  *a3 = 0;
  RtlAcquireSRWLockExclusive(v5, (volatile signed __int32 **)a2, (unsigned __int64)a3);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 64), v7, v8);
  if ( *(_DWORD *)(a2 + 76) )
  {
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 8));
    return 3221225473LL;
  }
  else
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v9 = (__int64)NtCurrentPeb()->SharedData + 564;
    else
      v9 = 2147353486LL;
    if ( *(_BYTE *)v9 )
      RtlpWnfETWEventUnsubscribe(
        *(_QWORD *)(a1 + 16),
        a2,
        a1,
        *(_DWORD *)(a1 + 88),
        *(_QWORD *)(a2 + 40),
        *(_DWORD *)(a2 + 72));
    v10 = (_DWORD *)(a1 + 104);
    v11 = 0;
    *(_DWORD *)(a2 + 76) = 1;
    *a3 = 1;
    do
    {
      v12 = *(_DWORD *)(a2 + 72);
      if ( _bittest(&v12, v11) )
        --*v10;
      ++v11;
      ++v10;
    }
    while ( v11 < 5 );
    v13 = 0LL;
    v14 = (_DWORD *)(a1 + 104);
    for ( i = 0; i < 5; ++i )
    {
      if ( *v14 )
        v13 = (1 << i) | (unsigned int)v13;
      ++v14;
    }
    --*(_DWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
      --*(_DWORD *)(a1 + 100);
    v16 = 0;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v17 = NtSubscribeWnfStateChange(a1 + 16, *(unsigned int *)(a1 + 24), v13, &v19);
      v16 = v17;
      if ( v17 < 0 )
      {
        if ( v17 == -1073741431 || v17 == -1073741772 )
          v16 = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = v19;
      }
    }
    RtlpDereferenceWnfUserSubscription(a2, &v20, &v21);
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 8));
    if ( v20 )
      v20(v21);
    RtlpDereferenceWnfNameSubscription(a1);
    return v16;
  }
}
