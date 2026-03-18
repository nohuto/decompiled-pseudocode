/*
 * XREFs of DifKeRegisterNmiCallbackWrapper @ 0x14062EF20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DifKeRegisterNmiCallbackWrapper(__int64 a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rsi
  int v9; // eax
  BOOLEAN v10; // bp
  __int64 *i; // rbx
  _QWORD *Pool2; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rbx
  KIRQL v17; // al
  BOOLEAN v18; // di
  _QWORD **v19; // rsi
  _QWORD *j; // rbx
  __int128 v22; // [rsp+20h] [rbp-38h] BYREF
  __int128 v23; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v22 = 0LL;
  v23 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(267);
  v8 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v9 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v9 & 0x18) != 0 )
    {
      *(_QWORD *)&v22 = retaddr;
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_QWORD *)&v22 = DifGetReturnAddressForWrappers();
    }
    v10 = 0;
    *(_QWORD *)&v23 = a1;
    *((_QWORD *)&v22 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v22, v5, v6, v7);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v16 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = a1;
    Pool2[2] = a2;
    Pool2[3] = Pool2;
    v17 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v16 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v16;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v17);
    Pool2 = (_QWORD *)v16[3];
  }
  *((_QWORD *)&v23 + 1) = Pool2;
  if ( v8 )
  {
    if ( (v18 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v19 = (_QWORD **)(v8 + 6);
      for ( j = *v19; j != v19; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v22, v13, v14, v15);
      }
      if ( v18 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v23 + 1);
}
