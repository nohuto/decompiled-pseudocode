/*
 * XREFs of LdrpGetProcedureAddress @ 0x1800149E0
 * Callers:
 *     LdrpCorInitialize @ 0x1800D0840 (LdrpCorInitialize.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpApplyPatchImage @ 0x18011A970 (LdrpApplyPatchImage.c)
 *     LdrHotPatchNotify @ 0x18015FB50 (LdrHotPatchNotify.c)
 *     LdrpBuildImportRedirection @ 0x180162508 (LdrpBuildImportRedirection.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180014D30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x1800206B0 (RtlAddressInSectionTable.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, unsigned __int8 *a2, int a3, unsigned __int64 *a4)
{
  int v4; // r14d
  unsigned int v8; // r13d
  bool v9; // si
  unsigned __int64 v10; // rbx
  __int64 v11; // rdi
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // eax
  _DWORD *v15; // rbx
  int v16; // edi
  int v17; // r9d
  int i; // eax
  int v19; // eax
  int v20; // r10d
  __int64 v21; // r8
  unsigned __int8 *v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int8 v24; // cl
  int v25; // eax
  unsigned int v26; // ebp
  unsigned __int64 v27; // rcx
  __int64 v29; // r10
  unsigned int v30; // r8d
  unsigned int *v31; // rdx
  __int64 v32; // r9
  __int64 v33[9]; // [rsp+40h] [rbp-48h] BYREF

  v4 = 0;
  v33[0] = 0LL;
  v8 = 0;
  v9 = 1;
  v10 = a1;
  v11 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v10 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (a1 & 1) == 0;
  }
  RtlImageNtHeaderEx(1LL, v10, 0LL, v33);
  if ( !v33[0] )
    return 3221225594LL;
  v12 = *(_WORD *)(v33[0] + 24);
  if ( v12 != 267 )
  {
    if ( v12 == 523 && *(_DWORD *)(v33[0] + 132) )
    {
      v13 = *(unsigned int *)(v33[0] + 136);
      if ( (_DWORD)v13 )
      {
        v8 = *(_DWORD *)(v33[0] + 140);
        if ( v9 || (unsigned int)v13 < *(_DWORD *)(v33[0] + 84) )
        {
          v11 = v10 + v13;
          v14 = 0;
        }
        else
        {
          v11 = RtlAddressInSectionTable(v33[0], v10, (unsigned int)v13);
          v14 = 0;
          if ( !v11 )
            v14 = -1073741811;
        }
      }
      else
      {
        v14 = -1073741822;
      }
      goto LABEL_10;
    }
LABEL_42:
    v14 = -1073741811;
    goto LABEL_10;
  }
  if ( !*(_DWORD *)(v33[0] + 116) )
    goto LABEL_42;
  v29 = *(unsigned int *)(v33[0] + 120);
  if ( (_DWORD)v29 )
  {
    v8 = *(_DWORD *)(v33[0] + 124);
    if ( v9 || (unsigned int)v29 < *(_DWORD *)(v33[0] + 84) )
    {
      v11 = v10 + v29;
      v14 = 0;
    }
    else
    {
      v30 = 0;
      v31 = (unsigned int *)(*(unsigned __int16 *)(v33[0] + 20) + v33[0] + 24);
      while ( v30 < *(unsigned __int16 *)(v33[0] + 6) )
      {
        v32 = v31[3];
        if ( (unsigned int)v29 >= (unsigned int)v32 && (unsigned int)v29 < (unsigned int)v32 + v31[4] )
        {
          v11 = v10 + v31[5] - v32 + v29;
          if ( v11 )
          {
            v14 = 0;
            goto LABEL_10;
          }
          break;
        }
        v31 += 10;
        ++v30;
      }
      v14 = -1073741811;
    }
  }
  else
  {
    v14 = -1073741822;
  }
LABEL_10:
  v15 = 0LL;
  if ( v14 >= 0 )
    v15 = (_DWORD *)v11;
  if ( !v15 )
    return 3221225594LL;
  if ( a2 )
  {
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      838,
      (int)"LdrpGetProcedureAddress",
      2,
      "Locating procedure \"%s\" by name\n",
      (char)a2);
    v16 = 0;
    v17 = v15[6] - 1;
    for ( i = v17; ; i = v16 + v17 )
    {
      v19 = i / 2;
      v20 = v19;
      if ( v17 < v16 )
        break;
      v21 = v19;
      v22 = a2;
      v23 = a1 + *(unsigned int *)(a1 + (unsigned int)v15[8] + 4 * v21) - (_QWORD)a2;
      while ( 1 )
      {
        v24 = *v22;
        if ( *v22 != v22[v23] )
          break;
        ++v22;
        if ( !v24 )
        {
          v25 = 0;
          goto LABEL_20;
        }
      }
      v25 = v24 < v22[v23] ? -1 : 1;
LABEL_20:
      if ( !v25 )
      {
        v26 = *(unsigned __int16 *)(a1 + (unsigned int)v15[9] + 2 * v21);
        goto LABEL_22;
      }
      if ( v25 >= 0 )
        v16 = v20 + 1;
      else
        v17 = v20 - 1;
    }
    LdrpLogInternal(
      (int)"minkernel\\ldr\\ldrsnap.c",
      2286,
      (int)"LdrpNameToOrdinal",
      1,
      "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
      (char)a2);
    return 3221225594LL;
  }
  LdrpLogInternal(
    (int)"minkernel\\ldr\\ldrsnap.c",
    856,
    (int)"LdrpGetProcedureAddress",
    2,
    "Loading procedure 0x%lx by ordinal\n",
    a3);
  if ( !a3 )
    return 3221225485LL;
  v26 = a3 - v15[4];
LABEL_22:
  if ( v26 >= v15[5] )
  {
    LOBYTE(v4) = a2 != 0LL;
    return (unsigned int)(v4 - 1073741512);
  }
  else
  {
    v27 = a1 + *(unsigned int *)(a1 + (unsigned int)v15[7] + 4LL * (int)v26);
    *a4 = v27;
    if ( v27 >= (unsigned __int64)v15 )
      return v27 < (unsigned __int64)v15 + v8 ? 0xC000022D : 0;
    else
      return 0LL;
  }
}
