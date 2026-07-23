/*
 * XREFs of MiCaptureImageCfgContext @ 0x14093D928
 * Callers:
 *     MiParseImageLoadConfig @ 0x14093D160 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiFreeImageCfgContext @ 0x14048B394 (MiFreeImageCfgContext.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     MiLogRelocationRva @ 0x14093E524 (MiLogRelocationRva.c)
 */

__int64 __fastcall MiCaptureImageCfgContext(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int a8,
        int *a9,
        __int64 a10)
{
  int v11; // ebx
  unsigned __int64 v12; // r9
  unsigned int v13; // r8d
  unsigned __int64 v14; // r15
  unsigned int v15; // r13d
  unsigned int v16; // edi
  unsigned __int64 v17; // r14
  unsigned int v18; // r10d
  __int64 v20; // rdx
  unsigned __int64 v21; // r15
  unsigned int v22; // r13d
  char *Pool; // rax
  unsigned int v24; // r8d
  __int64 i; // rcx
  unsigned __int64 v26; // rdx
  int v27; // ecx
  unsigned __int64 v28; // r9
  unsigned int v29; // r8d
  unsigned __int64 v30; // rcx
  unsigned int v31; // [rsp+20h] [rbp-78h]
  unsigned int v32; // [rsp+2Ch] [rbp-6Ch]
  char *v33; // [rsp+50h] [rbp-48h]

  v11 = 0;
  *a9 = 0;
  *(_OWORD *)a10 = 0LL;
  *(_OWORD *)(a10 + 16) = 0LL;
  v12 = 0LL;
  v13 = 0;
  if ( *(_WORD *)(a6 + 48) == 523 )
  {
    v14 = *(_QWORD *)(a7 + 128);
    v15 = *(_DWORD *)(a7 + 136);
    v31 = v15;
    v16 = *(_DWORD *)(a7 + 144);
    if ( (v16 & 0x4000) != 0 && a8 >= 0xB0 )
    {
      v12 = *(_QWORD *)(a7 + 160);
      v13 = *(_DWORD *)(a7 + 168);
    }
    v17 = *(_QWORD *)(a7 + 120);
  }
  else
  {
    v14 = *(unsigned int *)(a7 + 80);
    v15 = *(_DWORD *)(a7 + 84);
    v31 = v15;
    v16 = *(_DWORD *)(a7 + 88);
    if ( (v16 & 0x4000) != 0 && a8 >= 0x70 )
    {
      v12 = *(unsigned int *)(a7 + 104);
      v13 = *(_DWORD *)(a7 + 108);
    }
    v17 = *(unsigned int *)(a7 + 76);
  }
  if ( (v16 & 0x400) != 0 && v14 )
  {
    v18 = (v16 >> 28) + 4;
    v32 = v18;
    if ( v14 < a4 || !v15 || v15 >= 0xFFFFFFFF / v18 )
    {
      dword_140E2D868 = 4;
      goto LABEL_15;
    }
    if ( (v16 & 0x4000) != 0 && v12 )
    {
      if ( v12 < a4 || !v13 || v13 >= 0xFFFFFFFF / v18 )
      {
        dword_140E2D868 = 10;
LABEL_15:
        v11 = -1073741819;
        goto LABEL_16;
      }
      v28 = v12 - a4;
      v29 = v18 * v13;
      v30 = v28 + v29;
      if ( v30 <= v28 || (v20 = a6, v30 > *(unsigned int *)(a6 + 16)) || v29 + 4 < v29 )
      {
        dword_140E2D868 = 11;
        goto LABEL_15;
      }
    }
    else
    {
      v20 = a6;
    }
    v21 = v14 - a4;
    v22 = v15 * v18;
    if ( v21 + v22 <= v21 || v21 + v22 > *(unsigned int *)(v20 + 16) || v22 + 4 < v22 )
    {
      dword_140E2D868 = 5;
      goto LABEL_15;
    }
    Pool = (char *)MiAllocatePool(0x100uLL, v22, 1413704013);
    v33 = Pool;
    if ( !Pool )
    {
      v11 = -1073741670;
      dword_140E2D868 = 6;
      goto LABEL_16;
    }
    memmove(Pool, (const void *)(v21 + a3), v22);
    MiLogRelocationRva((unsigned int)v21, v22, a2, a1);
    v24 = 0;
    for ( i = 0LL; (unsigned int)i < v22; i = v32 + (unsigned int)i )
    {
      v26 = *(unsigned int *)&v33[i];
      if ( v26 >= a5 )
      {
        dword_140E2D868 = 8;
LABEL_30:
        v11 = -1073741701;
        break;
      }
      if ( (_DWORD)i && (unsigned int)v26 < v24 )
      {
        dword_140E2D868 = 9;
        goto LABEL_30;
      }
      v24 = *(_DWORD *)&v33[i];
    }
    if ( v11 < 0 )
      goto LABEL_58;
    if ( v17 )
    {
      if ( v17 < a4 || v17 >= a4 + a5 )
      {
        v11 = -1073741701;
        dword_140E2D868 = 10;
        goto LABEL_16;
      }
      *(_DWORD *)(a10 + 24) = v17 - a4;
    }
    v27 = *a9 | 1;
    *a9 = v27;
    if ( _bittest16((const signed __int16 *)(a6 + 60), 0xEu) )
    {
      v27 |= 2u;
      *a9 = v27;
    }
    if ( (v16 & 0x8000) != 0 )
    {
      v27 |= 0x10u;
      *a9 = v27;
    }
    if ( (v16 & 0x4000) != 0 )
    {
      v27 |= 8u;
      *a9 = v27;
    }
    if ( (v16 & 0x100000) != 0 )
    {
      v27 |= 0x20u;
      *a9 = v27;
    }
    if ( (v16 & 0x400000) != 0 )
      *a9 = v27 | 0x40;
    *(_DWORD *)a10 = v16;
    *(_QWORD *)(a10 + 8) = v33;
    *(_DWORD *)(a10 + 16) = v31;
    *(_DWORD *)(a10 + 20) = v32;
  }
LABEL_16:
  if ( v11 < 0 )
LABEL_58:
    MiFreeImageCfgContext(a10);
  return (unsigned int)v11;
}
