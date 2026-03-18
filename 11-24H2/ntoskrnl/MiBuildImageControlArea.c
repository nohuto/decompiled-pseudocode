/*
 * XREFs of MiBuildImageControlArea @ 0x1409451C0
 * Callers:
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 * Callees:
 *     MiMakeSubsectionPte @ 0x14022929C (MiMakeSubsectionPte.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026047C (MiUpdateSystemProtoPtesTree.c)
 *     MiAllocatePool @ 0x1402ACA70 (MiAllocatePool.c)
 *     MiMakeDemandZeroPte @ 0x1402E3CC0 (MiMakeDemandZeroPte.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     MiParseImageSectionHeaders @ 0x1409459C0 (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiBuildImageControlArea(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        _QWORD *a7)
{
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // r13d
  __int64 v12; // r14
  __int64 Pool; // rax
  _QWORD *v14; // rsi
  __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 *v17; // r14
  __int64 v18; // rax
  __int64 v19; // r12
  char v20; // al
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // ecx
  __int64 SubsectionPte; // rax
  unsigned int v27; // r10d
  unsigned int v28; // edx
  unsigned int i; // r9d
  int v30; // ebx
  unsigned __int64 v32; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v34; // rdx
  __int64 v35; // r11
  unsigned int v36; // r9d
  unsigned int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // [rsp+30h] [rbp-48h]
  int v42; // [rsp+90h] [rbp+18h]

  v42 = *(unsigned __int16 *)(a4 + 2);
  v9 = (*(_DWORD *)(a3 + 16) >> 12) + (unsigned int)((*(_DWORD *)(a3 + 16) & 0xFFF) != 0);
  if ( !(_DWORD)v9 )
    return 3221225595LL;
  v10 = 1LL;
  v11 = a5 & 0x100000;
  if ( (a5 & 0x100000) == 0 )
    v10 = (unsigned int)*(unsigned __int16 *)(a4 + 2) + 1;
  v12 = 56 * v10;
  Pool = MiAllocatePool(0x40uLL, 56 * v10 + 200, v11 != 0 ? 1631808845 : 1766026573);
  v14 = (_QWORD *)Pool;
  if ( Pool )
  {
    *(_DWORD *)(Pool + 56) |= 0x20u;
    v15 = Pool + v12 + 128;
    *(_QWORD *)(Pool + 96) = v15;
    v40 = v15;
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v16 = (__int64 *)MiAllocatePool(0x112uLL, 8 * v9, 1951624525);
    v17 = v16;
    if ( !v16 )
    {
      dword_140E2D6F8 = 27;
      v30 = -1073741670;
      goto LABEL_23;
    }
    memset_0(v16, 0, 8 * v9);
    v18 = MiAllocatePool(0x100uLL, 0x98uLL, 1734693709);
    v19 = v18;
    if ( !v18 )
    {
      dword_140E2D6F8 = 28;
      v30 = -1073741670;
      goto LABEL_32;
    }
    *(_QWORD *)(v18 + 40) = 0LL;
    *(_QWORD *)(v18 + 64) = v17;
    *(_QWORD *)v18 = v14;
    *(_DWORD *)(v18 + 8) = v9;
    *(_QWORD *)(v18 + 56) = v18 + 72;
    *(_QWORD *)(v18 + 24) = (unsigned __int64)(unsigned int)v9 << 12;
    *(_DWORD *)(v18 + 136) = *(_DWORD *)(a3 + 24);
    *(_DWORD *)(v18 + 140) = *(_DWORD *)(a3 + 16);
    *(_DWORD *)(v18 + 144) = *(_DWORD *)(a4 + 4);
    *(_DWORD *)(v18 + 128) = *a6;
    *(_QWORD *)(v18 + 72) = *(_QWORD *)a3 + *(unsigned int *)(a3 + 28);
    *(_QWORD *)(v18 + 88) = *(_QWORD *)(a3 + 32);
    *(_QWORD *)(v18 + 96) = *(_QWORD *)(a3 + 40);
    *(_DWORD *)(v18 + 104) = *(unsigned __int16 *)(a3 + 50);
    *(_WORD *)(v18 + 110) = *(_WORD *)(a3 + 52);
    *(_WORD *)(v18 + 108) = *(_WORD *)(a3 + 54);
    *(_WORD *)(v18 + 112) = *(_WORD *)(a3 + 56);
    *(_WORD *)(v18 + 114) = *(_WORD *)(a3 + 58);
    *(_WORD *)(v18 + 118) = *(_WORD *)(a3 + 60);
    *(_DWORD *)(v18 + 132) = *(_DWORD *)(a3 + 64);
    if ( *(_DWORD *)(a3 + 68) || (v20 = 0, *(_DWORD *)(a3 + 28)) )
      v20 = 1;
    *(_BYTE *)(v19 + 122) = v20;
    *(_WORD *)(v19 + 116) = *(_WORD *)(a4 + 18);
    *(_WORD *)(v19 + 120) = *(_WORD *)a4;
    *(_DWORD *)(v19 + 124) = *(_DWORD *)(a3 + 20);
    *v14 = v19;
    v14[2] = v14 + 1;
    v14[1] = v14 + 1;
    v14[14] = 1LL;
    v14[3] = 1LL;
    if ( (a5 & 1) == 0 )
      v14[6] = 1LL;
    *((_DWORD *)v14 + 22) = -1;
    v21 = *((_DWORD *)v14 + 14) | 0x82;
    v14[13] = 0LL;
    *((_DWORD *)v14 + 14) = v21 ^ (v21 ^ (a1 << 20)) & 0x7F00000;
    *(_BYTE *)(v19 + 14) = *(_BYTE *)(v19 + 14) & 0xDF | (*(_DWORD *)(a3 + 104) != 0 ? 0x20 : 0);
    v14[16] = v14;
    *(_QWORD *)(v19 + 32) = *(_QWORD *)a3;
    v14[17] = v17;
    if ( !v11 )
    {
      v22 = *(unsigned int *)(a3 + 24);
      if ( (_DWORD)v22 )
      {
        v23 = *(unsigned int *)(a3 + 12);
        v24 = v22 + v23 - 1;
        if ( v24 <= (unsigned int)v22 )
        {
          dword_140E2D6F8 = 30;
        }
        else
        {
          v25 = (((v24 & -(int)v23 & 0xFFF) + 4095) >> 12)
              + (((unsigned __int64)(v23 + v22 - 1) >> 12) & ((unsigned __int64)~(v23 - 1) >> 12));
          *((_DWORD *)v14 + 43) = v25;
          if ( v25 <= (unsigned int)v9 )
          {
            LODWORD(v9) = v9 - v25;
            *((_DWORD *)v14 + 42) = *(_DWORD *)(a3 + 24) >> 9;
            *((_DWORD *)v14 + 40) = ((*(_WORD *)(a3 + 24) & 0x1FF) << 20) | 2;
            SubsectionPte = MiMakeSubsectionPte((__int64)(v14 + 16));
            v28 = *((_DWORD *)v14 + 43);
            for ( i = 0; i < v28; ++i )
            {
              if ( v27 >= *(_DWORD *)(a3 + 24) )
              {
                *v17 = CLFS_LSN_NULL_EXT;
                *((_DWORD *)v14 + 45) ^= (*((_DWORD *)v14 + 45) ^ (*((_DWORD *)v14 + 45) + 1)) & 0x3FFFFFFF;
              }
              else
              {
                *v17 = SubsectionPte;
              }
              v28 = *((_DWORD *)v14 + 43);
              v27 += 4096;
              ++v17;
            }
            v17 -= v28;
            goto LABEL_20;
          }
          dword_140E2D6F8 = 31;
        }
      }
      else
      {
        dword_140E2D6F8 = 29;
      }
      v30 = -1073741701;
      goto LABEL_32;
    }
    *((_DWORD *)v14 + 43) = v9;
    v32 = *(_QWORD *)a6;
    if ( (unsigned __int64)*(unsigned int *)(a3 + 16) <= *(_QWORD *)a6 )
      v32 = *(unsigned int *)(a3 + 16);
    *((_DWORD *)v14 + 42) = v32 >> 9;
    *(_BYTE *)(v19 + 123) |= 8u;
    *(_BYTE *)(v19 + 122) = 1;
    *((_DWORD *)v14 + 40) = ((v32 & 0x1FF) << 20) | 0xE;
    MiMakeSubsectionPte((__int64)(v14 + 16));
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v37 = v36;
    v38 = v35;
    do
    {
      v39 = DemandZeroPte;
      if ( v37 < *a6 )
        v39 = v34;
      v37 += 4096;
      *v17++ = v39;
      --v38;
    }
    while ( v38 );
    *(_QWORD *)(v19 + 48) = v35;
    v17 -= v9;
LABEL_20:
    v30 = MiParseImageSectionHeaders(a5, (_DWORD)v14, a2, v42, a3, v9);
    if ( v30 >= 0 )
    {
      MiUpdateSystemProtoPtesTree(v40, 1);
      *a7 = v14;
      return 0LL;
    }
    if ( !v17 )
      goto LABEL_37;
LABEL_32:
    ExFreePoolWithTag(v17, 0);
    if ( v19 )
LABEL_37:
      ExFreePoolWithTag((PVOID)v19, 0);
LABEL_23:
    ExFreePoolWithTag(v14, 0);
    return (unsigned int)v30;
  }
  dword_140E2D6F8 = 26;
  return 3221225626LL;
}
