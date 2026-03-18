/*
 * XREFs of ObReferenceObjectByPointer @ 0x140432520
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FCCC0 (HalpDmaAllocateChildAdapterV3.c)
 *     HalGetAdapterV3 @ 0x1407000B8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140700658 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140700A80 (HalpDmaAllocateChildAdapterV2.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD42C (EtwpRegisterPrivateSession.c)
 *     EtwpStopTrace @ 0x1408325A4 (EtwpStopTrace.c)
 *     EtwpRegisterUMProvider @ 0x14083C6F0 (EtwpRegisterUMProvider.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x14090BD40 (ObpParseSymbolicLinkEx.c)
 *     WmipQuerySetExecuteSI @ 0x1409CDA80 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409CDD78 (WmipQueryAllData.c)
 *     WmipRegisterDevice @ 0x1409D0548 (WmipRegisterDevice.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A13E40 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     NtImpersonateAnonymousToken @ 0x140A2F610 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x140340450 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rbx
  signed __int64 BugCheckParameter4; // rdi

  if ( ObjectType )
  {
    v4 = (volatile signed __int64 *)((char *)Object - 48);
    if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
      return -1073741788;
  }
  else
  {
    if ( AccessMode )
      return -1073741788;
    v4 = (volatile signed __int64 *)((char *)Object - 48);
  }
  ObpTraceObjectReferenceIfActive((int)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
