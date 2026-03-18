/*
 * XREFs of ?Subtract@CStripe@Internal@FastRegion@@QEAAXPEBV123@00@Z @ 0x1801C3240
 * Callers:
 *     ?Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x180066E70 (-Subtract@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FastRegion::Internal::CStripe::Subtract(
        FastRegion::Internal::CStripe *this,
        const struct FastRegion::Internal::CStripe *a2,
        const struct FastRegion::Internal::CStripe *a3,
        const struct FastRegion::Internal::CStripe *a4)
{
  int *v5; // rax
  char *v6; // r10
  int *v7; // r9
  char *v8; // rbx
  _DWORD *v9; // rdx
  int v10; // ecx
  int *v11; // r9
  int v12; // ecx
  int v13; // r8d
  int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // r8d

  *(_DWORD *)this = *(_DWORD *)a4;
  v5 = (int *)((char *)a2 + *((int *)a2 + 1));
  v6 = (char *)a2 + *((int *)a2 + 3) + 8;
  v7 = (int *)((char *)a3 + *((int *)a3 + 1));
  v8 = (char *)a3 + *((int *)a3 + 3) + 8;
  v9 = (_DWORD *)((char *)this + *((int *)this + 1));
  if ( v5 == (int *)v6 )
    goto LABEL_11;
  if ( v7 == (int *)v8 )
    goto LABEL_3;
LABEL_19:
  while ( 2 )
  {
    while ( 1 )
    {
      v14 = *v5;
      v15 = *v7;
      if ( *v5 >= *v7 )
        break;
      ++v5;
      *v9++ = v14;
LABEL_21:
      v16 = *v5;
      v17 = *v7;
      if ( *v5 >= *v7 )
      {
        v11 = v7 + 1;
        if ( v17 < v16 )
        {
          *v9++ = v17;
          v12 = *v11;
          goto LABEL_8;
        }
        *v9++ = v16;
        goto LABEL_13;
      }
      *v9 = v16;
      ++v5;
      ++v9;
      if ( v5 == (int *)v6 )
      {
        *((_DWORD *)this + 3) = (_DWORD)v9 - ((_DWORD)this + 8);
        return;
      }
    }
    v11 = v7 + 1;
    if ( v15 >= v14 )
    {
      v12 = *v11;
      goto LABEL_7;
    }
    while ( 1 )
    {
      v13 = *v5;
      v12 = *v11;
      if ( *v5 >= *v11 )
      {
        v7 = v11 + 1;
        if ( v12 >= v13 )
        {
          *v9 = v13;
          ++v5;
          ++v9;
          if ( v7 != (int *)v8 )
            goto LABEL_21;
        }
        else if ( v7 != (int *)v8 )
        {
          goto LABEL_19;
        }
        goto LABEL_17;
      }
LABEL_7:
      ++v5;
LABEL_8:
      if ( *v5 >= v12 )
        break;
LABEL_13:
      if ( ++v5 == (int *)v6 )
        goto LABEL_11;
    }
    v7 = v11 + 1;
    if ( v12 < *v5 )
    {
      *v9++ = v12;
      if ( v7 != (int *)v8 )
        goto LABEL_21;
LABEL_17:
      if ( v5 != (int *)v6 )
        goto LABEL_3;
      goto LABEL_11;
    }
    if ( ++v5 == (int *)v6 )
      goto LABEL_11;
    if ( v7 != (int *)v8 )
      continue;
    break;
  }
  do
  {
LABEL_3:
    v10 = *v5++;
    *v9++ = v10;
  }
  while ( v5 != (int *)v6 );
LABEL_11:
  *((_DWORD *)this + 3) = (_DWORD)v9 - ((_DWORD)this + 8);
}
