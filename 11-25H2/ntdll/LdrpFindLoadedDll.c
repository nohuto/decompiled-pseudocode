/*
 * XREFs of LdrpFindLoadedDll @ 0x1800492A0
 * Callers:
 *     LdrGetDllHandle @ 0x180049620 (LdrGetDllHandle.c)
 *     LdrGetDllHandleEx @ 0x180049800 (LdrGetDllHandleEx.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpDereferenceModule @ 0x180048C70 (LdrpDereferenceModule.c)
 *     LdrpDrainWorkQueue @ 0x18006FAA0 (LdrpDrainWorkQueue.c)
 *     LdrpSearchPath @ 0x180070410 (LdrpSearchPath.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpFindLoadedDllByName @ 0x18007A380 (LdrpFindLoadedDllByName.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpFindLoadedDllInternal @ 0x1800CBC80 (LdrpFindLoadedDllInternal.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800CBEB8 (LdrpFindLoadedDllByMappingFile.c)
 *     LdrpDropLastInProgressCount @ 0x1800F05A0 (LdrpDropLastInProgressCount.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, int a2, __int64 *a3)
{
  int LoadedDllByName; // ebx
  int v7; // esi
  int v9; // eax
  __int64 v10; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v11; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v12; // [rsp+70h] [rbp-98h] BYREF
  int v13; // [rsp+88h] [rbp-80h] BYREF
  _WORD *v14; // [rsp+90h] [rbp-78h]
  _WORD v15[128]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v16[2]; // [rsp+198h] [rbp+90h] BYREF
  __int16 *v17; // [rsp+1A0h] [rbp+98h]
  __int16 v18; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v19[254]; // [rsp+1AAh] [rbp+A2h] BYREF

  v16[1] = 0;
  memset_thunk_772440563353939046(v19, 0, 0xFEuLL);
  v16[0] = 0x1000000;
  v10 = 0LL;
  v17 = &v18;
  *a3 = 0LL;
  v18 = 0;
  LoadedDllByName = LdrpPreprocessDllName(a1, (unsigned __int16 *)v16, 0LL, (int *)&v10 + 1);
  if ( LoadedDllByName >= 0 )
  {
    v12 = 0LL;
    memset_thunk_772440563353939046(&v13, 0, 0x110uLL);
    v7 = HIDWORD(v10);
    *a3 = 0LL;
    if ( (v7 & 0x20) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v16, 0, v7, (_DWORD)a3, (__int64)&v10);
    }
    else if ( (v7 & 0x200) == 0
           || (LoadedDllByName = LdrpFindLoadedDllByName(0, (unsigned int)v16, v7, (_DWORD)a3, (__int64)&v10),
               LoadedDllByName < 0) )
    {
      v13 = 0x1000000;
      v14 = v15;
      v15[0] = 0;
      v11 = 0LL;
      if ( (v7 & 0x200) != 0 )
        v9 = LdrpResolveDllName((char)v16, v7);
      else
        v9 = LdrpSearchPath((char)v16, (__int64)&v13, (__int64)&v12, (__int64)&v11, 0LL, 0LL);
      LoadedDllByName = v9;
      if ( v9 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)&v12, (unsigned int)&v11, v7, (_DWORD)a3, (__int64)&v10);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v13, a3, &v10);
      }
      if ( *((_QWORD *)&v11 + 1) )
        RtlpSysVolFree(*((__int64 *)&v11 + 1));
      if ( v15 != v14 )
        RtlpSysVolFree((__int64)v14);
      v13 = 0x1000000;
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
    if ( LoadedDllByName >= 0 && (int)v10 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllByName = LdrpFindLoadedDllInternal((unsigned int)v16, a2, (_DWORD)a3, (unsigned int)&v10, HIDWORD(v10));
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
