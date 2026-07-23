/*
 * XREFs of MiClearMirrorBitmaps @ 0x140673B90
 * Callers:
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1402920E0 (RtlClearBitsEx.c)
 */

void __fastcall MiClearMirrorBitmaps(unsigned __int64 a1, unsigned __int64 a2)
{
  __int128 *v3; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  __int64 v8; // r14
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  _QWORD *v12; // rdx
  __int64 i; // r9
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  _QWORD *v18; // r8
  __int64 v19; // r9
  _QWORD *j; // rax
  unsigned __int64 v21; // r9
  __int64 v22; // rcx
  unsigned __int64 v23; // rbx
  unsigned __int64 k; // rax
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rbx

  v3 = &xmmword_140E301D0;
  v5 = 2LL;
  do
  {
    if ( dword_140E301F0 )
    {
      v6 = a1;
      v7 = a2;
      do
      {
        v8 = *((_QWORD *)v3 + 1);
        v9 = v6 & -(__int64)(v6 < *(_QWORD *)v3);
        v10 = *(_QWORD *)v3 - 1LL;
        while ( 1 )
        {
          if ( v10 - v9 == -1LL )
            goto LABEL_6;
          v12 = (_QWORD *)(v8 + 8 * (v9 >> 6));
          for ( i = ~*v12 | ((1LL << (v9 & 0x3F)) - 1); i == -1; i = ~*v12 )
          {
            if ( (unsigned __int64)++v12 > v8 + 8 * (v10 >> 6) )
              goto LABEL_6;
          }
          _BitScanForward64(&v14, ~i);
          v11 = v14 + (((__int64)v12 - v8) >> 3 << 6);
          if ( v11 > v10 )
          {
LABEL_6:
            v11 = -1LL;
          }
          else if ( v11 != -1LL )
          {
            break;
          }
          if ( !v9 )
            break;
          v15 = v6 + 1;
          if ( v6 + 1 > *(_QWORD *)v3 )
            v15 = *(_QWORD *)v3;
          v10 = v15 - 1;
          v9 = 0LL;
        }
        if ( v11 < v6 || v11 >= v6 + a2 || v11 == -1LL )
          break;
        v16 = *(_QWORD *)v3;
        if ( *(_QWORD *)v3 > v11 )
        {
          v17 = v8 + 8 * ((v16 - 1) >> 6);
          v18 = (_QWORD *)(v8 + 8 * (v11 >> 6));
          v19 = ((1LL << (v11 & 0x3F)) - 1) | *v18;
          for ( j = v18 + 1; ; ++j )
          {
            v21 = ~v19;
            if ( v21 )
              break;
            if ( (unsigned __int64)j > v17 )
              goto LABEL_35;
            v19 = *++v18;
          }
          _BitScanForward64((unsigned __int64 *)&v22, v21);
          v23 = (unsigned int)v22 + (((__int64)v18 - v8) >> 3 << 6);
          if ( v23 <= v16 )
          {
            for ( k = ~(v21 | ((1LL << v22) - 1)); !k; k = *v25 )
            {
              v25 = v18 + 1;
              if ( (unsigned __int64)(v18 + 1) > v17 )
              {
                k = 64LL;
                goto LABEL_32;
              }
              ++v18;
            }
            _BitScanForward64(&k, k);
LABEL_32:
            v26 = k + (((__int64)v18 - v8) >> 3 << 6);
            if ( v26 > v16 )
              v26 = *(_QWORD *)v3;
            if ( v26 != v23 )
              continue;
          }
        }
LABEL_35:
        v23 = *(_QWORD *)v3;
        v27 = v23 - v11;
        if ( v27 > v7 )
          v27 = v7;
        RtlClearBitsEx((__int64)v3, v11, v27);
        v6 += v27;
        v7 -= v27;
      }
      while ( v7 );
    }
    ++v3;
    --v5;
  }
  while ( v5 );
}
