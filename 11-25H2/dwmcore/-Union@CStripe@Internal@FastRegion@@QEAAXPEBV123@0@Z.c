/*
 * XREFs of ?Union@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1801D7750
 * Callers:
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180064640 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Union(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // r9
  char *v5; // rbx
  int *v6; // rdx
  char *v7; // r8
  _DWORD *v8; // rax
  int v9; // r10d
  int v10; // ecx
  int v11; // ecx
  int v12; // r10d
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (int *)((char *)a3 + *((int *)a3 + 1));
  v7 = (char *)a3 + *((int *)a3 + 3) + 8;
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v4 != (int *)v5 )
  {
    if ( v6 == (int *)v7 )
    {
      do
      {
LABEL_25:
        v15 = *v4++;
        *v8++ = v15;
      }
      while ( v4 != (int *)v5 );
      goto LABEL_10;
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_3:
        v9 = *v4;
        v10 = *v6;
        if ( *v4 < *v6 )
        {
          ++v4;
          *v8++ = v9;
          v12 = *v4;
          goto LABEL_20;
        }
        ++v6;
        if ( v10 < v9 )
        {
          *v8++ = v10;
          goto LABEL_15;
        }
        *v8 = v9;
        ++v4;
        v11 = *v6;
        ++v8;
LABEL_6:
        v12 = *v4;
LABEL_7:
        if ( v12 >= v11 )
          break;
        if ( ++v4 == (int *)v5 )
          goto LABEL_10;
        while ( 1 )
        {
LABEL_15:
          v11 = *v6;
          if ( *v4 < *v6 )
          {
            ++v4;
            goto LABEL_6;
          }
          ++v6;
          if ( v11 < *v4 )
          {
            *v8++ = v11;
            if ( v6 != (int *)v7 )
              goto LABEL_3;
            goto LABEL_24;
          }
          ++v4;
          if ( v6 == (int *)v7 )
            goto LABEL_24;
          v12 = *v4;
LABEL_20:
          v14 = *v6;
          if ( v12 < *v6 )
            break;
          ++v6;
          if ( v14 < v12 )
          {
            v11 = *v6;
            goto LABEL_7;
          }
          if ( ++v4 == (int *)v5 )
            goto LABEL_10;
        }
        *v8 = v12;
        ++v4;
        ++v8;
        if ( v4 == (int *)v5 )
          goto LABEL_10;
      }
      ++v6;
      if ( v11 < v12 )
        break;
      *v8 = v12;
      ++v4;
      ++v8;
      if ( v4 == (int *)v5 )
        goto LABEL_10;
      if ( v6 == (int *)v7 )
        goto LABEL_25;
    }
    if ( v6 != (int *)v7 )
      goto LABEL_20;
LABEL_24:
    if ( v4 != (int *)v5 )
      goto LABEL_25;
  }
LABEL_10:
  while ( v6 != (int *)v7 )
  {
    v13 = *v6++;
    *v8++ = v13;
  }
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
