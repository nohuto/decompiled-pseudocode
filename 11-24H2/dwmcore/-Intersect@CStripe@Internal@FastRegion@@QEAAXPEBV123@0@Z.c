/*
 * XREFs of ?Intersect@CStripe@Internal@FastRegion@@QEAAXPEBV123@0@Z @ 0x1801CE460
 * Callers:
 *     ?Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180030720 (-Intersect@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Intersect(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3)
{
  int *v4; // rax
  char *v5; // r10
  char *v6; // r11
  int *v7; // r9
  _DWORD *v8; // rcx
  int v9; // edx
  int v10; // r8d
  int *v11; // r9
  int *v12; // rax
  _DWORD *v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // r8d

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = (int *)((char *)a2 + *((int *)a2 + 1));
  v5 = (char *)a2 + *((int *)a2 + 3) + 8;
  v6 = (char *)a3 + *((int *)a3 + 3) + 8;
  v7 = (int *)((char *)a3 + *((int *)a3 + 1));
  v8 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v7 != (int *)v6 && v4 != (int *)v5 )
  {
    while ( 1 )
    {
LABEL_4:
      v9 = *v4;
      v10 = *v7;
      if ( *v4 < *v7 )
      {
        v12 = v4 + 1;
        goto LABEL_14;
      }
      v11 = v7 + 1;
      if ( v10 < v9 )
      {
LABEL_9:
        while ( 1 )
        {
          v9 = *v4;
          v16 = *v11;
          if ( *v4 < *v11 )
            break;
          v7 = v11 + 1;
          if ( v16 < v9 )
            goto LABEL_19;
          v12 = v4 + 1;
          if ( v7 == (int *)v6 )
            goto LABEL_3;
LABEL_14:
          v9 = *v7;
          if ( *v12 < *v7 )
          {
            v4 = v12 + 1;
            if ( v4 != (int *)v5 )
              goto LABEL_4;
            goto LABEL_3;
          }
          v11 = v7 + 1;
          if ( v9 < *v12 )
            goto LABEL_7;
          v4 = v12 + 1;
          if ( v4 == (int *)v5 )
            goto LABEL_3;
        }
      }
      v12 = v4 + 1;
LABEL_7:
      *v8 = v9;
      v13 = v8 + 1;
      v14 = *v12;
      v15 = *v11;
      if ( *v12 < *v11 )
      {
        *v13 = v14;
        v4 = v12 + 1;
        v8 = v13 + 1;
        if ( v4 != (int *)v5 )
          goto LABEL_9;
        goto LABEL_3;
      }
      v7 = v11 + 1;
      if ( v15 < v14 )
        break;
      *v13 = v14;
      v4 = v12 + 1;
      v8 = v13 + 1;
      if ( v4 == (int *)v5 )
        goto LABEL_3;
LABEL_19:
      if ( v7 == (int *)v6 )
        goto LABEL_3;
    }
    *v13 = v15;
    v8 = v13 + 1;
    if ( v7 != (int *)v6 )
      goto LABEL_14;
  }
LABEL_3:
  *((_DWORD *)this + 3) = (_DWORD)v8 - ((_DWORD)this + 8);
}
