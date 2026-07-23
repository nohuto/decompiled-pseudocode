/*
 * XREFs of deflate @ 0x1405F2938
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x1405EF954 (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     deflateStateCheck @ 0x1405F2D94 (deflateStateCheck.c)
 *     deflate_huff @ 0x1405F334C (deflate_huff.c)
 *     deflate_rle @ 0x1405F34BC (deflate_rle.c)
 *     deflate_stored @ 0x1405F3DF0 (deflate_stored.c)
 *     flush_pending @ 0x1405F45C8 (flush_pending.c)
 *     adler32_z @ 0x1405FF6B4 (adler32_z.c)
 *     _tr_stored_block @ 0x140600130 (_tr_stored_block.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall deflate(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int16 v11; // r8
  int v12; // eax
  int v13; // eax
  __int16 v14; // r8
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  int v18; // eax

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
  v5 = *(_DWORD *)(v3 + 8);
  if ( v5 == 666 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    if ( v5 == 42 )
    {
      if ( *(_DWORD *)(v3 + 44) )
      {
        if ( *(int *)(v3 + 256) >= 2 || (v6 = *(_DWORD *)(v3 + 252), v6 < 2) )
        {
          v7 = 0;
          v8 = 32;
        }
        else if ( v6 >= 6 )
        {
          if ( v6 == 6 )
          {
            v7 = 128;
            v8 = 160;
          }
          else
          {
            v7 = 192;
            v8 = 224;
          }
        }
        else
        {
          v7 = 64;
          v8 = 96;
        }
        v9 = v7 | ((*(_DWORD *)(v3 + 152) << 12) - 30720);
        if ( *(_DWORD *)(v3 + 228) )
          v9 = ((*(_DWORD *)(v3 + 152) << 12) - 30720) | v8;
        *(_BYTE *)((unsigned int)(*(_DWORD *)(v3 + 40))++ + *(_QWORD *)(v3 + 16)) = (unsigned __int16)(31 * (v9 / 0x1F + 1)) >> 8;
        *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = 31 * (v9 / 0x1F + 1);
        v10 = *(_DWORD *)(v3 + 40) + 1;
        *(_DWORD *)(v3 + 40) = v10;
        if ( *(_DWORD *)(v3 + 228) )
        {
          v11 = *(_WORD *)(a1 + 78);
          *(_BYTE *)(v10 + *(_QWORD *)(v3 + 16)) = HIBYTE(v11);
          *(_BYTE *)((unsigned int)++*(_DWORD *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = v11;
          ++*(_DWORD *)(v3 + 40);
          LOBYTE(v11) = *(_DWORD *)(a1 + 76);
          *(_BYTE *)((unsigned int)(*(_DWORD *)(v3 + 40))++ + *(_QWORD *)(v3 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
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
      if ( *(_DWORD *)(v3 + 252) )
      {
        v13 = *(_DWORD *)(v3 + 256);
        if ( v13 == 2 )
        {
          v12 = deflate_huff(v3);
        }
        else if ( v13 == 3 )
        {
          v12 = deflate_rle(v3);
        }
        else
        {
          v12 = guard_dispatch_icall_no_overrides(v3, 4LL);
        }
      }
      else
      {
        v12 = deflate_stored(v3, 4LL);
      }
      if ( (unsigned int)(v12 - 2) <= 1 )
        *(_DWORD *)(v3 + 8) = 666;
      if ( (v12 & 0xFFFFFFFD) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
          return 0LL;
        goto LABEL_8;
      }
      if ( v12 == 1 )
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
  v14 = *(_WORD *)(a1 + 78);
  *(_BYTE *)(*(unsigned int *)(v3 + 40) + *(_QWORD *)(v3 + 16)) = HIBYTE(v14);
  v15 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v15;
  *(_BYTE *)(v15 + *(_QWORD *)(v3 + 16)) = v14;
  v16 = (unsigned int)(*(_DWORD *)(v3 + 40) + 1);
  *(_DWORD *)(v3 + 40) = v16;
  LOBYTE(v14) = *(_DWORD *)(a1 + 76);
  *(_BYTE *)(v16 + *(_QWORD *)(v3 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
  v17 = *(_DWORD *)(v3 + 40) + 1;
  *(_DWORD *)(v3 + 40) = v17;
  *(_BYTE *)(v17 + *(_QWORD *)(v3 + 16)) = v14;
  ++*(_DWORD *)(v3 + 40);
  flush_pending(a1);
  v18 = *(_DWORD *)(v3 + 44);
  if ( v18 > 0 )
    *(_DWORD *)(v3 + 44) = -v18;
  LOBYTE(v2) = *(_DWORD *)(v3 + 40) == 0;
  return v2;
}
