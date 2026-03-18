/*
 * XREFs of ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x14010CBD0
 * Callers:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14010DD20 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D32(struct BLTINFO *a1)
{
  int v1; // r14d
  XLATEOBJ *v2; // r13
  int v3; // esi
  unsigned __int16 *v4; // rbx
  unsigned int *v5; // rdi
  int v6; // ebp
  int v7; // r15d
  __int64 v8; // rax
  _DWORD *v9; // rdx
  int v10; // r12d
  int v11; // ecx
  int v12; // r8d
  unsigned int v13; // ecx
  int v14; // r8d
  unsigned int v15; // ecx

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATEOBJ **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v5 = (unsigned int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v6 = *((_DWORD *)a1 + 10) - 2 * v1;
  v7 = *((_DWORD *)a1 + 11) - 4 * v1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v9 = *(_DWORD **)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 112LL);
  if ( v9[2] != 31 )
  {
LABEL_2:
    while ( 1 )
    {
      v10 = v1;
      do
      {
        *v5++ = XLATEOBJ_iXlate(v2, *v4++);
        --v10;
      }
      while ( v10 );
      if ( !--v3 )
        break;
      v4 = (unsigned __int16 *)((char *)v4 + v6);
      v5 = (unsigned int *)((char *)v5 + v7);
    }
    return;
  }
  v11 = v9[1];
  if ( v11 == 2016 )
  {
    if ( *v9 != 63488 || (*(_DWORD *)(v8 + 24) & 8) == 0 )
      goto LABEL_2;
    while ( 1 )
    {
      v12 = v1;
      do
      {
        v13 = *v4++;
        *v5++ = ((v13 & 0x600 | (v13 >> 1) & 0xE) >> 1) | (8
                                                         * (v13 & 0xE01F | (4 * (v13 & 0x7E0 | (8 * (v13 & 0xF800))))));
        --v12;
      }
      while ( v12 );
      if ( !--v3 )
        break;
      v4 = (unsigned __int16 *)((char *)v4 + v6);
      v5 = (unsigned int *)((char *)v5 + v7);
    }
  }
  else
  {
    if ( v11 != 992 || *v9 != 31744 || (*(_DWORD *)(v8 + 24) & 8) == 0 )
      goto LABEL_2;
    while ( 1 )
    {
      v14 = v1;
      do
      {
        v15 = *v4++;
        *v5++ = (v15 >> 2) & 7 | (2
                                * (v15 & 0x380 | (4
                                                * (v15 & 0x1F | (2
                                                               * (v15 & 0x7000 | (4
                                                                                * (v15 & 0x3E0 | (8 * (v15 & 0x7C00))))))))));
        --v14;
      }
      while ( v14 );
      if ( !--v3 )
        break;
      v4 = (unsigned __int16 *)((char *)v4 + v6);
      v5 = (unsigned int *)((char *)v5 + v7);
    }
  }
}
