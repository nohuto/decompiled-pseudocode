/*
 * XREFs of ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800F4990
 * Callers:
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x1800F50A4 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094F30 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall HrMalloc(__int64 a1, unsigned __int64 a2, void **a3)
{
  unsigned int v3; // ebx
  void *v5; // rax

  v3 = 0;
  if ( a3 && a2 && 0xFFFFFFFFFFFFFFFFuLL / a2 > 8 )
  {
    v5 = DefaultHeap::Alloc(8 * a2);
    *a3 = v5;
    if ( !v5 )
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
