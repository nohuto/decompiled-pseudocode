/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x180099C70
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x1800991AC (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfETWEventSubscribe @ 0x180132638 (RtlpWnfETWEventSubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x180165620 (NtSubscribeWnfStateChange.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  volatile signed __int32 **v5; // rdx
  unsigned __int64 v6; // r8
  __int64 **v7; // r8
  __int64 ****v8; // rcx
  __int64 ***v9; // rax
  _DWORD *v10; // r9
  unsigned int v11; // edx
  _DWORD *v12; // rcx
  int v13; // eax
  unsigned int v14; // r10d
  unsigned int i; // ecx
  __int64 v16; // rdx
  int v17; // esi
  __int64 v18; // rdx
  __int64 *v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v22 = 0LL;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(qword_1801CE200 + 8), (volatile signed __int32 **)a2, a3);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 64), v5, v6);
  v7 = (__int64 **)(a1 + 72);
  v8 = *(__int64 *****)(a1 + 80);
  v9 = (__int64 ***)(a2 + 8);
  if ( *v8 != (__int64 ***)(a1 + 72) )
    __fastfail(3u);
  *v9 = v7;
  *(_QWORD *)(a2 + 16) = v8;
  *v8 = v9;
  *(_QWORD *)(a1 + 80) = v9;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 124) == 1 && (*(_DWORD *)(a2 + 72) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 156) = 1;
  v10 = (_DWORD *)(a1 + 104);
  v11 = 0;
  v12 = (_DWORD *)(a1 + 104);
  do
  {
    v13 = *(_DWORD *)(a2 + 72);
    if ( _bittest(&v13, v11) )
      ++*v12;
    ++v11;
    ++v12;
  }
  while ( v11 < 5 );
  v14 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v10 )
      v14 |= 1 << i;
    ++v10;
  }
  ++*(_DWORD *)(a1 + 96);
  if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
    ++*(_DWORD *)(a1 + 100);
  v16 = *(unsigned int *)(a2 + 64);
  if ( *(_DWORD *)(a1 + 24) < (unsigned int)v16 )
  {
    v20 = *v7;
    while ( v20 != (__int64 *)v7 )
    {
      v21 = *((_DWORD *)v20 + 14);
      v20 = (__int64 *)*v20;
      if ( (unsigned int)v16 <= v21 )
        v21 = v16;
      v16 = v21;
    }
  }
  *(_DWORD *)(a1 + 24) = v16;
  v17 = NtSubscribeWnfStateChange(a1 + 16, v16, v14, &v22);
  if ( v17 >= 0 )
    *(_QWORD *)(a1 + 8) = v22;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
    v18 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v18 = 2147353486LL;
  if ( *(_BYTE *)v18 && v17 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 88),
      *(_QWORD *)(a2 + 40),
      *(_DWORD *)(a2 + 72));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 64));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(qword_1801CE200 + 8));
  return (unsigned int)v17;
}
