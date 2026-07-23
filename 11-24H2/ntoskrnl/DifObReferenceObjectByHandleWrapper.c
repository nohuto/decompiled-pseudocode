/*
 * XREFs of DifObReferenceObjectByHandleWrapper @ 0x1406345F0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
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
  __int64 *v11; // r14
  int v12; // ecx
  BOOLEAN v13; // si
  __int64 *i; // rbx
  NTSTATUS v15; // eax
  PVOID *v16; // rdx
  BOOLEAN v17; // di
  __int64 *j; // rbx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v21[3]; // [rsp+40h] [rbp-40h] BYREF
  KPROCESSOR_MODE v22; // [rsp+58h] [rbp-28h]
  struct _OBJECT_TYPE *v23; // [rsp+60h] [rbp-20h]
  ACCESS_MASK v24; // [rsp+68h] [rbp-18h]
  void *v25; // [rsp+70h] [rbp-10h]
  unsigned int v26; // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(v21, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(202);
  v11 = APIThunkContextById;
  if ( APIThunkContextById )
  {
    v12 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v12 & 0x18) != 0 )
    {
      v21[0] = retaddr;
    }
    else if ( (v12 & 4) != 0 )
    {
      v21[0] = DifGetReturnAddressForWrappers();
    }
    v13 = 0;
    v25 = a1;
    v21[2] = a5;
    v21[1] = HandleInformation;
    v24 = a2;
    v23 = a3;
    v22 = a4;
    if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
      || (v13 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( i = (__int64 *)v11[4]; i != v11 + 4; i = (__int64 *)*i )
      {
        if ( i != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v21, v10);
      }
      if ( v13 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  Object = 0LL;
  v15 = ObReferenceObjectByHandle(a1, a2, a3, a4, &Object, HandleInformation);
  v16 = a5;
  v26 = v15;
  *a5 = Object;
  if ( v11 )
  {
    if ( (v17 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v11[6]; j != v11 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v21, v16);
      }
      if ( v17 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return v26;
}
