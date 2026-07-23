/*
 * XREFs of _set_errno_from_matherr @ 0x180129230
 * Callers:
 *     _call_matherr @ 0x180128150 (_call_matherr.c)
 *     _handle_error @ 0x1801282A0 (_handle_error.c)
 * Callees:
 *     _errno @ 0x180108440 (_errno.c)
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
