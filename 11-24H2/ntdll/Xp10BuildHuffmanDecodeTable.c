/*
 * XREFs of Xp10BuildHuffmanDecodeTable @ 0x18014C63C
 * Callers:
 *     Xp10ReadAndDecodeHuffmanTables @ 0x180102B0C (Xp10ReadAndDecodeHuffmanTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Xp10BuildHuffmanDecodeTable(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  _WORD *v9; // r13
  __int64 v10; // rdi
  __int64 *v11; // rbx
  _QWORD *v12; // r15
  unsigned int v13; // r11d
  int v14; // ebp
  __int64 result; // rax
  __int16 v16; // r8
  unsigned __int16 v17; // r10
  _WORD *v18; // rdx
  unsigned int v19; // edx
  unsigned int v20; // r14d
  unsigned int v21; // esi
  char v22; // r9
  unsigned __int16 v23; // r8
  __int64 v24; // r15
  unsigned int v25; // eax
  __int16 v26; // dx
  __int16 v27; // dx
  __int64 v28; // rdx
  unsigned __int16 v29; // bp
  unsigned int v30; // r9d
  unsigned int v31; // r14d
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // rdx
  char v35; // [rsp+0h] [rbp-58h]
  _QWORD *v36; // [rsp+8h] [rbp-50h]
  int v38; // [rsp+68h] [rbp+10h]
  unsigned int v40; // [rsp+78h] [rbp+20h]
  unsigned int v41; // [rsp+98h] [rbp+40h]
  unsigned int v42; // [rsp+A8h] [rbp+50h]

  v9 = a3;
  v10 = a1;
  v36 = 0LL;
  v11 = 0LL;
  v38 = 0;
  v12 = 0LL;
  v41 = 0;
  v13 = 0;
  v14 = 0;
  if ( a4 == 1 )
  {
    result = a9;
    v16 = 16 * *a3 + *(unsigned __int8 *)((unsigned __int16)*a3 + a1);
    v17 = 1 << a5;
    if ( 1 << a5 )
    {
      v18 = (_WORD *)(a9 + 2LL * v17);
      do
      {
        *--v18 = v16;
        --v17;
      }
      while ( v17 );
    }
  }
  else
  {
    do
    {
      v19 = *(unsigned __int8 *)((unsigned __int16)v9[v14] + v10);
      if ( v11 && *((unsigned __int16 *)v11 + 5) > v19 )
        v19 = *((unsigned __int16 *)v11 + 5);
      v20 = v19;
      if ( v19 <= a5 )
        v20 = a5;
      v35 = v20;
      v21 = a5 < v19 ? v19 - a6 : 0;
      v22 = v20 - v21;
      v42 = v21;
      v40 = v20 - v21;
      v23 = 1 << (v20 - (a5 < v19 ? v19 - a6 : 0));
      if ( v23 )
      {
        LODWORD(v24) = 0;
        do
        {
          if ( v11 && (v25 = *((unsigned __int16 *)v11 + 5), v25 > v21) )
          {
            v26 = *((_WORD *)v11 + 4);
            v11 = (__int64 *)*v11;
            v27 = v25 + (v26 << a6) - v21 - v13;
          }
          else
          {
            v28 = (unsigned __int16)v9[v14];
            LOWORD(v25) = *(unsigned __int8 *)(v28 + v10);
            v27 = v25 + 16 * v28 - v21;
            v38 = v14 + 1;
          }
          v29 = v23 - (1 << (v20 - v25));
          if ( v23 > v29 )
          {
            do
            {
              --v23;
              v30 = v40;
              v31 = v23;
              v32 = v24;
              if ( v40 > 8 )
              {
                v24 = ((v40 - 9) >> 3) + 1;
                do
                {
                  v33 = (unsigned __int8)v31;
                  v30 -= 8;
                  v31 >>= 8;
                  v32 = byte_180196DE0[v33] | (v32 << 8);
                  --v24;
                }
                while ( v24 );
              }
              if ( v30 )
                v32 = (byte_180196DE0[(unsigned __int8)v31] | (v32 << 8)) >> (8 - v30);
              *(_WORD *)(a9 + 2LL * (v32 + v13)) = v27;
            }
            while ( v23 > v29 );
            v21 = v42;
            v9 = a3;
            v10 = a1;
            LOBYTE(v20) = v35;
          }
          v14 = v38;
        }
        while ( v23 );
        v22 = v40;
        v12 = v36;
      }
      v34 = a7 + 16LL * v41;
      *(_WORD *)(v34 + 8) = v13 >> a6;
      *(_WORD *)(v34 + 10) = v21;
      *(_QWORD *)v34 = 0LL;
      if ( v11 )
        *v12 = v34;
      else
        v11 = (__int64 *)(a7 + 16LL * v41);
      v36 = (_QWORD *)(a7 + 16LL * v41++);
      v12 = (_QWORD *)v34;
      v13 += 1 << v22;
    }
    while ( v21 );
    return a9 + 2LL * (v13 - (1 << a5));
  }
  return result;
}
