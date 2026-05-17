/*
 * XREFs of LdrpFindLoadedDllInternal @ 0x1800CBC80
 * Callers:
 *     LdrpFindLoadedDll @ 0x1800492A0 (LdrpFindLoadedDll.c)
 *     LdrpInitializeKernel32Functions @ 0x1800CB874 (LdrpInitializeKernel32Functions.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDllInternal(unsigned __int16 *a1, __int16 **a2, _QWORD *a3, __int64 a4, int a5)
{
  int LoadedDllByName; // ebx
  int v11; // eax
  __int128 v12; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v13; // [rsp+60h] [rbp-A0h] BYREF
  int v14; // [rsp+70h] [rbp-90h] BYREF
  _WORD *v15; // [rsp+78h] [rbp-88h]
  _WORD v16[128]; // [rsp+80h] [rbp-80h] BYREF

  v13 = 0LL;
  memset_thunk_772440563353939046(&v14, 0, 0x110uLL);
  *a3 = 0LL;
  if ( (a5 & 0x20) != 0 )
  {
    LoadedDllByName = LdrpFindLoadedDllByName(a1, 0LL, a5, a3, a4);
  }
  else if ( (a5 & 0x200) == 0
         || (LoadedDllByName = LdrpFindLoadedDllByName(0LL, (unsigned __int64)a1, a5, a3, a4), LoadedDllByName < 0) )
  {
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
    v12 = 0LL;
    if ( (a5 & 0x200) != 0 )
      v11 = LdrpResolveDllName(a1, (__int64)&v14, (__int64)&v13, &v12, a5);
    else
      v11 = LdrpSearchPath(a1, a2, 0, 0LL, &v14, (__int64)&v13, (unsigned __int16 *)&v12, 0LL, 0LL);
    LoadedDllByName = v11;
    if ( v11 >= 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned __int16 *)&v13, (unsigned __int64)&v12, a5, a3, a4);
      if ( LoadedDllByName == -1073741515 )
        LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v14, a3, a4);
    }
    if ( *((_QWORD *)&v12 + 1) )
      RtlpSysVolFree(*((__int64 *)&v12 + 1));
    if ( v16 != v15 )
      RtlpSysVolFree((__int64)v15);
    v14 = 0x1000000;
    v15 = v16;
    v16[0] = 0;
  }
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrfind.c",
    482,
    (__int64)"LdrpFindLoadedDllInternal",
    4,
    "Status: 0x%08lx\n",
    LoadedDllByName);
  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrfind.c",
    483,
    (__int64)"LdrpFindLoadedDllInternal",
    6,
    "%x\n",
    LoadedDllByName);
  return (unsigned int)LoadedDllByName;
}
