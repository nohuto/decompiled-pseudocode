/*
 * XREFs of PsEnumProcessThreads @ 0x14094A540
 * Callers:
 *     EtwpProcessEnumCallback @ 0x14094ACC0 (EtwpProcessEnumCallback.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpThreadEnumCallback @ 0x14094A5E0 (EtwpThreadEnumCallback.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PsEnumProcessThreads(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD), __int64 a3)
{
  unsigned int v3; // edi
  void *v5; // rdx
  __int64 i; // rsi
  void *NextProcessThread; // rbx
  __int64 v9; // r9
  int v10; // eax

  v3 = 0;
  v5 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    NextProcessThread = (void *)PsGetNextProcessThread(a1, v5);
    if ( !NextProcessThread )
      break;
    if ( a2 == EtwpThreadEnumCallback )
      v10 = EtwpThreadEnumCallback(i, NextProcessThread, a3);
    else
      v10 = guard_dispatch_icall_no_overrides(i, NextProcessThread, a3, v9);
    v3 = v10;
    if ( v10 < 0 )
    {
      ObfDereferenceObjectWithTag(NextProcessThread, 0x6E457350u);
      return v3;
    }
    v5 = NextProcessThread;
  }
  return v3;
}
