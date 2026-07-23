/*
 * XREFs of RtlCreateUserStack @ 0x1800F6D40
 * Callers:
 *     <none>
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     ZwAllocateVirtualMemory @ 0x180163520 (ZwAllocateVirtualMemory.c)
 *     NtSetInformationProcess @ 0x1801635A0 (NtSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1801635E0 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __cdecl RtlCreateUserStack(
        SIZE_T CommittedStackSize,
        SIZE_T MaximumStackSize,
        ULONG_PTR ZeroBits,
        SIZE_T PageSize,
        ULONG_PTR ReserveAlignment,
        PINITIAL_TEB InitialTeb)
{
  SIZE_T v6; // r15
  SIZE_T v7; // rsi
  ULONG_PTR v8; // r14
  ULONG_PTR v9; // r12
  struct _PEB *v10; // r13
  SIZE_T SizeOfStackCommit; // rdi
  SIZE_T SizeOfStackReserve; // rbx
  NTSTATUS result; // eax
  __int64 v14; // rcx
  ULONG_PTR v15; // rdi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  PINITIAL_TEB v18; // rsi
  char *v19; // rcx
  ULONG_PTR v20; // rbx
  int v21; // edi
  char *v22; // rax
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-88h] BYREF
  ULONG_PTR v24; // [rsp+38h] [rbp-80h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-78h] BYREF
  PVOID StackAllocationBase; // [rsp+48h] [rbp-70h] BYREF
  ULONG_PTR MinimumStackCommit; // [rsp+50h] [rbp-68h]
  int ProcessInformation; // [rsp+58h] [rbp-60h] BYREF
  __int64 v29; // [rsp+5Ch] [rbp-5Ch]
  int v30; // [rsp+64h] [rbp-54h]
  unsigned __int64 v31; // [rsp+68h] [rbp-50h]
  ULONG_PTR v32; // [rsp+70h] [rbp-48h]
  char *v33; // [rsp+78h] [rbp-40h]
  ULONG_PTR v35; // [rsp+D0h] [rbp+18h]
  PVOID BaseAddress; // [rsp+D8h] [rbp+20h] BYREF

  v35 = ZeroBits;
  v24 = 0LL;
  v33 = 0LL;
  v6 = HIBYTE(PageSize);
  v7 = PageSize & 0xFFFFFFFFFFFFFFLL;
  if ( HIBYTE(PageSize) > 0x40u )
    return -1073741811;
  if ( !v7 )
    return -1073741811;
  v8 = ReserveAlignment;
  if ( !ReserveAlignment || ReserveAlignment < v7 )
    return -1073741811;
  v9 = 3 * v7;
  v10 = NtCurrentPeb();
  SizeOfStackCommit = CommittedStackSize;
  SizeOfStackReserve = MaximumStackSize;
  if ( !CommittedStackSize || !MaximumStackSize )
  {
    OutHeaders = 0LL;
    RtlImageNtHeaderEx(1u, v10->ImageBaseAddress, 0LL, &OutHeaders);
    if ( !OutHeaders )
      return -1073741701;
    if ( !CommittedStackSize )
      SizeOfStackCommit = OutHeaders->OptionalHeader.SizeOfStackCommit;
    if ( !SizeOfStackReserve )
      SizeOfStackReserve = OutHeaders->OptionalHeader.SizeOfStackReserve;
    ZeroBits = v35;
  }
  if ( !SizeOfStackCommit )
    SizeOfStackCommit = 0x4000LL;
  if ( SizeOfStackCommit >= SizeOfStackReserve )
    SizeOfStackReserve = (SizeOfStackCommit + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v14 = ~(v7 - 1);
  v15 = v14 & (v7 + SizeOfStackCommit - 1);
  v16 = ~(v8 - 1);
  v17 = v16 & (v8 + SizeOfStackReserve - 1);
  MinimumStackCommit = v10->MinimumStackCommit;
  if ( MinimumStackCommit && v15 < MinimumStackCommit )
  {
    v15 = v14 & (v7 + MinimumStackCommit - 1);
    if ( v15 >= v17 )
      v17 = (v15 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
    v17 = v16 & (v8 + v17 - 1);
  }
  ProcessInformation = v6;
  v29 = 0LL;
  v30 = 0;
  v31 = v17;
  v32 = ZeroBits;
  result = NtSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             &ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v18 = InitialTeb;
    InitialTeb->OldInitialTeb.OldStackBase = 0LL;
    v18->OldInitialTeb.OldStackLimit = 0LL;
    v19 = v33;
    v18->StackAllocationBase = v33;
    v18->StackBase = &v19[v17];
    BaseAddress = &v19[v17 - v15];
    v20 = v17 - v15;
    RegionSize = v15;
    v21 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v21 < 0
      || (v22 = (char *)BaseAddress, v18->StackLimit = BaseAddress, v20 >= v9)
      && (BaseAddress = &v22[-v9],
          v24 = v9,
          v21 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v24, 0x1000u, 0x104u),
          v21 < 0) )
    {
      StackAllocationBase = v18->StackAllocationBase;
      OutHeaders = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &StackAllocationBase, (PSIZE_T)&OutHeaders, 0x8000u);
      return v21;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
