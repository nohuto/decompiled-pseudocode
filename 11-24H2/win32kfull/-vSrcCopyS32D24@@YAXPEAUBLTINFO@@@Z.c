/*
 * XREFs of ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x14011E3F0
 * Callers:
 *     EngCopyBits @ 0x14000DA80 (EngCopyBits.c)
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1401227DC (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14011E5E4 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS32D24(struct BLTINFO *a1)
{
  unsigned int v1; // r13d
  XLATE *v2; // r15
  int v3; // r11d
  unsigned int *v4; // rbx
  __int64 v5; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // esi
  unsigned int v9; // r13d
  unsigned int v10; // r10d
  int v11; // r13d
  int i; // ecx
  char v13; // al
  unsigned int v14; // r9d
  unsigned int v15; // r8d
  unsigned int v16; // edx
  unsigned int v17; // eax
  int j; // ecx
  char v19; // al
  unsigned int (*v20)(struct _XLATEOBJ *, unsigned int); // r12
  __int64 v21; // r14
  __int64 v22; // rbp
  unsigned int v23; // esi
  __int64 v24; // rax
  int v25; // [rsp+60h] [rbp+8h]
  int v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+70h] [rbp+18h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (unsigned int *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  v25 = v3;
  v5 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v6 = *((_DWORD *)a1 + 10) - 4 * v1;
  v26 = v6;
  v7 = *((_DWORD *)a1 + 11) - 3 * v1;
  v27 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) != 0
    && (*(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL) & 8) != 0 )
  {
    v8 = *((_DWORD *)a1 + 7);
    if ( ((unsigned __int8)v5 & 3u) <= v1 )
      v8 = v5 & 3;
    v9 = v1 - v8;
    v10 = v9 >> 2;
    v11 = v9 & 3;
    while ( 1 )
    {
      for ( i = v8; i; --i )
      {
        *(_BYTE *)v5 = *(_BYTE *)v4;
        *(_BYTE *)(v5 + 1) = *((_BYTE *)v4 + 1);
        v13 = *((_BYTE *)v4++ + 2);
        *(_BYTE *)(v5 + 2) = v13;
        v5 += 3LL;
      }
      v14 = v10;
      if ( v10 )
      {
        do
        {
          v15 = v4[1] >> 8;
          *(_DWORD *)v5 = (v4[1] << 24) | *v4 & 0xFFFFFF;
          v16 = HIWORD(v4[2]);
          *(_DWORD *)(v5 + 4) = (v4[2] << 16) | (unsigned __int16)v15;
          v17 = v4[3];
          v4 += 4;
          *(_DWORD *)(v5 + 8) = (v17 << 8) | (unsigned __int8)v16;
          v5 += 12LL;
          --v14;
        }
        while ( v14 );
        v6 = v26;
        v7 = v27;
      }
      for ( j = v11; j; --j )
      {
        *(_BYTE *)v5 = *(_BYTE *)v4;
        *(_BYTE *)(v5 + 1) = *((_BYTE *)v4 + 1);
        v19 = *((_BYTE *)v4++ + 2);
        *(_BYTE *)(v5 + 2) = v19;
        v5 += 3LL;
      }
      if ( !--v3 )
        break;
      v4 = (unsigned int *)((char *)v4 + v6);
      v5 += v7;
    }
  }
  else
  {
    v20 = XLATE::pfnXlateBetweenBitfields(v2);
    while ( 1 )
    {
      v21 = v5;
      v22 = v5;
      v23 = v1;
      do
      {
        v24 = ((__int64 (__fastcall *)(XLATE *, _QWORD))v20)(v2, *v4);
        *(_BYTE *)v5 = v24;
        ++v4;
        *(_BYTE *)(v5 + 2) = BYTE2(v24);
        v5 = v22 + 3;
        *(_BYTE *)(v21 + 1) = BYTE1(v24);
        v22 = v5;
        v21 = v5;
        --v23;
      }
      while ( v23 );
      if ( !--v25 )
        break;
      v4 = (unsigned int *)((char *)v4 + v26);
      v5 += v27;
    }
  }
}
