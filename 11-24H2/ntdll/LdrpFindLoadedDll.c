/*
 * XREFs of LdrpFindLoadedDll @ 0x18000A400
 * Callers:
 *     LdrGetDllHandle @ 0x18000A780 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x18000A960 (LdrGetDllHandleEx.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpFindLoadedDllInternal @ 0x1800036C0 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800038F8 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllByName @ 0x180018180 (LdrpFindLoadedDllByName.c)
 *     LdrpDereferenceModule @ 0x18001B350 (LdrpDereferenceModule.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpSearchPath @ 0x1800754F0 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDll(char a1, __int64 a2, _QWORD *a3)
{
  int LoadedDllByName; // ebx
  int v7; // esi
  int v9; // eax
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v11[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v12[2]; // [rsp+70h] [rbp-98h] BYREF
  UNICODE_STRING v13; // [rsp+88h] [rbp-80h] BYREF
  _WORD v14[128]; // [rsp+98h] [rbp-70h] BYREF
  char v15[4]; // [rsp+198h] [rbp+90h] BYREF
  int v16; // [rsp+19Ch] [rbp+94h]
  __int16 *v17; // [rsp+1A0h] [rbp+98h]
  __int16 v18; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v19[254]; // [rsp+1AAh] [rbp+A2h] BYREF

  v16 = 0;
  memset_thunk_772440563353939046(v19, 0, 0xFEuLL);
  *(_DWORD *)v15 = 0x1000000;
  v10 = 0LL;
  v17 = &v18;
  *a3 = 0LL;
  v18 = 0;
  LoadedDllByName = LdrpPreprocessDllName(a1);
  if ( LoadedDllByName >= 0 )
  {
    *(_OWORD *)v12 = 0LL;
    memset_thunk_772440563353939046(&v13, 0, 0x110uLL);
    v7 = HIDWORD(v10);
    *a3 = 0LL;
    if ( (v7 & 0x20) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v15, 0, v7, (_DWORD)a3, (__int64)&v10);
    }
    else if ( (v7 & 0x200) == 0
           || (LoadedDllByName = LdrpFindLoadedDllByName(0, (unsigned int)v15, v7, (_DWORD)a3, (__int64)&v10),
               LoadedDllByName < 0) )
    {
      *(_DWORD *)&v13.Length = 0x1000000;
      v13.Buffer = v14;
      v14[0] = 0;
      *(_OWORD *)v11 = 0LL;
      if ( (v7 & 0x200) != 0 )
        v9 = LdrpResolveDllName((char)v15, v7);
      else
        v9 = LdrpSearchPath((char)v15, (__int64)&v13, (__int64)v12, (__int64)v11, 0LL, 0LL);
      LoadedDllByName = v9;
      if ( v9 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v12, (unsigned int)v11, v7, (_DWORD)a3, (__int64)&v10);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v13, (__int64)a3, (__int64)&v10);
      }
      if ( v11[1] )
        RtlpSysVolFree(v11[1]);
      if ( v14 != v13.Buffer )
        RtlpSysVolFree((__int64)v13.Buffer);
      *(_DWORD *)&v13.Length = 0x1000000;
      v13.Buffer = v14;
      v14[0] = 0;
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrfind.c",
      482,
      (int)"LdrpFindLoadedDllInternal",
      4,
      "Status: 0x%08lx\n",
      LoadedDllByName);
    LdrpLogInternal((int)"minkernel\\ldr\\ldrfind.c", 483, (int)"LdrpFindLoadedDllInternal", 6, "%x\n", LoadedDllByName);
    if ( LoadedDllByName >= 0 && (int)v10 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0);
      LoadedDllByName = LdrpFindLoadedDllInternal((int)v15, a2, a3, (__int64)&v10, SHIDWORD(v10));
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && (_DWORD)v10 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllByName = -1073741515;
      }
    }
  }
  if ( &v18 != v17 )
    RtlpSysVolFree((__int64)v17);
  return (unsigned int)LoadedDllByName;
}
