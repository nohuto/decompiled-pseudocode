/*
 * XREFs of ?OpenDwmHandle@CompositionInputObject@@QEBAJPEAPEAX@Z @ 0x14006F620
 * Callers:
 *     ?EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x14006EA1C (-EmitInputSink@CInteractionMarshaler@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     OpenDwmHandle @ 0x14006F814 (OpenDwmHandle.c)
 *     ?Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z @ 0x14006F9B4 (-Duplicate@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAX1_N@Z.c)
 */

__int64 __fastcall CompositionInputObject::OpenDwmHandle(CompositionInputObject *this, PHANDLE a2)
{
  void *v4; // rdx
  int v5; // ebx
  bool v6; // r9
  int v8; // [rsp+20h] [rbp-18h]

  v5 = OpenDwmHandle(this, ExCompositionObjectType, 3u, v8, a2);
  if ( v5 >= 0 )
    InputTraceLogging::InputSink::Duplicate(this, v4, *a2, v6);
  return (unsigned int)v5;
}
