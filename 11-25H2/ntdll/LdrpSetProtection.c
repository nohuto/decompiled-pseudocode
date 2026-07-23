/*
 * XREFs of LdrpSetProtection @ 0x1800E42F0
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpSetProtection(char *BaseOfImage, char a2)
{
  PIMAGE_NT_HEADERS v4; // rsi
  unsigned int v5; // edi
  unsigned int *v6; // rbx
  int v7; // edx
  int v8; // ecx
  ULONG v9; // r9d
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-20h] BYREF
  ULONG OldProtect; // [rsp+70h] [rbp+18h] BYREF
  PIMAGE_NT_HEADERS v14; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  OldProtect = 0;
  RegionSize = 0LL;
  BaseAddress = 0LL;
  RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v14);
  v4 = v14;
  v5 = 0;
  v6 = (unsigned int *)((char *)&v14->OptionalHeader.AddressOfEntryPoint + v14->FileHeader.SizeOfOptionalHeader);
  while ( v5 < v4->FileHeader.NumberOfSections )
  {
    v7 = v6[5];
    if ( v7 >= 0 && *v6 )
    {
      if ( a2 )
      {
        v8 = (v7 & 0x20000000) != 0 ? ((v7 & 0x40000000) != 0 ? 32 : 16) : 2;
        v9 = v8 | 0x200;
        if ( (v7 & 0x4000000) == 0 )
          v9 = v8;
      }
      else
      {
        v9 = 4;
      }
      BaseAddress = &BaseOfImage[*(v6 - 1)];
      RegionSize = *v6;
      if ( RegionSize )
      {
        result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, v9, &OldProtect);
        if ( result < 0 )
          return result;
      }
    }
    v6 += 10;
    ++v5;
  }
  return 0;
}
