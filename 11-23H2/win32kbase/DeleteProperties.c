/*
 * XREFs of DeleteProperties @ 0x1C0056AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLock@UtagObjLock@@@?$DomainExclusive@$$V@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0056EDC (--0-$ObjectLock@UtagObjLock@@@-$DomainExclusive@$$V@-$DomainShared@$$V@SharedUserCritOnly@@QEAA@.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1C0056F9C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserGlobalAtomTableCallout @ 0x1C0059240 (UserGlobalAtomTableCallout.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C0090CD0 (UserDeleteAtomFromAtomTable.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteProperties(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  int v4; // ebp
  __int64 i; // rbx
  __int16 v6; // cx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  void *v11; // rdx
  _QWORD *v12; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-48h]
  char v20; // [rsp+40h] [rbp-38h]
  char v21; // [rsp+48h] [rbp-30h]

  v2 = 0LL;
  SharedUserCritOnly::DomainShared<>::DomainExclusive<>::ObjectLock<tagObjLock>::ObjectLock<tagObjLock>(
    &v18,
    *(_QWORD *)(a1 + 144));
  LockRefactorStagingAssertOwned(*(const struct tagObjLock **)(a1 + 144));
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4);
    for ( i = v3 + 8; v4; --v4 )
    {
      v6 = *(_WORD *)(i + 10);
      if ( (v6 & 1) != 0 )
      {
        if ( (v6 & 0x8001) == 0x8001 )
        {
          v7 = *(_QWORD **)i;
          if ( v2 )
            v7[1] = v2;
          v2 = v7;
        }
        else if ( (v6 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 136LL), 0, *(PVOID *)i);
        }
        else if ( (v6 & 4) == 0 && *(_QWORD *)i )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *(void **)i);
        }
      }
      v8 = UserGlobalAtomTableCallout();
      v9 = *(unsigned __int16 *)(i + 10);
      v10 = v8;
      if ( (v9 & 2) != 0 && v8 && (v9 & 0x10) == 0 )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
        if ( CurrentProcessWin32Process )
        {
          v14 = -*(_QWORD *)CurrentProcessWin32Process;
          CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
        }
        if ( (*(_DWORD *)(CurrentProcessWin32Process + 824) & 0x4000000) == 0 )
        {
          v15 = PsGetCurrentProcessWin32Process(v14);
          if ( v15 )
            v15 &= -(__int64)(*(_QWORD *)v15 != 0LL);
          if ( *(_DWORD *)(i + 12) == *(_DWORD *)(v15 + 900) )
            UserDeleteAtomFromAtomTable(v10, *(unsigned __int16 *)(i + 8));
        }
      }
      i += 16LL;
    }
    v11 = *(void **)(*(_QWORD *)(a1 + 144) + 24LL);
    if ( v11 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v11);
    *(_QWORD *)(*(_QWORD *)(a1 + 144) + 24LL) = 0LL;
    if ( v21 && v20 )
    {
      v17 = v19;
      if ( v19 )
      {
        *(_QWORD *)(v19 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
      }
      v20 = 0;
    }
    if ( v2 )
    {
      do
      {
        v12 = (_QWORD *)v2[1];
        (*(void (__fastcall **)(_QWORD *))*v2)(v2);
        v2 = v12;
      }
      while ( v12 );
    }
  }
  else if ( v21 && v20 )
  {
    v16 = v19;
    if ( v19 )
    {
      *(_QWORD *)(v19 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v16, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
