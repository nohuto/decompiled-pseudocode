/*
 * XREFs of XmInitializeEmulator @ 0x14055EB08
 * Callers:
 *     x86BiosInitializeBiosShadowed @ 0x1405465DC (x86BiosInitializeBiosShadowed.c)
 * Callees:
 *     x86BiosTranslateAddress @ 0x140469260 (x86BiosTranslateAddress.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 XmInitializeEmulator()
{
  _WORD *v0; // rax
  int *v1; // rdi
  __int64 v2; // rcx
  __int64 result; // rax

  memset_0(&XmContext, 0, 0x1C0uLL);
  v0 = &unk_140E1174E;
  do
    *v0-- = -1;
  while ( (__int64)v0 >= (__int64)word_140E11744 );
  dword_140E118A0 = 0x8000000;
  dword_140E11728 = 2048;
  word_140E1173C = 0;
  qword_140E118A8 = (__int64)x86BiosReadIoSpace;
  qword_140E118B0 = (__int64)x86BiosWriteIoSpace;
  qword_140E118B8 = (__int64)x86BiosTranslateAddress;
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
