/*
 * XREFs of RIMFreeAllQueuedCompleteFrames @ 0x1401EBBE8
 * Callers:
 *     RIMUnregisterForInput @ 0x14017BA20 (RIMUnregisterForInput.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

_QWORD *__fastcall RIMFreeAllQueuedCompleteFrames(__int64 a1)
{
  _QWORD **v1; // rbx
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  char *v4; // rsi
  _QWORD *v5; // rdi

  v1 = (_QWORD **)(a1 + 744);
  while ( 1 )
  {
    result = *v1;
    if ( *v1 == v1 )
      break;
    if ( (_QWORD **)result[1] != v1 || (v3 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
      __fastfail(3u);
    *v1 = v3;
    v4 = (char *)(result - 1);
    v3[1] = v1;
    v5 = (_QWORD *)result[4];
    if ( !v5[31] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1213);
    --v5[31];
    ObfDereferenceObject(v5);
    GreDeleteFastMutex(v4);
  }
  return result;
}
