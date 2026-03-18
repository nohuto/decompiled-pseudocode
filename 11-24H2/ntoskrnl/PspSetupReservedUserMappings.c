/*
 * XREFs of PspSetupReservedUserMappings @ 0x140A474E8
 * Callers:
 *     PspAllocateProcess @ 0x140A1C4C0 (PspAllocateProcess.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     ZwAllocateVirtualMemory @ 0x1406A6710 (ZwAllocateVirtualMemory.c)
 *     ZwAllocateVirtualMemoryEx @ 0x1406A7310 (ZwAllocateVirtualMemoryEx.c)
 */

__int64 __fastcall PspSetupReservedUserMappings(_KPROCESS *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 *v4; // rbx
  int v6; // edi
  int VirtualMemory; // ebp
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  ULONG_PTR RegionSize; // [rsp+90h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3 + 32;
  BaseAddress = 0LL;
  RegionSize = 0LL;
  v6 = *(_DWORD *)(a3[27] + 8LL) & 0x1000060;
  if ( !v6 && !*v4 )
    return 0LL;
  VirtualMemory = 0;
  KiStackAttachProcess(a1, 0, a2);
  v9 = v4;
  if ( v6 == 0x1000000 || !v6 )
    goto LABEL_11;
  BaseAddress = (PVOID)4;
  if ( v6 == 32 )
  {
    RegionSize = 1048320LL;
  }
  else if ( v6 == 64 )
  {
    RegionSize = 16776960LL;
    v9 = a3 + 32;
  }
  VirtualMemory = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x2000u, 4u);
  if ( VirtualMemory >= 0 )
  {
LABEL_11:
    v10 = 0LL;
    if ( *v4 )
    {
      v11 = 0LL;
      do
      {
        VirtualMemory = ZwAllocateVirtualMemoryEx(-1LL, v11 + a3[35]);
        if ( VirtualMemory < 0 )
          break;
        ++v10;
        v11 += 16LL;
      }
      while ( v10 < *v9 );
    }
  }
  KiUnstackDetachProcess(a2, 0);
  return (unsigned int)VirtualMemory;
}
