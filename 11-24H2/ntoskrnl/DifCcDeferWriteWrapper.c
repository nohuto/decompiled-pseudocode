/*
 * XREFs of DifCcDeferWriteWrapper @ 0x14061A440
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     CcDeferWrite @ 0x14057B140 (CcDeferWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall DifCcDeferWriteWrapper(
        struct _FILE_OBJECT *a1,
        void (__stdcall *a2)(PVOID Context1, PVOID Context2),
        void *a3,
        void *a4,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  __int64 *APIThunkContextById; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rsi
  int v14; // eax
  BOOLEAN v15; // r14
  __int64 *i; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  BOOLEAN v20; // di
  _QWORD **v21; // rsi
  _QWORD *j; // rbx
  __int128 v23; // [rsp+30h] [rbp-30h] BYREF
  __int128 v24; // [rsp+40h] [rbp-20h]
  __int128 v25; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(432);
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
    *((_QWORD *)&v25 + 1) = a1;
    HIDWORD(v23) = BytesToWrite;
    BYTE8(v23) = Retrying;
    *(_QWORD *)&v25 = a2;
    *((_QWORD *)&v24 + 1) = a3;
    *(_QWORD *)&v24 = a4;
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
  CcDeferWrite(a1, a2, a3, a4, BytesToWrite, Retrying);
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
