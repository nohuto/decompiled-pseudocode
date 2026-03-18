/*
 * XREFs of DifMmAllocateContiguousMemoryExWrapper @ 0x140625A20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     MmAllocateContiguousMemoryEx @ 0x140414940 (MmAllocateContiguousMemoryEx.c)
 *     DifGetAPIThunkContextById @ 0x14048A3D0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C9840 (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
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
  __int64 *v14; // r13
  int v15; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v17; // r12
  __int64 *i; // r14
  BOOLEAN v19; // di
  __int64 *j; // rbx
  _QWORD v22[2]; // [rsp+58h] [rbp-49h] BYREF
  int v23; // [rsp+68h] [rbp-39h]
  int v24; // [rsp+6Ch] [rbp-35h]
  ULONG_PTR v25; // [rsp+70h] [rbp-31h]
  int v26; // [rsp+78h] [rbp-29h]
  int v27; // [rsp+7Ch] [rbp-25h]
  __int64 v28; // [rsp+80h] [rbp-21h]
  __int64 v29; // [rsp+88h] [rbp-19h]
  __int64 v30; // [rsp+90h] [rbp-11h]
  _QWORD *v31; // [rsp+98h] [rbp-9h]
  unsigned int ContiguousMemory; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(v22, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(237);
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
  v22[0] = ReturnAddressForWrappers;
LABEL_7:
  v17 = 0;
  v31 = a1;
  v27 = a5;
  v26 = a6;
  v25 = BugCheckParameter2;
  v24 = a8;
  v23 = a9;
  v22[1] = a10;
  v30 = a2;
  v29 = a3;
  v28 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v17 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v14[4]; i != v14 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v22);
    }
    if ( v17 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  ContiguousMemory = MmAllocateContiguousMemoryEx(a1, a2, a3, a4, a5, a6, BugCheckParameter2, a8, a9, a10);
  if ( v14 )
  {
    if ( (v19 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v19 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v14[6]; j != v14 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v22);
      }
      if ( v19 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ContiguousMemory;
}
