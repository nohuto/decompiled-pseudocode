/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x1800771B0
 * Callers:
 *     LdrIsResItemExist @ 0x1800751A0 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x180077060 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x180077BD0 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800959F0 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x180044840 (RtlpAcquireSRWLockSharedContended.c)
 *     RtlImageNtHeaderEx @ 0x18006ECD0 (RtlImageNtHeaderEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  char *v8; // r9
  PIMAGE_NT_HEADERS v9; // r15
  char *v10; // rcx
  char *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  char *v13; // rax
  int v14; // ecx
  char *v15; // rdx
  _DWORD *v16; // rdi
  char v17; // si
  int j; // [rsp+20h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v9 = OutHeaders;
  if ( !OutHeaders )
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
  v13 = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)&MuiCacheSWRLock, 17LL, 0LL);
  if ( v13 )
    RtlpAcquireSRWLockSharedContended(
      (unsigned __int64)&MuiCacheSWRLock,
      (unsigned __int64)SchedulerSharedDataSlot,
      v13,
      v8);
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
      if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)v14 + 1) == DllHandle )
        break;
LABEL_19:
      j = --v14;
    }
    v15 = (char *)AlternateResourceModules + 64 * (__int64)v14;
    if ( *((_DWORD *)v15 + 6) != v9->OptionalHeader.CheckSum )
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
      v16 = (_DWORD *)*((_QWORD *)v15 + 4);
      if ( a3 )
        *a3 = *((_QWORD *)v15 + 6);
      goto LABEL_27;
    }
    --v14;
  }
  if ( !*((_QWORD *)v15 + 2) )
    goto LABEL_19;
  _mm_lfence();
  v16 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 2);
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
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v16;
}
