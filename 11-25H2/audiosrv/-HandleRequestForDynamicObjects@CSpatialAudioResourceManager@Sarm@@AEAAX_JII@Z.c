/*
 * XREFs of ?HandleRequestForDynamicObjects@CSpatialAudioResourceManager@Sarm@@AEAAX_JII@Z @ 0x180118C60
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Do_call @ 0x18011ABF0 (std--_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_--_Do_call.c)
 * Callees:
 *     ?SarmTraceLoggingTracer@@YAXPEBDI@Z @ 0x18005CA10 (-SarmTraceLoggingTracer@@YAXPEBDI@Z.c)
 *     ?ScheduleWorkItem@CWorkFifo@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180082958 (-ScheduleWorkItem@CWorkFifo@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     ?DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z @ 0x180118560 (-DelayWorkUntil@CWorkFifo@@QEAAJ_J@Z.c)
 *     ?FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z @ 0x180118720 (-FindStream@CSpatialAudioResourceManager@Sarm@@AEAAPEAVCStreamResource@2@_J@Z.c)
 *     ?ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z @ 0x18011BD48 (-ProcessDynamicObjectCountChange@CStreamResource@Sarm@@QEAAJIIAEA_J@Z.c)
 *     ?LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z @ 0x18011C77C (-LogStreamIdentifierExpired@CSpatialAudioResourceManagerTraceLogger@@QEAAXI_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects(
        PTP_TIMER *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  Sarm::CStreamResource *Stream; // rax
  CSpatialAudioResourceManagerTraceLogger *v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-70h]
  __int64 (__fastcall **v12)(); // [rsp+38h] [rbp-60h] BYREF
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall ***v14)(); // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+A0h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 8));
  SarmTraceLoggingTracer("Sarm::CSpatialAudioResourceManager::HandleRequestForDynamicObjects", 514);
  Stream = Sarm::CSpatialAudioResourceManager::FindStream((Sarm::CSpatialAudioResourceManager *)this, a2);
  if ( Stream )
  {
    v15 = 0LL;
    if ( (int)Sarm::CStreamResource::ProcessDynamicObjectCountChange(Stream, a3, a4, &v15) >= 0 && v15 > 0 )
    {
      CWorkFifo::DelayWorkUntil(this + 38, v15);
      *(_QWORD *)&v11 = this;
      *((_QWORD *)&v11 + 1) = a2;
      v12 = off_180174058;
      v13 = v11;
      v14 = &v12;
      CWorkFifo::ScheduleWorkItem(this + 38, (__int64)&v12);
    }
  }
  else
  {
    CSpatialAudioResourceManagerTraceLogger::LogStreamIdentifierExpired(v10, 0x207u, a2);
  }
  if ( v8 )
    LeaveCriticalSection(v8);
}
