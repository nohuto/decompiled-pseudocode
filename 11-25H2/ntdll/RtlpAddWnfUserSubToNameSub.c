/*
 * XREFs of RtlpAddWnfUserSubToNameSub @ 0x1800052E0
 * Callers:
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18000481C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpWnfETWEventSubscribe @ 0x180134118 (RtlpWnfETWEventSubscribe.c)
 *     NtSubscribeWnfStateChange @ 0x180166BB0 (NtSubscribeWnfStateChange.c)
 */

__int64 __fastcall RtlpAddWnfUserSubToNameSub(__int64 a1, __int64 a2)
{
  __int64 **v4; // r8
  __int64 ****v5; // rcx
  __int64 ***v6; // rax
  _DWORD *v7; // r9
  unsigned int v8; // edx
  _DWORD *v9; // rcx
  int v10; // eax
  unsigned int v11; // r10d
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // esi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 *v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v23 = 0LL;
  RtlAcquireSRWLockExclusive(qword_1801D0200 + 8);
  RtlAcquireSRWLockExclusive(a1 + 64);
  v4 = (__int64 **)(a1 + 72);
  v5 = *(__int64 *****)(a1 + 80);
  v6 = (__int64 ***)(a2 + 8);
  if ( *v5 != (__int64 ***)(a1 + 72) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(a2 + 16) = v5;
  *v5 = v6;
  *(_QWORD *)(a1 + 80) = v6;
  *(_QWORD *)(a2 + 24) = a1;
  if ( *(_DWORD *)(a1 + 124) == 1 && (*(_DWORD *)(a2 + 72) & 0xFFFFFFEE) != 0 )
    *(_DWORD *)(a2 + 156) = 1;
  v7 = (_DWORD *)(a1 + 104);
  v8 = 0;
  v9 = (_DWORD *)(a1 + 104);
  do
  {
    v10 = *(_DWORD *)(a2 + 72);
    if ( _bittest(&v10, v8) )
      ++*v9;
    ++v8;
    ++v9;
  }
  while ( v8 < 5 );
  v11 = 0;
  for ( i = 0; i < 5; ++i )
  {
    if ( *v7 )
      v11 |= 1 << i;
    ++v7;
  }
  ++*(_DWORD *)(a1 + 96);
  if ( (*(_BYTE *)(a2 + 68) & 4) != 0 )
    ++*(_DWORD *)(a1 + 100);
  v13 = *(unsigned int *)(a2 + 64);
  if ( *(_DWORD *)(a1 + 24) < (unsigned int)v13 )
  {
    v21 = *v4;
    while ( v21 != (__int64 *)v4 )
    {
      v22 = *((_DWORD *)v21 + 14);
      v21 = (__int64 *)*v21;
      if ( (unsigned int)v13 <= v22 )
        v22 = v13;
      v13 = v22;
    }
  }
  *(_DWORD *)(a1 + 24) = v13;
  v16 = NtSubscribeWnfStateChange(a1 + 16, v13, v11, &v23);
  if ( v16 >= 0 )
  {
    v15 = v23;
    *(_QWORD *)(a1 + 8) = v23;
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v15, v14, v17, v18) )
    v19 = (__int64)NtCurrentPeb()->SharedData + 564;
  else
    v19 = 2147353486LL;
  if ( *(_BYTE *)v19 && v16 >= 0 )
    RtlpWnfETWEventSubscribe(
      *(_QWORD *)(a1 + 16),
      a2,
      a1,
      *(_DWORD *)(a1 + 88),
      *(_QWORD *)(a2 + 40),
      *(_DWORD *)(a2 + 72));
  RtlReleaseSRWLockExclusive(a1 + 64);
  RtlReleaseSRWLockExclusive(qword_1801D0200 + 8);
  return (unsigned int)v16;
}
