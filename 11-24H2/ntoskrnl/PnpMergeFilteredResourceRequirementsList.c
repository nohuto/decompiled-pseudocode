/*
 * XREFs of PnpMergeFilteredResourceRequirementsList @ 0x140731630
 * Callers:
 *     IopQueryDeviceResources @ 0x140978EDC (IopQueryDeviceResources.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpMergeFilteredResourceRequirementsList(_DWORD *Src, _DWORD *a2, unsigned int **a3)
{
  _DWORD *v5; // rbx
  unsigned int v6; // ebp
  unsigned int *Pool2; // rax
  unsigned int *v8; // rsi
  unsigned int *v10; // rax
  unsigned int *v11; // rdi

  *a3 = 0LL;
  v5 = Src;
  if ( Src && Src[7] )
    goto LABEL_18;
  if ( !a2 || !a2[7] )
    return 0LL;
  if ( Src && Src[7] )
  {
LABEL_18:
    if ( a2 && a2[7] )
    {
      v6 = *Src - 32 + *a2;
      Pool2 = (unsigned int *)ExAllocatePool2(0x100uLL, v6, 0x36706E50u);
      v8 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, v5, (unsigned int)*v5);
        memmove((char *)v8 + (unsigned int)*v5, a2 + 8, v6 - *v5);
        *v8 = v6;
        v8[7] += a2[7];
        *a3 = v8;
        return 0LL;
      }
      return 3221225626LL;
    }
  }
  else
  {
    v5 = a2;
  }
  v10 = (unsigned int *)ExAllocatePool2(0x100uLL, (unsigned int)*v5, 0x36706E50u);
  v11 = v10;
  if ( v10 )
  {
    memmove(v10, v5, (unsigned int)*v5);
    *a3 = v11;
    return 0LL;
  }
  return 3221225626LL;
}
