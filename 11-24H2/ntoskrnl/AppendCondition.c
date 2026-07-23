/*
 * XREFs of AppendCondition @ 0x140864B8C
 * Callers:
 *     LocalGetConditionForString @ 0x1408640EC (LocalGetConditionForString.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 */

__int64 __fastcall AppendCondition(const void **a1, unsigned int *a2, unsigned int *a3, const void *a4, size_t Size)
{
  unsigned int v5; // edi
  unsigned int v9; // esi
  unsigned int v10; // ebx
  void *v12; // rax
  const void *v13; // r13
  const void *v14; // rbx

  v5 = 0;
  if ( a1 && a2 && a3 )
  {
    v9 = *a3 + Size;
    if ( v9 < *a3 )
    {
      return 534;
    }
    else
    {
      if ( v9 > *a2 )
      {
        v12 = (void *)SddlpAlloc(v9);
        v13 = v12;
        if ( !v12 )
          return 8;
        v14 = *a1;
        memmove(v12, *a1, *a2);
        SddlpFree(v14);
        *a1 = v13;
        *a2 = v9;
      }
      v10 = *a3;
      memmove((char *)*a1 + *a3, a4, (unsigned int)Size);
      *a3 = v10 + Size;
    }
    return v5;
  }
  return 87LL;
}
