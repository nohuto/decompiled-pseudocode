/*
 * XREFs of ExpUnicodeStringToNonpagedWStr @ 0x140821E7C
 * Callers:
 *     ExSetFirmwareEnvironmentVariable @ 0x1407ABFC0 (ExSetFirmwareEnvironmentVariable.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140821DF0 (ExGetFirmwareEnvironmentVariable.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

_WORD *__fastcall ExpUnicodeStringToNonpagedWStr(const void **a1)
{
  unsigned __int64 v1; // rdi
  _WORD *Pool2; // rax
  _WORD *v4; // rbx

  v1 = *(unsigned __int16 *)a1;
  Pool2 = (_WORD *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, a1[1], (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
