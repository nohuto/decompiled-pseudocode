/*
 * XREFs of ?ndisFindMiniportOnGlobalList@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@@Z @ 0x140170008
 * Callers:
 *     NdisIMInitializeDeviceInstanceEx @ 0x140099400 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z @ 0x140032700 (-ndisEqualUnicodeStringDispatchLevel@@YA_NPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14004B9E0 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 */

struct _NDIS_MINIPORT_BLOCK *__fastcall ndisFindMiniportOnGlobalList(PCUNICODE_STRING SourceString)
{
  struct _NDIS_MINIPORT_BLOCK *result; // rax
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  KIRQL v4; // al
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KIRQL v6; // si
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      104,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)SourceString);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  result = (struct _NDIS_MINIPORT_BLOCK *)ExAllocatePool2(
                                            66LL,
                                            (unsigned __int16)(DestinationString.Length + 2),
                                            1953711182LL);
  DestinationString.Buffer = (wchar_t *)&result->Header.Type;
  v3 = result;
  if ( result )
  {
    RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
    ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v5 = ndisMiniportList;
    v6 = v4;
    while ( v5 && !ndisEqualUnicodeStringDispatchLevel(&DestinationString, &v5->MiniportName) )
      v5 = v5->NextGlobalMiniport;
    KeReleaseSpinLock(&ndisMiniportListLock, v6);
    ndisDereferencePackage((PVOID *)&ndisPkgs);
    ExFreePoolWithTag(v3, 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4,
        13,
        105,
        (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
        (char)v5);
    return v5;
  }
  return result;
}
