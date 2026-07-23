/*
 * XREFs of MiBuildImageControlArea @ 0x14098F030
 * Callers:
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140290A8C (MiUpdateSystemProtoPtesTree.c)
 *     MiMakeSubsectionPte @ 0x1402FC49C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140392C40 (MiMakeDemandZeroPte.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MiParseImageSectionHeaders @ 0x14098F6FC (MiParseImageSectionHeaders.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  unsigned __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 SubsectionPte; // rax
  unsigned int v28; // r10d
  unsigned int v29; // edx
  unsigned int i; // r9d
  int v31; // ebx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 DemandZeroPte; // rax
  __int64 v36; // rdx
  __int64 v37; // r11
  unsigned int v38; // r9d
  unsigned int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // [rsp+30h] [rbp-48h]
  int v44; // [rsp+90h] [rbp+18h]

  v44 = *(unsigned __int16 *)(a4 + 2);
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
    v42 = v15;
    *(_QWORD *)(v15 + 24) = *(_QWORD *)(v15 + 24) & 0xFFFFFFFFFFFFFFF8uLL | 2;
    v16 = (__int64 *)MiAllocatePool(0x112uLL, 8 * v9, 1951624525);
    v17 = v16;
    if ( !v16 )
    {
      dword_140E2D838 = 27;
      v31 = -1073741670;
      goto LABEL_23;
    }
    memset_0(v16, 0, 8 * v9);
    v18 = MiAllocatePool(0x100uLL, 0x98uLL, 1734693709);
    v19 = v18;
    if ( !v18 )
    {
      dword_140E2D838 = 28;
      v31 = -1073741670;
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
          dword_140E2D838 = 30;
        }
        else
        {
          v25 = (unsigned __int64)(v23 + v22 - 1) >> 12;
          v26 = (((v24 & -(int)v23 & 0xFFF) + 4095) >> 12) + (v25 & ((unsigned __int64)~(v23 - 1) >> 12));
          *((_DWORD *)v14 + 43) = v26;
          if ( v26 <= (unsigned int)v9 )
          {
            LODWORD(v9) = v9 - v26;
            *((_DWORD *)v14 + 42) = *(_DWORD *)(a3 + 24) >> 9;
            *((_DWORD *)v14 + 40) = ((*(_WORD *)(a3 + 24) & 0x1FF) << 20) | 2;
            SubsectionPte = MiMakeSubsectionPte((__int64)(v14 + 16), v25);
            v29 = *((_DWORD *)v14 + 43);
            for ( i = 0; i < v29; ++i )
            {
              if ( v28 >= *(_DWORD *)(a3 + 24) )
              {
                *v17 = CLFS_LSN_NULL_EXT;
                *((_DWORD *)v14 + 45) ^= (*((_DWORD *)v14 + 45) ^ (*((_DWORD *)v14 + 45) + 1)) & 0x3FFFFFFF;
              }
              else
              {
                *v17 = SubsectionPte;
              }
              v29 = *((_DWORD *)v14 + 43);
              v28 += 4096;
              ++v17;
            }
            v17 -= v29;
            goto LABEL_20;
          }
          dword_140E2D838 = 31;
        }
      }
      else
      {
        dword_140E2D838 = 29;
      }
      v31 = -1073741701;
      goto LABEL_32;
    }
    *((_DWORD *)v14 + 43) = v9;
    v33 = *(_QWORD *)a6;
    if ( (unsigned __int64)*(unsigned int *)(a3 + 16) <= *(_QWORD *)a6 )
      v33 = *(unsigned int *)(a3 + 16);
    *((_DWORD *)v14 + 42) = v33 >> 9;
    *(_BYTE *)(v19 + 123) |= 8u;
    *(_BYTE *)(v19 + 122) = 1;
    v34 = ((v33 & 0x1FF) << 20) | 0xE;
    *((_DWORD *)v14 + 40) = v34;
    MiMakeSubsectionPte((__int64)(v14 + 16), v34);
    DemandZeroPte = MiMakeDemandZeroPte(7);
    v39 = v38;
    v40 = v37;
    do
    {
      v41 = DemandZeroPte;
      if ( v39 < *a6 )
        v41 = v36;
      v39 += 4096;
      *v17++ = v41;
      --v40;
    }
    while ( v40 );
    *(_QWORD *)(v19 + 48) = v37;
    v17 -= v9;
LABEL_20:
    v31 = MiParseImageSectionHeaders(a5, (_DWORD)v14, a2, v44, a3, v9);
    if ( v31 >= 0 )
    {
      MiUpdateSystemProtoPtesTree(v42, 1);
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
    return (unsigned int)v31;
  }
  dword_140E2D838 = 26;
  return 3221225626LL;
}
