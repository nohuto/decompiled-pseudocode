/*
 * XREFs of DifMmAllocateContiguousMemoryExWrapper @ 0x14062FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     MmAllocateContiguousMemoryEx @ 0x1403966A0 (MmAllocateContiguousMemoryEx.c)
 *     DifGetAPIThunkContextById @ 0x1404848A0 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1404C302C (DifGetReturnAddressForWrappers.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall DifMmAllocateContiguousMemoryExWrapper(
        __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        ULONG **BugCheckParameter2,
        unsigned int a8,
        int a9,
        unsigned __int64 *a10)
{
  __int64 *APIThunkContextById; // rax
  __int64 v14; // rdx
  __int64 *v15; // r13
  int v16; // ecx
  PVOID ReturnAddressForWrappers; // rax
  BOOLEAN v18; // r12
  __int64 *i; // r14
  __int64 v20; // rdx
  BOOLEAN v21; // di
  __int64 *j; // rbx
  _QWORD v24[2]; // [rsp+58h] [rbp-49h] BYREF
  int v25; // [rsp+68h] [rbp-39h]
  unsigned int v26; // [rsp+6Ch] [rbp-35h]
  ULONG **v27; // [rsp+70h] [rbp-31h]
  unsigned int v28; // [rsp+78h] [rbp-29h]
  int v29; // [rsp+7Ch] [rbp-25h]
  __int64 v30; // [rsp+80h] [rbp-21h]
  __int64 v31; // [rsp+88h] [rbp-19h]
  unsigned __int64 v32; // [rsp+90h] [rbp-11h]
  __int64 *v33; // [rsp+98h] [rbp-9h]
  unsigned int ContiguousMemory; // [rsp+A0h] [rbp-1h]
  void *retaddr; // [rsp+D0h] [rbp+2Fh]

  memset_0(v24, 0, 0x50uLL);
  APIThunkContextById = DifGetAPIThunkContextById(237);
  v15 = APIThunkContextById;
  if ( !APIThunkContextById )
    goto LABEL_17;
  v16 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v16 & 0x18) != 0 )
  {
    ReturnAddressForWrappers = retaddr;
  }
  else
  {
    if ( (v16 & 4) == 0 )
      goto LABEL_7;
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers();
  }
  v24[0] = ReturnAddressForWrappers;
LABEL_7:
  v18 = 0;
  v33 = a1;
  v29 = a5;
  v28 = a6;
  v27 = BugCheckParameter2;
  v26 = a8;
  v25 = a9;
  v24[1] = a10;
  v32 = a2;
  v31 = a3;
  v30 = a4;
  if ( !VfDifRunningWithoutReboot && (VfOptionFlags & 0x800) == 0
    || (v18 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
  {
    for ( i = (__int64 *)v15[4]; i != v15 + 4; i = (__int64 *)*i )
    {
      if ( i != (__int64 *)16 )
        guard_dispatch_icall_no_overrides(v24, v14);
    }
    if ( v18 )
      ExReleaseRundownProtection_0(&DifRebootlessRundown);
  }
LABEL_17:
  ContiguousMemory = MmAllocateContiguousMemoryEx(a1, a2, a3, a4, a5, a6, BugCheckParameter2, a8, a9, a10);
  if ( v15 )
  {
    if ( (v21 = 0, !VfDifRunningWithoutReboot) && (VfOptionFlags & 0x800) == 0
      || (v21 = ExAcquireRundownProtection_0(&DifRebootlessRundown)) != 0 )
    {
      for ( j = (__int64 *)v15[6]; j != v15 + 6; j = (__int64 *)*j )
      {
        if ( j != (__int64 *)16 )
          guard_dispatch_icall_no_overrides(v24, v20);
      }
      if ( v21 )
        ExReleaseRundownProtection_0(&DifRebootlessRundown);
    }
  }
  return ContiguousMemory;
}
