/*
 * XREFs of DifIoInitializeRemoveLockExWrapper @ 0x1406292C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     IoInitializeRemoveLockEx @ 0x1404BD4B0 (IoInitializeRemoveLockEx.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifIoInitializeRemoveLockExWrapper(
        PIO_REMOVE_LOCK Lock,
        ULONG AllocateTag,
        ULONG MaxLockedMinutes,
        ULONG HighWatermark,
        ULONG RemlockSize)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rsi
  int v14; // eax
  BOOLEAN v15; // bp
  __int64 *i; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  __int128 v23; // [rsp+30h] [rbp-48h] BYREF
  __int128 v24; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v23 = 0LL;
  v24 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(330);
  v13 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      *(_QWORD *)&v23 = retaddr;
    }
    else if ( (v14 & 4) != 0 )
    {
      *(_QWORD *)&v23 = DifGetReturnAddressForWrappers();
    }
    v15 = 0;
    *((_QWORD *)&v24 + 1) = Lock;
    *(_QWORD *)&v24 = __PAIR64__(AllocateTag, MaxLockedMinutes);
    *((_QWORD *)&v23 + 1) = __PAIR64__(HighWatermark, RemlockSize);
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v23, v10, v11, v12);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  IoInitializeRemoveLockEx(Lock, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
  if ( v13 )
  {
    if ( (v20 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v21 = (_QWORD **)(v13 + 6);
      for ( j = *v21; j != v21; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v23, v17, v18, v19);
      }
      if ( v20 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
