/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1800615D0
 * Callers:
 *     LdrIsResItemExist @ 0x18005F5C0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180061480 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800795B0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180017E40 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlImageNtHeaderEx @ 0x1800590F0 (RtlImageNtHeaderEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(__int64 a1, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  char *v8; // r9
  __int64 v9; // r15
  char *v10; // rcx
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  unsigned __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  _DWORD *v16; // rdi
  char v17; // si
  int j; // [rsp+20h] [rbp-48h]
  __int64 v20[7]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  v20[0] = 0LL;
  RtlImageNtHeaderEx(1, a1 & 0xFFFFFFFFFFFFFFFCuLL, 0LL, v20);
  v9 = v20[0];
  if ( !v20[0] )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  v10 = 0LL;
  SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      v8 = &SchedulerSharedDataSlot[8 * i];
      if ( !*(_QWORD *)v8 )
      {
        v10 = &SchedulerSharedDataSlot[8 * i];
        break;
      }
    }
  }
  if ( v10 )
    *(_QWORD *)v10 = &MuiCacheSWRLock;
  v13 = _InterlockedCompareExchange64(&MuiCacheSWRLock, 17LL, 0LL);
  if ( v13 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&MuiCacheSWRLock,
      (unsigned __int64)SchedulerSharedDataSlot,
      v13,
      (unsigned __int64)v8);
  v14 = AlternateResourceModuleCount - 1;
  for ( j = AlternateResourceModuleCount - 1; ; j = v14 )
  {
    while ( 1 )
    {
      if ( v14 < 0 )
      {
        v17 = 0;
        v16 = 0LL;
        goto LABEL_35;
      }
      if ( *(_QWORD *)(((__int64)v14 << 6) + AlternateResourceModules + 8) == a1 )
        break;
LABEL_19:
      j = --v14;
    }
    v15 = ((__int64)v14 << 6) + AlternateResourceModules;
    if ( *(_DWORD *)(v15 + 24) != *(_DWORD *)(v9 + 88) )
    {
      v17 = 1;
      v16 = 0LL;
      goto LABEL_35;
    }
    if ( (v4 & 8) != 0 )
      break;
    if ( (v4 & 4) == 0 )
      goto LABEL_19;
    if ( a2 && *(_WORD *)v15 == a2 )
    {
      v16 = *(_DWORD **)(v15 + 32);
      if ( a3 )
        *a3 = *(_QWORD *)(v15 + 48);
      goto LABEL_27;
    }
    --v14;
  }
  if ( !*(_QWORD *)(v15 + 16) )
    goto LABEL_19;
  _mm_lfence();
  v16 = *(_DWORD **)(((__int64)j << 6) + AlternateResourceModules + 16);
  if ( (unsigned __int64)v16 - 1 > 0xFFFFFFFFFFFFFFFDuLL || *v16 == -20054323 )
  {
LABEL_27:
    v17 = 0;
    goto LABEL_35;
  }
  v17 = 1;
  v16 = 0LL;
LABEL_35:
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v17 )
    LdrUnloadAlternateResourceModuleEx(a1, 0LL);
  return v16;
}
