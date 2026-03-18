/*
 * XREFs of ?ReAllocate@?$CSortedVector@PEAXPEAX@NSInstrumentation@@AEAA_N_K@Z @ 0x1401D0950
 * Callers:
 *     ?Insert@?$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z @ 0x1401D053C (-Insert@-$CSortedVector@PEAXPEAX@NSInstrumentation@@QEAA_NAEBQEAX0@Z.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x1400FF660 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     memmove @ 0x14023FA40 (memmove.c)
 */

char __fastcall NSInstrumentation::CSortedVector<void *,void *>::ReAllocate(__int64 a1, unsigned __int64 a2)
{
  void *Pool2; // rax
  void *v5; // rdi
  void *v6; // rbx
  char result; // al
  unsigned __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 16LL;
  if ( (int)ULongLongMult(0x10uLL, a2, &v8) < 0 )
    return 0;
  Pool2 = (void *)ExAllocatePool2(258LL, v8, 1665758037LL);
  v5 = Pool2;
  if ( !Pool2 )
    return 0;
  v6 = *(void **)(a1 + 48);
  memmove(Pool2, v6, 16LL * *(_QWORD *)(a1 + 32));
  ExFreePoolWithTag(v6, 0);
  result = 1;
  *(_QWORD *)(a1 + 48) = v5;
  *(_QWORD *)(a1 + 32) = a2;
  return result;
}
