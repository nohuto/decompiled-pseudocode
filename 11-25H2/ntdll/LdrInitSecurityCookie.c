/*
 * XREFs of LdrInitSecurityCookie @ 0x1800223C0
 * Callers:
 *     InitSecurityCookie @ 0x180002B48 (InitSecurityCookie.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     LdrpGenSecurityCookie @ 0x180022600 (LdrpGenSecurityCookie.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x180022E20 (LdrImageDirectoryEntryToLoadConfig.c)
 *     ZwProtectVirtualMemory @ 0x180163C20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(
        unsigned __int64 *BaseOfImage,
        unsigned int a2,
        unsigned __int64 *a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  int v5; // edi
  __int64 v6; // r15
  _DWORD *v10; // r8
  unsigned __int64 v11; // rbx
  __int64 Config; // rax
  unsigned int v14; // r9d
  unsigned int v15; // r10d
  _DWORD *v16; // rdx
  unsigned int v17; // ecx
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+30h] [rbp-38h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-30h] BYREF
  PVOID BaseAddress[5]; // [rsp+40h] [rbp-28h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+18h] BYREF

  v5 = 0;
  v6 = a2;
  NewProtect = 0;
  BaseAddress[0] = 0LL;
  RegionSize = 0LL;
  v10 = 0LL;
  if ( a3 )
  {
    v5 = 1;
    goto LABEL_3;
  }
  OutHeaders = 0LL;
  RtlImageNtHeaderEx(1u, BaseOfImage, 0LL, &OutHeaders);
  Config = LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  v10 = (_DWORD *)Config;
  if ( !Config )
  {
LABEL_27:
    v10 = 0LL;
LABEL_28:
    a3 = 0LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)Config < 0x70u
    || (a3 = *(unsigned __int64 **)(Config + 88), a3 <= BaseOfImage)
    || a3 >= (unsigned __int64 *)((char *)BaseOfImage + v6 - 8) )
  {
    if ( *(_DWORD *)Config >= 4u )
      goto LABEL_28;
    goto LABEL_27;
  }
  v14 = (_DWORD)a3 - (_DWORD)BaseOfImage;
  v15 = 0;
  v16 = (_DWORD *)((char *)&OutHeaders->OptionalHeader.Magic + OutHeaders->FileHeader.SizeOfOptionalHeader);
  while ( v15 < OutHeaders->FileHeader.NumberOfSections )
  {
    v17 = v16[3];
    if ( v14 >= v17 && v14 < v16[4] + v17 )
    {
      if ( (int)v16[9] >= 0 )
        v5 = 1;
      break;
    }
    v16 += 10;
    ++v15;
  }
LABEL_3:
  if ( a5 )
    *a5 = v10;
  if ( !v10 || *v10 < 0x94u || (v10[36] & 0x800) == 0 )
  {
    if ( !a3 || *a3 != 0x2B992DDFA232LL )
      return 0LL;
    v11 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ LdrpGenSecurityCookie(a3)) & 0xFFFFFFFFFFFFLL;
    if ( v11 == 0x2B992DDFA232LL || !v11 )
      v11 = 0x2B992DDFA233LL;
    if ( !v5 )
    {
      *a3 = v11;
      return 1LL;
    }
    BaseAddress[0] = a3;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, 4u, &NewProtect) < 0 )
      return 0LL;
    *a3 = v11;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, &RegionSize, NewProtect, &NewProtect);
  }
  return 1LL;
}
