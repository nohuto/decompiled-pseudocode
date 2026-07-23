/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x18008D6B0
 * Callers:
 *     LdrpUnloadNode @ 0x180049460 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x18008D080 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     SbGetCurrentSwitchContext @ 0x18008D9C0 (SbGetCurrentSwitchContext.c)
 *     SbpDetermineDllContext @ 0x18008D9F0 (SbpDetermineDllContext.c)
 *     SbObtainTraceHandle @ 0x1800A2E50 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x1800A2F94 (SbpTraceContextUpdate.c)
 *     SbGetContextDetailsById @ 0x1800F0270 (SbGetContextDetailsById.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 CurrentSwitchContext; // rax
  __int64 v5; // rcx
  int v6; // r8d
  __int64 v7; // rbp
  _DWORD *v8; // r15
  _DWORD *v9; // r9
  __int64 result; // rax
  _QWORD *v11; // rsi
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // rdx
  unsigned __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  _QWORD *v19; // r8
  unsigned int j; // ecx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 k; // rax
  int v25; // ecx
  int v26; // edx
  int *v27; // rax
  __int128 v28; // xmm0
  _QWORD v29[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+78h] [rbp+10h] BYREF
  char *v31; // [rsp+88h] [rbp+20h]

  v30 = a2;
  v3 = 0LL;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v29[0] = 0LL;
  v7 = CurrentSwitchContext;
  v31 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( !CurrentSwitchContext || !v5 )
    return 0LL;
  if ( !*(_DWORD *)(CurrentSwitchContext + 8) )
    return 1LL;
  v11 = (_QWORD *)(CurrentSwitchContext + 64);
  if ( CurrentSwitchContext != -64 )
  {
    for ( i = 0; i < 5; ++i )
    {
      v13 = 32LL * i;
      v14 = *v11 - *(_QWORD *)((char *)&unk_180172974 + v13);
      if ( *v11 == *(_QWORD *)((char *)&unk_180172974 + v13) )
        v14 = v11[1] - *(_QWORD *)((char *)&unk_18017297C + v13);
      if ( !v14 )
      {
        v8 = (_DWORD *)((char *)&SbSupportedOsList + v13);
        break;
      }
    }
  }
  if ( v6 )
  {
    if ( v6 != 1 )
      return 1LL;
    v19 = *(_QWORD **)(a1 + 192);
    if ( !v19 )
      return 1LL;
    for ( j = 0; j < 5; ++j )
    {
      v21 = 32LL * j;
      v22 = *v19 - *(_QWORD *)((char *)&unk_180172974 + v21);
      if ( *v19 == *(_QWORD *)((char *)&unk_180172974 + v21) )
        v22 = v19[1] - *(_QWORD *)((char *)&unk_18017297C + v21);
      if ( !v22 )
      {
        v9 = (_DWORD *)((char *)&SbSupportedOsList + v21);
        v31 = (char *)&SbSupportedOsList + v21;
        break;
      }
    }
    v23 = 0LL;
    for ( k = 0LL; k < 0x28; k += 8LL )
    {
      if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + k) == *v9 )
      {
        if ( _InterlockedExchangeAdd(&dword_1801CC804[2 * v23], 0xFFFFFFFF) != 1 )
          return 1LL;
        v9 = v31;
        break;
      }
      ++v23;
    }
    if ( v8 != v9 )
      return 1LL;
    RtlAcquireSRWLockExclusive(&SbpContextLock);
    v27 = dword_1801CC804;
    v30 = 0LL;
    do
    {
      if ( *v27 )
      {
        SbGetContextDetailsById((unsigned int)v3, &v30);
        v28 = *(_OWORD *)(v30 + 4);
        goto LABEL_50;
      }
      LODWORD(v3) = v3 + 1;
      v27 += 2;
    }
    while ( (unsigned int)v3 < 5 );
    v28 = *(_OWORD *)(v7 + 48);
LABEL_50:
    *(_OWORD *)v11 = v28;
    ++*(_QWORD *)v7;
    if ( !(unsigned int)SbObtainTraceHandle(v29) )
      goto LABEL_51;
    v25 = v29[0];
    if ( !v29[0] )
      goto LABEL_51;
    v26 = (int)v11;
    goto LABEL_43;
  }
  result = SbpDetermineDllContext(*(PACTIVATION_CONTEXT *)(a1 + 48));
  if ( !(_DWORD)result )
    return result;
  v15 = v31;
  v16 = 0LL;
  v17 = v31 + 4;
  *(_QWORD *)(a1 + 192) = v31 + 4;
  while ( v16 < 0x28 )
  {
    if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + v16) == *(_DWORD *)v15 )
    {
      _InterlockedIncrement(&dword_1801CC804[2 * v3]);
      v15 = v31;
      break;
    }
    ++v3;
    v16 += 8LL;
  }
  v18 = *v17 - 0x4FE8BFB38E0F7A12LL;
  if ( *v17 == 0x4FE8BFB38E0F7A12LL )
    v18 = v17[1] + 0x65A55EAF02B75A47LL;
  if ( v18
    && *(_DWORD *)v15 < *v8
    && (*((unsigned __int16 *)v15 + 11) | ((unsigned __int64)*((unsigned __int16 *)v15 + 10) << 16)) >= *(_QWORD *)(v7 + 40) )
  {
    RtlAcquireSRWLockExclusive(&SbpContextLock);
    ++*(_QWORD *)v7;
    *(_OWORD *)v11 = *(_OWORD *)v17;
    if ( !(unsigned int)SbObtainTraceHandle(v29) )
      goto LABEL_51;
    v25 = v29[0];
    if ( !v29[0] )
      goto LABEL_51;
    v26 = (int)v17;
LABEL_43:
    SbpTraceContextUpdate(v25, v26, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_51:
    ++*(_QWORD *)v7;
    RtlReleaseSRWLockExclusive(&SbpContextLock);
  }
  return 1LL;
}
