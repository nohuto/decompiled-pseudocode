/*
 * XREFs of PspSetupReservedUserMappings @ 0x140A4428C
 * Callers:
 *     PspAllocateProcess @ 0x1409BE78C (PspAllocateProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x14069B440 (ZwAllocateVirtualMemory.c)
 *     ZwAllocateVirtualMemoryEx @ 0x14069C040 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v4; // rbx
  int v6; // edi
  ULONG v8; // r13d
  ULONG v9; // r15d
  NTSTATUS VirtualMemory; // ebp
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
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
  v11 = v4;
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
      v11 = a3 + 32;
    }
    VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
    if ( VirtualMemory < 0 )
      goto LABEL_16;
  }
  v12 = 0LL;
  if ( *v4 )
  {
    v13 = 0LL;
    do
    {
      VirtualMemory = ZwAllocateVirtualMemoryEx(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        (PVOID *)(v13 + a3[35]),
                        (PSIZE_T)(v13 + a3[35] + 8),
                        v8,
                        v9,
                        0LL,
                        0);
      if ( VirtualMemory < 0 )
        break;
      ++v12;
      v13 += 16LL;
    }
    while ( v12 < *v11 );
  }
LABEL_16:
  KiUnstackDetachProcess(a2, 0LL);
  return (unsigned int)VirtualMemory;
}
