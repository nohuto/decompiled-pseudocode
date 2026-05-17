/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800036C0
 * Callers:
 *     LdrpInitializeKernel32Functions @ 0x1800032B8 (LdrpInitializeKernel32Functions.c)
 *     LdrpFindLoadedDll @ 0x18000A400 (LdrpFindLoadedDll.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(int a1, __int64 a2, _QWORD *a3, __int64 a4, int a5)
{
  int LoadedDllByName; // ebx
  int v10; // eax
  __int64 v11[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v14; // [rsp+78h] [rbp-88h]
  _WORD v15[128]; // [rsp+80h] [rbp-80h] BYREF

  *(_OWORD *)v12 = 0LL;
  memset_thunk_772440563353939046(&v13, 0, 0x110uLL);
  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0, a5, (_DWORD)a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0, a1, a5, (_DWORD)a3, a4), LoadedDllByName < 0) )
  {
    LODWORD(v13) = 0x1000000;
    v14 = v15;
    v15[0] = 0;
    *(_OWORD *)v11 = 0LL;
    if ( (a5 & 0x200) != 0 )
      v10 = LdrpResolveDllName(a1, a5);
    else
      v10 = LdrpSearchPath(a1, (__int64)&v13, (__int64)v12, (__int64)v11, 0LL, 0LL);
    LoadedDllByName = v10;
    if ( v10 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v12, (unsigned int)v11, a5, (_DWORD)a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v13, a3, a4);
    }
    if ( v11[1] )
      RtlpSysVolFree(v11[1]);
    if ( v15 != v14 )
      RtlpSysVolFree((__int64)v14);
    LODWORD(v13) = 0x1000000;
    v14 = v15;
    v15[0] = 0;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrfind.c",
    482,
    (int)"LdrpFindLoadedDllInternal",
    4,
    "Status: 0x%08lx\n",
    LoadedDllByName);
  LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 483, (int)"LdrpFindLoadedDllInternal", 6, "%x\n", LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
