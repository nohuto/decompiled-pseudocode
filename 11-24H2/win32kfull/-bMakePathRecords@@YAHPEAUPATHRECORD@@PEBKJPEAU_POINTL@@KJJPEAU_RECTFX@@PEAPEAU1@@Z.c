/*
 * XREFs of ?bMakePathRecords@@YAHPEAUPATHRECORD@@PEBKJPEAU_POINTL@@KJJPEAU_RECTFX@@PEAPEAU1@@Z @ 0x1400C7750
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1400C7B70 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bMakePathRecords(
        struct PATHRECORD *a1,
        const unsigned int *a2,
        int a3,
        struct _POINTL *a4,
        unsigned int a5,
        int a6,
        int a7,
        struct _RECTFX *a8,
        struct PATHRECORD **a9)
{
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // r14
  signed int v13; // ebp
  struct PATHRECORD *i; // r11
  int v17; // edx
  struct PATHRECORD *v18; // r8
  struct _POINTL *v19; // rbx
  int x; // ecx
  LONG v21; // eax
  LONG v22; // eax
  int y; // ecx
  int v24; // eax
  LONG v25; // eax
  unsigned int v26; // ebx
  int v28; // [rsp+48h] [rbp+18h]

  *((_QWORD *)a1 + 1) = 0LL;
  LODWORD(v9) = 0x7FFFFFFF;
  LODWORD(v10) = 0x80000000;
  LODWORD(v12) = 0x7FFFFFFF;
  v13 = 0x80000000;
  for ( i = a1; ; *(_QWORD *)v18 = i )
  {
    v17 = *a2;
    v28 = a3 - *a2++;
    if ( v28 < 0 || v17 < 2 )
      break;
    v18 = i;
    v19 = a4;
    *((_DWORD *)i + 5) = v17;
    *((_DWORD *)i + 4) = 3;
    do
    {
      x = v19->x;
      v21 = v19->x;
      if ( v19->x >= (int)v9 )
        v21 = v9;
      v9 = v21;
      v22 = v19->x;
      if ( x <= (int)v10 )
        v22 = v10;
      v10 = v22;
      *((_DWORD *)i + 6) = x + a6;
      y = v19->y;
      v24 = y;
      if ( y >= (int)v12 )
        v24 = v12;
      v12 = v24;
      v25 = v19->y;
      if ( y <= v13 )
        v25 = v13;
      ++v19;
      v13 = v25;
      *((_DWORD *)i + 7) = y + a7;
      i = (struct PATHRECORD *)((char *)i + 8);
      --v17;
    }
    while ( v17 );
    a3 = v28;
    a4 = v19;
    v26 = 1;
    if ( !--a5 )
    {
      *(_QWORD *)v18 = 0LL;
      *a9 = v18;
      if ( (unsigned __int64)(a6 + v9 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a8->xLeft = -1;
        goto LABEL_17;
      }
      a8->xLeft = a6 + v9;
      if ( (unsigned __int64)(a6 + v10 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a8->xRight = -1;
        goto LABEL_17;
      }
      a8->xRight = a6 + v10;
      if ( (unsigned __int64)(v12 + a7 + 0x80000000LL) > 0xFFFFFFFF )
      {
        a8->yTop = -1;
        goto LABEL_17;
      }
      a8->yTop = v12 + a7;
      if ( (unsigned __int64)(a7 + (__int64)v25 + 0x80000000LL) <= 0xFFFFFFFF )
      {
        a8->yBottom = a7 + v25;
      }
      else
      {
        a8->yBottom = -1;
LABEL_17:
        v26 = 0;
      }
      if ( !v28 )
        return v26;
      return 0;
    }
    i = (struct PATHRECORD *)((char *)i + 24);
    *((_QWORD *)i + 1) = v18;
  }
  return 0;
}
