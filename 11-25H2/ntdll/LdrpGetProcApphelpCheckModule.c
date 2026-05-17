/*
 * XREFs of LdrpGetProcApphelpCheckModule @ 0x180049B30
 * Callers:
 *     LdrpDynamicShimModule @ 0x18000876C (LdrpDynamicShimModule.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     LdrpReleaseDllPath @ 0x180049A60 (LdrpReleaseDllPath.c)
 *     LdrpLoadDll @ 0x18004A090 (LdrpLoadDll.c)
 *     RtlpAllocateAtom @ 0x18004C160 (RtlpAllocateAtom.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     LdrpGetShimEngineInterface @ 0x1800D11F0 (LdrpGetShimEngineInterface.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
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
  char v28[4]; // [rsp+70h] [rbp-90h] BYREF
  int v29; // [rsp+74h] [rbp-8Ch]
  void *Src; // [rsp+78h] [rbp-88h]
  __int16 v31; // [rsp+80h] [rbp-80h] BYREF
  char v32[254]; // [rsp+82h] [rbp-7Eh] BYREF
  __int64 v33[3]; // [rsp+180h] [rbp+80h] BYREF
  int v34; // [rsp+198h] [rbp+98h]
  __int64 v35; // [rsp+1A0h] [rbp+A0h]

  v26 = 22;
  memset_thunk_772440563353939046(v33, 0, 0x80uLL);
  v2 = 0;
  v29 = 0;
  v25 = 0LL;
  memset_thunk_772440563353939046(v32, 0, 0xFEuLL);
  *(_DWORD *)v28 = 0x1000000;
  Src = &v31;
  v31 = 0;
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
      v8 = v6 + *(unsigned __int16 *)v28 + 2;
      if ( v8 <= *(unsigned __int16 *)&v28[2] )
      {
        Atom = (char *)Src;
LABEL_11:
        memmove(&Atom[*(unsigned __int16 *)v28], (const void *)v4, v7);
        *(_WORD *)v28 += v7;
        *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v28 >> 1)) = 0;
        goto LABEL_12;
      }
      if ( v8 <= 0xFFFE )
      {
        v21 = (v8 + 63) & 0xFFFFFFC0;
        if ( v21 > 0xFFFE )
          v21 = 65534;
        if ( Src == &v31 )
        {
          Atom = (char *)RtlpAllocateAtom(v21);
          if ( Atom )
          {
            Src = Atom;
            *(_WORD *)&v28[2] = v21;
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
            *(_WORD *)&v28[2] = v21;
            goto LABEL_11;
          }
        }
      }
    }
LABEL_12:
    v10 = *(unsigned __int16 *)v28 + 22;
    if ( v10 <= *(unsigned __int16 *)&v28[2] )
    {
      v11 = (char *)Src;
LABEL_14:
      v12 = *(unsigned __int16 *)v28;
      *(_OWORD *)&v11[*(unsigned __int16 *)v28] = *(_OWORD *)L"\\SYSTEM32\\";
      *(_DWORD *)&v11[v12 + 16] = *(_DWORD *)L"2\\";
      *(_WORD *)v28 += 20;
      *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v28 >> 1)) = 0;
      goto LABEL_15;
    }
    if ( v10 <= 0xFFFE )
    {
      v23 = (*(unsigned __int16 *)v28 + 85) & 0xFFFFFFC0;
      if ( v23 > 0xFFFE )
        v23 = 65534;
      if ( Src == &v31 )
      {
        v11 = (char *)RtlpAllocateAtom(v23);
        if ( v11 )
        {
          if ( *(_WORD *)v28 )
            memmove(v11, Src, *(unsigned __int16 *)v28);
          Src = v11;
          *(_WORD *)&v28[2] = v23;
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
          *(_WORD *)&v28[2] = v23;
          goto LABEL_14;
        }
      }
    }
LABEL_15:
    if ( !v26 )
      goto LABEL_19;
    v13 = v26 + *(unsigned __int16 *)v28 + 2;
    if ( v13 <= *(unsigned __int16 *)&v28[2] )
    {
      v14 = (char *)Src;
LABEL_18:
      memmove(&v14[*(unsigned __int16 *)v28], L"apphelp.dll", v26);
      *(_WORD *)v28 += v26;
      *((_WORD *)Src + ((unsigned __int64)*(unsigned __int16 *)v28 >> 1)) = 0;
LABEL_19:
      memset_thunk_772440563353939046(v33, 0, 0x80uLL);
      v34 = 0x4000;
      v35 = 0LL;
      v15 = LdrpLoadDll(v28, v33, 0LL, &v25);
      LdrpReleaseDllPath(v33);
      if ( v15 < 0 )
      {
        LdrpLogInternal(
          (int)"minkernel\\ldr\\ldrinit.c",
          3971,
          (int)"LdrpGetProcApphelpCheckModule",
          0,
          "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
          (char)v28);
      }
      else
      {
        *(_DWORD *)(v25 + 104) |= 0x100u;
        g_pShimEngineModule = *(_QWORD *)(v25 + 48);
        ShimEngineInterface = LdrpGetShimEngineInterface();
        v15 = ShimEngineInterface;
        if ( ShimEngineInterface < 0 )
        {
          LdrpLogInternal(
            (int)"minkernel\\ldr\\ldrinit.c",
            3982,
            (int)"LdrpGetProcApphelpCheckModule",
            0,
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
    if ( Src == &v31 )
    {
      v14 = (char *)RtlpAllocateAtom(v20);
      if ( !v14 )
        goto LABEL_40;
      if ( *(_WORD *)v28 )
        memmove(v14, Src, *(unsigned __int16 *)v28);
    }
    else
    {
      v14 = (char *)NtdllpReallocateStringRoutine(v20);
      if ( !v14 )
      {
LABEL_40:
        v15 = -1073741801;
LABEL_25:
        if ( &v31 != Src )
          RtlpSysVolFree((__int64)Src);
        return (unsigned int)v15;
      }
    }
    *(_WORD *)&v28[2] = v20;
    Src = v14;
    goto LABEL_18;
  }
  v19 = MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnApphelpCheckModuleProc, 64 - (MEMORY[0x7FFE0330] & 0x3Fu));
  *a1 = v19;
  if ( !v19 )
    return (unsigned int)-1073741823;
  return v2;
}
