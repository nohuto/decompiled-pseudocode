/*
 * XREFs of ?HandleRevocationCompletion@CSpatialAudioResourceManager@Sarm@@AEAAX_J@Z @ 0x180118D74
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_18871662051ef14e923fcf0c1dee16c7__void_::_Do_call @ 0x18011AB00 (std--_Func_impl_no_alloc__lambda_18871662051ef14e923fcf0c1dee16c7__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CA10 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180118720 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ @ 0x18011B60C (-CompleteRevocation@CStreamResource@Sarm@@QEAAXXZ.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x18011C77C (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 */

void __fastcall Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion(
        Sarm::CSpatialAudioResourceManager *this,
        __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v6; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRevocationCompletion", 546);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream(this, a2);
  if ( Stream )
    Sarm::CStreamResource::CompleteRevocation(Stream);
  else
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v6, 0x227u, a2);
  if ( v2 )
    LeaveCriticalSection(v2);
}
