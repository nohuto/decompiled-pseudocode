/*
 * XREFs of _set_errno_from_matherr @ 0x18012B000
 * Callers:
 *     _call_matherr @ 0x180129F20 (_call_matherr.c)
 *     _handle_error @ 0x18012A070 (_handle_error.c)
 * Callees:
 *     _errno @ 0x18010D560 (_errno.c)
 */

void __fastcall set_errno_from_matherr(int a1)
{
  int v1; // ecx

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( (unsigned int)(v1 - 1) <= 1 )
      *errno() = 34;
  }
  else
  {
    *errno() = 33;
  }
}
