/*
 * XREFs of RtlpConstructImportRelocationFixup @ 0x14043ABCC
 * Callers:
 *     RtlApplyImportRelocationToPage @ 0x14043AAF0 (RtlApplyImportRelocationToPage.c)
 *     RtlApplyImportRelocationToImage @ 0x1406A3BD4 (RtlApplyImportRelocationToImage.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpConstructImportRelocationFixup(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v11; // rax
  int v12; // ebp
  unsigned __int64 v13; // rcx
  __int64 result; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdi
  int v24; // edx
  int v25; // edi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx

  *(_QWORD *)a7 = 0LL;
  *(_DWORD *)(a7 + 8) = 0;
  *(_WORD *)(a7 + 12) = 0;
  v11 = 0xCCCCCCCCCCCCCCCCuLL;
  if ( (*a4 & 0x1000) != 0 )
    v11 = 0x9090909090909090uLL;
  v12 = a5;
  *(_QWORD *)(a7 + 2) = v11;
  *(_DWORD *)(a7 + 10) = v11;
  if ( !a5 )
    goto LABEL_4;
  if ( (a6 & 1) != 0 )
  {
    v15 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v16 = *(_QWORD *)(a2 + 16);
      if ( v16 )
      {
        v17 = *(int *)(v16 + 4 * ((unsigned __int64)(unsigned int)v15 >> 13));
      }
      else
      {
        v28 = *(_QWORD *)(a2 + 24);
        if ( !v28 )
          goto LABEL_28;
        v30 = *(_QWORD *)(v28 + 8 * (v15 >> 13));
        v17 = v30 - *(_QWORD *)(a2 + 32);
        if ( *(_QWORD *)(a2 + 40) )
        {
          if ( !(unsigned int)guard_dispatch_icall_no_overrides(v30, v28) )
            goto LABEL_28;
        }
      }
      if ( v17 && v17 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
        goto LABEL_15;
    }
LABEL_28:
    v12 = 0;
  }
LABEL_15:
  if ( v12 )
  {
    *(_DWORD *)a7 = -1957953529;
    *(_BYTE *)(a7 + 4) = 21;
    v18 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v19 = *(unsigned int *)(a2 + 4);
      if ( (_DWORD)v19 )
      {
        *(_WORD *)a7 = 127;
        v20 = v19 + 8 * ((unsigned __int64)v18 >> 13) - (unsigned int)(a1 + 7);
        *(_WORD *)(a7 + 5) = v20;
        *(_BYTE *)(a7 + 8) = ((unsigned int)v19 + 8 * (v18 >> 13) - (a1 + 7)) >> 24;
        *(_BYTE *)(a7 + 7) = BYTE2(v20);
      }
    }
    v21 = *a4;
    if ( (*a4 & 0xFFFFE000) != 0xFFFFE000 )
    {
      v22 = *(_QWORD *)(a2 + 16);
      if ( v22 )
      {
        v23 = *(int *)(v22 + 4 * ((unsigned __int64)(unsigned int)v21 >> 13));
        goto LABEL_22;
      }
      v29 = *(_QWORD *)(a2 + 24);
      if ( v29 )
      {
        v31 = *(_QWORD *)(v29 + 8 * (v21 >> 13));
        v23 = v31 - *(_QWORD *)(a2 + 32);
        if ( !*(_QWORD *)(a2 + 40) || (unsigned int)guard_dispatch_icall_no_overrides(v31, v29) )
        {
LABEL_22:
          if ( v23 )
          {
            v24 = a1 + 12;
            if ( v23 - (unsigned __int64)(unsigned int)(a1 + 12) + 0x80000000 <= 0xFFFFFFFF )
              goto LABEL_24;
          }
        }
      }
    }
    v24 = a1 + 12;
    LODWORD(v23) = *(_DWORD *)(a2 + 48) + *(_DWORD *)(a3 + 72);
LABEL_24:
    v25 = v23 - v24;
    *(_BYTE *)(a7 + 9) = ((*a4 & 0x1000) == 0) | 0xE8;
    *(_BYTE *)(a7 + 11) = BYTE1(v25);
    *(_BYTE *)(a7 + 12) = BYTE2(v25);
    result = 3968LL;
    *(_BYTE *)(a7 + 10) = v25;
    *(_WORD *)a7 |= 0xF80u;
    *(_BYTE *)(a7 + 13) = HIBYTE(v25);
    return result;
  }
LABEL_4:
  if ( (a6 & 2) != 0 )
  {
    *(_WORD *)(a7 + 2) = -29876;
    *(_BYTE *)(a7 + 4) = 21;
    *(_WORD *)(a7 + 9) = -179;
    *(_BYTE *)(a7 + 11) = (*a4 & 0x1000) != 0 ? -46 : -30;
  }
  else
  {
    *(_WORD *)(a7 + 2) = -184;
    if ( (*a4 & 0x1000) != 0 )
    {
      *(_BYTE *)(a7 + 4) = 21;
      *(_DWORD *)(a7 + 9) = 4464399;
      *(_BYTE *)(a7 + 13) = 0;
    }
    else
    {
      *(_BYTE *)(a7 + 4) = 37;
    }
  }
  *(_WORD *)a7 = 3975;
  v13 = *a4;
  result = *a4 & 0xFFFFE000;
  if ( (_DWORD)result != -8192 )
  {
    v26 = *(unsigned int *)(a2 + 4);
    if ( (_DWORD)v26 )
    {
      *(_WORD *)a7 = 4095;
      v27 = v26 + 8 * (v13 >> 13) - (unsigned int)(a1 + 7);
      *(_WORD *)(a7 + 5) = v27;
      result = v27 >> 16;
      *(_BYTE *)(a7 + 8) = ((unsigned int)v26 + 8 * (unsigned int)(v13 >> 13) - (a1 + 7)) >> 24;
      *(_BYTE *)(a7 + 7) = BYTE2(v27);
    }
  }
  return result;
}
