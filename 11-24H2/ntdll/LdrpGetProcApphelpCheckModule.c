/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x180037690
 * Callers:
 *     LdrpDynamicShimModule @ 0x18003257C (LdrpDynamicShimModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     LdrpReleaseDllPath @ 0x1800375C0 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x180037BF0 (LdrpLoadDll.c)
 *     RtlpAllocateAtom @ 0x180039CC0 (RtlpAllocateAtom.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x180125A00 (wcslen.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
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
  int v15; // ebx
  int ShimEngineInterface; // eax
  __int64 v17; // rdx
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  char *v22; // rax
  unsigned int v23; // esi
  char *v24; // rax
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v26; // [rsp+48h] [rbp-B8h]
  __int128 v27; // [rsp+58h] [rbp-A8h]
  _DWORD v28[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Src; // [rsp+78h] [rbp-88h]
  __int16 v30; // [rsp+80h] [rbp-80h] BYREF
  char v31[254]; // [rsp+82h] [rbp-7Eh] BYREF
  __int64 v32[3]; // [rsp+180h] [rbp+80h] BYREF
  int v33; // [rsp+198h] [rbp+98h]
  __int64 v34; // [rsp+1A0h] [rbp+A0h]

  v26 = 22;
  memset_thunk_772440563353939046(v32, 0, 0x80uLL);
  v2 = 0;
  v28[1] = 0;
  v25 = 0LL;
  memset_thunk_772440563353939046(v31, 0, 0xFEuLL);
  v28[0] = 0x1000000;
  Src = &v30;
  v30 = 0;
  if ( !g_pfnApphelpCheckModuleProc )
  {
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v4 = (__int64)NtCurrentPeb()->SharedData + 30;
    else
      v4 = 2147352624LL;
    LOWORD(v5) = 0;
    v6 = 0;
    v27 = 0LL;
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
      v7 = v27;
    }
    if ( (_WORD)v5 )
    {
      v8 = v6 + LOWORD(v28[0]) + 2;
      if ( v8 <= HIWORD(v28[0]) )
      {
        Atom = (char *)Src;
LABEL_11:
        memmove(&Atom[LOWORD(v28[0])], (const void *)v4, v7);
        LOWORD(v28[0]) += v7;
        *((_WORD *)Src + ((unsigned __int64)LOWORD(v28[0]) >> 1)) = 0;
        goto LABEL_12;
      }
      if ( v8 <= 0xFFFE )
      {
        v21 = (v8 + 63) & 0xFFFFFFC0;
        if ( v21 > 0xFFFE )
          v21 = 65534;
        if ( Src == &v30 )
        {
          Atom = (char *)RtlpAllocateAtom(v21);
          if ( Atom )
          {
            Src = Atom;
            HIWORD(v28[0]) = v21;
            goto LABEL_11;
          }
        }
        else
        {
          v22 = (char *)NtdllpReallocateStringRoutine(v21, Src);
          Atom = v22;
          if ( v22 )
          {
            Src = v22;
            HIWORD(v28[0]) = v21;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_12:
    v10 = LOWORD(v28[0]) + 22;
    if ( v10 <= HIWORD(v28[0]) )
    {
      v11 = (char *)Src;
LABEL_14:
      v12 = LOWORD(v28[0]);
      *(_OWORD *)&v11[LOWORD(v28[0])] = *(_OWORD *)SlashSystem32SlashString.Buffer;
      *(_DWORD *)&v11[v12 + 16] = *((_DWORD *)SlashSystem32SlashString.Buffer + 4);
      LOWORD(v28[0]) += 20;
      *((_WORD *)Src + ((unsigned __int64)LOWORD(v28[0]) >> 1)) = 0;
      goto LABEL_15;
    }
    if ( v10 <= 0xFFFE )
    {
      v23 = (LOWORD(v28[0]) + 85) & 0xFFFFFFC0;
      if ( v23 > 0xFFFE )
        v23 = 65534;
      if ( Src == &v30 )
      {
        v11 = (char *)RtlpAllocateAtom(v23);
        if ( v11 )
        {
          if ( LOWORD(v28[0]) )
            memmove(v11, Src, LOWORD(v28[0]));
          Src = v11;
          HIWORD(v28[0]) = v23;
          goto LABEL_14;
        }
      }
      else
      {
        v24 = (char *)NtdllpReallocateStringRoutine(v23, Src);
        v11 = v24;
        if ( v24 )
        {
          Src = v24;
          HIWORD(v28[0]) = v23;
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    if ( !v26 )
      goto LABEL_19;
    v13 = v26 + LOWORD(v28[0]) + 2;
    if ( v13 <= HIWORD(v28[0]) )
    {
      v14 = (char *)Src;
LABEL_18:
      memmove(&v14[LOWORD(v28[0])], L"apphelp.dll", v26);
      LOWORD(v28[0]) += v26;
      *((_WORD *)Src + ((unsigned __int64)LOWORD(v28[0]) >> 1)) = 0;
LABEL_19:
      memset_thunk_772440563353939046(v32, 0, 0x80uLL);
      v33 = 0x4000;
      v34 = 0LL;
      v15 = LdrpLoadDll(v28, v32, 0LL, &v25);
      LdrpReleaseDllPath(v32);
      if ( v15 < 0 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrinit.c",
          3969LL,
          "LdrpGetProcApphelpCheckModule",
          0LL,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          v28,
          v15);
      }
      else
      {
        *(_DWORD *)(v25 + 104) |= 0x100u;
        g_pShimEngineModule = *(PVOID *)(v25 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        v15 = ShimEngineInterface;
        if ( ShimEngineInterface < 0 )
        {
          LdrpLogInternal(
            "minkernel\\ldr\\ldrinit.c",
            3980LL,
            "LdrpGetProcApphelpCheckModule",
            0LL,
            "Getting the shim engine exports failed with status 0x%08lx\n",
            ShimEngineInterface);
        }
        else
        {
          v15 = -1073741823;
          v17 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
          *a1 = v17;
          if ( v17 )
            v15 = 0;
        }
      }
      goto LABEL_25;
    }
    if ( v13 > 0xFFFE )
    {
      v15 = -1073741562;
      goto LABEL_25;
    }
    v20 = (v13 + 63) & 0xFFFFFFC0;
    if ( v20 > 0xFFFE )
      v20 = 65534;
    if ( Src == &v30 )
    {
      v14 = (char *)RtlpAllocateAtom(v20);
      if ( !v14 )
        goto LABEL_40;
      if ( LOWORD(v28[0]) )
        memmove(v14, Src, LOWORD(v28[0]));
    }
    else
    {
      v14 = (char *)NtdllpReallocateStringRoutine(v20, Src);
      if ( !v14 )
      {
LABEL_40:
        v15 = -1073741801;
LABEL_25:
        if ( &v30 != Src )
          RtlpSysVolFree(Src);
        return (unsigned int)v15;
      }
    }
    HIWORD(v28[0]) = v20;
    Src = v14;
    goto LABEL_18;
  }
  v19 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  *a1 = v19;
  if ( !v19 )
    return (unsigned int)-1073741823;
  return v2;
}
