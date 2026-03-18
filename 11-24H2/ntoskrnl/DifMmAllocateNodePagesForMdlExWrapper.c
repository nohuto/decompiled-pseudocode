/*
 * XREFs of DifMmAllocateNodePagesForMdlExWrapper @ 0x140632550
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MmAllocateNodePagesForMdlEx @ 0x140411F90 (MmAllocateNodePagesForMdlEx.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifMmAllocateNodePagesForMdlExWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 *APIThunkContextById; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // r13
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r12
  __int64 *i; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOLEAN v22; // di
  __int64 *j; // rbx
  PVOID v25; // [rsp+40h] [rbp-40h] BYREF
  int v26; // [rsp+48h] [rbp-38h]
  int v27; // [rsp+4Ch] [rbp-34h]
  int v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+58h] [rbp-28h]
  __int64 v30; // [rsp+60h] [rbp-20h]
  __int64 v31; // [rsp+68h] [rbp-18h]
  __int64 v32; // [rsp+70h] [rbp-10h]
  __int64 NodePagesForMdl; // [rsp+78h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+28h]

  memset_0(&v25, 0, 0x40uLL);
  APIThunkContextById = DifGetAPIThunkContextById(232);
  v14 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v15 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v15 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v25 = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v29 = a4;
  v28 = a5;
  v27 = a6;
  v26 = a7;
  v32 = a1;
  v31 = a2;
  v30 = a3;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(&v25, v11, v12, v13);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  NodePagesForMdl = MmAllocateNodePagesForMdlEx(a1, a2, a3, a4, a5, a6, a7);
  if ( v14 )
  {
    if ( (v22 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v22 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(&v25, v19, v20, v21);
      }
      if ( v22 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return NodePagesForMdl;
}
