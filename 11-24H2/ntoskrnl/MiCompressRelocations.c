/*
 * XREFs of MiCompressRelocations @ 0x14094CB50
 * Callers:
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 * Callees:
 *     MiAllocatePool @ 0x140277450 (MiAllocatePool.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall MiCompressRelocations(__int64 a1, int a2)
{
  __int64 v2; // rbp
  char v3; // r15
  char v5; // bl
  __int64 v6; // rsi
  __int64 v7; // rcx
  _WORD *v8; // r10
  unsigned __int16 v9; // r9
  __int16 v10; // r11
  unsigned int v11; // edi
  unsigned int v12; // r8d
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // dx
  __int16 v16; // ax
  __int64 v17; // rax
  unsigned int v18; // ecx
  bool v19; // zf
  bool v20; // cf
  _DWORD *v21; // rdi
  __int64 Pool; // rax
  __int64 v23; // r12
  _QWORD *v24; // rsi
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // r14
  unsigned int v27; // ebp
  __int64 v28; // rdx
  __int64 v29; // r13
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v33; // rcx
  _WORD *v34; // r10
  __int16 v35; // ax
  __int16 v36; // di
  unsigned int v37; // r8d
  unsigned int v38; // r11d
  __int16 v39; // cx
  unsigned __int16 v40; // r9
  int v42; // [rsp+80h] [rbp+18h]
  __int64 v43; // [rsp+88h] [rbp+20h]

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v5 = 0;
  v6 = 0LL;
  do
  {
    v7 = *(unsigned int *)(v2 + 4);
    v8 = (_WORD *)(v2 + 8);
    a2 -= v7;
    v2 += v7;
    v9 = 0;
    v10 = 4;
    v11 = 0;
    v12 = (unsigned int)(v7 - 8) >> 1;
    while ( v12 )
    {
      v13 = *v8 >> 12;
      if ( v13 )
      {
        if ( v5 != (_BYTE)v13 )
        {
          if ( v3 )
            return (_DWORD *)a1;
          v5 = v13;
          v3 = 1;
        }
        v14 = *v8 & 0xFFF;
        if ( v14 <= v9 && v9 )
          return (_DWORD *)a1;
        v15 = *v8 & 0xFFF;
        v16 = v14 - v9;
        if ( v16 == v10 )
        {
          v17 = v6 + 2;
          v18 = v11 + 1;
          if ( v11 != 254 )
            v17 = v6;
          v6 = v17;
          v19 = v11 == 254;
          v11 = 0;
          if ( !v19 )
            v11 = v18;
LABEL_12:
          ++v8;
          v9 = v15;
          --v12;
        }
        else
        {
          if ( v11 )
          {
            v20 = v11 < 4;
            v19 = v11 == 4;
            v11 = 0;
            v6 += (!v20 && !v19) + 1LL;
          }
          v10 = v16;
          if ( (unsigned __int16)v16 >= 0xEBu )
          {
            v6 += 2LL;
            goto LABEL_12;
          }
          ++v6;
          ++v8;
          --v12;
          v9 = v15;
        }
      }
      else
      {
        ++v8;
        --v12;
      }
    }
    if ( v11 )
    {
      if ( v11 <= 4 )
        ++v6;
      else
        v6 += 2LL;
    }
    v6 += (v6 & 1) + 2;
  }
  while ( a2 );
  v21 = (_DWORD *)a1;
  if ( !v3 )
    return v21;
  Pool = MiAllocatePool(0x100uLL, v6 + 8 * (*(unsigned int *)(a1 + 56) + 13LL), 1699900749);
  v43 = Pool;
  v23 = Pool;
  if ( !Pool )
    return v21;
  v24 = (_QWORD *)(Pool + 104);
  v25 = *(_QWORD *)(a1 + 32) - *(_QWORD *)a1;
  *(_OWORD *)Pool = *(_OWORD *)a1;
  v26 = v25 >> 3;
  v42 = v26;
  *(_OWORD *)(Pool + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(Pool + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(Pool + 48) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(Pool + 64) = *(_OWORD *)(a1 + 64);
  *(_OWORD *)(Pool + 80) = *(_OWORD *)(a1 + 80);
  *(_QWORD *)(Pool + 96) = *(_QWORD *)(a1 + 96);
  *(_BYTE *)(Pool + 64) = v5;
  *(_QWORD *)Pool = Pool + 104;
  v27 = 0;
  v28 = Pool + 104 + 8LL * *(unsigned int *)(a1 + 56);
  *(_QWORD *)(Pool + 32) = v28;
  v29 = *(_QWORD *)(a1 + 32);
  if ( (_DWORD)v26 )
  {
    v30 = a1 - Pool;
    do
    {
      if ( v27 < v21[14] )
      {
        v31 = *(_QWORD *)((char *)v24 + v30);
        if ( v31 > 1 )
        {
          *v24 = v28;
          if ( (*((_BYTE *)v24 + v30) & 1) != 0 )
            *v24 = v28 | 1;
          v33 = *(unsigned int *)(v29 + 4);
          v34 = (_WORD *)(v29 + 8);
          v29 += v33;
          v35 = 0;
          v36 = 4;
          v37 = 0;
          v38 = (unsigned int)(v33 - 8) >> 1;
          if ( v38 )
          {
            do
            {
              if ( *v34 >= 0x1000u )
              {
                v39 = *v34 & 0xFFF;
                v40 = v39 - v35;
                if ( v39 - v35 == v36 )
                {
                  if ( ++v37 == 255 )
                  {
                    *(_WORD *)v28 = -17;
                    v37 = 0;
                    v28 += 2LL;
                  }
                }
                else
                {
                  if ( v37 )
                  {
                    if ( v37 > 4 )
                    {
                      *(_BYTE *)v28 = -17;
                      *(_BYTE *)(v28 + 1) = v37;
                      v28 += 2LL;
                    }
                    else
                    {
                      *(_BYTE *)v28++ = -17 - v37;
                    }
                    v37 = 0;
                  }
                  v36 = v39 - v35;
                  if ( v40 >= 0xEBu )
                  {
                    *(_BYTE *)v28 = v40 | 0xF0;
                    *(_BYTE *)(v28 + 1) = v40 >> 4;
                    v28 += 2LL;
                  }
                  else
                  {
                    *(_BYTE *)v28++ = v40;
                  }
                }
                v35 = v39;
              }
              ++v34;
              --v38;
            }
            while ( v38 );
            LODWORD(v26) = v42;
          }
          if ( v37 )
          {
            if ( v37 <= 4 )
            {
              *(_BYTE *)v28++ = -17 - v37;
            }
            else
            {
              *(_BYTE *)v28 = -17;
              *(_BYTE *)(v28 + 1) = v37;
              v28 += 2LL;
            }
          }
          v21 = (_DWORD *)a1;
          *(_WORD *)v28 = 240;
          v28 += 2LL;
          if ( (v28 & 1) != 0 )
            ++v28;
        }
        else
        {
          *v24 = v31;
        }
      }
      ++v27;
      ++v24;
    }
    while ( v27 < (unsigned int)v26 );
    v23 = v43;
  }
  ExFreePoolWithTag(v21, 0);
  return (_DWORD *)v23;
}
