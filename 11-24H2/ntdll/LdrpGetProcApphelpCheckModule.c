/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x18000AC90
 * Callers:
 *     LdrpDynamicShimModule @ 0x180005B7C (LdrpDynamicShimModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     LdrpReleaseDllPath @ 0x18000ABC0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18000B1F0 (LdrpLoadDll.c)
 *     RtlpAllocateAtom @ 0x18000D2C0 (RtlpAllocateAtom.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     NtdllpReallocateStringRoutine @ 0x18011EBD8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801277D0 (wcslen.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memmove @ 0x180167400 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpGetProcApphelpCheckModule(_QWORD *a1)
{
  unsigned int v2; // edi
  _DWORD *SharedData; // rcx
  __int64 v4; // rbx
  size_t v5; // rax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // r14
  unsigned int v8; // edx
  char *Atom; // rsi
  unsigned int v10; // ecx
  char *v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // edx
  char *v14; // r14
  int Dll; // ebx
  int ShimEngineInterface; // eax
  __int64 v17; // rdx
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  char *v22; // rax
  unsigned int v23; // esi
  char *v24; // rax
  char v25[4]; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h]
  __int16 v28; // [rsp+80h] [rbp-80h] BYREF
  char v29[254]; // [rsp+82h] [rbp-7Eh] BYREF
  __int64 v30[3]; // [rsp+180h] [rbp+80h] BYREF
  int v31; // [rsp+198h] [rbp+98h]
  __int64 v32; // [rsp+1A0h] [rbp+A0h]

  memset_thunk_772440563353939046(v30, 0, 0x80uLL);
  v2 = 0;
  v26 = 0;
  memset_thunk_772440563353939046(v29, 0, 0xFEuLL);
  *(_DWORD *)v25 = 0x1000000;
  Src = &v28;
  v28 = 0;
  if ( !g_pfnApphelpCheckModuleProc )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v4 = (__int64)NtCurrentPeb()->SharedData + 30;
    else
      v4 = 2147352624LL;
    LOWORD(v5) = 0;
    v6 = 0;
    if ( v4 )
    {
      v5 = 2 * wcslen((const wchar_t *)v4);
      if ( v5 >= 0xFFFE )
        LOWORD(v5) = -4;
      v7 = v5;
      v6 = v5;
    }
    else
    {
      v7 = 0;
    }
    if ( (_WORD)v5 )
    {
      v8 = v6 + *(unsigned __int16 *)v25 + 2;
      if ( v8 <= *(unsigned __int16 *)&v25[2] )
      {
        Atom = (char *)Src;
LABEL_11:
        memmove(&Atom[*(unsigned __int16 *)v25], (const void *)v4, v7);
        *(_WORD *)v25 += v7;
        *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v25 >> 1)) = 0;
        goto LABEL_12;
      }
      if ( v8 <= 0xFFFE )
      {
        v21 = (v8 + 63) & 0xFFFFFFC0;
        if ( v21 > 0xFFFE )
          v21 = 65534;
        if ( Src == &v28 )
        {
          Atom = (char *)RtlpAllocateAtom(v21);
          if ( Atom )
          {
            Src = Atom;
            *(_WORD *)&v25[2] = v21;
            goto LABEL_11;
          }
        }
        else
        {
          v22 = (char *)NtdllpReallocateStringRoutine(v21);
          Atom = v22;
          if ( v22 )
          {
            Src = v22;
            *(_WORD *)&v25[2] = v21;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_12:
    v10 = *(unsigned __int16 *)v25 + 22;
    if ( v10 <= *(unsigned __int16 *)&v25[2] )
    {
      v11 = (char *)Src;
LABEL_14:
      v12 = *(unsigned __int16 *)v25;
      *(_OWORD *)&v11[*(unsigned __int16 *)v25] = *(_OWORD *)L"\\SYSTEM32\\";
      *(_DWORD *)&v11[v12 + 16] = *(_DWORD *)L"2\\";
      *(_WORD *)v25 += 20;
      *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v25 >> 1)) = 0;
      goto LABEL_15;
    }
    if ( v10 <= 0xFFFE )
    {
      v23 = (*(unsigned __int16 *)v25 + 85) & 0xFFFFFFC0;
      if ( v23 > 0xFFFE )
        v23 = 65534;
      if ( Src == &v28 )
      {
        v11 = (char *)RtlpAllocateAtom(v23);
        if ( v11 )
        {
          if ( *(_WORD *)v25 )
            memmove(v11, Src, *(unsigned __int16 *)v25);
          Src = v11;
          *(_WORD *)&v25[2] = v23;
          goto LABEL_14;
        }
      }
      else
      {
        v24 = (char *)NtdllpReallocateStringRoutine(v23);
        v11 = v24;
        if ( v24 )
        {
          Src = v24;
          *(_WORD *)&v25[2] = v23;
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    v13 = *(unsigned __int16 *)v25 + 24;
    if ( v13 <= *(unsigned __int16 *)&v25[2] )
    {
      v14 = (char *)Src;
      goto LABEL_17;
    }
    if ( v13 > 0xFFFE )
    {
      Dll = -1073741562;
      goto LABEL_23;
    }
    v20 = (*(unsigned __int16 *)v25 + 87) & 0xFFFFFFC0;
    if ( v20 > 0xFFFE )
      v20 = 65534;
    if ( Src == &v28 )
    {
      v14 = (char *)RtlpAllocateAtom(v20);
      if ( !v14 )
        goto LABEL_38;
      if ( *(_WORD *)v25 )
        memmove(v14, Src, *(unsigned __int16 *)v25);
    }
    else
    {
      v14 = (char *)NtdllpReallocateStringRoutine(v20);
      if ( !v14 )
      {
LABEL_38:
        Dll = -1073741801;
LABEL_23:
        if ( &v28 != Src )
          RtlpSysVolFree((__int64)Src);
        return (unsigned int)Dll;
      }
    }
    *(_WORD *)&v25[2] = v20;
    Src = v14;
LABEL_17:
    memmove(&v14[*(unsigned __int16 *)v25], L"apphelp.dll", 0x16uLL);
    *(_WORD *)v25 += 22;
    *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v25 >> 1)) = 0;
    memset_thunk_772440563353939046(v30, 0, 0x80uLL);
    v31 = 0x4000;
    v32 = 0LL;
    Dll = LdrpLoadDll((char)v25);
    LdrpReleaseDllPath(v30);
    if ( Dll < 0 )
    {
      LdrpLogInternal(
        (int)"minkernel\\ldr\\ldrinit.c",
        3969,
        (int)"LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        (char)v25);
    }
    else
    {
      MEMORY[0x68] |= 0x100u;
      g_pShimEngineModule = MEMORY[0x30];
      ShimEngineInterface = LdrpGetShimEngineInterface();
      Dll = ShimEngineInterface;
      if ( ShimEngineInterface < 0 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          3980,
          (int)"LdrpGetProcApphelpCheckModule",
          0,
          "Getting the shim engine exports failed with status 0x%08lx\n",
          ShimEngineInterface);
      }
      else
      {
        Dll = -1073741823;
        v17 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
        *a1 = v17;
        if ( v17 )
          Dll = 0;
      }
    }
    goto LABEL_23;
  }
  v19 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  *a1 = v19;
  if ( !v19 )
    return (unsigned int)-1073741823;
  return v2;
}
