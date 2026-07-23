/*
 * XREFs of MiIoPfnTreeExclusionCompatible @ 0x14067716C
 * Callers:
 *     MiCreateIoPageExclusion @ 0x140676908 (MiCreateIoPageExclusion.c)
 * Callees:
 *     MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiFlushCachedIoPfnRange @ 0x140676EF4 (MiFlushCachedIoPfnRange.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiIoPfnTreeExclusionCompatible(int a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned __int64 v4; // rdx
  int v5; // esi
  unsigned __int64 *v6; // r13
  _BYTE *v7; // r14
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbp
  _QWORD *i; // rbx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  int v17; // edx
  int v18; // r15d
  _WORD *v19; // r12
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // r8
  char v23; // cl
  _QWORD **v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rcx
  int v27; // [rsp+20h] [rbp-118h]
  int v28; // [rsp+24h] [rbp-114h]
  int v29; // [rsp+28h] [rbp-110h]
  _BYTE v31[48]; // [rsp+40h] [rbp-F8h] BYREF
  char v32; // [rsp+70h] [rbp-C8h] BYREF

  v2 = a2;
  v3 = a1;
  memset_0(v31, 0, 0xB0uLL);
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 0;
  v27 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = (_QWORD *)qword_140E372C0[8 * v3];
  v9 = v4 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1);
  if ( !v8 )
    return 0LL;
  i = 0LL;
  do
  {
    v12 = v8[3];
    if ( *(_QWORD *)(v2 + 32) >= v12 )
    {
      if ( v4 >= v12 + 512 )
      {
        v8 = (_QWORD *)v8[1];
        continue;
      }
      i = v8;
    }
    v8 = (_QWORD *)*v8;
  }
  while ( v8 );
  while ( i )
  {
    v13 = *(_QWORD *)(v2 + 32);
    v14 = i[3];
    if ( v13 < v14 )
      break;
    v15 = v9 - v14;
    if ( v9 < v14 )
      v15 = 0LL;
    v16 = v13 + 1 > v14 + 512 ? 512LL : v13 - v14 + 1;
    v9 = v15 + v14;
    v17 = 0;
    v28 = 0;
    v18 = 0;
    if ( v15 >= v16 )
    {
LABEL_32:
      v5 = v27;
    }
    else
    {
      v19 = (_WORD *)i + v15 + 88;
      while ( !*v19 )
      {
        v20 = (*((_DWORD *)i
               + ((unsigned __int64)(2
                                   * (((unsigned int)v9 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78 - 12))
                                                         - 1))
                                    - *((_DWORD *)i + 6))) >> 5)
               + 11) >> ((2 * ((v9 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F)) & 3;
        v29 = v20;
        if ( v20 != 3 )
        {
          if ( !v17 )
          {
            MiFlushEntireTbDueToAttributeChange();
            v20 = v29;
            v28 = 1;
          }
          if ( v20 == 1 && !v18 )
          {
            ++dword_140E3737C;
            if ( !v7 )
            {
              v7 = v31;
              v6 = (unsigned __int64 *)&v32;
            }
            *v6++ = v9;
            if ( v6 == (unsigned __int64 *)(v7 + 176) )
            {
              v21 = MiFlushCachedIoPfnRange((__int64)v7, 16);
              v7 = 0LL;
              if ( v21 )
                v18 = 1;
            }
          }
          v22 = (unsigned __int64)(2
                                 * (((unsigned int)v9 & ((unsigned int)(1LL << ((unsigned __int8)dword_140E2DC78 - 12))
                                                       - 1))
                                  - *((_DWORD *)i + 6))) >> 5;
          v23 = (2 * ((v9 & ((1LL << ((unsigned __int8)dword_140E2DC78 - 12)) - 1)) - *((_BYTE *)i + 24))) & 0x1F;
          v17 = v28;
          *((_DWORD *)i + v22 + 11) = (3 << v23) | *((_DWORD *)i + v22 + 11) & ~(3 << v23);
        }
        ++v15;
        ++v19;
        ++v9;
        if ( v15 >= v16 )
          goto LABEL_32;
      }
      v5 = -1073741800;
      v27 = -1073741800;
    }
    if ( v7 )
      MiFlushCachedIoPfnRange((__int64)v7, ((char *)v6 - v7 - 48) >> 3);
    if ( v5 < 0 )
      break;
    v24 = (_QWORD **)i[1];
    v25 = i;
    if ( v24 )
    {
      v26 = *v24;
      for ( i = (_QWORD *)i[1]; v26; v26 = (_QWORD *)*v26 )
        i = v26;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v25 )
          break;
        v25 = i;
      }
    }
    v2 = a2;
  }
  return (unsigned int)v5;
}
