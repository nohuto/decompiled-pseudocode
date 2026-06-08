/*
 * XREFs of sub_14002CAF0 @ 0x14002CAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400102D0 (_guard_dispatch_icall.c)
 *     sub_140010380 @ 0x140010380 (sub_140010380.c)
 *     sub_140010680 @ 0x140010680 (sub_140010680.c)
 */

__int64 __fastcall sub_14002CAF0(
        unsigned __int8 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int *v6; // r13
  unsigned int v7; // ebx
  __int64 v10; // rdi
  _DWORD *v11; // rcx
  bool v12; // zf
  __int64 v13; // rbp
  unsigned int v14; // edi
  __int64 v15; // rax
  char **v16; // r15
  unsigned int v17; // r14d
  unsigned int v18; // r12d
  __int64 v19; // rcx
  _DWORD *v20; // rsi
  __int64 v21; // rcx
  __int128 v22; // xmm0
  __int64 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  *a6 = 0;
  if ( a1 > 5u )
  {
    if ( a1 == 6 || a1 == 7 )
      return v7;
    if ( a1 == 8 )
    {
      v13 = a5;
      v14 = 0;
      v15 = a5;
      v16 = *(char ***)(a5 + 32);
      do
      {
        v15 = *(_QWORD *)(v15 + 16);
        ++v14;
      }
      while ( v15 );
      if ( v14 <= 0x3F )
      {
        v17 = 32 * v14 + 24;
        if ( v16 )
        {
          v18 = 32 * v14 + 24;
          v17 += *(unsigned __int16 *)v16 + 2;
        }
        else
        {
          v18 = 0;
        }
        if ( v17 > a3 )
        {
          v7 = -1073741789;
          if ( a3 >= 4 )
          {
            *(_DWORD *)a4 = v17;
            *v6 = 4;
          }
        }
        else
        {
          sub_140010680((char *)a4, 0, a3);
          *(_DWORD *)a4 = v17;
          *(_DWORD *)(a4 + 8) = v18;
          *(_DWORD *)(a4 + 16) = v14;
          if ( v16 )
          {
            v19 = a4 + v18;
            *(_WORD *)v19 = *(_WORD *)v16;
            sub_140010380((char *)(v19 + 2), v16[1], *(unsigned __int16 *)v16);
          }
          if ( v14 )
          {
            v20 = (_DWORD *)(a4 + 40);
            v21 = v14;
            do
            {
              v22 = *(_OWORD *)*(_QWORD *)(v13 + 8);
              *v20 = 528384;
              v20 += 8;
              *((_OWORD *)v20 - 3) = v22;
              *(_BYTE *)(v13 + 41) = 0;
              *(_DWORD *)(v13 + 44) = 0;
              v13 = *(_QWORD *)(v13 + 16);
              --v21;
            }
            while ( v21 );
          }
          *v6 = v17;
        }
        return v7;
      }
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741808;
  }
  if ( a1 != 5 && (!a1 || a1 != 4) )
    return (unsigned int)-1073741808;
  v10 = a5;
  v25 = 0;
  LODWORD(a6) = 0;
  if ( !a5 )
    return (unsigned int)-1073741163;
  if ( a3 < 0x30 )
    return (unsigned int)-1073741811;
  do
  {
    v11 = *(_DWORD **)(v10 + 8);
    if ( *v11 == *(_DWORD *)(a4 + 24)
      && v11[1] == *(_DWORD *)(a4 + 28)
      && v11[2] == *(_DWORD *)(a4 + 32)
      && v11[3] == *(_DWORD *)(a4 + 36) )
    {
      break;
    }
    v10 = *(_QWORD *)(v10 + 16);
  }
  while ( v10 );
  if ( !v10 )
    return (unsigned int)-1073741163;
  if ( a1 == 5 )
  {
    *(_DWORD *)(v10 + 44) = 0;
    *(_QWORD *)(v10 + 24) = 0LL;
    *(_BYTE *)(v10 + 41) = 0;
  }
  else
  {
    v12 = dword_140018EF0 == 2;
    v24 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(v10 + 24) = v24;
    if ( v12 )
    {
      if ( !(unsigned int)((__int64 (__fastcall *)(__int64, int *, __int64, unsigned int **, __int64))qword_140018EF8)(
                            3LL,
                            &v25,
                            4LL,
                            &a6,
                            a4) )
        *(_BYTE *)(v10 + 41) = v25;
      return (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, unsigned int **, __int64))qword_140018EF8)(
                             2LL,
                             v10 + 44,
                             4LL,
                             &a6,
                             a4);
    }
    else
    {
      *(_DWORD *)(v10 + 44) = HIDWORD(v24);
      *(_BYTE *)(v10 + 41) = BYTE2(v24);
    }
  }
  return v7;
}
