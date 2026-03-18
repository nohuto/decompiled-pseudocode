/*
 * XREFs of DifObReferenceObjectByHandleWrapper @ 0x14062A070
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall DifObReferenceObjectByHandleWrapper(
        void *a1,
        ACCESS_MASK a2,
        struct _OBJECT_TYPE *a3,
        KPROCESSOR_MODE a4,
        PVOID *a5,
        struct _OBJECT_HANDLE_INFORMATION *HandleInformation)
{
  __int64 *APIThunkContextById; // rax
  __int64 *v10; // r14
  int v11; // ecx
  BOOLEAN v12; // si
  __int64 *i; // rbx
  BOOLEAN v14; // di
  __int64 *j; // rbx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-40h] BYREF
  KPROCESSOR_MODE v19; // [rsp+58h] [rbp-28h]
  struct _OBJECT_TYPE *v20; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v21; // [rsp+68h] [rbp-18h]
  void *v22; // [rsp+70h] [rbp-10h]
  unsigned int v23; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v18, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(202);
  v10 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v11 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v11 & 0x18) != 0 )
    {
      v18[0] = retaddr;
    }
    else if ( (v11 & 4) != 0 )
    {
      v18[0] = DifGetReturnAddressForWrappers();
    }
    v12 = 0;
    v22 = a1;
    v18[2] = a5;
    v18[1] = HandleInformation;
    v21 = a2;
    v20 = a3;
    v19 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v12 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v18);
      }
      if ( v12 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(a1, a2, a3, a4, &Object, HandleInformation);
  *a5 = Object;
  if ( v10 )
  {
    if ( (v14 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v14 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v10[6]; j != v10 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v18);
      }
      if ( v14 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v23;
}
