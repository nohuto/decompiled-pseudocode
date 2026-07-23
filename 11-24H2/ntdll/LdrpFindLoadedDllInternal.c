/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800C73E0
 * Callers:
 *     LdrpFindLoadedDll @ 0x180036E00 (LdrpFindLoadedDll.c)
 *     LdrpInitializeKernel32Functions @ 0x1800C6FD8 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180044B80 (LdrpFindLoadedDllByName.c)
 *     LdrpSearchPath @ 0x180091DD0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800C7618 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(UNICODE_STRING *Source, wchar_t **a2, _QWORD *a3, __int64 a4, int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  __int64 v12[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v13[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  *(_OWORD *)v13 = 0LL;
  memset_thunk_772440563353939046(&v14, 0, 0x110uLL);
  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(&Source->Length, 0LL, a5, a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, (unsigned __int64)Source, a5, a3, a4), LoadedDllByName < 0) )
  {
    LODWORD(v14) = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    *(_OWORD *)v12 = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName(Source, (__int64)&v14, (__int64)v13, v12, a5);
    else
      v11 = LdrpSearchPath(Source, a2, 0, 0LL, &v14, (__int64)v13, (const UNICODE_STRING *)v12, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned __int16 *)v13, (unsigned __int64)v12, a5, a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    if ( v12[1] )
      RtlpSysVolFree((void *)v12[1]);
    if ( v16 != v15 )
      RtlpSysVolFree(v15);
    LODWORD(v14) = 0x1000000;
    v15 = v16;
    v16[0] = 0;
  }
  LdrpLogInternal(
    "minkernel\\ldr\\ldrfind.c",
    482,
    (__int64)"LdrpFindLoadedDllInternal",
    4,
    "Status: 0x%08lx\n",
    LoadedDllByName);
  LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 483, (__int64)"LdrpFindLoadedDllInternal", 6, "%x\n", LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
