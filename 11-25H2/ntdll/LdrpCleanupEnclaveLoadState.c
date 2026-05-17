/*
 * XREFs of LdrpCleanupEnclaveLoadState @ 0x1800D8F28
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8840 (LdrLoadEnclaveModule.c)
 *     LdrDeleteEnclave @ 0x180134740 (LdrDeleteEnclave.c)
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpFreeLoadContext @ 0x1800D9060 (LdrpFreeLoadContext.c)
 *     LdrpEnclaveFreeModule @ 0x180134994 (LdrpEnclaveFreeModule.c)
 */

_UNKNOWN **__fastcall LdrpCleanupEnclaveLoadState(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  _QWORD *v5; // rsi
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rbp
  __int64 v10; // r8
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = (_QWORD *)(a1 + 96);
  v7 = *(_QWORD **)(a1 + 96);
  while ( v7 != v5 )
  {
    v8 = v7[22];
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( v8 )
    {
      v10 = *(_QWORD *)(v8 + 88);
      if ( v10 )
      {
        RtlFreeHeap(LdrpHeap, 0, v10, a4);
        *(_QWORD *)(v8 + 88) = 0LL;
      }
      result = (_UNKNOWN **)LdrpFreeLoadContext(v8);
    }
    if ( a2 < 0 )
      result = (_UNKNOWN **)LdrpEnclaveFreeModule(v9);
  }
  return result;
}
