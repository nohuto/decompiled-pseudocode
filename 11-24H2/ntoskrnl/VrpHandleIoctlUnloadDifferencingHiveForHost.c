/*
 * XREFs of VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14082A254
 * Callers:
 *     VrpIoctlDeviceDispatch @ 0x14092B3C0 (VrpIoctlDeviceDispatch.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     RtlEqualUnicodeString @ 0x140929190 (RtlEqualUnicodeString.c)
 *     VrpUnloadDifferencingHive @ 0x14092CC8C (VrpUnloadDifferencingHive.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpHandleIoctlUnloadDifferencingHiveForHost(__int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  _QWORD *v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  char *v9; // rax
  signed __int8 v10; // cf
  char *v11; // rbx
  __int64 v12; // rbx
  __int64 *v13; // rdi
  int v14; // eax
  int v15; // edx
  char *v16; // rax
  char *v17; // rbp
  UNICODE_STRING String1; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING String2; // [rsp+30h] [rbp-28h] BYREF

  *(_DWORD *)(&String2.MaximumLength + 1) = 0;
  v5 = 0LL;
  String1 = 0LL;
  if ( a2 < 8 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned __int16 *)(a1 + 4);
  if ( (v7 & 1) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_WORD)v7 )
    return (unsigned int)-1073741811;
  if ( *(_DWORD *)a1 )
    return (unsigned int)-1073741811;
  v8 = v7 + 6;
  if ( v8 < 6 || a2 < v8 )
  {
    return (unsigned int)-1073741811;
  }
  else if ( SeSinglePrivilegeCheck(SeBackupPrivilege, a3) && SeSinglePrivilegeCheck(SeRestorePrivilege, a3) )
  {
    String1.Buffer = (wchar_t *)(a1 + 6);
    String1.MaximumLength = *(_WORD *)(a1 + 4);
    String1.Length = String1.MaximumLength;
    v9 = (char *)KeAbPreAcquire((__int64)&VrpHostLoadedHivesLock, 0LL);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&VrpHostLoadedHivesLock, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&VrpHostLoadedHivesLock, v9, (__int64)&VrpHostLoadedHivesLock);
    if ( v11 )
      v11[10] = 1;
    v12 = VrpHostLoadedHives;
    v13 = &VrpHostLoadedHives;
    while ( v12 )
    {
      String2.Buffer = (wchar_t *)(v12 + 10);
      String2.Length = *(_WORD *)(v12 + 8);
      String2.MaximumLength = String2.Length;
      if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
      {
        *v13 = *(_QWORD *)v12;
        v5 = (_QWORD *)v12;
        *(_QWORD *)v12 = 0LL;
        break;
      }
      v13 = (__int64 *)v12;
      v12 = *(_QWORD *)v12;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
    KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
    if ( v5 )
    {
      v14 = VrpUnloadDifferencingHive(&String1);
      v15 = 0;
      if ( v14 != -1073741772 )
        v15 = v14;
      v6 = v15;
      if ( v15 < 0 )
      {
        v16 = (char *)KeAbPreAcquire((__int64)&VrpHostLoadedHivesLock, 0LL);
        v10 = _interlockedbittestandset64((volatile signed __int32 *)&VrpHostLoadedHivesLock, 0LL);
        v17 = v16;
        if ( v10 )
          ExfAcquirePushLockExclusiveEx(&VrpHostLoadedHivesLock, v16, (__int64)&VrpHostLoadedHivesLock);
        if ( v17 )
          v17[10] = 1;
        *v5 = VrpHostLoadedHives;
        VrpHostLoadedHives = (__int64)v5;
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VrpHostLoadedHivesLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)&VrpHostLoadedHivesLock);
        KeAbPostRelease((ULONG_PTR)&VrpHostLoadedHivesLock);
      }
      else
      {
        ExFreePoolWithTag(v5, 0);
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741727;
  }
  return v6;
}
