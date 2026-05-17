/*
 * XREFs of RtlExtractBitMap @ 0x1801110F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180167400 (memmove.c)
 */

char __fastcall RtlExtractBitMap(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r10
  int v7; // eax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  __int64 v13; // r9
  int *v14; // r9
  __int64 v15; // r11
  unsigned __int64 v16; // rdi
  int *v17; // rsi
  int v18; // r10d
  unsigned __int64 v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // edx
  int v22; // ebp
  int v23; // r8d

  v5 = *a2;
  v6 = *(_DWORD *)a1 - a3;
  LOBYTE(v7) = a4;
  if ( a4 <= (unsigned int)v6 )
    v6 = a4;
  if ( v6 <= v5 )
    v5 = (unsigned int)v6;
  if ( v5 )
  {
    v9 = (unsigned __int64)a3 >> 3;
    if ( (a3 & 7) != 0 )
    {
      v14 = (int *)*((_QWORD *)a2 + 1);
      v15 = a3 & 0x1F;
      v16 = 32 - v15;
      v17 = (int *)(*(_QWORD *)(a1 + 8) + 4 * ((unsigned __int64)a3 >> 5));
      v18 = 1 << (a3 & 0x1F);
      if ( v5 < 0x20 )
        goto LABEL_16;
      v19 = v5 >> 5;
      v5 += -32LL * (v5 >> 5);
      do
      {
        v20 = ~(v18 - 1) & *v17++;
        v21 = v20 >> v15;
        *v14 = v21;
        v7 = v21 | (((v18 - 1) & *v17) << v16);
        *v14++ = v7;
        --v19;
      }
      while ( v19 );
      if ( v5 )
      {
LABEL_16:
        v22 = *v17;
        v7 = (1 << v5) - 1;
        v23 = *v14 & ~v7;
        if ( v5 > v16 )
        {
          *v14 = ((v22 & (unsigned int)-v18) >> v15) | ((v17[1] & ((1 << (v5 + v15 - 32)) - 1)) << v16) | v23;
        }
        else
        {
          v7 = v23 | ((v22 & (unsigned int)(v7 << v15)) >> v15);
          *v14 = v7;
        }
      }
    }
    else
    {
      v10 = (unsigned int)v5;
      v11 = v5 & 7;
      v12 = v10 >> 3;
      if ( v12 )
        LOBYTE(v7) = (unsigned __int8)memmove(*((void **)a2 + 1), (const void *)(v9 + *(_QWORD *)(a1 + 8)), v12);
      if ( v11 )
      {
        v13 = *((_QWORD *)a2 + 1);
        LOBYTE(v7) = *(_BYTE *)(v9 + v12 + *(_QWORD *)(a1 + 8)) & ((1 << v11) - 1) | *(_BYTE *)(v12 + v13) & ~((1 << v11) - 1);
        *(_BYTE *)(v12 + v13) = v7;
      }
    }
  }
  return v7;
}
