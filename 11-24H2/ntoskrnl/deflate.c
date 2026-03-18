/*
 * XREFs of deflate @ 0x1405F52F8
 * Callers:
 *     RtlCompressBufferDeflateInternal @ 0x1405F2314 (RtlCompressBufferDeflateInternal.c)
 * Callees:
 *     deflateStateCheck @ 0x1405F5754 (deflateStateCheck.c)
 *     deflate_huff @ 0x1405F5D0C (deflate_huff.c)
 *     deflate_rle @ 0x1405F5E7C (deflate_rle.c)
 *     deflate_stored @ 0x1405F67B0 (deflate_stored.c)
 *     flush_pending @ 0x1405F6F88 (flush_pending.c)
 *     adler32_z @ 0x140602074 (adler32_z.c)
 *     _tr_stored_block @ 0x140602AF0 (_tr_stored_block.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall deflate(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int16 v13; // r8
  int v14; // eax
  int v15; // eax
  __int16 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  int v20; // eax

  v4 = 0;
  if ( (unsigned int)deflateStateCheck() )
    return 4294967294LL;
  v5 = *(_QWORD *)(a1 + 40);
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
  *(_DWORD *)(v5 + 64) = 4;
  if ( *(_DWORD *)(v5 + 40) )
  {
    flush_pending(a1);
    if ( !*(_DWORD *)(a1 + 24) )
      goto LABEL_8;
  }
  v7 = *(_DWORD *)(v5 + 8);
  if ( v7 == 666 )
  {
    if ( *(_DWORD *)(a1 + 8) )
      goto LABEL_12;
  }
  else
  {
    if ( v7 == 42 )
    {
      if ( *(_DWORD *)(v5 + 44) )
      {
        if ( *(int *)(v5 + 256) >= 2 || (v8 = *(_DWORD *)(v5 + 252), v8 < 2) )
        {
          v9 = 0;
          v10 = 32;
        }
        else if ( v8 >= 6 )
        {
          if ( v8 == 6 )
          {
            v9 = 128;
            v10 = 160;
          }
          else
          {
            v9 = 192;
            v10 = 224;
          }
        }
        else
        {
          v9 = 64;
          v10 = 96;
        }
        v11 = v9 | ((*(_DWORD *)(v5 + 152) << 12) - 30720);
        if ( *(_DWORD *)(v5 + 228) )
          v11 = ((*(_DWORD *)(v5 + 152) << 12) - 30720) | v10;
        *(_BYTE *)((unsigned int)(*(_DWORD *)(v5 + 40))++ + *(_QWORD *)(v5 + 16)) = (unsigned __int16)(31 * (v11 / 0x1F + 1)) >> 8;
        *(_BYTE *)(*(unsigned int *)(v5 + 40) + *(_QWORD *)(v5 + 16)) = 31 * (v11 / 0x1F + 1);
        v12 = *(_DWORD *)(v5 + 40) + 1;
        *(_DWORD *)(v5 + 40) = v12;
        if ( *(_DWORD *)(v5 + 228) )
        {
          v13 = *(_WORD *)(a1 + 78);
          *(_BYTE *)(v12 + *(_QWORD *)(v5 + 16)) = HIBYTE(v13);
          *(_BYTE *)((unsigned int)++*(_DWORD *)(v5 + 40) + *(_QWORD *)(v5 + 16)) = v13;
          ++*(_DWORD *)(v5 + 40);
          LOBYTE(v13) = *(_DWORD *)(a1 + 76);
          *(_BYTE *)((unsigned int)(*(_DWORD *)(v5 + 40))++ + *(_QWORD *)(v5 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
          *(_BYTE *)((unsigned int)(*(_DWORD *)(v5 + 40))++ + *(_QWORD *)(v5 + 16)) = v13;
        }
        *(_DWORD *)(a1 + 76) = adler32_z(0LL, 0LL);
        *(_DWORD *)(v5 + 8) = 113;
        flush_pending(a1);
        if ( *(_DWORD *)(v5 + 40) )
          goto LABEL_8;
      }
      else
      {
        *(_DWORD *)(v5 + 8) = 113;
      }
    }
    if ( *(_DWORD *)(a1 + 8) )
    {
LABEL_32:
      if ( *(_DWORD *)(v5 + 252) )
      {
        v15 = *(_DWORD *)(v5 + 256);
        if ( v15 == 2 )
        {
          v14 = deflate_huff(v5);
        }
        else if ( v15 == 3 )
        {
          v14 = deflate_rle(v5);
        }
        else
        {
          v14 = guard_dispatch_icall_no_overrides(v5, 4LL, v2, v3);
        }
      }
      else
      {
        v14 = deflate_stored(v5, 4LL);
      }
      if ( (unsigned int)(v14 - 2) <= 1 )
        *(_DWORD *)(v5 + 8) = 666;
      if ( (v14 & 0xFFFFFFFD) == 0 )
      {
        if ( *(_DWORD *)(a1 + 24) )
          return 0LL;
        goto LABEL_8;
      }
      if ( v14 == 1 )
      {
        tr_stored_block(v5, 0LL, 0LL, 0LL);
        flush_pending(a1);
        if ( !*(_DWORD *)(a1 + 24) )
        {
LABEL_8:
          *(_DWORD *)(v5 + 64) = -1;
          return 0LL;
        }
      }
      goto LABEL_44;
    }
  }
  if ( *(_DWORD *)(v5 + 236) || *(_DWORD *)(v5 + 8) != 666 )
    goto LABEL_32;
LABEL_44:
  if ( *(int *)(v5 + 44) <= 0 )
    return 1LL;
  v16 = *(_WORD *)(a1 + 78);
  *(_BYTE *)(*(unsigned int *)(v5 + 40) + *(_QWORD *)(v5 + 16)) = HIBYTE(v16);
  v17 = *(_DWORD *)(v5 + 40) + 1;
  *(_DWORD *)(v5 + 40) = v17;
  *(_BYTE *)(v17 + *(_QWORD *)(v5 + 16)) = v16;
  v18 = (unsigned int)(*(_DWORD *)(v5 + 40) + 1);
  *(_DWORD *)(v5 + 40) = v18;
  LOBYTE(v16) = *(_DWORD *)(a1 + 76);
  *(_BYTE *)(v18 + *(_QWORD *)(v5 + 16)) = BYTE1(*(_DWORD *)(a1 + 76));
  v19 = *(_DWORD *)(v5 + 40) + 1;
  *(_DWORD *)(v5 + 40) = v19;
  *(_BYTE *)(v19 + *(_QWORD *)(v5 + 16)) = v16;
  ++*(_DWORD *)(v5 + 40);
  flush_pending(a1);
  v20 = *(_DWORD *)(v5 + 44);
  if ( v20 > 0 )
    *(_DWORD *)(v5 + 44) = -v20;
  LOBYTE(v4) = *(_DWORD *)(v5 + 40) == 0;
  return v4;
}
