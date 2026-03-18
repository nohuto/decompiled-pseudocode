/*
 * XREFs of ?GetPreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140200934
 * Callers:
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1402008E0 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z @ 0x140205680 (-ReferencePreviousFrameByDeviceInt@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@PEBU2@@Z.c)
 * Callees:
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1400D8564 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

struct CPointerInputFrame *__fastcall CTouchProcessor::GetPreviousFrameByDeviceInt(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2)
{
  CTouchProcessor *v4; // rax
  CTouchProcessor *v5; // rcx
  char *v6; // rbx

  if ( !tagDomLock::IsLockedShared(this + 4) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8525);
  v4 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  v5 = (CTouchProcessor *)(this + 6);
  if ( v4 == (CTouchProcessor *)(this + 6) )
    return 0LL;
  while ( 1 )
  {
    v6 = (char *)v4 - 8;
    if ( *((_QWORD *)v4 + 7) == *((_QWORD *)a2 + 8) )
      break;
    v4 = *(CTouchProcessor **)v4;
    if ( v4 == v5 )
      return 0LL;
  }
  if ( *((_DWORD *)v6 + 13) > *((_DWORD *)v6 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8547);
  if ( *((_DWORD *)v6 + 13) == *((_DWORD *)v6 + 12) )
    return 0LL;
  if ( *((_QWORD *)v6 + 8) != *((_QWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 8555);
  return (struct CPointerInputFrame *)v6;
}
