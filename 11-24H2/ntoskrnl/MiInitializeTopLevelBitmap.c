/*
 * XREFs of MiInitializeTopLevelBitmap @ 0x140C6945C
 * Callers:
 *     MiInitializeSystemVa @ 0x140C693AC (MiInitializeSystemVa.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140246FA0 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x14027C2D0 (RtlSetBits.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 */

__int64 __fastcall MiInitializeTopLevelBitmap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 256LL;
  dword_140E2F1C8 = (unsigned __int8)ExGenRandom(1, a2, a3, a4);
  BitMapHeader.Buffer = (unsigned int *)&xmmword_140E2F1A8;
  xmmword_140E2F1A8 = 0LL;
  xmmword_140E2F1B8 = 0LL;
  v4 = 0xFFFFF6FB7DBED800uLL;
  v5 = 256LL;
  do
  {
    if ( MI_READ_PTE_LOCK_FREE(v4) )
      RtlSetBits(&BitMapHeader, (__int64)(v4 + 0x90482412800LL) >> 3, 1u);
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  RtlSetBits(&BitMapHeader, ((__int64)(v4 + 0x90482412800LL) >> 3) - 1, 1u);
  if ( (MiFlags & 0x100000) == 0 )
    BYTE13(xmmword_140E2F1B8) &= ~0x20u;
  result = 1LL;
  LOBYTE(xmmword_140E2F1A8) = xmmword_140E2F1A8 | 1;
  return result;
}
