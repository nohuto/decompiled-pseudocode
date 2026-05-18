/*
 * XREFs of ??2@YAPEAX_K@Z @ 0x180002DF4
 * Callers:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000283C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?EnsureConnected@CApiPortClient@@AEAAJXZ @ 0x18000F66C (-EnsureConnected@CApiPortClient@@AEAAJXZ.c)
 * Callees:
 *     ?__scrt_throw_std_bad_alloc@@YAXXZ @ 0x180002FB4 (-__scrt_throw_std_bad_alloc@@YAXXZ.c)
 *     ?__scrt_throw_std_bad_array_new_length@@YAXXZ @ 0x180002FDC (-__scrt_throw_std_bad_array_new_length@@YAXXZ.c)
 *     _o__callnewh_0 @ 0x18000309C (_o__callnewh_0.c)
 *     _o_malloc_0 @ 0x180003130 (_o_malloc_0.c)
 */

void *__fastcall operator new(size_t Size)
{
  size_t i; // rbx
  void *result; // rax

  for ( i = Size; ; Size = i )
  {
    result = o_malloc_0(Size);
    if ( result )
      break;
    if ( !(unsigned int)o__callnewh_0(i) )
    {
      if ( i != -1LL )
        __scrt_throw_std_bad_alloc();
      __scrt_throw_std_bad_array_new_length();
    }
  }
  return result;
}
