/*
 * XREFs of ReadString @ 0x1801298A8
 * Callers:
 *     ReadStringDelimited @ 0x180129A84 (ReadStringDelimited.c)
 *     _input_l @ 0x180129C10 (_input_l.c)
 * Callees:
 *     isleadbyte @ 0x180122C58 (isleadbyte.c)
 *     _inc @ 0x180129BE0 (_inc.c)
 *     mbtowc @ 0x18012A630 (mbtowc.c)
 *     _ungetc_nolock @ 0x18012A724 (_ungetc_nolock.c)
 */

__int64 __fastcall ReadString(
        char a1,
        __int64 a2,
        int *a3,
        _DWORD *a4,
        _QWORD *SrcCh,
        int a6,
        FILE *Stream,
        _DWORD *a8)
{
  _WORD **v8; // rdi
  _WORD *v11; // r12
  bool v13; // zf
  int v14; // r13d
  int v15; // eax
  FILE *v17; // rcx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // edx
  int v22; // ecx
  _WORD *v23; // rax
  wchar_t DstCh; // [rsp+60h] [rbp+8h] BYREF
  __int64 v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+70h] [rbp+18h]
  int v28; // [rsp+78h] [rbp+20h]

  v26 = a2;
  v8 = (_WORD **)SrcCh;
  DstCh = 0;
  v11 = (_WORD *)*SrcCh;
  --*a4;
  v13 = *a3 == -1;
  v28 = -((a1 & 8) != 0);
  if ( !v13 )
    ungetc_nolock(*a3, Stream);
  v14 = a6;
  v15 = a1 & 1;
  v27 = v15;
  while ( 1 )
  {
    if ( v15 )
    {
      if ( !v14-- )
        break;
    }
    v17 = Stream;
    ++*a4;
    v18 = inc(v17);
    *a3 = v18;
    v19 = v18;
    if ( v18 == -1
      || (a1 & 0x10) == 0
      && ((a1 & 0x20) == 0 || (unsigned int)(v18 - 9) <= 4 || v18 == 32)
      && ((a1 & 0x40) == 0
       || v18 < 0
       || (v20 = v18 >> 3, v19 < v19 >> 3)
       || (v21 = v19 & 7, v22 = v28 ^ *(char *)(v20 + v26), !_bittest(&v22, v21))) )
    {
      --*a4;
      if ( *a3 != -1 )
        ungetc_nolock(*a3, Stream);
      break;
    }
    if ( (a1 & 4) != 0 )
    {
      v15 = v27;
      v11 = (_WORD *)((char *)v11 + 1);
    }
    else
    {
      if ( (a1 & 2) != 0 )
      {
        LOBYTE(SrcCh) = *(_BYTE *)a3;
        if ( isleadbyte((unsigned __int8)SrcCh) )
        {
          ++*a4;
          BYTE1(SrcCh) = inc(Stream);
        }
        DstCh = 63;
        mbtowc(&DstCh, (const char *)&SrcCh, _mb_cur_max);
        *(*v8)++ = DstCh;
      }
      else
      {
        *(_BYTE *)*v8 = *(_BYTE *)a3;
        *v8 = (_WORD *)((char *)*v8 + 1);
      }
      v15 = v27;
    }
  }
  if ( v11 == *v8 )
    return 0xFFFFFFFFLL;
  if ( (a1 & 4) == 0 )
  {
    ++*a8;
    if ( (a1 & 0x10) == 0 )
    {
      v23 = *v8;
      if ( (a1 & 2) != 0 )
        *v23 = 0;
      else
        *(_BYTE *)v23 = 0;
    }
  }
  return 0LL;
}
