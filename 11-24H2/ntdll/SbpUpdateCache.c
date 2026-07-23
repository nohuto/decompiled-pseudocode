/*
 * XREFs of SbpUpdateCache @ 0x18000BBE0
 * Callers:
 *     SbSelectProcedure @ 0x18000B080 (SbSelectProcedure.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     SbGetCurrentSwitchContext @ 0x18008D9C0 (SbGetCurrentSwitchContext.c)
 *     SbpResolveBasedOnName @ 0x180113358 (SbpResolveBasedOnName.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall SbpUpdateCache(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  __int64 CurrentSwitchContext; // rax
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // rbx
  __int64 v11; // rsi
  _DWORD *v12; // rax
  __int64 i; // r15
  __int64 v14; // rbx
  unsigned int v15; // ebp
  unsigned int j; // eax
  _QWORD *v17; // rdx
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdi
  __int64 v21; // rbp
  __int64 k; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // rdi
  __int64 result; // rax
  unsigned int m; // eax
  unsigned __int64 v27; // rdi
  __int128 v30; // [rsp+30h] [rbp-58h]

  v5 = a2;
  CurrentSwitchContext = SbGetCurrentSwitchContext();
  v10 = CurrentSwitchContext;
  if ( !CurrentSwitchContext )
    return 0LL;
  if ( !v9 )
  {
    v11 = *(_QWORD *)CurrentSwitchContext;
    v30 = *(_OWORD *)(CurrentSwitchContext + 48);
    goto LABEL_5;
  }
  if ( v9 != 1 )
    return 0LL;
  RtlAcquireSRWLockShared(&SbpContextLock);
  v11 = *(_QWORD *)v10;
  v30 = *(_OWORD *)(v10 + 64);
  RtlReleaseSRWLockShared(&SbpContextLock);
  v8 = a3;
LABEL_5:
  v12 = *(_DWORD **)(v5 + 24);
  for ( i = 0LL; (unsigned int)i < *v12; v8 = a3 )
  {
    v14 = *(_QWORD *)&v12[2 * i + 2];
    if ( v14 )
    {
      v15 = 0;
LABEL_8:
      if ( v15 >= *(_DWORD *)(v14 + 68) )
        goto LABEL_18;
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v8 + 60) )
        {
          ++v15;
          goto LABEL_8;
        }
        v17 = (_QWORD *)(v8 + 16 * (j + 4LL));
        v18 = (unsigned __int64)v15 << 7;
        v19 = *(_QWORD *)(v18 + v14 + 184) - *v17;
        if ( !v19 )
          v19 = *(_QWORD *)(v18 + v14 + 192) - v17[1];
        if ( !v19 )
          break;
        v8 = a3;
      }
      v20 = (unsigned __int64)v15 << 7;
      if ( !*(_QWORD *)(v20 + v14 + 80) && *(_DWORD *)(v20 + v14 + 88) == 2 )
        *(_QWORD *)(v20 + v14 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v20 + v14 + 72));
      *(_QWORD *)(a1 + 8 * i + 16) = v20 + v14 + 72;
      if ( v15 >= *(_DWORD *)(v14 + 68) )
      {
LABEL_18:
        v21 = 0LL;
LABEL_19:
        if ( (unsigned int)v21 >= *(_DWORD *)(v14 + 68) )
          goto LABEL_33;
        for ( k = 0LL; ; k = (unsigned int)(k + 1) )
        {
          if ( (unsigned int)k >= 4 )
          {
            v21 = (unsigned int)(v21 + 1);
            goto LABEL_19;
          }
          v23 = *(_QWORD *)(v14 + 16 * (k + 8 * v21) + 120) - v30;
          if ( !v23 )
            v23 = *(_QWORD *)(v14 + 16 * (k + 8 * v21) + 128) - *((_QWORD *)&v30 + 1);
          if ( !v23 )
            break;
        }
        v24 = (unsigned __int64)(unsigned int)v21 << 7;
        if ( !*(_QWORD *)(v24 + v14 + 80) && *(_DWORD *)(v24 + v14 + 88) == 2 )
          *(_QWORD *)(v24 + v14 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v24 + v14 + 72));
        *(_QWORD *)(a1 + 8 * i + 16) = v24 + v14 + 72;
        if ( (unsigned int)v21 >= *(_DWORD *)(v14 + 68) )
        {
LABEL_33:
          for ( m = 0; m < *(_DWORD *)(v14 + 68); ++m )
          {
            v27 = (unsigned __int64)m << 7;
            if ( *(_DWORD *)(v27 + v14 + 104) )
            {
              if ( !*(_QWORD *)(v27 + v14 + 80) && *(_DWORD *)(v27 + v14 + 88) == 2 )
                *(_QWORD *)(v27 + v14 + 80) = SbpResolveBasedOnName(*(_QWORD *)(v27 + v14 + 72));
              *(_QWORD *)(a1 + 8 * i + 16) = v14 + v27 + 72;
              break;
            }
          }
        }
      }
      v5 = a2;
    }
    v12 = *(_DWORD **)(v5 + 24);
    i = (unsigned int)(i + 1);
  }
  *(_QWORD *)a1 = v11;
  result = 1LL;
  *(_DWORD *)(a1 + 8) = a4;
  return result;
}
