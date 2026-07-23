/*
 * XREFs of RtlpHpSegProtect @ 0x1801599D0
 * Callers:
 *     RtlpHpHeapProtect @ 0x180159364 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x180163680 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpSegProtect(__int64 a1, ULONG a2)
{
  char *v2; // rsi
  char *v3; // rbx
  char *v6; // rcx
  __int64 v7; // rdi
  char *v8; // rdi
  char *i; // rax
  NTSTATUS result; // eax
  __int128 MemoryInformation; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int128 v13; // [rsp+50h] [rbp-10h]
  ULONG OldProtect; // [rsp+90h] [rbp+30h] BYREF
  PVOID BaseAddress; // [rsp+A0h] [rbp+40h] BYREF
  ULONG_PTR RegionSize; // [rsp+A8h] [rbp+48h] BYREF

  RegionSize = 0LL;
  v2 = (char *)(a1 + 72);
  OldProtect = 0;
  v3 = *(char **)(a1 + 72);
  MemoryInformation = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  while ( v3 != v2 )
  {
    v6 = v3;
    v7 = (unsigned int)-*(_DWORD *)a1;
    BaseAddress = v3;
    v8 = &v3[v7];
    for ( i = v3; i < v8; i = v6 )
    {
      result = ZwQueryVirtualMemory(
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 v6,
                 MemoryBasicInformation,
                 &MemoryInformation,
                 0x30uLL,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (_DWORD)v13 == 4096 )
      {
        RegionSize = *((_QWORD *)&v12 + 1);
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
        if ( result < 0 )
          return result;
      }
      v6 = (char *)BaseAddress + *((_QWORD *)&v12 + 1);
      BaseAddress = v6;
    }
    v3 = *(char **)v3;
  }
  return 0;
}
