/*
 * XREFs of PspSetupReservedUserMappings @ 0x140A3D458
 * Callers:
 *     PspAllocateProcess @ 0x1409FACD0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1406A76B0 (ZwAllocateVirtualMemory.c)
 *     ZwAllocateVirtualMemoryEx @ 0x1406A82B0 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v4; // rbx
  int v6; // edi
  ULONG v8; // r13d
  ULONG v9; // r15d
  NTSTATUS VirtualMemory; // ebp
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rdi
  __int64 v15; // rbx
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3 + 32;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v6 = *(_DWORD *)(a3[27] + 8LL) & 0x1000060;
  if ( !v6 && !*v4 )
    return 0LL;
  v8 = 0x2000;
  v9 = 4;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0, a2);
  v13 = v4;
  if ( v6 == 0x1000000 )
  {
    v8 = 270336;
    v9 = 1;
  }
  else if ( v6 )
  {
    BaseAddress = (PVOID)4;
    if ( v6 == 32 )
    {
      RegionSize = 1048320LL;
    }
    else if ( v6 == 64 )
    {
      RegionSize = 16776960LL;
      v13 = a3 + 32;
    }
    VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( VirtualMemory < 0 )
      goto LABEL_16;
  }
  v14 = 0LL;
  if ( *v4 )
  {
    v15 = 0LL;
    do
    {
      VirtualMemory = ZwAllocateVirtualMemoryEx(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(v15 + a3[35]),
                        (PSIZE_T)(v15 + a3[35] + 8),
                        v8,
                        v9,
                        0LL,
                        0);
      if ( VirtualMemory < 0 )
        break;
      ++v14;
      v15 += 16LL;
    }
    while ( v14 < *v13 );
  }
LABEL_16:
  KiUnstackDetachProcess(a2, 0, v11, v12);
  return (unsigned int)VirtualMemory;
}
