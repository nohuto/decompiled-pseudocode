/*
 * XREFs of CmpConstructNameFromKeyNodes @ 0x1408794A0
 * Callers:
 *     CmpConstructNameWithStatus @ 0x140879DE0 (CmpConstructNameWithStatus.c)
 *     CmpConstructName @ 0x14087A710 (CmpConstructName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140880200 (CmCallbackGetKeyObjectIDEx.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCopyCompressedName @ 0x140882750 (CmpCopyCompressedName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpConstructNameFromKeyNodes(__int64 a1, __int64 *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbp
  int v6; // ebx
  struct _PRIVILEGE_SET *v7; // r12
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 Pool; // rax
  __int64 v15; // r14
  unsigned __int16 v16; // bx
  __int64 v17; // rax
  unsigned __int16 v18; // si
  __int16 v19; // ax
  unsigned __int16 v20; // bx
  unsigned __int16 v21; // cx
  __int64 j; // rdi
  const void *v23; // rdx
  ULONG_PTR v24; // rcx
  ULONG_PTR v25; // rdx
  __int64 CellFlat; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  _WORD *v29; // r9
  unsigned __int8 *v30; // rax
  __int64 v31; // rdx
  __int16 v32; // cx
  __int64 v33; // rcx
  __int64 i; // rcx
  __int64 v36; // rdx
  void *v37; // rcx
  _DWORD *v38; // rdx
  __int128 v39; // [rsp+20h] [rbp-58h]
  __int128 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v42; // [rsp+88h] [rbp+10h]

  v42 = a2;
  v2 = 0;
  v41 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  HvpGetCellContextInitialize(&v41);
  v4 = *(__int16 *)(v3 + 2);
  _mm_lfence();
  if ( (int)v4 >= 2 )
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8 * v4 - 16);
  else
    v5 = *(_QWORD *)(v3 + 8 * v4 + 8);
  v6 = *(__int16 *)(v5 + 66);
  v7 = 0LL;
  if ( v6 < 2
    || (v7 = (struct _PRIVILEGE_SET *)CmpAllocatePool(0x100uLL, 8LL * (unsigned int)(v6 - 1), 0x35364D43u)) != 0LL )
  {
    v8 = v5;
    v9 = 0;
    *((_QWORD *)&v40 + 1) = v7;
    do
    {
      while ( 1 )
      {
        v10 = (__int64 *)(v8 + 72);
        if ( (*(_DWORD *)(v8 + 184) & 0x40000) == 0 || !*v10 )
          break;
        v8 = *v10;
      }
      v11 = *(_QWORD *)(v8 + 80);
      v12 = *(unsigned __int16 *)(v11 + 24);
      if ( (*(_DWORD *)v11 & 1) != 0 )
        v13 = v9 + 2 * v12;
      else
        v13 = v12 + v9;
      v8 = *v10;
      v9 = v13 + 2;
    }
    while ( *v10 );
    if ( v9 > 0xFFFF )
    {
      v2 = -1073741811;
    }
    else
    {
      Pool = CmpAllocatePool(0x100uLL, v9 + 16LL, 0x624E4D43u);
      v15 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = v9;
        *(_WORD *)(Pool + 2) = v9;
        *(_QWORD *)(Pool + 8) = Pool + 16;
        v16 = (unsigned __int16)v9 >> 1;
        do
        {
          while ( (*(_DWORD *)(v5 + 184) & 0x40000) != 0 && *(_QWORD *)(v5 + 72) )
            v5 = *(_QWORD *)(v5 + 72);
          v17 = *(_QWORD *)(v5 + 80);
          v18 = *(_WORD *)(v17 + 24);
          if ( (*(_DWORD *)v17 & 1) == 0 )
            v18 >>= 1;
          v19 = *(_WORD *)(v5 + 66);
          v20 = v16 - v18;
          if ( v19 )
          {
            for ( i = *(_QWORD *)(v5 + 192); i; --v19 )
            {
              v36 = *(_QWORD *)(i + 16);
              if ( v19 >= 2 )
              {
                *((_QWORD *)v7 + v19 - 2) = v36;
              }
              else
              {
                *((_QWORD *)&v39 + v19 + 1) = v36;
                v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v40 + 1);
              }
              i = *(_QWORD *)(i + 24);
            }
          }
          else
          {
            *((_QWORD *)&v39 + 1) = v5;
          }
          v21 = *(_WORD *)(v5 + 66);
          for ( j = 0LL; (v21 & 0x8000u) == 0; --v21 )
          {
            if ( v21 >= 2u )
              j = *((_QWORD *)v7 + v21 - 2);
            else
              j = *((_QWORD *)&v39 + v21 + 1);
            if ( *(_QWORD *)(j + 200) )
              break;
            if ( *(_DWORD *)(j + 40) != -1 )
              break;
          }
          v23 = *(const void **)(j + 200);
          if ( v23 )
          {
            v37 = (void *)(*(_QWORD *)(v15 + 8) + 2LL * v20);
            if ( v23 == (const void *)1 )
            {
              v38 = *(_DWORD **)(j + 80);
              if ( (*v38 & 1) != 0 )
                CmpCopyCompressedName(v37, 2 * (unsigned int)v18, (char *)v38 + 26, v18);
              else
                memmove(v37, (char *)v38 + 26, 2LL * v18);
            }
            else
            {
              memmove(v37, v23, 2LL * v18);
            }
          }
          else
          {
            v24 = *(_QWORD *)(j + 32);
            v25 = *(unsigned int *)(j + 40);
            if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v24, v25, &v41);
            else
              CellFlat = HvpGetCellPaged(v24, v25, &v41);
            v27 = CellFlat;
            v28 = *(_QWORD *)(v15 + 8);
            v29 = (_WORD *)(v28 + 2LL * v20);
            if ( (*(_BYTE *)(v27 + 2) & 0x20) != 0 )
            {
              if ( v18 )
              {
                v30 = (unsigned __int8 *)(v27 + 76);
                v31 = v18;
                do
                {
                  v32 = *v30++;
                  *v29++ = v32;
                  --v31;
                }
                while ( v31 );
              }
            }
            else
            {
              memmove((void *)(v28 + 2LL * v20), (const void *)(v27 + 76), 2LL * v18);
            }
            v33 = *(_QWORD *)(j + 32);
            if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v33, &v41);
            else
              HvpReleaseCellPaged(v33, &v41);
          }
          v16 = v20 - 1;
          *(_WORD *)(*(_QWORD *)(v15 + 8) + 2LL * v16) = 92;
          v5 = *(_QWORD *)(v5 + 72);
        }
        while ( v5 );
        *v42 = v15;
      }
      else
      {
        v2 = -1073741670;
      }
    }
  }
  else
  {
    v7 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v40 + 1);
    v2 = -1073741670;
  }
  if ( v7 )
    CmSiFreeMemory(v7);
  return v2;
}
