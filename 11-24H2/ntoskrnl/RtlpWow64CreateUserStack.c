/*
 * XREFs of RtlpWow64CreateUserStack @ 0x140A130B8
 * Callers:
 *     PspWow64SetupUserStack @ 0x140A13008 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x1406A7730 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _LIST_ENTRY *Blink; // r15
  int v7; // edi
  PIMAGE_NT_HEADERS v8; // rax
  PIMAGE_NT_HEADERS v9; // rcx
  unsigned __int64 SizeOfStackReserve_high; // rax
  unsigned int SizeOfStackReserve; // edx
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rdi
  NTSTATUS result; // eax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdi
  NTSTATUS v18; // r15d
  _QWORD *v19; // rsi
  char *v20; // rax
  PVOID BaseAddress; // [rsp+30h] [rbp-98h] BYREF
  int v22; // [rsp+38h] [rbp-90h]
  PVOID v23; // [rsp+40h] [rbp-88h] BYREF
  ULONG_PTR v24; // [rsp+48h] [rbp-80h] BYREF
  ULONG_PTR v25; // [rsp+50h] [rbp-78h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp-70h] BYREF
  _DWORD ProcessInformation[4]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-58h]
  __int64 v29; // [rsp+78h] [rbp-50h]
  __int64 v30; // [rsp+80h] [rbp-48h]
  struct _LIST_ENTRY *v31; // [rsp+88h] [rbp-40h]
  unsigned __int64 v32; // [rsp+D0h] [rbp+8h]
  __int64 v34; // [rsp+E0h] [rbp+18h]

  v34 = a3;
  v32 = a1;
  v25 = 0LL;
  v30 = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  v23 = Blink;
  if ( !a1 || (v12 = a2) == 0 )
  {
    v7 = 0;
    v8 = RtlImageNtHeader((PVOID)KeGetCurrentThread()->ApcState.Process[1].Padding[5]);
    v9 = v8;
    if ( v8 )
    {
      SizeOfStackReserve_high = HIDWORD(v8->OptionalHeader.SizeOfStackReserve);
      SizeOfStackReserve = v9->OptionalHeader.SizeOfStackReserve;
      a1 = v32;
      if ( !v32 )
        a1 = SizeOfStackReserve_high;
      v12 = a2;
      if ( !a2 )
        v12 = SizeOfStackReserve;
    }
    else
    {
      v7 = -1073741701;
      v22 = -1073741701;
      v12 = a2;
      a1 = v32;
    }
    if ( v7 < 0 )
      return v7;
    a3 = v34;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v12 )
    v12 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v13 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v12 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v31 = Blink[49].Blink;
  if ( v31 && v13 < (unsigned __int64)v31 )
  {
    v13 = ((unsigned __int64)&v31[255].Blink + 7) & 0xFFFFFFFFFFFFF000uLL;
    v14 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  ProcessInformation[0] = a4;
  ProcessInformation[1] = 0;
  ProcessInformation[3] = 0;
  ProcessInformation[2] = 0;
  v28 = v14;
  v29 = a3;
  result = ZwSetInformationProcess(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessThreadStackAllocation,
             ProcessInformation,
             0x28u);
  if ( result >= 0 )
  {
    v16 = v30;
    *(_QWORD *)(a5 + 56) = v30;
    *(_QWORD *)(a5 + 40) = v16 + v14;
    BaseAddress = (PVOID)(v14 + v16 - v13);
    v17 = v14 - v13;
    RegionSize = v13;
    v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( v18 < 0 )
    {
      v19 = (_QWORD *)(a5 + 48);
    }
    else
    {
      v19 = (_QWORD *)(a5 + 48);
      v20 = (char *)BaseAddress;
      *(_QWORD *)(a5 + 48) = BaseAddress;
      if ( v17 < 0x2000 )
        return 0;
      BaseAddress = v20 - 0x2000;
      v25 = 0x2000LL;
      v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u);
      if ( v18 >= 0 )
        return 0;
    }
    v23 = *(PVOID *)(a5 + 56);
    v24 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v23, &v24, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *v19 = 0LL;
    return v18;
  }
  return result;
}
