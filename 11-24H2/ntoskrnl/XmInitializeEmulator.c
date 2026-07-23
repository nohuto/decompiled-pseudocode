/*
 * XREFs of XmInitializeEmulator @ 0x14055C738
 * Callers:
 *     x86BiosInitializeBiosShadowed @ 0x140543E9C (x86BiosInitializeBiosShadowed.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140461C10 (x86BiosTranslateAddress.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset_0(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140E118CE;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140E118C4 );
  dword_140E11A20 = 0x8000000;
  dword_140E118A8 = 2048;
  word_140E118BC = 0;
  qword_140E11A28 = (__int64)x86BiosReadIoSpace;
  qword_140E11A30 = (__int64)x86BiosWriteIoSpace;
  qword_140E11A38 = (__int64)x86BiosTranslateAddress;
  v1 = x86BiosTranslateAddress(0, 0);
  XmEmulatorInitialized = 1;
  v2 = 256LL;
  v1[320] = 207;
  result = 1280LL;
  while ( v2 )
  {
    *v1++ = 1280;
    --v2;
  }
  return result;
}
