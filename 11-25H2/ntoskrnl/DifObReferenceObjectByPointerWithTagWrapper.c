/*
 * XREFs of DifObReferenceObjectByPointerWithTagWrapper @ 0x14062A240
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ObReferenceObjectByPointerWithTag @ 0x14041B630 (ObReferenceObjectByPointerWithTag.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifObReferenceObjectByPointerWithTagWrapper(
        void *a1,
        ACCESS_MASK a2,
        struct _OBJECT_TYPE *a3,
        KPROCESSOR_MODE a4,
        ULONG Tag)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v9; // rsi
  int v10; // eax
  BOOLEAN v11; // r14
  __int64 *i; // rbx
  BOOLEAN v13; // di
  _QWORD **v14; // rsi
  _QWORD *j; // rbx
  __int128 v17; // [rsp+30h] [rbp-30h] BYREF
  __int128 v18; // [rsp+40h] [rbp-20h]
  __int128 v19; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h]

  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(200);
  v9 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v10 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v10 & 0x18) != 0 )
    {
      *(_QWORD *)&v17 = retaddr;
    }
    else if ( (v10 & 4) != 0 )
    {
      *(_QWORD *)&v17 = DifGetReturnAddressForWrappers();
    }
    v11 = 0;
    *(_QWORD *)&v19 = a1;
    DWORD2(v17) = Tag;
    DWORD2(v18) = a2;
    *(_QWORD *)&v18 = a3;
    BYTE12(v17) = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v11 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v9[4]; i != v9 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v11 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  DWORD2(v19) = ObReferenceObjectByPointerWithTag(a1, a2, a3, a4, Tag);
  if ( v9 )
  {
    if ( (v13 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      v14 = (_QWORD **)(v9 + 6);
      for ( j = *v14; j != v14; j = (_QWORD *)*j )
      {
        if ( j != (_QWORD *)16 )
          guard_dispatch_icall_no_overrides(&v17);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return DWORD2(v19);
}
