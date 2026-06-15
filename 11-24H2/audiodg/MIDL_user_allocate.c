/*
 * XREFs of MIDL_user_allocate @ 0x1400659B0
 * Callers:
 *     AudioDGGetStreamVpoDescription @ 0x14006D830 (AudioDGGetStreamVpoDescription.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size <= 0xC800 )
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
  else
    return 0LL;
}
