/*
 * XREFs of ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x14000AC94
 * Callers:
 *     NtFlipObjectConsumerEndProcessPresent @ 0x140007B30 (NtFlipObjectConsumerEndProcessPresent.c)
 *     NtFlipObjectReadNextMessageToProducer @ 0x14000AB40 (NtFlipObjectReadNextMessageToProducer.c)
 *     NtFlipObjectSetContent @ 0x1400460D0 (NtFlipObjectSetContent.c)
 *     NtFlipObjectDisconnectEndpoint @ 0x140046C20 (NtFlipObjectDisconnectEndpoint.c)
 *     NtFlipObjectQueryNextMessageToProducer @ 0x1400481C0 (NtFlipObjectQueryNextMessageToProducer.c)
 *     ?FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z @ 0x14004A37C (-FlipManagerCreateConsumerTokenOperation@@YAJPEAX_KPEAUFlipManagerTokenInitInfo@@@Z.c)
 *     NtFlipObjectConsumerAcquirePresent @ 0x14004D020 (NtFlipObjectConsumerAcquirePresent.c)
 *     NtFlipObjectConsumerBeginProcessPresent @ 0x14004E750 (NtFlipObjectConsumerBeginProcessPresent.c)
 *     NtFlipObjectConsumerPostMessage @ 0x14004E920 (NtFlipObjectConsumerPostMessage.c)
 *     NtFlipObjectOpen @ 0x140052E30 (NtFlipObjectOpen.c)
 *     NtFlipObjectAddPoolBuffer @ 0x140053360 (NtFlipObjectAddPoolBuffer.c)
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x140054BA0 (NtFlipObjectQueryBufferAvailableEvent.c)
 *     NtFlipObjectAddContent @ 0x1400567D0 (NtFlipObjectAddContent.c)
 *     NtFlipObjectRemoveContent @ 0x14005AE00 (NtFlipObjectRemoveContent.c)
 *     NtFlipObjectConsumerQueryBufferInfo @ 0x14005C800 (NtFlipObjectConsumerQueryBufferInfo.c)
 *     NtFlipObjectConsumerAdjustUsageReference @ 0x14009BAD0 (NtFlipObjectConsumerAdjustUsageReference.c)
 *     NtFlipObjectEnablePresentStatisticsType @ 0x14009BC90 (NtFlipObjectEnablePresentStatisticsType.c)
 *     NtFlipObjectPresentCancel @ 0x14009BD60 (NtFlipObjectPresentCancel.c)
 *     NtFlipObjectQueryLostEvent @ 0x14009BE50 (NtFlipObjectQueryLostEvent.c)
 *     NtFlipObjectRemovePoolBuffer @ 0x14009BF80 (NtFlipObjectRemovePoolBuffer.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x14009C18C (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAXU_LUID@@_N_KIPEAUFlipPropertyItem@@PEAUFlipManag.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
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
