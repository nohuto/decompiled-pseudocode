/*
 * XREFs of deflate @ 0x180150D7C
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x18014B18C (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     deflateStateCheck @ 0x1801511D8 (deflateStateCheck.c)
 *     deflate_huff @ 0x18015179C (deflate_huff.c)
 *     deflate_rle @ 0x18015190C (deflate_rle.c)
 *     deflate_stored @ 0x180152240 (deflate_stored.c)
 *     flush_pending @ 0x180152A18 (flush_pending.c)
 *     adler32_z @ 0x1801536D4 (adler32_z.c)
 *     _tr_stored_block @ 0x180154148 (_tr_stored_block.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall deflate(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int16 v10; // r8
  __int16 v11; // r8
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int16 v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // eax
  __int16 v18; // r8
  unsigned int v19; // eax
  int v20; // eax

  v2 = 0;
  if ( (unsigned int)deflateStateCheck() )
    return 4294967294LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( !*(_QWORD *)(a1 + 16) || *(_DWORD *)(a1 + 8) && !*(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 32) = "stream error";
    return 4294967294LL;
  }
  if ( !*(_DWORD *)(a1 + 24) )
  {
LABEL_12:
    *(_QWORD *)(a1 + 32) = "buffer error";
    return 4294967291LL;
  }
  *(_DWORD *)(v3 + 64) = 4;
  if ( *(_DWORD *)(v3 + 40) )
  {
    flush_pending(a1);
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_8;
  }
  if ( *(_DWORD *)(v3 + 8) == 666 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 8) == 42 )
    {
      if ( *(_DWORD *)(v3 + 44) )
      {
        if ( *(int *)(v3 + 256) >= 2 || (v5 = *(_DWORD *)(v3 + 252), v5 < 2) )
        {
          v6 = 0;
          v7 = 32;
        }
        else if ( v5 >= 6 )
        {
          if ( v5 == 6 )
          {
            v6 = 128;
            v7 = 160;
          }
          else
          {
            v6 = 192;
            v7 = 224;
          }
        }
        else
        {
          v6 = 64;
          v7 = 96;
        }
        v8 = v6 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        if ( *(_DWORD *)(v3 + 228) )
          v8 = ((*(_DWORD *)(v3 + 152) << 12) - 30720) | v7;
        *(_BYTE *)((unsigned int)(*(_DWORD *)(v3 + 40))++ + *(_QWORD *)(v3 + 16)) = (unsigned __int16)(31 * (v8 / 0x1F + 1)) >> 8;
        *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = 31 * (v8 / 0x1F + 1);
        v9 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v9;
        if ( *(_DWORD *)(v3 + 228) )
        {
          v10 = *(_WORD *)(a1 + 78);
          *(_BYTE *)(v9 + *(_QWORD *)(v3 + 16)) = HIBYTE(v10);
          *(_BYTE *)((unsigned int)++*(_DWORD *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = v10;
          ++*(_DWORD *)(v3 + 40);
          v11 = *(_WORD *)(a1 + 76);
          *(_BYTE *)((unsigned int)(*(_DWORD *)(v3 + 40))++ + *(_QWORD *)(v3 + 16)) = HIBYTE(v11);
          *(_BYTE *)((unsigned int)(*(_DWORD *)(v3 + 40))++ + *(_QWORD *)(v3 + 16)) = v11;
        }
        *(_DWORD *)(a1 + 76) = adler32_z(0LL, 0LL);
        *(_DWORD *)(v3 + 8) = 113;
        flush_pending(a1);
        if ( *(_DWORD *)(v3 + 40) )
          goto LABEL_8;
      }
      else
      {
        *(_DWORD *)(v3 + 8) = 113;
      }
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
LABEL_32:
      v12 = *(int *)(v3 + 252);
      if ( (_DWORD)v12 )
      {
        v14 = *(_DWORD *)(v3 + 256);
        if ( v14 == 2 )
        {
          v13 = deflate_huff(v3);
        }
        else if ( v14 == 3 )
        {
          v13 = deflate_rle(v3);
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(__int64, __int64))funcs_180150FAA[2 * v12])(v3, 4LL);
        }
      }
      else
      {
        v13 = deflate_stored(v3, 4LL);
      }
      if ( (unsigned int)(v13 - 2) <= 1 )
        *(_DWORD *)(v3 + 8) = 666;
      if ( (v13 & 0xFFFFFFFD) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
          return 0LL;
        goto LABEL_8;
      }
      if ( v13 == 1 )
      {
        tr_stored_block(v3, 0LL, 0LL, 0LL);
        flush_pending(a1);
        if ( !*(_DWORD *)(a1 + 24) )
        {
LABEL_8:
          *(_DWORD *)(v3 + 64) = -1;
          return 0LL;
        }
      }
      goto LABEL_44;
    }
  }
  if ( *(_DWORD *)(v3 + 236) || *(_DWORD *)(v3 + 8) != 666 )
    goto LABEL_32;
LABEL_44:
  if ( *(int *)(v3 + 44) <= 0 )
    return 1LL;
  v15 = *(_WORD *)(a1 + 78);
  *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = HIBYTE(v15);
  v16 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v16;
  *(_BYTE *)(v16 + *(_QWORD *)(v3 + 16)) = v15;
  v17 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v17;
  v18 = *(_WORD *)(a1 + 76);
  *(_BYTE *)(v17 + *(_QWORD *)(v3 + 16)) = HIBYTE(v18);
  v19 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v19;
  *(_BYTE *)(v19 + *(_QWORD *)(v3 + 16)) = v18;
  ++*(_DWORD *)(v3 + 40);
  flush_pending(a1);
  v20 = *(_DWORD *)(v3 + 44);
  if ( v20 > 0 )
    *(_DWORD *)(v3 + 44) = -v20;
  LOBYTE(v2) = *(_DWORD *)(v3 + 40) == 0;
  return v2;
}
