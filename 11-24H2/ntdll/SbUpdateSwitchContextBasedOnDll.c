/*
 * XREFs of SbUpdateSwitchContextBasedOnDll @ 0x180070DD0
 * Callers:
 *     LdrpUnloadNode @ 0x18001CA60 (LdrpUnloadNode.c)
 *     LdrpSendPostSnapNotifications @ 0x1800707A0 (LdrpSendPostSnapNotifications.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     SbGetCurrentSwitchContext @ 0x1800710E0 (SbGetCurrentSwitchContext.c)
 *     SbpDetermineDllContext @ 0x180071110 (SbpDetermineDllContext.c)
 *     SbObtainTraceHandle @ 0x1800B8D90 (SbObtainTraceHandle.c)
 *     SbpTraceContextUpdate @ 0x1800B8ED4 (SbpTraceContextUpdate.c)
 *     SbGetContextDetailsById @ 0x1800F5750 (SbGetContextDetailsById.c)
 */

__int64 __fastcall SbUpdateSwitchContextBasedOnDll(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 CurrentSwitchContext; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rbp
  unsigned int *v8; // r15
  unsigned int *v9; // r9
  __int64 result; // rax
  _QWORD *v11; // rsi
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // r8
  volatile signed __int32 **v16; // rdx
  unsigned __int64 v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // r8
  unsigned int j; // ecx
  __int64 v22; // rdx
  __int64 v23; // rax
  volatile signed __int32 **v24; // rdx
  __int64 v25; // rcx
  unsigned __int64 k; // rax
  int v27; // ecx
  int v28; // edx
  int *v29; // rax
  __int128 v30; // xmm0
  _QWORD v31[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v32; // [rsp+78h] [rbp+10h] BYREF
  char *v33; // [rsp+88h] [rbp+20h] BYREF

  v32 = a2;
  v3 = 0LL;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v31[0] = 0LL;
  v7 = CurrentSwitchContext;
  v33 = 0LL;
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
      v14 = *v11 - *(_QWORD *)((char *)&unk_1801737F4 + v13);
      if ( *v11 == *(_QWORD *)((char *)&unk_1801737F4 + v13) )
        v14 = v11[1] - *(_QWORD *)((char *)&unk_1801737FC + v13);
      if ( !v14 )
      {
        v8 = (unsigned int *)((char *)&SbSupportedOsList + v13);
        break;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( (_DWORD)v6 != 1 )
      return 1LL;
    v20 = *(_QWORD **)(a1 + 192);
    if ( !v20 )
      return 1LL;
    for ( j = 0; j < 5; ++j )
    {
      v22 = 32LL * j;
      v23 = *v20 - *(_QWORD *)((char *)&unk_1801737F4 + v22);
      if ( *v20 == *(_QWORD *)((char *)&unk_1801737F4 + v22) )
        v23 = v20[1] - *(_QWORD *)((char *)&unk_1801737FC + v22);
      if ( !v23 )
      {
        v9 = (unsigned int *)((char *)&SbSupportedOsList + v22);
        v33 = (char *)&SbSupportedOsList + v22;
        break;
      }
    }
    v24 = (volatile signed __int32 **)*v9;
    v25 = 0LL;
    for ( k = 0LL; k < 0x28; k += 8LL )
    {
      if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + k) == (_DWORD)v24 )
      {
        if ( _InterlockedExchangeAdd(&dword_1801CD804[2 * v25], 0xFFFFFFFF) != 1 )
          return 1LL;
        v9 = (unsigned int *)v33;
        break;
      }
      ++v25;
    }
    if ( v8 != v9 )
      return 1LL;
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&SbpContextLock, v24, (unsigned __int64)v20);
    v29 = dword_1801CD804;
    v32 = 0LL;
    do
    {
      if ( *v29 )
      {
        SbGetContextDetailsById((unsigned int)v3, &v32);
        v30 = *(_OWORD *)(v32 + 4);
        goto LABEL_50;
      }
      LODWORD(v3) = v3 + 1;
      v29 += 2;
    }
    while ( (unsigned int)v3 < 5 );
    v30 = *(_OWORD *)(v7 + 48);
LABEL_50:
    *(_OWORD *)v11 = v30;
    ++*(_QWORD *)v7;
    if ( !(unsigned int)SbObtainTraceHandle(v31) )
      goto LABEL_51;
    v27 = v31[0];
    if ( !v31[0] )
      goto LABEL_51;
    v28 = (int)v11;
    goto LABEL_43;
  }
  result = SbpDetermineDllContext(*(_QWORD *)(a1 + 48), &v33, v6, 0LL);
  if ( !(_DWORD)result )
    return result;
  v16 = (volatile signed __int32 **)v33;
  v17 = 0LL;
  v18 = v33 + 4;
  *(_QWORD *)(a1 + 192) = v33 + 4;
  while ( v17 < 0x28 )
  {
    if ( *(_DWORD *)((char *)&SbDynamicContextDllCount + v17) == *(_DWORD *)v16 )
    {
      _InterlockedIncrement(&dword_1801CD804[2 * v3]);
      v16 = (volatile signed __int32 **)v33;
      break;
    }
    ++v3;
    v17 += 8LL;
  }
  v19 = *v18 - 0x4FE8BFB38E0F7A12LL;
  if ( *v18 == 0x4FE8BFB38E0F7A12LL )
    v19 = v18[1] + 0x65A55EAF02B75A47LL;
  if ( v19
    && *(_DWORD *)v16 < (signed int)*v8
    && (*((unsigned __int16 *)v16 + 11) | ((unsigned __int64)*((unsigned __int16 *)v16 + 10) << 16)) >= *(_QWORD *)(v7 + 40) )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&SbpContextLock, v16, v15);
    ++*(_QWORD *)v7;
    *(_OWORD *)v11 = *(_OWORD *)v18;
    if ( !(unsigned int)SbObtainTraceHandle(v31) )
      goto LABEL_51;
    v27 = v31[0];
    if ( !v31[0] )
      goto LABEL_51;
    v28 = (int)v18;
LABEL_43:
    SbpTraceContextUpdate(v27, v28, 1, *(unsigned __int16 *)(a1 + 72), *(_QWORD *)(a1 + 80));
LABEL_51:
    ++*(_QWORD *)v7;
    RtlReleaseSRWLockExclusive(&SbpContextLock);
  }
  return 1LL;
}
