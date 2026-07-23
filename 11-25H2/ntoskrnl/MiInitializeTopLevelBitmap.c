/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140C55658
 * Callers:
 *     MiInitializeSystemVa @ 0x140C555A8 (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140231F50 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x140339430 (RtlSetBits.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 */

__int64 MiInitializeTopLevelBitmap()
{
  unsigned __int64 v0; // rbx
  __int64 v1; // rdi
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140E2EE48 = (unsigned __int8)ExGenRandom(1);
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140E2EE28;
  xmmword_140E2EE28 = 0LL;
  xmmword_140E2EE38 = 0LL;
  v0 = 0xFFFFF6FB7DBED800uLL;
  v1 = 256LL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v0) )
      RtlSetBits(&BitMapHeader, (__int64)(v0 + 0x90482412800LL) >> 3, 1u);
    v0 += 8LL;
    --v1;
  }
  while ( v1 );
  RtlSetBits(&BitMapHeader, ((__int64)(v0 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x100000) == 0 )
    BYTE13(xmmword_140E2EE38) &= ~0x20u;
  result = 1LL;
  LOBYTE(xmmword_140E2EE28) = xmmword_140E2EE28 | 1;
  return result;
}
