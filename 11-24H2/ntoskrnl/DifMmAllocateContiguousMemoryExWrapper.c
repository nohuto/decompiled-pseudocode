/*
 * XREFs of DifMmAllocateContiguousMemoryExWrapper @ 0x1406319E0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     MmAllocateContiguousMemoryEx @ 0x140411210 (MmAllocateContiguousMemoryEx.c)
 *     DifGetAPIThunkContextById @ 0x140489B90 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9B7C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall DifMmAllocateContiguousMemoryExWrapper(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        ULONG_PTR BugCheckParameter2,
        int a8,
        int a9,
        __int64 *a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *v17; // r13
  int v18; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v20; // r12
  __int64 *i; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  BOOLEAN v25; // di
  __int64 *j; // rbx
  _QWORD v28[2]; // [rsp+58h] [rbp-49h] BYREF
  int v29; // [rsp+68h] [rbp-39h]
  int v30; // [rsp+6Ch] [rbp-35h]
  ULONG_PTR v31; // [rsp+70h] [rbp-31h]
  int v32; // [rsp+78h] [rbp-29h]
  int v33; // [rsp+7Ch] [rbp-25h]
  __int64 v34; // [rsp+80h] [rbp-21h]
  __int64 v35; // [rsp+88h] [rbp-19h]
  __int64 v36; // [rsp+90h] [rbp-11h]
  _QWORD *v37; // [rsp+98h] [rbp-9h]
  unsigned int ContiguousMemory; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(v28, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(237);
  v17 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v18 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v18 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v18 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v28[0] = ReturnAddressForWrappers;
LABEL_7:
  v20 = 0;
  v37 = a1;
  v33 = a5;
  v32 = a6;
  v31 = BugCheckParameter2;
  v30 = a8;
  v29 = a9;
  v28[1] = a10;
  v36 = a2;
  v35 = a3;
  v34 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v20 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v28, v14, v15, v16);
    }
    if ( v20 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  ContiguousMemory = MmAllocateContiguousMemoryEx(a1, a2, a3, a4, a5, a6, BugCheckParameter2, a8, a9, a10);
  if ( v17 )
  {
    if ( (v25 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v25 = ExAcquireRundownProtection(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v17[6]; j != v17 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v28, v22, v23, v24);
      }
      if ( v25 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ContiguousMemory;
}
