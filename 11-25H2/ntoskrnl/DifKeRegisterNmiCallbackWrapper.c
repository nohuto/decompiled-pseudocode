/*
 * XREFs of DifKeRegisterNmiCallbackWrapper @ 0x140622F60
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall DifKeRegisterNmiCallbackWrapper(__int64 a1, __int64 a2)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v5; // rsi
  int v6; // eax
  BOOLEAN v7; // bp
  __int64 *i; // rbx
  _QWORD *Pool2; // rax
  _QWORD *v10; // rbx
  KIRQL v11; // al
  BOOLEAN v12; // di
  _QWORD **v13; // rsi
  _QWORD *j; // rbx
  __int128 v16; // [rsp+20h] [rbp-38h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  v17 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(267);
  v5 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v6 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v6 & 0x18) != 0 )
    {
      *(_QWORD *)&v16 = retaddr;
    }
    else if ( (v6 & 4) != 0 )
    {
      *(_QWORD *)&v16 = DifGetReturnAddressForWrappers();
    }
    v7 = 0;
    *(_QWORD *)&v17 = a1;
    *((_QWORD *)&v16 + 1) = a2;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v7 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v5[4]; i != v5 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v7 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v10 = Pool2;
  if ( Pool2 )
  {
    Pool2[1] = a1;
    Pool2[2] = a2;
    Pool2[3] = Pool2;
    v11 = KeAcquireSpinLockRaiseToDpc(&KiNmiCallbackListLock);
    *v10 = KiNmiCallbackListHead;
    KiNmiCallbackListHead = v10;
    KeReleaseSpinLock(&KiNmiCallbackListLock, v11);
    Pool2 = (_QWORD *)v10[3];
  }
  *((_QWORD *)&v17 + 1) = Pool2;
  if ( v5 )
  {
    if ( (v12 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v13 = (_QWORD **)(v5 + 6);
      for ( j = *v13; j != v13; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v16);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return *((_QWORD *)&v17 + 1);
}
