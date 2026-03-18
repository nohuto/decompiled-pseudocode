/*
 * XREFs of DifObReferenceObjectByHandleWrapper @ 0x140636030
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 *v13; // r14
  int v14; // ecx
  BOOLEAN v15; // si
  __int64 *i; // rbx
  NTSTATUS v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  PVOID *v20; // rdx
  BOOLEAN v21; // di
  __int64 *j; // rbx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v25[3]; // [rsp+40h] [rbp-40h] BYREF
  KPROCESSOR_MODE v26; // [rsp+58h] [rbp-28h]
  struct _OBJECT_TYPE *v27; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v28; // [rsp+68h] [rbp-18h]
  void *v29; // [rsp+70h] [rbp-10h]
  unsigned int v30; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v25, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(202);
  v13 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v14 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v14 & 0x18) != 0 )
    {
      v25[0] = retaddr;
    }
    else if ( (v14 & 4) != 0 )
    {
      v25[0] = DifGetReturnAddressForWrappers();
    }
    v15 = 0;
    v29 = a1;
    v25[2] = a5;
    v25[1] = HandleInformation;
    v28 = a2;
    v27 = a3;
    v26 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v15 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v13[4]; i != v13 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v25, v10, v11, v12);
      }
      if ( v15 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(a1, a2, a3, a4, &Object, HandleInformation);
  v20 = a5;
  v30 = v17;
  *a5 = Object;
  if ( v13 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v13[6]; j != v13 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v25, v20, v18, v19);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v30;
}
