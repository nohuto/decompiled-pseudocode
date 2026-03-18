/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14001A1D4
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x140017030 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14001A080 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x140045AC0 (NtFlipObjectSetContent.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x1400465F0 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x140047940 (NtFlipObjectQueryNextMessageToProducer.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x140049AFC (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004CA70 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E050 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E220 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectOpen @ 0x140052AE0 (NtFlipObjectOpen.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053010 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1400547F0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectAddContent @ 0x140055F80 (NtFlipObjectAddContent.c)
 *     NtFlipObjectRemoveContent @ 0x14005A800 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C260 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x14009DE30 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x14009DFF0 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectPresentCancel @ 0x14009E0C0 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryLostEvent @ 0x14009E1B0 (NtFlipObjectQueryLostEvent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x14009E2E0 (NtFlipObjectRemovePoolBuffer.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009E4EC (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FlipManagerObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        __int64 a3,
        struct FlipManagerObject **a4)
{
  NTSTATUS v5; // eax
  struct FlipManagerObject *v6; // rdi
  unsigned int v7; // ebx
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v6 = (struct FlipManagerObject *)Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) == 4 )
    {
      *a4 = v6;
    }
    else
    {
      ObfDereferenceObject(v6);
      return (unsigned int)-1073741788;
    }
  }
  return v7;
}
