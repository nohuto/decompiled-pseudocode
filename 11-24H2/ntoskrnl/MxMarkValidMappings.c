/*
 * XREFs of MxMarkValidMappings @ 0x140C525D0
 * Callers:
 *     MiInitNucleus @ 0x140C51428 (MiInitNucleus.c)
 *     MxMarkValidMappings @ 0x140C525D0 (MxMarkValidMappings.c)
 * Callees:
 *     MxMarkValidMappings @ 0x140C525D0 (MxMarkValidMappings.c)
 *     MiIsRegularMemory @ 0x140C53BB8 (MiIsRegularMemory.c)
 */

void __fastcall MxMarkValidMappings(_QWORD *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r13
  unsigned __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 IsRegularMemory; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax

  if ( (unsigned __int64)a1 <= a2 )
  {
    v7 = (unsigned __int64)a1;
    v8 = -1LL;
    do
    {
      v9 = *(_QWORD *)v7;
      if ( (*(_QWORD *)v7 & 1) != 0 )
      {
        v10 = (v9 >> 12) & 0xFFFFFFFFFFLL;
        v11 = (v7 >> 9) & 0x7FFFFFFFF8LL;
        v12 = (*(_QWORD *)(v11 - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
        if ( v12 != v8 )
        {
          IsRegularMemory = MiIsRegularMemory(a4, (*(_QWORD *)(v11 - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL);
          if ( IsRegularMemory )
            *(_DWORD *)(IsRegularMemory + 24) |= 0x20000000u;
          v8 = v12;
        }
        v14 = 1LL;
        if ( !a3 )
          goto LABEL_25;
        v15 = (unsigned __int8)v9 & 0x80;
        if ( (v9 & 0x80) == 0 )
          goto LABEL_25;
        v14 = 512LL;
        if ( a3 == 1 )
          goto LABEL_25;
        v16 = (unsigned int)(a3 - 1);
        do
        {
          v14 <<= 9;
          --v16;
        }
        while ( v16 );
        if ( v14 )
        {
LABEL_25:
          do
          {
            v17 = MiIsRegularMemory(a4, v10);
            if ( v17 )
              *(_DWORD *)(v17 + 24) |= 0x20000000u;
            ++v10;
            --v14;
          }
          while ( v14 );
          v15 = (unsigned __int8)v9 & 0x80;
        }
        if ( a3 && !v15 && v7 != 0xFFFFF6FB7DBEDF68uLL )
          MxMarkValidMappings((__int64)(v7 << 25) >> 16, ((__int64)(v7 << 25) >> 16) + 4088, (unsigned int)(a3 - 1), a4);
      }
      v7 += 8LL;
    }
    while ( v7 <= a2 );
  }
}
