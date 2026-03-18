/*
 * XREFs of sub_1409E0E44 @ 0x1409E0E44
 * Callers:
 *     sub_140800BE0 @ 0x140800BE0 (sub_140800BE0.c)
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 *     sub_1409E0950 @ 0x1409E0950 (sub_1409E0950.c)
 *     sub_1409E0C6C @ 0x1409E0C6C (sub_1409E0C6C.c)
 *     sub_1409E1660 @ 0x1409E1660 (sub_1409E1660.c)
 *     sub_1409E17B4 @ 0x1409E17B4 (sub_1409E17B4.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1406A6870 (ZwQueryVirtualMemory.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall sub_1409E0E44(PVOID BaseAddress, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r9
  NTSTATUS v9; // r8d
  __int64 v10; // rcx
  ULONG_PTR v12; // [rsp+30h] [rbp-50h] BYREF
  __int128 MemoryInformation; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+60h] [rbp-20h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  ULONG_PTR ReturnLength; // [rsp+A8h] [rbp+28h] BYREF

  v3 = a2;
  v12 = 0LL;
  ReturnLength = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  MemoryInformation = 0LL;
  v6 = ZwQueryVirtualMemory(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         BaseAddress,
         (MEMORY_INFORMATION_CLASS)6,
         &MemoryInformation,
         0x18uLL,
         &ReturnLength);
  v9 = v6;
  if ( v6 >= 0 )
  {
    v10 = (unsigned int)v14 >> 2;
    LOBYTE(v10) = v10 & 0xF;
    if ( qword_140F048C0
      && (LOBYTE(v7) = 12, (unsigned int)guard_dispatch_icall_no_overrides(v10, v7, (unsigned int)v6, v8)) )
    {
      v9 = 0;
      if ( a3 )
      {
        v9 = ZwQueryVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               BaseAddress,
               MemoryBasicInformation,
               &v15,
               0x30uLL,
               &v12);
        if ( v9 >= 0
          && ((unsigned __int64)BaseAddress < (unsigned __int64)v15
           || (unsigned __int64)BaseAddress + v3 > *((_QWORD *)&v16 + 1) + (_QWORD)v15
           || DWORD1(v17) != 32) )
        {
          return (unsigned int)-1073741811;
        }
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  return (unsigned int)v9;
}
