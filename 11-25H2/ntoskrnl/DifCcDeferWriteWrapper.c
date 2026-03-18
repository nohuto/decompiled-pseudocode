/*
 * XREFs of DifCcDeferWriteWrapper @ 0x14060E480
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     CcDeferWrite @ 0x140577E30 (CcDeferWrite.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
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
  __int64 *v10; // rsi
  int v11; // eax
  BOOLEAN v12; // r14
  __int64 *i; // rbx
  BOOLEAN v14; // di
  _QWORD **v15; // rsi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(432);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      *(_QWORD *)&v17 = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      *(_QWORD *)&v17 = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    *((_QWORD *)&v19 + 1) = a1;
    HIDWORD(v17) = BytesToWrite;
    BYTE8(v17) = Retrying;
    *(_QWORD *)&v19 = a2;
    *((_QWORD *)&v18 + 1) = a3;
    *(_QWORD *)&v18 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  CcDeferWrite(a1, a2, a3, a4, BytesToWrite, Retrying);
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v15 = (_QWORD **)(v10 + 6);
      for ( j = *v15; j != v15; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
}
