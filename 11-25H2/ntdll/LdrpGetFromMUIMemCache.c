/*
 * XREFs of LdrpGetFromMUIMemCache @ 0x18001D230
 * Callers:
 *     LdrIsResItemExist @ 0x18001B220 (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetRcConfig @ 0x18001D0E0 (LdrpGetRcConfig.c)
 *     LdrpSearchResourceSection_U @ 0x18001DC50 (LdrpSearchResourceSection_U.c)
 *     LdrResGetRCConfig @ 0x1800A3B50 (LdrResGetRCConfig.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18001D460 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpAcquireSRWLockSharedContended @ 0x18007A040 (RtlpAcquireSRWLockSharedContended.c)
 */

_DWORD *__fastcall LdrpGetFromMUIMemCache(unsigned __int64 DllHandle, __int16 a2, _QWORD *a3, int a4)
{
  char v4; // di
  PIMAGE_NT_HEADERS v8; // r15
  _QWORD *v9; // rcx
  _QWORD *SchedulerSharedDataSlot; // rdx
  unsigned int i; // r8d
  int v12; // ecx
  char *v13; // rdx
  _DWORD *v14; // rdi
  char v15; // si
  int j; // [rsp+20h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  if ( (a4 & 0xC) == 0 || (a4 & 0xFFFFFFF3) != 0 || (a4 & 4) != 0 && !a2 )
    return 0LL;
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, (PVOID)(DllHandle & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
  v8 = OutHeaders;
  if ( !OutHeaders )
    return 0LL;
  if ( a3 )
    *a3 = 0LL;
  v9 = 0LL;
  SchedulerSharedDataSlot = NtCurrentTeb()->SchedulerSharedDataSlot;
  if ( SchedulerSharedDataSlot )
  {
    for ( i = 0; i < 8; ++i )
    {
      if ( !SchedulerSharedDataSlot[i] )
      {
        v9 = &SchedulerSharedDataSlot[i];
        break;
      }
    }
  }
  if ( v9 )
    *v9 = &MuiCacheSWRLock;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&MuiCacheSWRLock, 17LL, 0LL) )
    RtlpAcquireSRWLockSharedContended(&MuiCacheSWRLock);
  v12 = AlternateResourceModuleCount - 1;
  for ( j = AlternateResourceModuleCount - 1; ; j = v12 )
  {
    while ( 1 )
    {
      if ( v12 < 0 )
      {
        v15 = 0;
        v14 = 0LL;
        goto LABEL_35;
      }
      if ( *((_QWORD *)AlternateResourceModules + 8 * (__int64)v12 + 1) == DllHandle )
        break;
LABEL_19:
      j = --v12;
    }
    v13 = (char *)AlternateResourceModules + 64 * (__int64)v12;
    if ( *((_DWORD *)v13 + 6) != v8->OptionalHeader.CheckSum )
    {
      v15 = 1;
      v14 = 0LL;
      goto LABEL_35;
    }
    if ( (v4 & 8) != 0 )
      break;
    if ( (v4 & 4) == 0 )
      goto LABEL_19;
    if ( a2 && *(_WORD *)v13 == a2 )
    {
      v14 = (_DWORD *)*((_QWORD *)v13 + 4);
      if ( a3 )
        *a3 = *((_QWORD *)v13 + 6);
      goto LABEL_27;
    }
    --v12;
  }
  if ( !*((_QWORD *)v13 + 2) )
    goto LABEL_19;
  _mm_lfence();
  v14 = (_DWORD *)*((_QWORD *)AlternateResourceModules + 8 * (__int64)j + 2);
  if ( (unsigned __int64)v14 - 1 > 0xFFFFFFFFFFFFFFFDuLL || *v14 == -20054323 )
  {
LABEL_27:
    v15 = 0;
    goto LABEL_35;
  }
  v15 = 1;
  v14 = 0LL;
LABEL_35:
  RtlReleaseSRWLockShared(&MuiCacheSWRLock);
  if ( v15 )
    LdrUnloadAlternateResourceModuleEx((PVOID)DllHandle, 0);
  return v14;
}
