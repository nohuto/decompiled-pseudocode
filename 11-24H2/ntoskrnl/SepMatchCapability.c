/*
 * XREFs of SepMatchCapability @ 0x140424F30
 * Callers:
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 * Callees:
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

void __fastcall SepMatchCapability(__int64 a1, int a2, unsigned __int8 *a3, int a4, _BYTE *a5, _DWORD *a6)
{
  __int64 v6; // r14
  __int64 v9; // rax
  __int16 v10; // r8
  unsigned int v11; // r9d
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // r12
  int v14; // esi
  int v15; // r13d
  __int64 v16; // rbx
  unsigned int v17; // esi
  unsigned int v18; // edi
  __int16 v19; // [rsp+60h] [rbp+8h]
  unsigned int v20; // [rsp+70h] [rbp+18h]

  v6 = a1 + 808;
  if ( a1 != -808 && a3 )
  {
    v9 = a3[1];
    v10 = *(_WORD *)a3;
    v19 = v10;
    v11 = 4 * v9 + 8;
    LODWORD(v9) = a3[4 * v9 + 4];
    v20 = v11;
    v12 = *(_QWORD *)(v6 + 8 * (v9 & 0xF) + 16) & *(_QWORD *)(v6 + 8 * ((unsigned __int64)(unsigned int)v9 >> 4) + 144);
    v13 = 0;
    while ( v12 )
    {
      LOBYTE(v14) = v12;
      while ( (_BYTE)v14 )
      {
        v15 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v14);
        v16 = *(_QWORD *)(v6 + 8) + 16LL * (v15 + (unsigned int)v13);
        if ( **(_WORD **)v16 == v10 )
        {
          if ( !memcmp(a3, *(const void **)v16, v11) )
            goto LABEL_16;
          v10 = v19;
          v11 = v20;
        }
        v14 = (unsigned __int8)v14 ^ (1 << v15);
      }
      v13 += 8;
      v12 >>= 8;
    }
    v17 = *(_DWORD *)v6;
    v18 = 64;
    if ( *(_DWORD *)v6 > 0x40u )
    {
      while ( v18 < v17 )
      {
        v16 = *(_QWORD *)(v6 + 8) + 16LL * v18;
        if ( **(_WORD **)v16 == v10 )
        {
          if ( !memcmp(a3, *(const void **)v16, v11) )
          {
LABEL_16:
            if ( v16 )
            {
              if ( (*(_DWORD *)(v16 + 8) & 4) != 0 )
              {
                *a6 |= a4 & a2;
                *a5 = 1;
              }
            }
            return;
          }
          v10 = v19;
          v11 = v20;
        }
        ++v18;
      }
    }
  }
}
