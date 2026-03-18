/*
 * XREFs of DifKeWaitForMultipleObjectsWrapper @ 0x1406314F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeWaitForMultipleObjects @ 0x14033D720 (KeWaitForMultipleObjects.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifKeWaitForMultipleObjectsWrapper(
        ULONG a1,
        PVOID *a2,
        WAIT_TYPE a3,
        KWAIT_REASON a4,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        LARGE_INTEGER *Timeout,
        struct _KWAIT_BLOCK *WaitBlockArray)
{
  __int64 *APIThunkContextById; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rsi
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r14
  __int64 *i; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  BOOLEAN v23; // di
  _QWORD **v24; // rsi
  _QWORD *j; // rbx
  __int128 v27; // [rsp+40h] [rbp-40h] BYREF
  __int128 v28; // [rsp+50h] [rbp-30h]
  __int128 v29; // [rsp+60h] [rbp-20h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(241);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  *(_QWORD *)&v27 = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  LODWORD(v30) = a1;
  BYTE9(v28) = WaitMode;
  BYTE8(v28) = Alertable;
  *(_QWORD *)&v28 = Timeout;
  *((_QWORD *)&v27 + 1) = WaitBlockArray;
  *((_QWORD *)&v29 + 1) = a2;
  LODWORD(v29) = a3;
  HIDWORD(v28) = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v27, v12, v13, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  HIDWORD(v30) = KeWaitForMultipleObjects(a1, a2, a3, a4, WaitMode, Alertable, Timeout, WaitBlockArray);
  if ( v15 )
  {
    if ( (v23 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v23 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v24 = (_QWORD **)(v15 + 6);
      for ( j = *v24; j != v24; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v27, v20, v21, v22);
      }
      if ( v23 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return HIDWORD(v30);
}
