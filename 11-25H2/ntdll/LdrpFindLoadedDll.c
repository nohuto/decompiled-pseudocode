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

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, __int64 a2, char **a3)
{
  int LoadedDllByName; // ebx
  int v6; // esi
  int v8; // eax
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v10[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v11[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h] BYREF
  _WORD *v13; // [rsp+90h] [rbp-78h]
  _WORD v14[128]; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING Source; // [rsp+198h] [rbp+90h] BYREF
  __int16 v16; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v17[254]; // [rsp+1AAh] [rbp+A2h] BYREF

  *(_DWORD *)(&Source.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v17, 0, 0xFEuLL);
  *(_DWORD *)&Source.Length = 0x1000000;
  v9 = 0LL;
  Source.Buffer = (wchar_t *)&v16;
  *a3 = 0LL;
  v16 = 0;
  LoadedDllByName = LdrpPreprocessDllName(a1, &Source, 0LL, (int *)&v9 + 1);
  if ( LoadedDllByName >= 0 )
  {
    *(_OWORD *)v11 = 0LL;
    memset_thunk_772440563353939046(&v12, 0, 0x110uLL);
    v6 = HIDWORD(v9);
    *a3 = 0LL;
    if ( (v6 & 0x20) != 0 )
    {
      LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)&Source, 0, v6, (_DWORD)a3, (__int64)&v9);
    }
    else if ( (v6 & 0x200) == 0
           || (LoadedDllByName = LdrpFindLoadedDllByName(0, (unsigned int)&Source, v6, (_DWORD)a3, (__int64)&v9),
               LoadedDllByName < 0) )
    {
      LODWORD(v12) = 0x1000000;
      v13 = v14;
      v14[0] = 0;
      *(_OWORD *)v10 = 0LL;
      if ( (v6 & 0x200) != 0 )
        v8 = LdrpResolveDllName((unsigned int)&Source, (unsigned int)&v12, (unsigned int)v11, (unsigned int)v10, v6);
      else
        v8 = LdrpSearchPath(&Source, (__int64)&v12, (__int64)v11, (__int64)v10, 0LL, 0LL);
      LoadedDllByName = v8;
      if ( v8 >= 0 )
      {
        LoadedDllByName = LdrpFindLoadedDllByName((unsigned int)v11, (unsigned int)v10, v6, (_DWORD)a3, (__int64)&v9);
        if ( LoadedDllByName == -1073741515 )
          LoadedDllByName = LdrpFindLoadedDllByMappingFile(&v12, a3, &v9);
      }
      if ( v10[1] )
        RtlpSysVolFree((void *)v10[1]);
      if ( v14 != v13 )
        RtlpSysVolFree(v13);
      LODWORD(v12) = 0x1000000;
      v13 = v14;
      v14[0] = 0;
    }
    LdrpLogInternal(
      "minkernel\\ldr\\ldrfind.c",
      482LL,
      "LdrpFindLoadedDllInternal",
      4LL,
      "Status: 0x%08lx\n",
      LoadedDllByName);
    LdrpLogInternal("minkernel\\ldr\\ldrfind.c", 483LL, "LdrpFindLoadedDllInternal", 6LL, "%x\n", LoadedDllByName);
    if ( LoadedDllByName >= 0 && (int)v9 < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllByName = LdrpFindLoadedDllInternal(&Source, SHIDWORD(v9));
      LdrpDropLastInProgressCount();
      if ( LoadedDllByName >= 0 && (_DWORD)v9 != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllByName = -1073741515;
      }
    }
  }
  if ( &v16 != (__int16 *)Source.Buffer )
    RtlpSysVolFree(Source.Buffer);
  return (unsigned int)LoadedDllByName;
}
