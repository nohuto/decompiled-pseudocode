/*
 * XREFs of ObReferenceObjectByPointer @ 0x140424A50
 * Callers:
 *     HalpDmaAllocateChildAdapterV3 @ 0x1406FA900 (HalpDmaAllocateChildAdapterV3.c)
 *     HalGetAdapterV3 @ 0x1406FDCF8 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1406FE298 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1406FE6C0 (HalpDmaAllocateChildAdapterV2.c)
 *     EtwpRegisterPrivateSession @ 0x1407AD880 (EtwpRegisterPrivateSession.c)
 *     EtwpRegisterUMProvider @ 0x140838D50 (EtwpRegisterUMProvider.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     ObpParseSymbolicLinkEx @ 0x1408E3460 (ObpParseSymbolicLinkEx.c)
 *     WmipQuerySetExecuteSI @ 0x1409B2A54 (WmipQuerySetExecuteSI.c)
 *     WmipQueryAllData @ 0x1409B2D4C (WmipQueryAllData.c)
 *     EtwpStopTrace @ 0x1409D2184 (EtwpStopTrace.c)
 *     IopRetrieveTransactionParametersFromOpenPacket @ 0x140A0C5A0 (IopRetrieveTransactionParametersFromOpenPacket.c)
 *     NtImpersonateAnonymousToken @ 0x140A24050 (NtImpersonateAnonymousToken.c)
 *     WmipRegisterDevice @ 0x140A49D98 (WmipRegisterDevice.c)
 * Callees:
 *     ObpTraceObjectReferenceIfActive @ 0x14031F930 (ObpTraceObjectReferenceIfActive.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
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
