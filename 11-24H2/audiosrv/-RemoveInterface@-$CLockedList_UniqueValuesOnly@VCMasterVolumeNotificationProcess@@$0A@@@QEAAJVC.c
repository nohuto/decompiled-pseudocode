/*
 * XREFs of ?RemoveInterface@?$CLockedList_UniqueValuesOnly@VCMasterVolumeNotificationProcess@@$0A@@@QEAAJVCMasterVolumeNotificationProcess@@@Z @ 0x180062A94
 * Callers:
 *     ?DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z @ 0x180086FA0 (-DeleteVolumeClientNotification@CVolumeStrip@@UEAAJK@Z.c)
 * Callees:
 *     memmove_0 @ 0x180167F48 (memmove_0.c)
 */

__int64 __fastcall CLockedList_UniqueValuesOnly<CMasterVolumeNotificationProcess,0>::RemoveInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        int a2)
{
  PRTL_CRITICAL_SECTION_DEBUG v3; // rdx
  PRTL_CRITICAL_SECTION_DEBUG i; // rdi
  bool v5; // zf
  struct _RTL_CRITICAL_SECTION **j; // rcx
  size_t v7; // rbx

  EnterCriticalSection(lpCriticalSection);
  v3 = *(PRTL_CRITICAL_SECTION_DEBUG *)&lpCriticalSection[1].LockCount;
  for ( i = lpCriticalSection[1].DebugInfo; i != v3; i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 8) )
  {
    if ( *(_DWORD *)&i->Type == a2 )
    {
      v5 = (*(_DWORD *)(&i->CreatorBackTraceIndex + 1))-- == 1;
      if ( v5 )
        break;
    }
  }
  if ( i != v3 )
  {
    for ( j = &i->CriticalSection; j != (struct _RTL_CRITICAL_SECTION **)v3; ++j )
    {
      if ( *(_DWORD *)j == a2 )
      {
        v5 = (*((_DWORD *)j + 1))-- == 1;
        if ( v5 )
          continue;
      }
      *(_QWORD *)&i->Type = *j;
      i = (PRTL_CRITICAL_SECTION_DEBUG)((char *)i + 8);
    }
    if ( i != v3 )
    {
      v7 = *(_QWORD *)&lpCriticalSection[1].LockCount - (_QWORD)v3;
      memmove_0(i, v3, v7);
      *(_QWORD *)&lpCriticalSection[1].LockCount = (char *)i + v7;
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  return 0LL;
}
