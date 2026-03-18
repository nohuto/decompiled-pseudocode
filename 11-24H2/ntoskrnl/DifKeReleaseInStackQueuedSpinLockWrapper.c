/*
 * XREFs of DifKeReleaseInStackQueuedSpinLockWrapper @ 0x14062F660
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifKeReleaseInStackQueuedSpinLockWrapper(PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 *APIThunkContextById; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 *v6; // rdi
  int v7; // eax
  BOOLEAN v8; // si
  __int64 *i; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  BOOLEAN v13; // si
  _QWORD **v14; // rdi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v16 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(264);
  v6 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v7 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v7 & 0x18) != 0 )
    {
      *(_QWORD *)&v16 = retaddr;
    }
    else if ( (v7 & 4) != 0 )
    {
      *(_QWORD *)&v16 = DifGetReturnAddressForWrappers();
    }
    v8 = 0;
    *((_QWORD *)&v16 + 1) = LockHandle;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v8 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v6[4]; i != v6 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16, v3, v4, v5);
      }
      if ( v8 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  KeReleaseInStackQueuedSpinLock(LockHandle);
  if ( v6 )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v14 = (_QWORD **)(v6 + 6);
      for ( j = *v14; j != v14; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v16, v10, v11, v12);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
