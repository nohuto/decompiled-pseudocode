/*
 * XREFs of DifIoInitializeRemoveLockExWrapper @ 0x140627880
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     IoInitializeRemoveLockEx @ 0x1404B8620 (IoInitializeRemoveLockEx.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 *v11; // rsi
  int v12; // eax
  BOOLEAN v13; // bp
  __int64 *i; // rbx
  __int64 v15; // rdx
  BOOLEAN v16; // di
  _QWORD **v17; // rsi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+30h] [rbp-48h] BYREF
  __int128 v20; // [rsp+40h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]

  v19 = 0LL;
  v20 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(330);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      *(_QWORD *)&v19 = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      *(_QWORD *)&v19 = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    *((_QWORD *)&v20 + 1) = Lock;
    *(_QWORD *)&v20 = __PAIR64__(AllocateTag, MaxLockedMinutes);
    *((_QWORD *)&v19 + 1) = __PAIR64__(HighWatermark, RemlockSize);
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v19, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  IoInitializeRemoveLockEx(Lock, AllocateTag, MaxLockedMinutes, HighWatermark, RemlockSize);
  if ( v11 )
  {
    if ( (v16 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v16 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v17 = (_QWORD **)(v11 + 6);
      for ( j = *v17; j != v17; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v19, v15);
      }
      if ( v16 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
