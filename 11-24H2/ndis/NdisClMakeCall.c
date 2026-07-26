/*
 * XREFs of NdisClMakeCall @ 0x1400CFAB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x140006DD0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1400606E0 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x140073BD0 (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     NdisCmMakeCallComplete @ 0x1400CFF70 (NdisCmMakeCallComplete.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1400D05C0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 */

NDIS_STATUS __stdcall NdisClMakeCall(
        NDIS_HANDLE NdisVcHandle,
        PCO_CALL_PARAMETERS CallParameters,
        NDIS_HANDLE ProtocolPartyContext,
        PNDIS_HANDLE NdisPartyHandle)
{
  struct _NDIS_CO_AF_BLOCK *v4; // rdi
  NDIS_HANDLE *v6; // rsi
  int v10; // edx
  int v11; // r8d
  NDIS_STATUS result; // eax
  NDIS_HANDLE *Pool2; // rax
  bool v14; // cf
  void (__fastcall *ClDropPartyCompleteHandler)(int, void *); // rax
  KIRQL v16; // al
  __int64 (__fastcall **CallMgrChars)(_QWORD, PCO_CALL_PARAMETERS, NDIS_HANDLE *, NDIS_HANDLE *); // rax
  NDIS_HANDLE CallMgrPartyContext; // [rsp+50h] [rbp+8h] BYREF

  v4 = (struct _NDIS_CO_AF_BLOCK *)*((_QWORD *)NdisVcHandle + 8);
  v6 = 0LL;
  CallMgrPartyContext = 0LL;
  if ( !(unsigned __int8)ndisReferenceAf(v4) )
    return -1073741823;
  if ( !(unsigned __int8)ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle, v10, v11) )
  {
    ndisDereferenceAf((KSPIN_LOCK *)v4);
    return -1073741823;
  }
  if ( NdisPartyHandle )
  {
    *NdisPartyHandle = 0LL;
    Pool2 = (NDIS_HANDLE *)ExAllocatePool2(64LL, 40LL, 1868776526LL);
    v6 = Pool2;
    if ( !Pool2 )
    {
      ndisDereferenceAf((KSPIN_LOCK *)v4);
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
      return -1073741670;
    }
    v14 = v4->ClMajorNdisVersion < 6;
    *Pool2 = NdisVcHandle;
    Pool2[2] = ProtocolPartyContext;
    if ( v14 )
    {
      Pool2[3] = v4->ClientEntries.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientEntries.ClDropPartyCompleteHandler;
    }
    else
    {
      Pool2[3] = v4->ClientChars.ClIncomingDropPartyHandler;
      ClDropPartyCompleteHandler = v4->ClientChars.ClDropPartyCompleteHandler;
    }
    v6[4] = ClDropPartyCompleteHandler;
  }
  v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v16);
  if ( v4->CmMajorNdisVersion >= 6 )
    CallMgrChars = (__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, NDIS_HANDLE *, NDIS_HANDLE *))v4->CallMgrChars;
  else
    CallMgrChars = (__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS, NDIS_HANDLE *, NDIS_HANDLE *))v4->CallMgrEntries;
  result = CallMgrChars[7](*((_QWORD *)NdisVcHandle + 18), CallParameters, v6, &CallMgrPartyContext);
  if ( result != 259 )
  {
    NdisCmMakeCallComplete(result, NdisVcHandle, v6, CallMgrPartyContext, CallParameters);
    return 259;
  }
  return result;
}
