/*
 * XREFs of ?bSearchAllSpans@FLOODBM@@QEAAHJJAEAJ0PEAEAEAVSTACKOBJ@@PEAVSCANLINE@@@Z @ 0x14015AC34
 * Callers:
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x14015C07C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 * Callees:
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x14015BDC0 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x14015BE88 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bExpandScanline@STACKOBJ@@QEAAHKK@Z @ 0x14015C704 (-bExpandScanline@STACKOBJ@@QEAAHKK@Z.c)
 */

__int64 __fastcall FLOODBM::bSearchAllSpans(
        FLOODBM *this,
        int a2,
        int a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        struct STACKOBJ *a7,
        struct SCANLINE *a8)
{
  unsigned int v11; // ebx
  unsigned int *v12; // rsi
  __int64 v13; // r12
  unsigned int v14; // r15d
  bool v15; // zf
  unsigned int j; // eax
  __int64 v17; // rax
  unsigned int v18; // r8d
  __int64 result; // rax
  unsigned int i; // eax
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // r11d
  unsigned int *v24; // r9
  signed int v25; // r10d
  int *v26; // rdi
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // rcx

  v11 = 0;
  v12 = (unsigned int *)*((_QWORD *)a7 + 2);
  v13 = v12[4];
  *((_QWORD *)this + 3) = a6;
  v14 = 8 * v13 + 28;
LABEL_2:
  while ( a2 < a3 )
  {
    if ( *((_DWORD *)this + 8) )
    {
      if ( FLOODBM::iColorGet(this, a2) == *((_DWORD *)this + 5) )
        goto LABEL_9;
      while ( 1 )
      {
        v15 = ++a2 == a3;
        if ( a2 >= a3 )
          break;
        if ( FLOODBM::iColorGet(this, a2) == *((_DWORD *)this + 5) )
          goto LABEL_7;
      }
    }
    else
    {
      if ( FLOODBM::iColorGet(this, a2) != *((_DWORD *)this + 5) )
        goto LABEL_9;
      while ( 1 )
      {
        v15 = ++a2 == a3;
        if ( a2 >= a3 )
          break;
        if ( FLOODBM::iColorGet(this, a2) != *((_DWORD *)this + 5) )
        {
LABEL_7:
          v15 = a2 == a3;
          break;
        }
      }
    }
    if ( v15 )
      break;
LABEL_9:
    if ( a8 )
    {
      for ( i = 0; i < *((_DWORD *)a8 + 4) && a2 >= *((_DWORD *)a8 + 2 * i + 7); ++i )
      {
        v21 = *((_DWORD *)a8 + 2 * i + 8);
        if ( a2 < v21 )
        {
LABEL_32:
          a2 = v21;
          goto LABEL_2;
        }
      }
    }
    for ( j = 0; j < v12[4]; ++j )
    {
      if ( a2 >= (int)v12[2 * j + 7] )
      {
        v21 = v12[2 * j + 8];
        if ( a2 < v21 )
          goto LABEL_32;
      }
    }
    v14 += 8;
    if ( v14 > *v12 )
    {
      result = STACKOBJ::bExpandScanline(a7, v14, 0);
      if ( !(_DWORD)result )
        return result;
      v12 = (unsigned int *)*((_QWORD *)a7 + 2);
    }
    FLOODBM::vFindExtent(this, a2, (int *)&v12[2 * v12[4] + 7], (int *)&v12[2 * v12[4] + 8]);
    v17 = v12[4];
    a2 = v12[2 * v17 + 8] + 1;
    v12[4] = v17 + 1;
  }
  v18 = v12[4];
  if ( (_DWORD)v13 == v18 )
  {
    *a5 = 0;
    *a4 = 0;
  }
  else
  {
    *a4 = v12[2 * v13 + 7];
    *a5 = v12[2 * v18 + 6];
    if ( v18 != 1 )
    {
      do
      {
        v22 = v11;
        v23 = v11;
        v24 = &v12[2 * v11];
        v25 = v24[7];
        if ( v11 < v18 )
        {
          v26 = (int *)(v24 + 7);
          do
          {
            v27 = *v26;
            v28 = v23;
            v26 += 2;
            if ( v27 >= v25 )
              v28 = v22;
            ++v23;
            v22 = v28;
            if ( v27 >= v25 )
              v27 = v25;
            v25 = v27;
          }
          while ( v23 < v18 );
          if ( v11 != (_DWORD)v28 )
          {
            v29 = *(_QWORD *)(v24 + 7);
            *(_QWORD *)(v24 + 7) = *(_QWORD *)&v12[2 * v28 + 7];
            *(_QWORD *)&v12[2 * (unsigned int)v28 + 7] = v29;
          }
        }
        v18 = v12[4];
        ++v11;
      }
      while ( v11 < v18 - 1 );
    }
  }
  return 1LL;
}
