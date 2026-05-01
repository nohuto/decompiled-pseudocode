/*
 * XREFs of ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18067AF58
 * Callers:
 *     ?GetDefaultGameModeProfile@IsGameManager@@UEAAJPEAKPEA_K0PEA_N2@Z @ 0x18031A770 (-GetDefaultGameModeProfile@IsGameManager@@UEAAJPEAKPEA_K0PEA_N2@Z.c)
 *     ?GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PEA_N3@Z @ 0x18067ADE4 (-GetGameProfileFromAttribute@AutoGameProfile@@YAJPEAUAttributeValue@KnownGameList@@KPEAKPEA_K1PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AutoGameProfile::GetGameProfileFromRawData(
        AutoGameProfile *this,
        __int64 a2,
        __int64 a3,
        const unsigned __int8 *a4,
        int *a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        unsigned int *a8,
        bool *a9)
{
  __int64 v9; // rdx
  unsigned int v11; // r14d
  int v12; // r15d
  unsigned __int64 v13; // rdi
  char v14; // bp
  char v15; // r11
  int v21; // r9d
  unsigned int i; // r10d
  unsigned int v23; // edx
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // ebx
  int v28; // ecx
  int v29; // eax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // rdx
  int v33; // [rsp+20h] [rbp-68h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v35; // [rsp+90h] [rbp+8h]
  unsigned int v36; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A8h] [rbp+20h]

  v38 = (int)a4;
  v35 = (int)this;
  if ( (a2 & 3) != 0 )
  {
    v9 = 86LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v9 = 87LL;
    goto LABEL_3;
  }
  if ( !a5 )
  {
    v9 = 88LL;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v9 = 89LL;
    goto LABEL_3;
  }
  if ( !a7 )
  {
    v9 = 90LL;
    goto LABEL_3;
  }
  if ( !a8 )
  {
    v9 = 91LL;
    goto LABEL_3;
  }
  if ( !a9 )
  {
    v9 = 92LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)a4 )
  {
    v9 = 93LL;
    goto LABEL_3;
  }
  *a5 = 0;
  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)a7 = 0;
  v11 = (unsigned int)a2 >> 2;
  *(_BYTE *)a8 = 0;
  *a9 = 0;
  if ( !((unsigned int)a2 >> 2) )
  {
    v9 = 104LL;
    goto LABEL_3;
  }
  v12 = 0;
  v33 = 0;
  v13 = 0LL;
  v14 = 0;
  if ( AGMHooks::g_pTestHooks )
  {
    v15 = (**(__int64 (__fastcall ***)(struct AGMHooks::TestHooks *, __int64, _QWORD))AGMHooks::g_pTestHooks)(
            AGMHooks::g_pTestHooks,
            a2,
            0LL);
  }
  else
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX != 1752462657 || (_DWORD)_RCX != 1145913699 || (v15 = 1, (_DWORD)_RDX != 1769238117) )
      v15 = 0;
  }
  v21 = -1;
  v36 = 0;
  for ( i = 0; i < v11; ++i )
  {
    v23 = *(_DWORD *)(a3 + 4LL * i);
    v24 = v23 >> 28;
    if ( v23 >> 28 == 12 )
    {
      if ( (v23 & 0xFE00000) >= 0xC800000
        || (v25 = (v23 >> 14) & 0x7F, v25 >= 0x64)
        || (v26 = (v23 >> 7) & 0x7F, v26 >= 0x64)
        || (v27 = v23 & 0x7F, v27 >= 0x64)
        || v25 + v27 + v26 > 0x64 )
      {
        v9 = 130LL;
        goto LABEL_3;
      }
      *a9 = 1;
      v12 = v27 | (2 * (v23 & 0x3F80 | (2 * ((2 * (v23 & 0xFE00000)) | v23 & 0x1FC000))));
      continue;
    }
    if ( v35 == 2 )
    {
      v28 = (v23 >> 21) & 0x3F;
      if ( v28 == 63 )
        v13 = -1LL;
      v29 = i;
      if ( v28 != 63 )
        v29 = v21;
      v21 = v29;
    }
    else
    {
      v28 = (v23 >> 20) & 0x7F;
      if ( v28 == 127 )
      {
        v13 = -1LL;
        v21 = i;
      }
    }
    if ( v14 )
    {
      if ( v28 == v38 && v36 == v24 )
        goto LABEL_48;
      v14 = 0;
    }
    if ( v28 != v38 )
      continue;
LABEL_48:
    if ( *a9 && !v14 )
      continue;
    if ( v35 == 2 )
    {
      v33 = HIWORD(v23) & 0x1F;
      *(_BYTE *)a8 = ((v23 >> 28) & 2) != 0;
    }
    if ( (v23 & 0x10000000) != 0 )
    {
      if ( v15 && !v14 )
      {
        v13 = 0LL;
LABEL_60:
        *a9 = 1;
        v21 = -1;
        goto LABEL_65;
      }
      if ( v21 != -1 && v15 && v14 )
      {
        v13 = 0LL;
        v14 = 0;
        goto LABEL_60;
      }
LABEL_62:
      v21 = i;
      goto LABEL_65;
    }
    if ( v15 )
      goto LABEL_62;
    *a9 = 1;
    if ( v21 != -1 )
      v13 &= -(__int64)(v14 != 0);
LABEL_65:
    if ( (v24 & 4) != 0 )
    {
      v30 = 0LL;
      if ( v13 != -1LL )
        v30 = v13;
      v31 = v30;
      v32 = *(unsigned int *)(a3 + 4LL * i);
      if ( (v32 & 0x8000000) != 0 )
      {
        v14 = 1;
        v36 = v24;
        v31 = v30 << 16;
LABEL_71:
        v13 = (unsigned __int16)v32 | v31;
        continue;
      }
      if ( v35 == 2 )
        goto LABEL_71;
      v13 = v32 & ((-(__int64)(v14 != 0) & 0xFFFFFFFFFFF10000uLL) + 0xFFFFF) | v30;
    }
    else if ( (v24 & 0xFFFFFFFD) != 0 && (v24 & 8) != 0 )
    {
      v13 = -1LL;
    }
  }
  if ( *a9 || v21 != -1 )
  {
    *a5 = v12;
    *(_QWORD *)a6 = v13;
    *(_DWORD *)a7 = v33;
  }
  return 0LL;
}
