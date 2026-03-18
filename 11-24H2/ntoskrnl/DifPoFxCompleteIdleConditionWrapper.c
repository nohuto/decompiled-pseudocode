/*
 * XREFs of DifPoFxCompleteIdleConditionWrapper @ 0x1406370E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     PoFxCompleteIdleCondition @ 0x1404592B0 (PoFxCompleteIdleCondition.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifPoFxCompleteIdleConditionWrapper(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // r14d
  __int64 *APIThunkContextById; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 *v8; // rsi
  int v9; // eax
  BOOLEAN v10; // bp
  __int64 *i; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOLEAN v15; // di
  _QWORD **v16; // rsi
  _QWORD *j; // rbx
  __int128 v18; // [rsp+20h] [rbp-38h] BYREF
  ULONG_PTR v19; // [rsp+30h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v18 = 0LL;
  v19 = 0LL;
  v3 = BugCheckParameter3;
  APIThunkContextById = DifGetAPIThunkContextById(191);
  v8 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v9 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v9 & 0x18) != 0 )
    {
      *(_QWORD *)&v18 = retaddr;
    }
    else if ( (v9 & 4) != 0 )
    {
      *(_QWORD *)&v18 = DifGetReturnAddressForWrappers();
    }
    v10 = 0;
    v19 = BugCheckParameter2;
    DWORD2(v18) = v3;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v10 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v18, v5, v6, v7);
      }
      if ( v10 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  PoFxCompleteIdleCondition(BugCheckParameter2, v3);
  if ( v8 )
  {
    if ( (v15 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      v16 = (_QWORD **)(v8 + 6);
      for ( j = *v16; j != v16; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v18, v12, v13, v14);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
