/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x140879050
 * Callers:
 *     CmpConstructNameWithStatus @ 0x140879740 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x14087A050 (CmpConstructName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14087E720 (CmCallbackGetKeyObjectIDEx.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x14087DC70 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbp
  struct _PRIVILEGE_SET *v6; // r12
  __int64 v7; // rax
  unsigned int v8; // ebx
  __int64 *v9; // rdx
  __int64 v10; // rax
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 Pool; // rax
  __int64 v14; // rsi
  unsigned __int16 v15; // bx
  __int64 v16; // rax
  unsigned __int16 v17; // r14
  __int16 v18; // ax
  unsigned __int16 v19; // bx
  unsigned __int16 v20; // ax
  __int64 j; // rdi
  const void *v22; // rdx
  ULONG_PTR v23; // rcx
  ULONG_PTR v24; // rdx
  __int64 CellFlat; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  _WORD *v28; // r9
  unsigned __int8 *v29; // rcx
  __int64 v30; // rdx
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 i; // rcx
  __int64 v35; // rdx
  void *v36; // rcx
  _DWORD *v37; // rdx
  __int128 v38; // [rsp+20h] [rbp-58h]
  __int128 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v41; // [rsp+88h] [rbp+10h]

  v41 = a2;
  v2 = 0;
  v40 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  HvpGetCellContextInitialize(&v40);
  v4 = *(__int16 *)(v3 + 2);
  _mm_lfence();
  if ( (int)v4 >= 2 )
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8 * v4 - 16);
  else
    v5 = *(_QWORD *)(v3 + 8 * v4 + 8);
  v6 = 0LL;
  if ( *(__int16 *)(v5 + 66) < 2 || (v6 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL)) != 0LL )
  {
    v7 = v5;
    v8 = 0;
    *((_QWORD *)&v39 + 1) = v6;
    do
    {
      while ( 1 )
      {
        v9 = (__int64 *)(v7 + 72);
        if ( (*(_DWORD *)(v7 + 184) & 0x40000) == 0 || !*v9 )
          break;
        v7 = *v9;
      }
      v10 = *(_QWORD *)(v7 + 80);
      v11 = *(unsigned __int16 *)(v10 + 24);
      if ( (*(_DWORD *)v10 & 1) != 0 )
        v12 = v8 + 2 * v11;
      else
        v12 = v11 + v8;
      v7 = *v9;
      v8 = v12 + 2;
    }
    while ( *v9 );
    if ( v8 > 0xFFFF )
    {
      v2 = -1073741811;
    }
    else
    {
      Pool = CmpAllocatePool(0x100uLL);
      v14 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = v8;
        *(_WORD *)(Pool + 2) = v8;
        *(_QWORD *)(Pool + 8) = Pool + 16;
        v15 = (unsigned __int16)v8 >> 1;
        do
        {
          while ( (*(_DWORD *)(v5 + 184) & 0x40000) != 0 && *(_QWORD *)(v5 + 72) )
            v5 = *(_QWORD *)(v5 + 72);
          v16 = *(_QWORD *)(v5 + 80);
          v17 = *(_WORD *)(v16 + 24);
          if ( (*(_DWORD *)v16 & 1) == 0 )
            v17 >>= 1;
          v18 = *(_WORD *)(v5 + 66);
          v19 = v15 - v17;
          if ( v18 )
          {
            for ( i = *(_QWORD *)(v5 + 192); i; --v18 )
            {
              v35 = *(_QWORD *)(i + 16);
              if ( v18 >= 2 )
              {
                *((_QWORD *)v6 + v18 - 2) = v35;
              }
              else
              {
                *((_QWORD *)&v38 + v18 + 1) = v35;
                v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v39 + 1);
              }
              i = *(_QWORD *)(i + 24);
            }
          }
          else
          {
            *((_QWORD *)&v38 + 1) = v5;
          }
          v20 = *(_WORD *)(v5 + 66);
          for ( j = 0LL; (v20 & 0x8000u) == 0; --v20 )
          {
            if ( v20 >= 2u )
              j = *((_QWORD *)v6 + v20 - 2);
            else
              j = *((_QWORD *)&v38 + v20 + 1);
            if ( *(_QWORD *)(j + 200) )
              break;
            if ( *(_DWORD *)(j + 40) != -1 )
              break;
          }
          v22 = *(const void **)(j + 200);
          if ( v22 )
          {
            v36 = (void *)(*(_QWORD *)(v14 + 8) + 2LL * v19);
            if ( v22 == (const void *)1 )
            {
              v37 = *(_DWORD **)(j + 80);
              if ( (*v37 & 1) != 0 )
                CmpCopyCompressedName(v36, 2 * (unsigned int)v17, (char *)v37 + 26, v17);
              else
                memmove(v36, (char *)v37 + 26, 2LL * v17);
            }
            else
            {
              memmove(v36, v22, 2LL * v17);
            }
          }
          else
          {
            v23 = *(_QWORD *)(j + 32);
            v24 = *(unsigned int *)(j + 40);
            if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v23, v24, &v40);
            else
              CellFlat = HvpGetCellPaged(v23, v24, &v40);
            v26 = CellFlat;
            v27 = *(_QWORD *)(v14 + 8);
            v28 = (_WORD *)(v27 + 2LL * v19);
            if ( (*(_BYTE *)(v26 + 2) & 0x20) != 0 )
            {
              if ( v17 )
              {
                v29 = (unsigned __int8 *)(v26 + 76);
                v30 = v17;
                do
                {
                  v31 = *v29++;
                  *v28++ = v31;
                  --v30;
                }
                while ( v30 );
              }
            }
            else
            {
              memmove((void *)(v27 + 2LL * v19), (const void *)(v26 + 76), 2LL * v17);
            }
            v32 = *(_QWORD *)(j + 32);
            if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v32, &v40);
            else
              HvpReleaseCellPaged(v32, (unsigned int *)&v40);
          }
          v15 = v19 - 1;
          *(_WORD *)(*(_QWORD *)(v14 + 8) + 2LL * v15) = 92;
          v5 = *(_QWORD *)(v5 + 72);
        }
        while ( v5 );
        *v41 = v14;
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v39 + 1);
    v2 = -1073741670;
  }
  if ( v6 )
    CmSiFreeMemory(v6);
  return v2;
}
