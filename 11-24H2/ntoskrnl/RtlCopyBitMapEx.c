/*
 * XREFs of RtlCopyBitMapEx @ 0x140411D50
 * Callers:
 *     MiResizeAweBitMap @ 0x1407FA110 (MiResizeAweBitMap.c)
 *     MiSelectRelocationStartHint @ 0x140A2AD00 (MiSelectRelocationStartHint.c)
 * Callees:
 *     RtlpCopyBitMapTailToHeadEx @ 0x140411E44 (RtlpCopyBitMapTailToHeadEx.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

unsigned __int64 __fastcall RtlCopyBitMapEx(unsigned __int64 *a1, _QWORD *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 *v8; // r9
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbx
  size_t v13; // r14
  _BYTE *v14; // r8
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 *v18; // r11
  __int64 v19; // r8
  __int64 v20; // r10
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // r10

  result = *a1;
  v6 = *a2 - a3;
  if ( *a1 <= v6 )
    v6 = *a1;
  if ( v6 )
  {
    v7 = a2[1];
    v8 = (__int64 *)a1[1];
    result = a3 >> 6;
    v9 = v7 + 8 * (a3 >> 6);
    if ( (unsigned __int64)v8 <= v9 && (result = (unsigned __int64)&v8[(v6 - 1) >> 6], v9 <= result) )
    {
      return RtlpCopyBitMapTailToHeadEx(a1, a2, a3, v6);
    }
    else
    {
      v10 = a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v15 = a3 & 0x3F;
        v16 = 64 - v15;
        v17 = 1LL << (64 - ((unsigned __int8)a3 & 0x3Fu));
        v18 = (__int64 *)(v7 + 8 * (a3 >> 6));
        v19 = 1LL << (a3 & 0x3F);
        if ( v6 < 0x40 )
          goto LABEL_17;
        v20 = v17 - 1;
        v21 = *v18;
        v22 = v6 >> 6;
        v6 += -64LL * (v6 >> 6);
        do
        {
          *v18++ = ((v20 & *v8) << v15) | v21 & (v19 - 1);
          v23 = *v8++ & ~v20;
          result = v23 >> v16;
          v21 = result | *v18 & ~(v19 - 1);
          *v18 = v21;
          --v22;
        }
        while ( v22 );
        if ( v6 )
        {
LABEL_17:
          v24 = *v8;
          v25 = *v18;
          if ( v6 > v16 )
          {
            *v18 = v25 & (v19 - 1) | ((v24 & (v17 - 1)) << v15);
            v26 = 1LL << ((unsigned __int8)v6 + (unsigned __int8)v15 - 64);
            result = (*v8 & (unsigned __int64)((v26 - 1) << v16)) >> v16;
            v18[1] = result | v18[1] & ~(v26 - 1);
          }
          else
          {
            result = ((v24 & ((1LL << v6) - 1)) << v15) | v25 & ~(((1LL << v6) - 1) << v15);
            *v18 = result;
          }
        }
      }
      else
      {
        v11 = v6;
        v12 = v6 & 7;
        v13 = v11 >> 3;
        if ( v13 )
          result = (unsigned __int64)memmove((void *)(v7 + v10), v8, v13);
        if ( v12 )
        {
          v14 = (_BYTE *)(v13 + v10 + a2[1]);
          *v14 &= ~((1 << v12) - 1);
          result = a1[1];
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *(_BYTE *)(v13 + result);
        }
      }
    }
  }
  return result;
}
