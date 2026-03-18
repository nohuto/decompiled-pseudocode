/*
 * XREFs of RtlpWow64CreateUserStack @ 0x140A144C8
 * Callers:
 *     PspWow64SetupUserStack @ 0x140A14418 (PspWow64SetupUserStack.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     ZwAllocateVirtualMemory @ 0x14069B440 (ZwAllocateVirtualMemory.c)
 *     ZwSetInformationProcess @ 0x14069B4C0 (ZwSetInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x14069B500 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlpWow64CreateUserStack(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, int a4, __int64 a5)
{
  struct _LIST_ENTRY *Blink; // r15
  int v7; // edi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  ULONG_PTR v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 result; // rax
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
  int v27; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+64h] [rbp-64h]
  int v29; // [rsp+68h] [rbp-60h]
  int v30; // [rsp+6Ch] [rbp-5Ch]
  unsigned __int64 v31; // [rsp+70h] [rbp-58h]
  __int64 v32; // [rsp+78h] [rbp-50h]
  __int64 v33; // [rsp+80h] [rbp-48h]
  struct _LIST_ENTRY *v34; // [rsp+88h] [rbp-40h]
  unsigned __int64 v35; // [rsp+D0h] [rbp+8h]
  __int64 v37; // [rsp+E0h] [rbp+18h]

  v37 = a3;
  v35 = a1;
  v25 = 0LL;
  v33 = 0LL;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  v23 = Blink;
  if ( !a1 || (v12 = a2) == 0 )
  {
    v7 = 0;
    v8 = RtlImageNtHeader(KeGetCurrentThread()->ApcState.Process[1].Padding[5]);
    v9 = v8;
    if ( v8 )
    {
      v10 = *(unsigned int *)(v8 + 100);
      v11 = *(_DWORD *)(v9 + 96);
      a1 = v35;
      if ( !v35 )
        a1 = v10;
      v12 = a2;
      if ( !a2 )
        v12 = v11;
    }
    else
    {
      v7 = -1073741701;
      v22 = -1073741701;
      v12 = a2;
      a1 = v35;
    }
    if ( v7 < 0 )
      return (unsigned int)v7;
    a3 = v37;
  }
  if ( !a1 )
    a1 = 0x4000LL;
  if ( a1 >= v12 )
    v12 = (a1 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  v13 = (a1 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v12 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
  v34 = Blink[49].Blink;
  if ( v34 && v13 < (unsigned __int64)v34 )
  {
    v13 = ((unsigned __int64)&v34[255].Blink + 7) & 0xFFFFFFFFFFFFF000uLL;
    v14 = (v13 + 0xFFFFF) & 0xFFFFFFFFFFF00000uLL;
  }
  v27 = a4;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  v31 = v14;
  v32 = a3;
  result = ZwSetInformationProcess(-1LL, 41LL);
  if ( (int)result >= 0 )
  {
    v16 = v33;
    *(_QWORD *)(a5 + 56) = v33;
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
        return 0LL;
      BaseAddress = v20 - 0x2000;
      v25 = 0x2000LL;
      v18 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v25, 0x1000u, 0x104u);
      if ( v18 >= 0 )
        return 0LL;
    }
    v23 = *(PVOID *)(a5 + 56);
    v24 = 0LL;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v23, &v24, 0x8000u);
    *(_QWORD *)(a5 + 56) = 0LL;
    *(_QWORD *)(a5 + 40) = 0LL;
    *v19 = 0LL;
    return (unsigned int)v18;
  }
  return result;
}
