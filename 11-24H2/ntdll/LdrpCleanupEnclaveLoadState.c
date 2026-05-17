/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800D8F88
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D87F0 (LdrLoadEnclaveModule.c)
 *     LdrDeleteEnclave @ 0x180132C60 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     LdrpFreeLoadContext @ 0x1800D90C0 (LdrpFreeLoadContext.c)
 *     LdrpEnclaveFreeModule @ 0x180132EB4 (LdrpEnclaveFreeModule.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2)
{
  _UNKNOWN **result; // rax
  _QWORD *v3; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  _QWORD *v7; // rbp
  unsigned __int64 v8; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = (_QWORD *)(a1 + 96);
  v5 = *(_QWORD **)(a1 + 96);
  while ( v5 != v3 )
  {
    v6 = v5[22];
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 88);
      if ( v8 )
      {
        RtlFreeHeap(LdrpHeap, 0, v8);
        *(_QWORD *)(v6 + 88) = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v6);
    }
    if ( a2 < 0 )
      result = (_UNKNOWN **)LdrpEnclaveFreeModule(v7);
  }
  return result;
}
