/*
 * XREFs of PsEnumProcessThreads @ 0x1408EEAB0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1408EF230 (EtwpProcessEnumCallback.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpThreadEnumCallback @ 0x1408EEB50 (EtwpThreadEnumCallback.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsEnumProcessThreads(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD), __int64 a3)
{
  unsigned int v3; // edi
  void *v5; // rdx
  __int64 i; // rsi
  void *NextProcessThread; // rbx
  int v9; // eax

  v3 = 0;
  v5 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextProcessThread = (void *)PsGetNextProcessThread(a1, v5);
    if ( !NextProcessThread )
      break;
    if ( a2 == EtwpThreadEnumCallback )
      v9 = EtwpThreadEnumCallback(i, NextProcessThread, a3);
    else
      v9 = guard_dispatch_icall_no_overrides(i, NextProcessThread);
    v3 = v9;
    if ( v9 < 0 )
    {
      ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
      return v3;
    }
    v5 = NextProcessThread;
  }
  return v3;
}
