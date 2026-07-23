/*
 * XREFs of MiUpdateKernelShadowStackOwnerData @ 0x14021F29C
 * Callers:
 *     MmCreateKernelStack @ 0x1402207C0 (MmCreateKernelStack.c)
 * Callees:
 *     MiValidateKernelShadowStackPage @ 0x140221838 (MiValidateKernelShadowStackPage.c)
 */

unsigned __int64 __fastcall MiUpdateKernelShadowStackOwnerData(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int64 a4)
{
  _QWORD *v4; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 *v8; // rbx

  v4 = (_QWORD *)(a1 + 8);
  result = a2;
  v6 = a1 + 8 + 8LL * a2;
  if ( a1 + 8 < v6 )
  {
    v7 = a4 >> 3;
    do
    {
      v8 = (unsigned __int64 *)(48 * ((*v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
      MiValidateKernelShadowStackPage((ULONG_PTR)v4++);
      result = 0xFFFFF00000000001uLL;
      *v8 = v7 ^ (*v8 ^ v7) & 0xFFFFF00000000001uLL;
    }
    while ( (unsigned __int64)v4 < v6 );
  }
  return result;
}
